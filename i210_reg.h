/*
 * Intel i210 Hardware Registers
 *
 * Copyright (c) 2018 gpuhw
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* FIXME BIG ENDIAN not supported */

#ifndef I210_REG_H
#define I210_REG_H

// TODO RegAccess macros need to be usable from Struct initialisation!!!!!!

//#include "../util/types.h"

// DUMP The DMA Tx Desc uCode when running official MGMT firmware!!!

// TODO: Add these registers (some exist already)
// TODO: Must be a 'debug mode' enable to access all the regs. Others hidden.
// MAC Registers
// Offset   Value     Description
// 0x00100  00400000  Rx Control
// 0x02008  00000000  Early Rx Thresh
// 0x02160  00000000  Flow Ctl Rx Thres Lo
// 0x02168  00000000  Flow Ctl Rx Thres Hi
// 0x02170  00000000  Packet Split Rx Ctrl
// 0x02458  00100000  PB Rx Arb Threshold
// 0x02460  00000000  Flow CTL Ref. Timer
// 0x02500  00000000  Packet Split Rx CTL
// 0x025CC  00000000  DMA Rx Desc uC MB
// 0x025D0  00000000  DMA Rx Desc uC Ad
// 0x025D4  00000000  DMA Rx Desc uC DW
// 0x025D8  00000000  DMA Rx Desc uC DR
// 0x025DC  00000000  DMA Rx Desc uC Ctl
// 0x02C00  00000000  Rx Small Rx Pkt Det
// 0x02C08  00000000  Rx Ack Int Delay
// 0x02C10  00000000  CPU Vector
// 0x05000  00000700  Rx Checksum Control
// 0x05008  00000000  Rx Filter Control
// 0x05480  0007FFFE  Pkt Split Rx Type
// 0x05818  00000000  Multi Rx Queues Cmd
// 0x05864  00000000  RSS Interrupt Mask
// 0x05868  00000000  RSS Interrupt Req

// MAC Registers
// Offset   Value     Description
// 0x00400  A40400F8  Tx Control
// 0x00410  00601008  Tx IPG
// 0x00448  00002000  Tx Burst Timer
// 0x00458  00000000  Adaptive IFS Throttle
// 0x0357C  00000000  DMA Tx Desc uC MB
// 0x03580  3FE82400  DMA Tx Desc uC Ad
// 0x03584  000604CE  DMA Tx Desc uC DW
// 0x03588  00000000  DMA Tx Desc uC DR
// 0x0358C  00000000  DMA Tx Desc uC Ctl
// 0x03590  00000080  DMA Tx Control
// 0x035CC  00000000  DMA Tx DPT2 uC MB
// 0x035D0  00000000  DMA Tx DPT2 uC Ad
// 0x035D4  00000000  DMA Tx DPT2 uC DW
// 0x035D8  00000000  DMA Tx DPT2 uC DR
// 0x035DC  00000000  DMA Tx DPT2 uC Ctl

// MAC Registers
// Offset   Value     Description
// 0x05800  00000000  Wake Up Control
// 0x05808  00000000  Wake Up Filter Ctrl
// 0x05810  00000000  Wake Up Status
// 0x05900  7C6848BD  Wake Up Packet Length
// 0x05820  00000000  Mng Control Reg
// 0x05824  00000000  Mng Filters Valid
// 0x05838  00000000  Ip Address Valid
// 0x05890  00000000  Filter Valid[0]
// 0x05894  00000000  Filter Valid[1]
// 0x05898  00000000  Filter Valid[2]
// 0x0589C  00000000  Filter Valid[3]
// 0x058A0  00000000  Filter Valid[4]
// 0x058A4  00000000  Filter Valid[5]
// 0x058A8  00000000  Filter Valid[6]
// 0x058AC  00000000  Filter Valid[7]
// 0x05910  00000000  MAC Addr Low[0]
// 0x05914  00000000  MAC Addr High[0]
// 0x05918  00000000  MAC Addr Low[1]
// 0x0591C  00000000  MAC Addr High[1]
// 0x05920  00000000  MAC Addr Low[2]
// 0x05924  00000000  MAC Addr High[2]
// 0x05928  00000000  MAC Addr Low[3]
// 0x0592C  00000000  MAC Addr High[3]

// MAC Registers
// Offset   Value     Description
// 0x08F00  00000000  Host Interface Control
// 0x08F04  00000000  Host SMB-CSR 0
// 0x08F08  00000000  Host SMB-CSR 1
// 0x08F0C  8000A013  FW Status Register
// 0x08F10  00000000  SW Status Register
// 0x08FE8  00000000  Host FW Debug
// 0x08FEC  00000000  Host JTAG Interface
// 0x08FFC  00000000  Host ARC Dbg Address
// 0x08FF8  00000000  Host ARC Dbg Data Write
// 0x08FF4  00000000  Host ARC Dbg Data Read
// 0x08FF0  00000000  Host ARC Dbg Data Ctrl

// MAC Registers
// Offset   Value     Description
// 0x05B00  00041804  PCI-E Control Register
// 0x05B10  00000000  PCI-E stats control 1
// 0x05B14  00000000  PCI-E stats control 2
// 0x05B18  00000000  PCI-E stats control 3
// 0x05B1C  00000000  PCI-E stats control 4
// 0x05B20  00000000  PCI-E counter control 1
// 0x05B24  00000000  PCI-E counter control 2
// 0x05B28  00000000  PCI-E counter control 3
// 0x05B2C  00000000  PCI-E counter control 4
// 0x05B58  00000000  PCI-E Jtag Control



#define I210_REG_DECL(name) union{struct i210_reg_##name f;U32 v;}

#define I210_PCIE_JTAG_CNTL		0x5b58 /* undocumented, don't know real name */

/* General */
#define I210_CTRL               0x0000
#define I210_STATUS             0x0008
#define I210_CTRL_EXT           0x0018
#define I210_MDIC               0x0020
#define I210_CONNSW             0x0034
#define I210_MDICNFG            0x0e04

struct i210_reg_CTRL {
  U32 fd : 1;
  U32 _rsvd_0 : 1;
  U32 gio_master_disable : 1;
  U32 _rsvd_1 : 3;
  U32 slu : 1;          // Set Link Up
  U32 ilos : 1;
  U32 speed : 2;
  U32 _rsvd_2 : 1;
  U32 frcspd : 1;
  U32 frcdplx : 1;
  U32 _rsvd_3 : 3;
  U32 sdp0_gpien : 1;
  U32 sdp1_gpien : 1;
  U32 sdp0_data : 1;
  U32 sdp1_data : 1;
  U32 advd3wuc : 1;
  U32 sdp0_wde : 1;
  U32 sdp0_iodir : 1;
  U32 sdp1_iodir : 1;
  U32 _rsvd_4 : 2;
  U32 rst : 1;
  U32 rfce : 1;
  U32 tfce : 1;
  U32 dev_rst : 1;
  U32 vme : 1;
  U32 phy_rst : 1;
};

struct i210_reg_STATUS {
  U32 fd : 1;
  U32 lu : 1;
  U32 _rsvd_0 : 2;
  U32 txoff : 1;
  U32 _rsvd_1 : 1;
  U32 speed : 2;
  U32 asdv : 2;
  U32 phyra : 1;
  U32 _rsvd_2 : 8;
  U32 gio_master_enable_status : 1;
  U32 dev_rst_set : 1;
  U32 pf_rst_done : 1;
  U32 _rsvd_3 : 9;
  U32 mac_clock_gating_enable : 1;
};

