; My calling convention, because I can't be bothered to find out...
; Registers R16 onwards are temporary and not saved between function calls
; Registers R1..R4 hold the arguments
; Register R0 holds the return value

// Max program size 0x2000 (ARC /SPI flash interface cache is 8192 bytes???)

    .text
_header:
// i210 Firmware Header
    .org    0x0
    .short  0x0006
    .short  0x0000
    .short  0x00a1
    .short  0x0000
    .short  0x0000
    .short  0x0001
    .short  0x0000
    .short  0x0000
    .short  0x8086        //fw_vendor_id;
    .short  0x0000 
    .long   0x20181101    // fw_date_code
    .short  0xf400        // unknown
    .short  0x0000
    .short  0x0040
    .short  0x0000
    .short  0x0040
    .short  0x0000
    .short  0x0001
    .short  0x0000
    .short  0x0004
    .short  0x0000
    .short  0x0000
    .short  0xffff
    .int    (_entry - _header) / 2 // program offset in units of WORDs
    .int    0xfffff // prog_size_w
    .short  0x0000
    .short  0x0000
    .short  0x0000
    .short  0x0000

    // pad out header
    .fill   64,1,0x00

    .org    0x80 // always at 0x80
    // crypto stuff, ignore
    .fill   256,1,0xff
    .fill   4,1,0xff
    .fill   256,1,0xff

    .short  0x1531 // I210 Blank Flash Device ID
    .short  0x0000 // Max Module Area (upper word)
    .short  0x0000 // Max Module Area (lower word)
    .short  0x0000 // Current Module Area (upper word)
    .short  0x0000 // Current Module Area (lower word)
    .short  0x0000 // Module Format Version + CRC8
    .short  0x0000 // Firmware Code Revision
    .short  0x0000 // Reserved Spare Word
    .short  0x0000 // Parent Module Length (upper word)
    .short  0x0000 // Parent Module Length (lower word)

// FW offset 0x5aa jumps to the main code
// 4000a8 calls this!!!

.align 4
_entry:
    bl.d   _init
    nop
    
_init:
    mov     r0,0x80000000
    sr	    r0,[0x01]
#if 0
1:
    mov r18, 0xf00000
    mov r10, (1<<0)|(2<<8)|(1<<22)|(1<<18)
    mov r11, (1<<0)|(2<<8)|(1<<22)|(0<<18)

.rept 10
    st  r10, [r18, 0]
    st  r11, [r18, 0]
.endr
    b 1b
#endif

clear_cpu_regs:
    flag    0
    mov     fp,0
    mov     r0,0
    mov     r1,0
    mov     r2,0
    mov     r3,0
    mov     r4,0
    mov     r5,0
    mov     r6,0
    mov     r7,0
    mov     r8,0
    mov     r9,0
    mov     r10,0
    mov     r11,0
    mov     r12,0
    mov     r13,0
    mov     r14,0
    mov     r15,0
    mov     r16,0
    mov     r17,0
    mov     r18,0
    mov     r19,0
    mov     r20,0
    mov     r21,0
    mov     r22,0
    mov     r23,0
    mov     r24,0
    mov     r25,0
    mov     gp,0
    mov     fp,0
    mov     sp,0
    mov     ilink1,0
    mov     ilink2,0
    mov     blink,0

setup_stack:
    mov	    sp,__stack

wipe_ram:
    mov	    r8,0x10000
    mov     r9,__stack
    mov	    r0,0xff00ff // specify constant to wipe with xff00ff
1:  st      r0,[r8]
    add     r8,r8,4
    sub.f   0,r8,r9
    blt     1b

copy_data_to_ram:
    mov     r8,flash_sdata
    mov     r9,ram_sdata
    mov	    r10,ram_edata
1:  ld      r0,[r8]
    st      r0,[r9]
    add     r8,r8,4
    add     r9,r9,4
    sub.f   0,r9,r10
    blt     1b

clear_bss:
    mov     r0,_bss_start
    mov     r1,end
1:  st      0,[r0]
    add     r0,r0,4
    sub.f   0,r0,r1
    blt     1b

jump_to_main:
    bl	    main
1:  j	    1b