struct i210_reg_CTRL_EXT {
  U32 _rsvd_0 : 1;
  U32 i2c_over_sdb_enabled : 1;
  U32 sdp2_gpien : 1;
  U32 sdp3_gpien : 1;
  U32 _rsvd_1 : 2;
  U32 sdp2_data : 1;
  U32 sdp3_data : 1;
  U32 _rsvd_2 : 2;
  U32 sdp2_iodir : 1;
  U32 sdp3_iodir : 1;
  U32 asdchk : 1;
  U32 ee_rst : 1;
  U32 _rsvd_3 : 1;
  U32 spd_byps : 1;
  U32 ns_dis : 1;
  U32 ro_dis : 1;
  U32 serdes_low_power_enable : 1;
  U32 dynamic_mac_clock_gating : 1;
  U32 phy_power_down_enable : 1;
  U32 _rsvd_4 : 1;
  U32 link_mode : 2;
  U32 _rsvd_5 : 1;
  U32 i2c_enabled : 1;
  U32 ext_vlan : 1;
  U32 _rsvd_6 : 1;
  U32 drv_load : 1;
  U32 _rsvd_7 : 3;
};

struct i210_reg_MDIC {
  U32 data : 16;        // Data bits to be sent to/from PHY
  U32 regadd : 5;       // PHY Register Address: Reg. 0,1,2,...31
  U32 _rsvd_0 : 5;
  U32 op : 2;           // Opcode: 1=MDI write, 2=MDI read
  U32 r : 1;            // Ready Bit
  U32 mdi_ie : 1;       // Interrupt Enable
  U32 mdi_err : 1;      // Error
  U32 _rsvd_1 : 1;
};

struct i210_reg_CONNSW {
  U32 _rsvd_0 : 2;
  U32 enrgsrc : 1;      // SerDes Energy Detect Source 0=internal 1=from ext pin
  U32 _rsvd_1 : 6;
  U32 serdesd : 1;      // SerDes Signal Detect Indication
  U32 physd : 1;        // PHY Signal Detect Indication
  U32 phy_pdn : 1;      // Internal GbE PHY power down state
  U32 _rsvd_2 : 20;
};

struct i210_reg_MDICNFG {
  U32 _rsvd_0 : 21;
  U32 phyadd : 5;       // External PHY Address
  U32 _rsvd_1 : 5;
  U32 destination : 1;  // 0=internal PHY 1=external PHY
};

/* Section 8.4 Flash Registers */
#define I210_EEC                0x12010 // EEPROM-Mode Control Register
#define I210_EERD               0x12014 // EEPROM-Mode Read Register
#define I210_EEWR               0x12018 // EEPROM-Mode Write Register
#define I210_FLA                0x1201C // Flash Access Register
#define I210_EEMNGCTL           0x12030 // Manageability EEPROM-Mode Control Register
#define I210_EEARBC             0x12024 // EEPROM Block Auto Read Bus Control
#define I210_FLASHMODE          0x12000 // Flash Mode Register
#define I210_FLASHOP            0x12054 // Flash OP-Code Register
#define I210_FLASHGOP           0x12058 // Flash General Purpose OP-Code Register
#define I210_FLASHTIME          0x12004 // Flash Access Timing Register
#define I210_FLBLKBASE          0x12100 // Flash Block Base Address
#define I210_FLBLKEND           0x12104 // Flash Block End Address
#define I210_FLFWUPDATE         0x12108 // Flash Firmware Code Update
#define I210_EEBLKBASE          0x1210C // EEPROM Block Base Address
#define I210_EEBLKEND           0x12110 // EEPROM Block End Address
#define I210_FLSWCTL            0x12048 // Software Flash Burst Control Register
#define I210_FLSWDATA           0x1204C // Software Flash Burst Data Register
#define I210_FLSWCNT            0x12050 // Software Flash Burst Access Counter
#define I210_INVM_DATA0         0x1221C // iNVM Data Register
#define I210_INVM_LOCK0         0x1229C // iNVM Lock Register
#define I210_INVM_PROTECT       0x12324 // iNVM Protect Register

struct i210_reg_EERD {
  U32 cmdv : 1;         // Command Valid Bit
  U32 done : 1;         // Read Done
  U32 addr : 11;        // Read Address
  U32 _rsvd_0 : 3;
  U32 data : 16;        // Read Data
};

struct i210_reg_FLASHMODE {
  U32 fast_read_mode : 1;// Read command op-code taken from FLASHOP.FASTREAD
  U32 num_of_dummy : 2; // Number of dummy bytes that should follow the address
  U32 flash_speed : 2;  // Flash clock frequency: 0=15.125MHz 1=31.25MHz 2=62.5MHz
  U32 _rsvd_0 : 1;
  U32 sst_mode : 1;     // Flash device operates in a 1-byte program for each access
  U32 _rsvd_1 : 25;
};

struct i210_reg_FLASHOP {
  U32 flasheraseop : 8;
  U32 suspendop : 8;
  U32 resumeop : 8;
  U32 fastreadop : 8;
};

struct i210_reg_FLSWCTL {
  U32 addr : 24;        // Address in Bytes
  U32 cmd : 4;          // Command (see I210_FLCMD_xxxx for examples)
  U32 cmdv : 1;         // Last Command was Valid
  U32 flbusy : 1;       // Flash Busy
  U32 done : 1;         // Single Flash Transaction Done
  U32 gdone : 1;        // Global Flash Transaction Done
};

// FIXME naming order inconsistency ERASE vs STATUS vs WRITE_ENABLE
#define I210_FLCMD_READ              0x0
#define I210_FLCMD_WRITE             0x1
#define I210_FLCMD_ERASE_SECTOR      0x2 // 4KB sector erase
#define I210_FLCMD_ERASE_DEVICE      0x3 // Device erase (when no security)
#define I210_FLCMD_STATUS_READ       0x4 // Read Status register of Flash device
#define I210_FLCMD_STATUS_WRITE      0x5 // Write Status register of Flash device
#define I210_FLCMD_WRITE_ENABLE      0x6 // Write Enable
#define I210_FLCMD_JEDEC_ID_READ     0x8 // Read JEDEC ID
#define I210_FLCMD_STATUS_READ_PROG  0xb // Programmable op-code Read Status register
#define I210_FLCMD_STATUS_WRITE_PROG 0xc // Programmable op-code Write Status register

/* Section 8.7 Semaphore Registers */
#define I210_FWSM               0x5b54
#define I210_SW_FW_SYNC         0x5b5c

struct i210_reg_FWSM {
  U32 eep_fw_semaphore : 1; // Software/Firmware Semaphore
  U32 fw_mode : 3;      // Firmware Mode.
  U32 _rsvd_0 : 2;
  U32 eep_reload_ind : 1;// Flash Reloaded Indication.
  U32 _rsvd_1 : 8;
  U32 fw_val_bit : 1;   // Firmware Valid Bit.
  U32 reset_cnt : 3;    // Reset Counter
  U32 ext_err_ind : 6;
  U32 pcie_config_err_ind : 1;
  U32 phy_serdes0_config_err_ind : 1;
  U32 _rsvd_2 : 4;
  U32 factory_mac_addr_rst : 1;
};

/* Section 8.8 Interrupt Registers */
#define I210_PICAUSE            0x5b88 // PCIe Interrupt Cause
#define I210_PIENA              0x5b8c // PCIe Interrupt Enable
#define I210_EICR               0x1580 // Extended Interrupt Cause
#define I210_EICS               0x1520 // Extended Interrupt Cause Set
#define I210_EIMS               0x1524 // Extended Interrupt Mask Set/Read
#define I210_EIMC               0x1528 // Extended Interrupt Mask Clear
#define I210_EIAC               0x152c // Extended Interrupt Auto Clear
#define I210_EIAM               0x1530 // Extended Interrupt Auto Mask Enable
#define I210_ICR                0x1500 // Interrupt Cause Read
#define I210_ICS                0x1504 // Interrupt Cause Set
#define I210_IMS                0x1508 // Interrupt Mask Set/Read
#define I210_IMC                0x150c // Interrupt Mask Clear
#define I210_IAM                0x1510 // Interrupt Acknowledge Auto Mask
#define I210_EITR(n)            (0x1680 + ((n) * 0x04)) // Interrupt Throttle n=0..4
#define I210_IVAR0              0x1700 // Interrupt Vector Allocation #0
#define I210_IVAR1              0x1704 // Interrupt Vector Allocation #1
#define I210_IVAR_MISC          0x1740 // Interrupt Vector Allocation MISC
#define I210_GPI                0x1514 // General Purpose Interrupt Enable

struct i210_reg_ICR {
  U32 txdw : 1;         // Transmit Descriptor Written Back
  U32 _rsvd_0 : 1;
  U32 lsc : 1;          // Link Status Change
  U32 _rsvd_1 : 1;
  U32 rxdmt0 : 1;       // Receive Descriptor Minimum Threshold Reached
  U32 _rsvd_2 : 1;
  U32 rx_miss : 1;      // Rx missed packed due to buffer overrun
  U32 rxdw : 1;         // Receive Descriptor Write Back
  U32 _rsvd_3 : 2;
  U32 gphy : 1;         // Internal 1000/100/10BASE-T PHY interrupt
  U32 gpi_sdp0 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp1 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp2 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp3 : 1;     // General Purpose Interrupt on SDP0
  U32 _rsvd_4 : 1;
  U32 _rsvd_5 : 2;
  U32 mng : 1;          // Managebility Event Detected
  U32 time_sync : 1;    // Time_Sync interrupt
  U32 _rsvd_6 : 2;
  U32 fer : 1;          // Fatal Error
  U32 _rsvd_7 : 1;
  U32 pci_exception : 1;// PCI timeout exception
  U32 sce : 1;          // DMA Coalescing Clock Control Event
  U32 software_wd : 1;  // Software Watchdog
  U32 _rsvd_8 : 1;
  U32 _rsvd_9 : 1;
  U32 tcp_timer : 1;    // TCP Timer Interrupt
  U32 drsta : 1;        // Device Reset Asserted
  U32 inta : 1;         // Interrupt Asserted
};

struct i210_reg_IMS {
  U32 txdw : 1;         // Transmit Descriptor Written Back
  U32 _rsvd_0 : 1;
  U32 lsc : 1;          // Link Status Change
  U32 _rsvd_1 : 1;
  U32 rxdmt0 : 1;       // Receive Descriptor Minimum Threshold Reached
  U32 _rsvd_2 : 1;
  U32 rx_miss : 1;      // Rx missed packed due to buffer overrun
  U32 rxdw : 1;         // Receive Descriptor Write Back
  U32 _rsvd_3 : 2;
  U32 gphy : 1;         // Internal 1000/100/10BASE-T PHY interrupt
  U32 gpi_sdp0 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp1 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp2 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp3 : 1;     // General Purpose Interrupt on SDP0
  U32 _rsvd_4 : 1;
  U32 _rsvd_5 : 2;
  U32 mng : 1;          // Managebility Event Detected
  U32 time_sync : 1;    // Time_Sync interrupt
  U32 _rsvd_6 : 2;
  U32 fer : 1;          // Fatal Error
  U32 _rsvd_7 : 1;
  U32 pci_exception : 1;// PCI timeout exception
  U32 sce : 1;          // DMA Coalescing Clock Control Event
  U32 software_wd : 1;  // Software Watchdog
  U32 _rsvd_8 : 1;
  U32 _rsvd_9 : 1;
  U32 tcp_timer : 1;    // TCP Timer Interrupt
  U32 drsta : 1;        // Device Reset Asserted
  U32 _rsvd_10 : 1;
};

struct i210_reg_IMC {
  U32 txdw : 1;         // Transmit Descriptor Written Back
  U32 _rsvd_0 : 1;
  U32 lsc : 1;          // Link Status Change
  U32 _rsvd_1 : 1;
  U32 rxdmt0 : 1;       // Receive Descriptor Minimum Threshold Reached
  U32 _rsvd_2 : 1;
  U32 rx_miss : 1;      // Rx missed packed due to buffer overrun
  U32 rxdw : 1;         // Receive Descriptor Write Back
  U32 _rsvd_3 : 2;
  U32 gphy : 1;         // Internal 1000/100/10BASE-T PHY interrupt
  U32 gpi_sdp0 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp1 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp2 : 1;     // General Purpose Interrupt on SDP0
  U32 gpi_sdp3 : 1;     // General Purpose Interrupt on SDP0
  U32 _rsvd_4 : 1;
  U32 _rsvd_5 : 2;
  U32 mng : 1;          // Managebility Event Detected
  U32 time_sync : 1;    // Time_Sync interrupt
  U32 _rsvd_6 : 2;
  U32 fer : 1;          // Fatal Error
  U32 _rsvd_7 : 1;
  U32 pci_exception : 1;// PCI timeout exception
  U32 sce : 1;          // DMA Coalescing Clock Control Event
  U32 software_wd : 1;  // Software Watchdog
  U32 _rsvd_8 : 1;
  U32 _rsvd_9 : 1;
  U32 tcp_timer : 1;    // TCP Timer Interrupt
  U32 drsta : 1;        // Device Reset Asserted
  U32 _rsvd_10 : 1;
};

struct i210_reg_EITR {
  U32 _rsvd_0 : 2;
  U32 interval : 13;    // Minimum Inter-Interrupt Interval (1us increments)
  U32 lli_en : 1;       // LLI moderation enable
  U32 ll_counter : 5;   // Reflects the current credits for that EITR for LL interrupts.
  U32 moderation_counter : 10; // Down counter, 10 MSBs of 12-bit counter
  U32 cnt_ingr : 1;     // When set, HW does not override the counters fields
};


/* Section 8.10 Receive Registers: q=0..3 (4 queues) */
#define I210_RCTL               0x0100 // Receive Control
#define I210_PSRTYPE(q)         (0x5480 + (0x04 * (q))) // Packet Split Receive Type
#define I210_RDBAL(q)           (0xc000 + (0x40 * (q))) // Receive Descriptor Base Address Low
#define I210_RDBAH(q)           (0xc004 + (0x40 * (q))) // Receive Descriptor Base Address High
#define I210_RDLEN(q)           (0xc008 + (0x40 * (q))) // Receive Descriptor Ring Length High
#define I210_SRCCTL(q)          (0xc00c + (0x40 * (q))) // Split and Replication Receive Control
#define I210_RDH(q)             (0xc010 + (0x40 * (q))) // Receive Descriptor Head
#define I210_RDT(q)             (0xc018 + (0x40 * (q))) // Receive Descriptor Tail
#define I210_RXDCTL(q)          (0xc028 + (0x40 * (q))) // Receive Descriptor Control
#define I210_RQDPC(q)           (0xc030 + (0x40 * (q))) // Receive Queue Drop Packet Count
#define I210_TQDPC(q)           (0xe030 + (0x40 * (q))) // Transmit Queue Drop Packet Count
#define I210_RXCSUM             0x5000 // Receive Checksum Control
#define I210_RLPML              0x5004 // Receive Long Packet Maximum Length
#define I210_RFCTL              0x5008 // Receive Filter Control
#define I210_MTA(n)             (0x5200 + (0x04 * (n))) // Multicast Table Array n=0..127
#define I210_RAL(n)             (0x5400 + (0x08 * (n))) // Receive Address Low n=0..15
#define I210_RAH(n)             (0x5404 + (0x08 * (n))) // Receive Address High n=0..15
#define I210_VLAPQF             0x55b0 // VLAN Priority Queue Filter
#define I210_VFTA(n)            (0x5600 + (0x04 * (n))) // VLAN Filter Table Array n=0..127
#define I210_MRQC               0x5818 // Multiple Receive Queues Command
#define I210_RSSRK(n)           (0x5c80 + (0x04 * (n))) // RSS Random Key FIXME n=0..9
#define I210_RETA(n)            (0x5c00 + (0x04 * (n))) // Redirection Table n=0..31
#define I210_DVMOLR(n)          (0xc038 + (0x40 * (n))) // DMA VM Offload n=0..3
#define I210_IMIR(n)            (0x5a80 + (0x04 * (n))) // Immediate Interrupt RX n=0..7
#define I210_IMIREXT(n)         (0x5aa0 + (0x04 * (n))) // Immediate Interrupt Rx Ext. n=0..7
#define I210_TTQF(n)            (0x59e0 + (0x04 * (n))) // 2-tupules Queue Filter n=0..7
#define I210_IMIRVP             0x5ac0 // Immediate Interrupt Rx VLAN Priority n=0..7
#define I210_SYNQF              0x55fc // SYN Packet Queue Filter
#define I210_ETQF(n)            (0x5cb0 + (0x04 * (n))) // EType Queue Filter

struct i210_reg_RCTL {
  U32 _rsvd_0 : 1;
  U32 rxen : 1;         // Receiver Enable
  U32 sbp : 1;          // Store Bad Packets
  U32 upe : 1;          // Unicast Promiscuous Enabled
  U32 mpe : 1;          // Multicast Promiscuous Enabled
  U32 lpe : 1;          // Long Packet Reception Enable
  U32 lbm : 2;          // Loopback Mode
  U32 _rsvd_1 : 4;
  U32 mo : 2;           // Multicast Offset
  U32 _rsvd_2 : 1;
  U32 bam : 1;          // Broadcast Accept Mode
  U32 bsize : 2;        // Receive Buffer Size
  U32 vfe : 1;          // VLAN Filter Enable
  U32 cfien : 1;        // Canonical Form Indicator Enable
  U32 cfi : 1;          // Canonical Form Indicator Bit Value
  U32 psp : 1;          // Pad Small Receive Packets
  U32 dpf : 1;          // Discard Pause Frames
  U32 pmcf : 1;         // Pass MAC Control Frames
  U32 _rsvd_3 : 2;
  U32 secrc : 1;        // Strip Ethernet CRC From Incoming Packet
  U32 _rsvd_4 : 5;
};

struct i210_reg_SRCCTL {
  U32 bsizepacket : 7;  // Receive Buffer Size for Packet Buffer
  U32 dmacq_dis : 1;    // DMA Coalescing Disable
  U32 bsizeheader : 6;  // Receive Buffer Size for Header Buffer
  U32 _rsvd_0 : 6;
  U32 rdmts : 5;        // Receive Descriptor Minimum Threshold Size
  U32 desctype : 3;     // Defines the descriptor in Rx
  U32 _rsvd_1 : 2;
  U32 timestamp : 1;    // Timestamp Received Packet
  U32 drop_en : 1;      // Drop Enabled
};

struct i210_reg_PSRTYPE {
  U32 psr_type0 : 1;    // Header includes MAC (VLAN/SNAP).
  U32 psr_type1 : 1;    // Header includes MAC, (VLAN/SNAP) Fragmented IPv4 only.
  U32 psr_type2 : 1;    // Header includes MAC, (VLAN/SNAP) IPv4, TCP only.
  U32 psr_type3 : 1;    // Header includes MAC, (VLAN/SNAP) IPv4, UDP only.
  U32 psr_type4 : 1;    // Header includes MAC, (VLAN/SNAP) IPv4, Fragmented IPv6 only.
  U32 psr_type5 : 1;    // Header includes MAC, (VLAN/SNAP) IPv4, IPv6, TCP only.
  U32 psr_type6 : 1;    // Header includes MAC, (VLAN/SNAP) IPv4, IPv6, UDP only.
  U32 psr_type7 : 1;    // Header includes MAC, (VLAN/SNAP) Fragmented IPv6 only.
  U32 psr_type8 : 1;    // Header includes MAC, (VLAN/SNAP) IPv6, TCP only.
  U32 psr_type9 : 1;    // Header includes MAC, (VLAN/SNAP) IPv6, UDP only.
  U32 _rsvd_0 : 1;      // Reserved: Write 1b, ignore on read.
  U32 psr_type11 : 1;   // Header includes MAC, (VLAN/SNAP) IPv4, TCP, NFS only.
  U32 psr_type12 : 1;   // Header includes MAC, (VLAN/SNAP) IPv4, UDP, NFS only.
  U32 _rsvd_1 : 1;      // Reserved: Write 1b, ignore on read.
  U32 psr_type14 : 1;   // Header includes MAC, (VLAN/SNAP) IPv4, IPv6, TCP, NFS only.
  U32 psr_type15 : 1;   // Header includes MAC, (VLAN/SNAP) IPv4, IPv6, UDP, NFS only.
  U32 _rsvd_2 : 1;      // Reserved: Write 1b, ignore on read.
  U32 psr_type17 : 1;   // Header includes MAC, (VLAN/SNAP) IPv6, TCP, NFS only.
  U32 psr_type18 : 1;   // Header includes MAC, (VLAN/SNAP) IPv6, UDP, NFS only.
  U32 _rsvd_3 : 13;     // Reserved: Write 0b, ignore on read.
};

struct i210_reg_RXDCTL {
  U32 pthresh : 5;      // Prefetch Threshold
  U32 _rsvd_0 : 3;
  U32 hthresh : 5;      // Host Threshold
  U32 _rsvd_1 : 3;
  U32 wthresh : 5;      // Write-back Threshold
  U32 _rsvd_2 : 4;
  U32 enable : 1;       // Receive Queue Enable
  U32 swflush : 1;      // Receive Software Flush
  U32 _rsvd_3 : 5;
};

struct i210_reg_RXCSUM {
  U32 pcss : 8;         // Packet Checksum Start
  U32 ipofld : 1;       // IP Checksum Off-load Enable
  U32 tuofld : 1;       // TCP/UDP Checksum Off-load Enable
  U32 icmpv6xsum : 1;   // ICMPv6 Checksum Enable
  U32 crcofl : 1;       // SCTP CRC32 Offload Enable
  U32 ippcse : 1;       // IP Payload Checksum Enable
  U32 pcsd : 1;         // Packet Checksum Disable
  U32 _rsvd_0 : 18;
};

struct i210_reg_RFCTL {
  U32 _rsvd_0 : 6;      // Write 1b, ignore on read.
  U32 nfsw_dis : 1;     // NFS Write Disable
  U32 nfsr_dis : 1;     // NFS Read Disable
  U32 nfs_ver  : 2;     // NFS Version
  U32 _rsvd_1 : 1;
  U32 ipv6xsum_dis : 1; // IPv6 XSUM Disable
  U32 _rsvd_2 : 2;
  U32 ipfrsp_dis : 1;
  U32 _rsvd_3 : 3;
  U32 lef : 1;          // Forward Length Error Packet
  U32 synqfp : 1;       // Defines the priority between SYNQF and 2 tuple filter
  U32 _rsvd_4 : 12;
};

struct i210_reg_RAL {
  U32 byte0 : 8;        // MAC Address Byte 0
  U32 byte1 : 8;        // MAC Address Byte 1
  U32 byte2 : 8;        // MAC Address Byte 2
  U32 byte3 : 8;        // MAC Address Byte 3
};

struct i210_reg_RAH {
  U32 byte4 : 8;        // MAC Address Byte 4
  U32 byte5 : 8;        // MAC Address Byte 5
  U32 asel : 2;         // Address Select
  U32 qsel : 2;         // Queue Select
  U32 _rsvd_0 : 8;
  U32 qsel_enable : 1;  // Queue Select Enable
  U32 _rsvd_1 : 2;
  U32 av : 1;           // Address Valid
};

struct i210_reg_VLAPQF {
  U32 vp0qsel : 2;      // VLAN Priority 0 Queue Selection
  U32 _rsvd_0 : 1;
  U32 vlanp0v : 1;      // VLAN Priority 0 Valid
  U32 vp1qsel : 2;      // VLAN Priority 1 Queue Selection
  U32 _rsvd_1 : 1;
  U32 vlanp1v : 1;      // VLAN Priority 1 Valid
  U32 vp2qsel : 2;      // VLAN Priority 2 Queue Selection
  U32 _rsvd_2 : 1;
  U32 vlanp2v : 1;      // VLAN Priority 2 Valid
  U32 vp3qsel : 2;      // VLAN Priority 3 Queue Selection
  U32 _rsvd_3 : 1;
  U32 vlanp3v : 1;      // VLAN Priority 3 Valid
  U32 vp4qsel : 2;      // VLAN Priority 4 Queue Selection
  U32 _rsvd_4 : 1;
  U32 vlanp4v : 1;      // VLAN Priority 4 Valid
  U32 vp5qsel : 2;      // VLAN Priority 5 Queue Selection
  U32 _rsvd_5 : 1;
  U32 vlanp5v : 1;      // VLAN Priority 5 Valid
  U32 vp6qsel : 2;      // VLAN Priority 6 Queue Selection
  U32 _rsvd_6 : 1;
  U32 vlanp6v : 1;      // VLAN Priority 6 Valid
  U32 vp7qsel : 2;      // VLAN Priority 7 Queue Selection
  U32 _rsvd_7 : 1;
  U32 vlanp7v : 1;      // VLAN Priority 7 Valid
};

struct i210_reg_MRQC {
  U32 multple_receive_queues_enable : 3; // Multiple Receive Queues Enable
  U32 def_q : 3; // Defines the default queue according to value of MRQE field
  U32 _rsvd_0 : 10;
  U32 rss_field_enable : 16; // Each bit, when set enables a specifc field selection to be used by the hash function
};

struct i210_reg_DMVOLR {
  U32 _rsvd_0 : 29;
  U32 hide_vlan : 1;    // Write VLAN tag as 0 in receive descriptors
  U32 strvlan : 1;      // VLAN removed from packet
  U32 crc_strip : 1;    // CRC removed from packet
};

/* Section 8.11 Filtering Registers */

/* Section 8.12 Transmit Registers: q=0..3 (4 queues) */
#define I210_TCTL               0x0400 // Transmit Control
#define I210_TCTL_EXT           0x0404 // Transmit Control Extended
#define I210_TIPG               0x0408 // Transmit IPG
#define I210_RETX_CTL           0x041C // Retry Buffer Control
#define I210_DTXCTL             0x3590 // DMA TX Control
#define I210_DTXTCPFLGL         0x359C // DMA TX Flags Control Low
#define I210_DTXTCPFLGH         0x35A0 // DMA TX Flags Control High
#define I210_DTXMXSZRQ          0x3540 // DMA TX Max Total Allow Size Requests
#define I210_DTXMXPKTSZ         0x355C // DMA TX Maximum Packet Size
#define I210_TDBAL(q)           (0xe000 + (0x40 * (q))) // Transmit Descriptor Base Address Low
#define I210_TDBAH(q)           (0xe004 + (0x40 * (q))) // Transmit Descriptor Base Address High
#define I210_TDLEN(q)           (0xe008 + (0x40 * (q))) // Transmit Descriptor Ring Length High
#define I210_TDH(q)             (0xe010 + (0x40 * (q))) // Transmit Descriptor Head
#define I210_TDT(q)             (0xe018 + (0x40 * (q))) // Transmit Descriptor Tail
#define I210_TXDCTL(q)          (0xe028 + (0x40 * (q))) // Transmit Descriptor Control
#define I210_TDWBAL(q)          (0xe038 + (0x40 * (q))) // Transmit Descriptor Write-Back Address Low
#define I210_TDWBAH(q)          (0xe03c + (0x40 * (q))) // Transmit Descriptor Write-Back Address High
#define I210_TQAVHC(q)          (0x300c + (0x40 * (q))) // Tx Qav Hi Credit
#define I210_TQAVCC(q)          (0x3004 + (0x40 * (q))) // Tx Qav Credit Control
#define I210_LAUNCH_OS0         0x3578 // Launch Time Offset
#define I210_TQAVCTRL           0x3570 // Tx Qav Control

struct i210_reg_TCTL {
  U32 _rsvd_0 : 1;
  U32 en : 1;           // Transmit Enable
  U32 _rsvd_1 : 1;
  U32 psp : 1;          // Pad Short Packets
  U32 ct : 8;           // Collision Threshold
  U32 bst : 10;         // Back-Off Slot Time
  U32 swxoff : 1;       // Software XOFF Transmission
  U32 _rsvd_2 : 1;
  U32 rtlc : 1;         // Re-transmit on Late Collision
  U32 _rsvd_3 : 7;
};

struct i210_reg_TCTL_EXT {
  U32 _rsvd_0 : 10;     // Reserved. Write 0x40, ignore on read.
  U32 cold : 10;        // Collision Distance
  U32 _rsvd_1 : 12;
};

struct i210_reg_RETX_CTL {
  U32 water_mark : 4;   // Retry buffer water mark
  U32 _rsvd_0 : 28;
};

struct i210_reg_DTXCTL {
  U32 _rsvd_0 : 2;
  U32 enable_spoof_queue : 1; // Enable Spoofing Queue
  U32 _rsvd_1 : 1;
  U32 outofsyncdisable : 1; // Disable Out of Sync Mechanism
  U32 _rsvd_2 : 2;
  U32 count_crc : 1;    // If set the CRC is counted as part of the packet bytes statistics
  U32 _rsvd_3 : 24;
};

struct i210_reg_DTXTCPFLGL {
  U32 tcp_flg_first_seg : 12; // TCP Flags First Segment
  U32 _rsvd_0 : 4;
  U32 tcp_flg_mid_seg : 12; // TCP Flags middle segments
  U32 _rsvd_1 : 4;
};

struct i210_reg_DTXTCPFLGH {
  U32 tcp_flg_lst_seg : 12; // TCP Flags Last Segment
  U32 _rsvd_0 : 20;
};

struct i210_reg_TXDCTL {
  U32 pthresh : 5;      // Prefetch Threshold
  U32 _rsvd_0 : 3;
  U32 hthresh : 5;      // Host Threshold
  U32 _rsvd_1 : 3;
  U32 wthresh : 5;      // Write-Back Threshold
  U32 _rsvd_2 : 3;
  U32 _rsvd_3 : 1;
  U32 enable : 1;       // Transmit Queue Enable
  U32 swflsh : 1;       // Transmit Software Flush
  U32 priority : 1;     // Transmit Queue Priority
  U32 hwbthresh : 4;    // Transmit Head Write-back Threshold
};

/* Section 8.22 Management Registers */
#define I210_MANC               0x5820

struct i210_reg_MANC {
  U32 flow_control_discard : 1;
  U32 ncsi_discard : 1;
  U32 _rsvd_0 : 12;
  U32 fw_reset : 1;     // Firmware Reset Occurred
  U32 tco_isolate : 1;
  U32 tco_reset : 1;
  U32 rcv_tco_en : 1;
  U32 keep_phy_link_up : 1;
  U32 _rsvd_1 : 1;
  U32 _rsvd_2 : 3;
  U32 en_xsum_filter : 1;
  U32 en_ipv4_filter : 1;
  U32 fixed_net_type : 1;
  U32 net_type : 1;
  U32 _rsvd_3 : 1;
  U32 en_bmc2os : 1;
  U32 en_bmc2net : 1;
  U32 mproxye : 1;
  U32 _rsvd_4 : 1;
};

/* Section 8.23 Host Interface Memory Registers */

#define I210_HOST_INT_MEM       0x8800
#define I210_HOST_INT_MEM_END   0x8eff
#define I210_HICR               0x8f00
#define I210_AUX_HICR           0x0a00 // ARC
#define I210_HIBBA              0x8f40
#define I210_AUX_HIBBA          0x0a01 // ARC
#define I210_HIBMAXOFF          0x8f44
#define I210_AUX_HIBMAXOFF      0x0a07 // ARC

struct i210_reg_HICR {
  U32 en : 1;
  U32 c : 1;
  U32 sv : 1;
  U32 _rsvd_0 : 1;
  U32 _rsvd_1 : 2;
  U32 fwr_en: 1;                // Firmware Reset Enable - from e1000_manage.c
  U32 fwr : 1;
  U32 _rsvd_2 : 1;
  U32 memory_base_en : 1;
  U32 _rsvd_3 : 12;
};

struct i210_reg_HIBBA {
  U32 ba : 20;
  U32 _rsvd_0 : 12;
};

struct i210_reg_HIBMAXOFF {
  U32 maxoff : 10;
  U32 _rsvd_0 : 22;
};

/* Section 7.1.4 Receive Descriptors */
struct i210_legacy_rdesc {
  U64 addr;             // Buffer Address
  U32 len : 16;         // Length
  U32 frag_csum : 16;   // Fragment Checksum
  // Status field (8 bits)
  U32 dd : 1;           // Descriptor done
  U32 eop : 1;          // End of packet
  U32 _rsvd_0 : 1;      // Reserved
  U32 vp : 1;           // Packet is 802.1Q; indicates strip VLAN
  U32 udpcs : 1;        // UDP checksum or IP payload checksum calculated on packet
  U32 l4cs : 1;         // L4 (UDP or TCP) checksum calculated on packet
  U32 ipcs : 1;         // IPv4 checksump calculated on packet
  U32 pif : 1;          // Passed imperfect filter only
  // Error Field (8 bits)
  U32 _rsvd_1 : 5;
  U32 l4e : 1;          // TCP/UDP Checksum Error
  U32 ipe : 1;          // IPv4 Checksum Error
  U32 rxe : 1;          // RX Data Error
  // VLAN Tag field
  U32 vlan : 16;
} __attribute__((packed));

// Software writes the following to the descriptor rings.
// Note DD bit is in same location as with the HW writeback
struct i210_adv_rdesc_rd {
  U64 pkt_buf_addr;     // Packet Buffer Address, bit[0] = A0/NSE
  U64 hdr_buf_addr;     // Header Buffer Address, bit[0] = DD
} __attribute__((packed));

// Hardware overwrites the i210_adv_rdesc_rd with the following.
// Note that the DD bit is in the same position as the SW write above.
struct i210_adv_rdesc_wb {
  U32 rss_type : 4;     // Pakect Type used for the RSS hash function
#if 1
  // Packet Type (12 bits)
  U32 pkt_type_ipv4 : 1;  // Indicates IPv4 header present
  U32 pkt_type_ipv4e : 1; // Indicates IPv4 Header includes IP options
  U32 pkt_type_ipv6 : 1;  // Indicates IPv6 header present
  U32 pkt_type_ipv6e : 1; // Indicates IPv6 Header includes extensions
  U32 pkt_type_tcp : 1;   // Indicates TCP header present
  U32 pkt_type_udp : 1;   // Indicates UDP header present
  U32 pkt_type_sctp : 1;  // Indicates SCTP header present
  U32 pkt_type_nfs : 1;   // Indicates NFS header present
  U32 pkt_type_ethertype : 1; // ETQF register index that matches the packet
#else
  U32 pkt_type : 12;      // Packet Type
#endif
  U32 _rsvd_0 : 2;
  U32 hdr_len_upper : 2;  // hdr_len[11:10]
  U32 hdr_len_lower : 10; // hdr_len[9:0] Length (bytes) of header parsed by the I210
  U32 sph : 1;            // Split Header
  U32 rss_hash_val : 32;  // RSS Hash Value{ Fragment Checksum, IP indentification}

  // Extended Status (20 bits)
  U32 stat_dd : 1;        // Descriptor done
  U32 stat_eop : 1;       // End of packet
  U32 stat_rsv_0 : 1 ;
  U32 stat_vp : 1;        // Packet is 802.1Q; indicates strip VLAN
  U32 stat_udpcs : 1;     // UDP checksum or IP payload checksum calculated on packet
  U32 stat_l4i : 1;       // L4 integrity check done on packet
  U32 stat_ipcs : 1;      // IPv4 checksump calculated on packet
  U32 stat_pif : 1;       // Passed imperfect filter only
  U32 stat_rsv_1 : 1;
  U32 stat_vext : 1;      // First VLAN found on a double VLAN packet
  U32 stat_udpv : 1;      // Incoming packet contains valid checksum field in first UDP IPv4 packet
  U32 stat_llint : 1;     // Packet caused immediate interrupt via low latency interrupt mechanism
  U32 stat_strip_crc : 1; // Indicates that the Ethernet CRC has been stripped from incoming packet
  U32 stat_rsv_2 : 2;
  U32 stat_tsip : 1;      // Time Stamp In Packet
  U32 stat_ts : 1;        // Time Stamped Packet
  U32 stat_rsv_3 : 2;
  U32 stat_mc : 1;        // Packed received from MC

  // Extended Error (12 bits)
  U32 err_rsv_0 : 3;      // RX Data Error
  U32 err_hbo : 1;        // Header Buffer Overflow
  U32 err_rsv_1 : 3;
  U32 err_rsv_2 : 2;
  U32 err_l4e : 1;        // TCP/UDP Checksum Error
  U32 err_ipe : 1;        // IPv4 Checksum Error
  U32 err_rxe : 1;        // RX Data Error

  U32 pkt_len : 16;
  U32 vlan_tag : 16;
} __attribute__((packed));

/* Section 7.2.2 Transmit Descriptors */
struct i210_legacy_tdesc {
  U64 addr;             // Buffer Address
  U32 len : 16;         // Length
  U32 cso : 8;          // Checksum Offset and Start
  // Transmit Command Field (8 bits)
  U32 eop : 1;          // End of Packet
  U32 ifcs : 1;         // Insert FCS
  U32 ic : 1;           // Insert Checksum
  U32 rs : 1;           // Report Status
  U32 _rsvd_0 : 1;      // Reserved
  U32 dext : 1;         // Descriptor Extension (0 for legacy mode)
  U32 vle : 1;          // VLAN Insertion Enable
  U32 _rsvd_1 : 1;      // Reserved
  // Status Field (4 bits)
  U32 dd : 1;           // Descriptor Done
  U32 _rsvd_2 : 3;      // Reserved
  // Reserved
  U32 _rsvd_3 : 12;
  // VLAN Tag Field (16 bits)
  U32 vlan : 16;
} __attribute__((packed));

#if 0
struct i210_adv_tdesc_ctx {
  U32 iplen : 9;        // IP header length
  U32 maclen : 7;       // MAC header length
  U32 vlan : 16;        // 802.1Q VLAN tag to be inserted
  U32 launchtime : 25;  // Launch
  U32 _rsvd_0 : 7;
  U32 _rsvd_1 : 9;
#if 1
  U32 tucmd_snap : 1;   // SNAP indication
  U32 tucmd_ipv4 : 1;   // 0:IPv6 1:IPv4
  U32 tucmd_l4t : 3;    // 0:UDP 1:TCP 2:SCTP 3:Reserved
  U32 tucmd__rsvd_0 : 7;
#else
  U32 tucmd : 12;
#endif
  U32 dtyp : 4;         // Descriptor Type, always 0x2
  U32 _rsvd_2 : 5;
  U32 dext : 1;         // Descriptor Extension: 1 for advanced mode
  U32 _rsvd_3 : 6;
  U32 idx : 3;          // Index into HW context table where context stored
  U32 _rsvd_4 : 1;
  U32 l4len : 8;        // Layer 4 Header Length
  U32 mss : 16;         // TCP Maximum Segment Size
};

struct i210_adv_tdesc_data {
};

#endif

/* Section 8.4 Flash Registers Descriptions */
#define I210_EEARBC             0x12024
#define I210_ARBDBG             0x12044
#define I210_FL_SECU            0x12114
#define I210_FLMNGCTL           0x1018
#define I210_FLMNGDATA          0x101c
#define I210_FLMNGCNT           0x1020

/* Section 8.4.4 EEPROM Load Error Register */

/* Section 8.4.5 EEPROM Load Control Register */

/* Section 8.4.6 EEPROM-Mode Write Register */

/* Section 8.4.10 EEPROM Auto Read Bus Control */
struct i210_reg_EEARBC {
#if 1
  U32 valid : 1;        // Indicates that the last auto-load bus write request is valid
  U32 done : 1;         // Last auto-load bus write request completed
  U32 _rsvd_0 : 2;
  U32 addr : 9;         // Specified address offset of Flash word from start of shadow RAM
  U32 _rsvd_1 : 3;
  U32 data : 16;        // Data written into the Flash auto read bus
#else
  U32 valid_core0 : 1;  // Valid Write Active to Core 0
  U32 valid_core1 : 1;  // Valid Write Active to Core 1
  U32 valid_common : 1; // Valid Write Active to Common
  U32 valid_pcie : 1;   // Valid Write Active to PCIe PHY
  U32 addr : 9;         // Write Address
  U32 valid_core2 : 1;  // Valid Write Active to Core 2
  U32 valid_core3 : 1;  // Valid Write Active to Core 3
  U32 _rsvd_0 : 1;
  U32 data : 16;        // Data written into the EEPROM auto read bus
#endif
};

struct i210_reg_FLMNGCTL {
  U32 addr : 24;        // Address
  U32 cmd : 2;          // Command 0=Read 1=Write 2=Sector Erase 3=Erase
  U32 cmdv : 1;         // Command Valid
  U32 flbusy : 1;       // Flash Busy
  U32 _rsvd_0 : 2;
  U32 done : 1;         // Read Done
  U32 wrdone : 1;       // Global DOne
};

struct i210_reg_FLMNGCNT {
  U32 rdcnt : 25;       // Read Counter
  U32 _rsvd_0 : 6;
  U32 abort : 1;        // Abort
};


/* PCI Express PHY (for upstream mode support in custom FW :-)) */
#define I210_PCIEPHYADR 				0x5b40
#define I210_PCIEPHYDAT 				0x5b44

/* PRTPHYCTRL0 bit 0 enables upstream mode :-) FIXME it doesn't respond to writes !!! */
/* Taken from Intel X540 Ethernet datasheet */
#define I210_PCIE_PHY_INITDISABLE   	0x004 // Init Disable
#define I210_PCIE_PHY_CLKGATE       	0x038 // Clock Gate
#define I210_PCIE_PHY_BER           	0x05C // BER Meter Locked Register
#define I210_PCIE_PHY_SRBER0        	0x060 // BER Meter for Lane 0
#define I210_PCIE_PHY_SRBER1        	0x064 // BER Meter for Lane 1
#define I210_PCIE_PHY_SRBER2        	0x068 // BER Meter for Lane 2
#define I210_PCIE_PHY_SRBER3        	0x06C // BER Meter for Lane 3
#define I210_PCIE_PHY_SRBER4        	0x070 // BER Meter for Lane 4
#define I210_PCIE_PHY_SRBER5        	0x074 // BER Meter for Lane 5
#define I210_PCIE_PHY_SRBER6        	0x078 // BER Meter for Lane 6
#define I210_PCIE_PHY_SRBER7        	0x07C // BER Meter for Lane 7
#define I210_PCIE_PHY_NFTS          	0x090 // NTFS Register
#define I210_PCIE_PHY_REUTENGLSSEL0 	0x09C // REUTENGLSSEL0 Register
#define I210_PCIE_PHY_REUTERRCED0   	0x0A0 // CRC Error Count Pport 0
#define I210_PCIE_PHY_REUTE0        	0x0A4 // RCV Error Count
#define I210_PCIE_PHY_REUTENGLTRON0 	0x0A8 // REUTENGLTRON0 Register
#define I210_PCIE_PHY_GENTRANS      	0x0AC // Speed Timeout Register
#define I210_PCIE_PHY_CFGWAITACCEPT 	0x0E8 // Config.Lanenum.WaitAccept Register
#define I210_PCIE_PHY_TRAPPER0      	0x114 // Trapper Event Reg dw0
#define I210_PCIE_PHY_TRAPPER1      	0x118 // Trapper Event Reg dw1
#define I210_PCIE_PHY_TRAPPER2      	0x11C // Trapper Event Reg dw2
#define I210_PCIE_PHY_TRAPPER3      	0x120 // Trapper Event Reg dw3
#define I210_PCIE_PHY_TRAPPERM0     	0x124 // Trapper Event Mask dw0
#define I210_PCIE_PHY_TRAPPERM1     	0x128 // Trapper Event Mask dw1
#define I210_PCIE_PHY_TRAPPERM2     	0x12C // Trapper Event Mask dw2
#define I210_PCIE_PHY_TRAPPERM3     	0x130 // Trapper Event Mask dw3
#define I210_PCIE_PHY_TRAPPERC1     	0x134 // Trapped Event Counter
#define I210_PCIE_PHY_TRAPPERC2     	0x138 // Trapper Counter Clear
#define I210_PCIE_PHY_PIPE          	0x140 // PIPE Register
#define I210_PCIE_PHY_CHKN          	0x144 // CHKN Register
#define I210_PCIE_PHY_REUTMCTR20    	0x160 // REUTMCTR20 Register
#define I210_PCIE_PHY_BERTESTSYM0   	0x174 // BER Meter Symbol Pattern 0
#define I210_PCIE_PHY_BERTESTSYM1   	0x178 // BER Meter Symbol Pattern 1
#define I210_PCIE_PHY_BERCFG1       	0x180 // BER Config 1
#define I210_PCIE_PHY_BERCFG2       	0x184 // BER Config 2
#define I210_PCIE_PHY_PLLLOCK       	0x190 // PLL Lock Register
#define I210_PCIE_PHY_EN            	0x194 // SWZL Register
#define I210_PCIE_PHY_PCIE          	0x19C // Soft Reset Register
#define I210_PCIE_PHY_FELB          	0x1A8 // Far-end Loopback Register
#define I210_PCIE_PHY_BERCFG3       	0x1CC // BER Config 3
#define I210_PCIE_PHY_PCICMD20      	0x1E8 // PCICMD20 Register
#define I210_PCIE_PHY_BCTRL0        	0x1EC // BCTRL0 Register
#define I210_PCIE_PHY_BIFCTL        	0x1F0 // BIFCTL Register
#define I210_PCIE_PHY_PCIELER0      	0x1F4 // PCIELER0 Register
#define I210_PCIE_PHY_PCIELER1      	0x200 // PCIELER1 Register
#define I210_PCIE_PHY_PCICMD0       	0x21C // SERR Enable Register
#define I210_PCIE_PHY_CLSR10        	0x220 // Cache Line Size Register
#define I210_PCIE_PHY_REUTENGLD3    	0x224 // REUTENGLD3 Register
#define I210_PCIE_PHY_REUTENGLSCAP3 	0x228 // REUTENGLSCAP3 Register
#define I210_PCIE_PHY_REUTENGLTRCON 	0x22C // REUTENGLTRCON3 Register 3
#define I210_PCIE_PHY_REUTPHTDC3    	0x234 // REUTPHTDC3 Register
#define I210_PCIE_PHY_REUTPHTDS3    	0x238 // REUTPHTDS3 Register
#define I210_PCIE_PHY_REUTPHRDS3    	0x23C // REUTPHRDS3 Register
#define I210_PCIE_PHY_REUTPHPIS3    	0x244 // REUTPHPIS3 Register
#define I210_PCIE_PHY_REUTPHPRE3    	0x248 // REUTPHPRE3 Register
#define I210_PCIE_PHY_REUTPHPOST3   	0x24C // REUTPHPOST3 Register
#define I210_PCIE_PHY_REUTPATCCTR4  	0x254 // REUTPATCCTR4 Register
#define I210_PCIE_PHY_REUTPMR04     	0x274 // REUTPMR04 Register
#define I210_PCIE_PHY_REUTPMR24     	0x278 // REUTPMR24 Register
#define I210_PCIE_PHY_REUTPMR33     	0x27C // REUTPMR33 Register
#define I210_PCIE_PHY_FPLACTRL0     	0x280 // FPLACTRL0 Register
#define I210_PCIE_PHY_FPLAAND0      	0x284 // FPLAAND0 Register
#define I210_PCIE_PHY_FPLAOR0       	0x288 // FPLAOR0 Register
#define I210_PCIE_PHY_FPLAMSEL00    	0x28C // FPLAMSEL00 Register
#define I210_PCIE_PHY_FPLAMSEL10    	0x290 // FPLAMSEL10 Register
#define I210_PCIE_PHY_OBEINJCTL0    	0x294 // XP Outbound Error Injection Control TXN REG
#define I210_PCIE_PHY_XPPRIVC0      	0x298 // XP Private Control TXN REG
#define I210_PCIE_PHY_PXP0EINJMSK   	0x29C // PXP Outbound ERR Injection Mask Register TXN REG
#define I210_PCIE_PHY_PSCGLBCTL     	0x2B4 // XP Global Control Register
#define I210_PCIE_PHY_PXP0BNSBITS   	0x2D8 // Bonus Config Bits
#define I210_PCIE_PHY_PXP0TXO       	0x2E4 // PXP Transmit Override / Configuration
#define I210_PCIE_PHY_PXP0DEMPSEL   	0x2F4 // PXP De-emphasis Select Register
#define I210_PCIE_PHY_PXP0IBPRTCTL  	0x304 // IBIST Port Control Register
#define I210_PCIE_PHY_XPPGESTAT0    	0x308 // Lane Error Status Register
#define I210_PCIE_PHY_RASCAPREG     	0x318 // RAS Capability Register
#define I210_PCIE_PHY_COMERRCNT0    	0x31C // Lane Error Status Register Low
#define I210_PCIE_PHY_COMERRCNT1    	0x320 // Lane Error Status Register High
#define I210_PCIE_PHY_CLSPHYCTL     	0x338 // Cluster Physical IO Control Register
#define I210_PCIE_PHY_LEKBERR       	0x33C // Leaky Bucket Error Register
#define I210_PCIE_PHY_PRTPHYCTL0    	0x340 // Port Physical IO Control Register
#define I210_PCIE_PHY_PXPSQCNT0     	0x344 // PXP Cluster Squelch Count
#define I210_PCIE_PHY_PXP0PHYCTL3   	0x348 // PXP PHY Control Register 3
#define I210_PCIE_PHY_PXP0PHYCTL4   	0x34C // PXP PHY Control Register 4
#define I210_PCIE_PHY_PXP0PHYCTL5   	0x350 // PXP PHY Control Register 5
#define I210_PCIE_PHY_PXP0PHYCTL6   	0x354 // PXP PHY Control Register 6
#define I210_PCIE_PHY_PXPDLLPCTRL   	0x36C // DLL Control Register
#define I210_PCIE_PHY_PXPRETRYCTRL  	0x370 // Retry Control Register
#define I210_PCIE_PHY_PXPLNKMISC0   	0x388 // Link Layer Misc Control Register
#define I210_PCIE_PHY_PXP0CDTAVAIL0 	0x38C // Credit Availability Status Register 0
#define I210_PCIE_PHY_PXP0CDTAVAIL1 	0x390 // Credit Availability Status Register 1
#define I210_PCIE_PHY_EXPBERR0      	0x394 // Expected Bit Error Rate Register 0
#define I210_PCIE_PHY_EXPBERR1      	0x398 // Expected Bit Error Rate Register 1
#define I210_PCIE_PHY_LMPMB         	0x3A0 // Link Layer PM
#define I210_PCIE_PHY_RXPMCTRLGEN1  	0x3D0 // Rx PM Control Gen1 Register
#define I210_PCIE_PHY_RXPMCTRLGEN2  	0x3D4 // Rx PM Control Gen2 Register
#define I210_PCIE_PHY_PIPE1         	0x3D8 // PIPE DFT Register
#define I210_PCIE_PHY_PIPE2         	0x3DC // PIPE Register 2


#endif /* I210_REG_H */
