///////////////////////////////////////////////////////////////////////////////
// BOSSA
//
// Copyright (c) 2015, Arduino LLC
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the <organization> nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////

#ifndef _DEVICES_H_
#define _DEVICES_H_

#define ATSAM_APPLET_MAX_SIZE                (0x0400)

#define ATSAMD_CHIPID_MASK                   (0xFFFF00FFul)  // mask for DIE & REV bitfields removal in Samba::chipId()
#define ATSAMD_BOOTLOADER_SIZE               (0x00002000ul)  // 8192 bytes
#define ATSAMD51_BOOTLOADER_SIZE             (0x00002000ul)  // 8192 bytes
#define ATSAML_BOOTLOADER_SIZE               (0x00002000ul)  // 8192 bytes
#define ATSAMC_BOOTLOADER_SIZE               (0x00002000ul)  // 8192 bytes
#define ATSAMR_BOOTLOADER_SIZE               (0x00001000ul)  // 4096 bytes, USB-CDC only
#define BOOTLOADER_SIZE_8KB                  (0x00002000ul)  // 8192 bytes, both interfaces
#define BOOTLOADER_SIZE_4KB                  (0x00001000ul)  // 4096 bytes, USB-CDC or UART only
#define ATSAMD_FLASH_ROW_PAGES               (4ul)           // 4 pages per row
#define ATSAMD51_FLASH_BLOCK_PAGES           (16ul)           // 16 pages per block

// Brown out register: base address (SYSCTRL or SUPC) + BOD33 (BODVDD) reg offset
#define ATSAMD_BOD33_REG                     (0x40000800ul + 0x34ul)
#define ATSAMD51_BOD33_REG                   (0x40001800ul + 0x10ul)
#define ATSAML_BOD33_REG                     (0x40001400ul + 0x10ul)
#define ATSAMC_BOD33_REG                     (0x40001800ul + 0x10ul)
#define ATSAMD_BOD33_REG_RESET_BIT           (0x8ul)
#define ATSAMD51_BOD33_REG_RESET_BIT         (0x4ul)
#define ATSAML_BOD33_REG_RESET_BIT           (0x8ul)
#define ATSAMC_BOD33_REG_RESET_BIT           (0x8ul)
#define BOD33_REG_ENABLE_BIT                 (0x2ul)

/* SAMD21 */
#define ATSAMD21J18A_NAME                    "ATSAMD21J18A"
#define ATSAMD21J18A_CHIPID                  (0x10010000ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21J18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21J18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21J18A_FLASH_PAGES             (4096ul)
#define ATSAMD21J18A_FLASH_PLANES            (1ul)
#define ATSAMD21J18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21J18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21J18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21J18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21J17A_NAME                    "ATSAMD21J17A"
#define ATSAMD21J17A_CHIPID                  (0x10010001ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21J17A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21J17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21J17A_FLASH_PAGES             (2048ul)
#define ATSAMD21J17A_FLASH_PLANES            (1ul)
#define ATSAMD21J17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21J17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMD21J17A_STACK_ADDR              (0x20004000ul)
#define ATSAMD21J17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21J16A_NAME                    "ATSAMD21J16A"
#define ATSAMD21J16A_CHIPID                  (0x10010002ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21J16A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21J16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21J16A_FLASH_PAGES             (1024ul)
#define ATSAMD21J16A_FLASH_PLANES            (1ul)
#define ATSAMD21J16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21J16A_BUFFER_ADDR             (0x20001000ul)
#define ATSAMD21J16A_STACK_ADDR              (0x20002000ul)
#define ATSAMD21J16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21J15A_NAME                    "ATSAMD21J15A"
#define ATSAMD21J15A_CHIPID                  (0x10010003ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21J15A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21J15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21J15A_FLASH_PAGES             (512ul)
#define ATSAMD21J15A_FLASH_PLANES            (1ul)
#define ATSAMD21J15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21J15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD21J15A_STACK_ADDR              (0x20001000ul)
#define ATSAMD21J15A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21G18A_NAME                    "ATSAMD21G18A"
#define ATSAMD21G18A_CHIPID                  (0x10010005ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21G18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21G18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21G18A_FLASH_PAGES             (4096ul)
#define ATSAMD21G18A_FLASH_PLANES            (1ul)
#define ATSAMD21G18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21G18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21G18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21G18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21G17A_NAME                    "ATSAMD21G17A"
#define ATSAMD21G17A_CHIPID                  (0x10010006ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21G17A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21G17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21G17A_FLASH_PAGES             (2048ul)
#define ATSAMD21G17A_FLASH_PLANES            (1ul)
#define ATSAMD21G17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21G17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMD21G17A_STACK_ADDR              (0x20004000ul)
#define ATSAMD21G17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21G16A_NAME                    "ATSAMD21G16A"
#define ATSAMD21G16A_CHIPID                  (0x10010007ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21G16A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21G16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21G16A_FLASH_PAGES             (1024ul)
#define ATSAMD21G16A_FLASH_PLANES            (1ul)
#define ATSAMD21G16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21G16A_BUFFER_ADDR             (0x20001000ul)
#define ATSAMD21G16A_STACK_ADDR              (0x20002000ul)
#define ATSAMD21G16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21G15A_NAME                    "ATSAMD21G15A"
#define ATSAMD21G15A_CHIPID                  (0x10010008ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21G15A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21G15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21G15A_FLASH_PAGES             (512ul)
#define ATSAMD21G15A_FLASH_PLANES            (1ul)
#define ATSAMD21G15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21G15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD21G15A_STACK_ADDR              (0x20001000ul)
#define ATSAMD21G15A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E18A_NAME                    "ATSAMD21E18A"
#define ATSAMD21E18A_CHIPID                  (0x1001000aul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E18A_FLASH_PAGES             (4096ul)
#define ATSAMD21E18A_FLASH_PLANES            (1ul)
#define ATSAMD21E18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21E18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21E18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E17A_NAME                    "ATSAMD21E17A"
#define ATSAMD21E17A_CHIPID                  (0x1001000bul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E17A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E17A_FLASH_PAGES             (2048ul)
#define ATSAMD21E17A_FLASH_PLANES            (1ul)
#define ATSAMD21E17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMD21E17A_STACK_ADDR              (0x20004000ul)
#define ATSAMD21E17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E16A_NAME                    "ATSAMD21E16A"
#define ATSAMD21E16A_CHIPID                  (0x1001000cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E16A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E16A_FLASH_PAGES             (1024ul)
#define ATSAMD21E16A_FLASH_PLANES            (1ul)
#define ATSAMD21E16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E16A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD21E16A_STACK_ADDR              (0x20002000ul)
#define ATSAMD21E16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E16B_NAME                    "ATSAMD21E16B"
#define ATSAMD21E16B_CHIPID                  (0x10010026ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E16B_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E16B_FLASH_PAGES             (1024ul)
#define ATSAMD21E16B_FLASH_PLANES            (1ul)
#define ATSAMD21E16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E16B_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD21E16B_STACK_ADDR              (0x20002000ul)
#define ATSAMD21E16B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E15A_NAME                    "ATSAMD21E15A"
#define ATSAMD21E15A_CHIPID                  (0x1001000dul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E15A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E15A_FLASH_PAGES             (512ul)
#define ATSAMD21E15A_FLASH_PLANES            (1ul)
#define ATSAMD21E15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD21E15A_STACK_ADDR              (0x20001000ul)
#define ATSAMD21E15A_NVMCTRL_BASE            (0x41004000ul)

/* SAMD51 */
#define ATSAMD51P20A_NAME                    "ATSAMD51P20A"
#define ATSAMD51P20A_CHIPID                  (0x60060000ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51P20A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51P20A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51P20A_FLASH_PAGES             (2048ul)
#define ATSAMD51P20A_FLASH_PLANES            (1ul)
#define ATSAMD51P20A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51P20A_BUFFER_ADDR             (0x20020000ul)
#define ATSAMD51P20A_STACK_ADDR              (0x20040000ul)
#define ATSAMD51P20A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51P19A_NAME                    "ATSAMD51P19A"
#define ATSAMD51P19A_CHIPID                  (0x60060001ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51P19A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51P19A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51P19A_FLASH_PAGES             (1024ul)
#define ATSAMD51P19A_FLASH_PLANES            (1ul)
#define ATSAMD51P19A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51P19A_BUFFER_ADDR             (0x20018000ul)
#define ATSAMD51P19A_STACK_ADDR              (0x20030000ul)
#define ATSAMD51P19A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51N20A_NAME                    "ATSAMD51N20A"
#define ATSAMD51N20A_CHIPID                  (0x60060002ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51N20A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51N20A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51N20A_FLASH_PAGES             (2048ul)
#define ATSAMD51N20A_FLASH_PLANES            (1ul)
#define ATSAMD51N20A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51N20A_BUFFER_ADDR             (0x20020000ul)
#define ATSAMD51N20A_STACK_ADDR              (0x20040000ul)
#define ATSAMD51N20A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51N19A_NAME                    "ATSAMD51N19A"
#define ATSAMD51N19A_CHIPID                  (0x60060003ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51N19A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51N19A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51N19A_FLASH_PAGES             (1024ul)
#define ATSAMD51N19A_FLASH_PLANES            (1ul)
#define ATSAMD51N19A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51N19A_BUFFER_ADDR             (0x20018000ul)
#define ATSAMD51N19A_STACK_ADDR              (0x20030000ul)
#define ATSAMD51N19A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51J20A_NAME                    "ATSAMD51J20A"
#define ATSAMD51J20A_CHIPID                  (0x60060004ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51J20A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51J20A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51J20A_FLASH_PAGES             (2048ul)
#define ATSAMD51J20A_FLASH_PLANES            (1ul)
#define ATSAMD51J20A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51J20A_BUFFER_ADDR             (0x20020000ul)
#define ATSAMD51J20A_STACK_ADDR              (0x20040000ul)
#define ATSAMD51J20A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51J19A_NAME                    "ATSAMD51J19A"
#define ATSAMD51J19A_CHIPID                  (0x60060005ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51J19A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51J19A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51J19A_FLASH_PAGES             (1024ul)
#define ATSAMD51J19A_FLASH_PLANES            (1ul)
#define ATSAMD51J19A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51J19A_BUFFER_ADDR             (0x20018000ul)
#define ATSAMD51J19A_STACK_ADDR              (0x20030000ul)
#define ATSAMD51J19A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51J18A_NAME                    "ATSAMD51J18A"
#define ATSAMD51J18A_CHIPID                  (0x60060006ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51J18A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51J18A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51J18A_FLASH_PAGES             (512ul)
#define ATSAMD51J18A_FLASH_PLANES            (1ul)
#define ATSAMD51J18A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51J18A_BUFFER_ADDR             (0x20010000ul)
#define ATSAMD51J18A_STACK_ADDR              (0x20020000ul)
#define ATSAMD51J18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51G19A_NAME                    "ATSAMD51G19A"
#define ATSAMD51G19A_CHIPID                  (0x60060007ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51G19A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51G19A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51G19A_FLASH_PAGES             (1024ul)
#define ATSAMD51G19A_FLASH_PLANES            (1ul)
#define ATSAMD51G19A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51G19A_BUFFER_ADDR             (0x20018000ul)
#define ATSAMD51G19A_STACK_ADDR              (0x20030000ul)
#define ATSAMD51G19A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD51G18A_NAME                    "ATSAMD51G18A"
#define ATSAMD51G18A_CHIPID                  (0x60060008ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD51G18A_FLASH_BASE              (0x00000000ul + ATSAMD51_BOOTLOADER_SIZE)
#define ATSAMD51G18A_FLASH_PAGE_SIZE         (512ul)
#define ATSAMD51G18A_FLASH_PAGES             (512ul)
#define ATSAMD51G18A_FLASH_PLANES            (1ul)
#define ATSAMD51G18A_FLASH_LOCK_REGIONS      (32ul)
#define ATSAMD51G18A_BUFFER_ADDR             (0x20010000ul)
#define ATSAMD51G18A_STACK_ADDR              (0x20020000ul)
#define ATSAMD51G18A_NVMCTRL_BASE            (0x41004000ul)

/* SAML21 */
#define ATSAML21J18B_NAME                    "ATSAML21J18B"
#define ATSAML21J18B_CHIPID                  (0x1081000Ful)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21J18B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21J18B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21J18B_FLASH_PAGES             (4096ul)
#define ATSAML21J18B_FLASH_PLANES            (1ul)
#define ATSAML21J18B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21J18B_BUFFER_ADDR             (0x20004000ul)
#define ATSAML21J18B_STACK_ADDR              (0x20008000ul)
#define ATSAML21J18B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21J17B_NAME                    "ATSAML21J17B"
#define ATSAML21J17B_CHIPID                  (0x10810010ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21J17B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21J17B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21J17B_FLASH_PAGES             (2048ul)
#define ATSAML21J17B_FLASH_PLANES            (1ul)
#define ATSAML21J17B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21J17B_BUFFER_ADDR             (0x20002000ul)
#define ATSAML21J17B_STACK_ADDR              (0x20004000ul)
#define ATSAML21J17B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21J16B_NAME                    "ATSAML21J16B"
#define ATSAML21J16B_CHIPID                  (0x10810011ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21J16B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21J16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21J16B_FLASH_PAGES             (1024ul)
#define ATSAML21J16B_FLASH_PLANES            (1ul)
#define ATSAML21J16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21J16B_BUFFER_ADDR             (0x20001000ul)
#define ATSAML21J16B_STACK_ADDR              (0x20002000ul)
#define ATSAML21J16B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21G18B_NAME                    "ATSAML21G18B"
#define ATSAML21G18B_CHIPID                  (0x10810014ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21G18B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21G18B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21G18B_FLASH_PAGES             (4096ul)
#define ATSAML21G18B_FLASH_PLANES            (1ul)
#define ATSAML21G18B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21G18B_BUFFER_ADDR             (0x20004000ul)
#define ATSAML21G18B_STACK_ADDR              (0x20008000ul)
#define ATSAML21G18B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21G17B_NAME                    "ATSAML21G17B"
#define ATSAML21G17B_CHIPID                  (0x10810015ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21G17B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21G17B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21G17B_FLASH_PAGES             (2048ul)
#define ATSAML21G17B_FLASH_PLANES            (1ul)
#define ATSAML21G17B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21G17B_BUFFER_ADDR             (0x20002000ul)
#define ATSAML21G17B_STACK_ADDR              (0x20004000ul)
#define ATSAML21G17B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21G16B_NAME                    "ATSAML21G16B"
#define ATSAML21G16B_CHIPID                  (0x10810016ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21G16B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21G16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21G16B_FLASH_PAGES             (1024ul)
#define ATSAML21G16B_FLASH_PLANES            (1ul)
#define ATSAML21G16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21G16B_BUFFER_ADDR             (0x20001000ul)
#define ATSAML21G16B_STACK_ADDR              (0x20002000ul)
#define ATSAML21G16B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21E18B_NAME                    "ATSAML21E18B"
#define ATSAML21E18B_CHIPID                  (0x10810019ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21E18B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21E18B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21E18B_FLASH_PAGES             (4096ul)
#define ATSAML21E18B_FLASH_PLANES            (1ul)
#define ATSAML21E18B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21E18B_BUFFER_ADDR             (0x20004000ul)
#define ATSAML21E18B_STACK_ADDR              (0x20008000ul)
#define ATSAML21E18B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21E17B_NAME                    "ATSAML21E17B"
#define ATSAML21E17B_CHIPID                  (0x1081001Aul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21E17B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21E17B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21E17B_FLASH_PAGES             (2048ul)
#define ATSAML21E17B_FLASH_PLANES            (1ul)
#define ATSAML21E17B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21E17B_BUFFER_ADDR             (0x20002000ul)
#define ATSAML21E17B_STACK_ADDR              (0x20004000ul)
#define ATSAML21E17B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21E16B_NAME                    "ATSAML21E16B"
#define ATSAML21E16B_CHIPID                  (0x1081001Bul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21E16B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21E16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21E16B_FLASH_PAGES             (1024ul)
#define ATSAML21E16B_FLASH_PLANES            (1ul)
#define ATSAML21E16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21E16B_BUFFER_ADDR             (0x20001000ul)
#define ATSAML21E16B_STACK_ADDR              (0x20002000ul)
#define ATSAML21E16B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAML21E15B_NAME                    "ATSAML21E15B"
#define ATSAML21E15B_CHIPID                  (0x1081001Cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAML21E15B_FLASH_BASE              (0x00000000ul + ATSAML_BOOTLOADER_SIZE)
#define ATSAML21E15B_FLASH_PAGE_SIZE         (64ul)
#define ATSAML21E15B_FLASH_PAGES             (512ul)
#define ATSAML21E15B_FLASH_PLANES            (1ul)
#define ATSAML21E15B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAML21E15B_BUFFER_ADDR             (0x20000800ul)
#define ATSAML21E15B_STACK_ADDR              (0x20001000ul)
#define ATSAML21E15B_NVMCTRL_BASE            (0x41004000ul)

/* SAMC21 */
#define ATSAMC21J18A_NAME                    "ATSAMC21J18A"
#define ATSAMC21J18A_CHIPID                  (0x11010000ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21J18A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21J18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21J18A_FLASH_PAGES             (4096ul)
#define ATSAMC21J18A_FLASH_PLANES            (1ul)
#define ATSAMC21J18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21J18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMC21J18A_STACK_ADDR              (0x20008000ul)
#define ATSAMC21J18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21J17A_NAME                    "ATSAMC21J17A"
#define ATSAMC21J17A_CHIPID                  (0x11010001ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21J17A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21J17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21J17A_FLASH_PAGES             (2048ul)
#define ATSAMC21J17A_FLASH_PLANES            (1ul)
#define ATSAMC21J17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21J17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMC21J17A_STACK_ADDR              (0x20004000ul)
#define ATSAMC21J17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21J16A_NAME                    "ATSAMC21J16A"
#define ATSAMC21J16A_CHIPID                  (0x11010002ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21J16A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21J16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21J16A_FLASH_PAGES             (1024ul)
#define ATSAMC21J16A_FLASH_PLANES            (1ul)
#define ATSAMC21J16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21J16A_BUFFER_ADDR             (0x20001000ul)
#define ATSAMC21J16A_STACK_ADDR              (0x20002000ul)
#define ATSAMC21J16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21J15A_NAME                    "ATSAMC21J15A"
#define ATSAMC21J15A_CHIPID                  (0x11010003ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21J15A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21J15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21J15A_FLASH_PAGES             (512ul)
#define ATSAMC21J15A_FLASH_PLANES            (1ul)
#define ATSAMC21J15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21J15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMC21J15A_STACK_ADDR              (0x20001000ul)
#define ATSAMC21J15A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21G18A_NAME                    "ATSAMC21G18A"
#define ATSAMC21G18A_CHIPID                  (0x11010005ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21G18A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21G18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21G18A_FLASH_PAGES             (4096ul)
#define ATSAMC21G18A_FLASH_PLANES            (1ul)
#define ATSAMC21G18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21G18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMC21G18A_STACK_ADDR              (0x20008000ul)
#define ATSAMC21G18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21G17A_NAME                    "ATSAMC21G17A"
#define ATSAMC21G17A_CHIPID                  (0x11010006ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21G17A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21G17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21G17A_FLASH_PAGES             (2048ul)
#define ATSAMC21G17A_FLASH_PLANES            (1ul)
#define ATSAMC21G17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21G17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMC21G17A_STACK_ADDR              (0x20004000ul)
#define ATSAMC21G17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21G16A_NAME                    "ATSAMC21G16A"
#define ATSAMC21G16A_CHIPID                  (0x11010007ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21G16A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21G16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21G16A_FLASH_PAGES             (1024ul)
#define ATSAMC21G16A_FLASH_PLANES            (1ul)
#define ATSAMC21G16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21G16A_BUFFER_ADDR             (0x20001000ul)
#define ATSAMC21G16A_STACK_ADDR              (0x20002000ul)
#define ATSAMC21G16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21G15A_NAME                    "ATSAMC21G15A"
#define ATSAMC21G15A_CHIPID                  (0x11010008ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21G15A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21G15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21G15A_FLASH_PAGES             (512ul)
#define ATSAMC21G15A_FLASH_PLANES            (1ul)
#define ATSAMC21G15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21G15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMC21G15A_STACK_ADDR              (0x20001000ul)
#define ATSAMC21G15A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21E18A_NAME                    "ATSAMC21E18A"
#define ATSAMC21E18A_CHIPID                  (0x1101000aul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21E18A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21E18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21E18A_FLASH_PAGES             (4096ul)
#define ATSAMC21E18A_FLASH_PLANES            (1ul)
#define ATSAMC21E18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21E18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMC21E18A_STACK_ADDR              (0x20008000ul)
#define ATSAMC21E18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21E17A_NAME                    "ATSAMC21E17A"
#define ATSAMC21E17A_CHIPID                  (0x1101000bul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21E17A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21E17A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21E17A_FLASH_PAGES             (2048ul)
#define ATSAMC21E17A_FLASH_PLANES            (1ul)
#define ATSAMC21E17A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21E17A_BUFFER_ADDR             (0x20002000ul)
#define ATSAMC21E17A_STACK_ADDR              (0x20004000ul)
#define ATSAMC21E17A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21E16A_NAME                    "ATSAMC21E16A"
#define ATSAMC21E16A_CHIPID                  (0x1101000cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21E16A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21E16A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21E16A_FLASH_PAGES             (1024ul)
#define ATSAMC21E16A_FLASH_PLANES            (1ul)
#define ATSAMC21E16A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21E16A_BUFFER_ADDR             (0x20001000ul)
#define ATSAMC21E16A_STACK_ADDR              (0x20002000ul)
#define ATSAMC21E16A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMC21E15A_NAME                    "ATSAMC21E15A"
#define ATSAMC21E15A_CHIPID                  (0x1101000dul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMC21E15A_FLASH_BASE              (0x00000000ul + ATSAMC_BOOTLOADER_SIZE)
#define ATSAMC21E15A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMC21E15A_FLASH_PAGES             (512ul)
#define ATSAMC21E15A_FLASH_PLANES            (1ul)
#define ATSAMC21E15A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMC21E15A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMC21E15A_STACK_ADDR              (0x20001000ul)
#define ATSAMC21E15A_NVMCTRL_BASE            (0x41004000ul)

/* SAMD11 */
#define ATSAMD11D14AM_NAME                    "ATSAMD11D14AM" // 24-pin QFN
#define ATSAMD11D14AM_CHIPID                  (0x10030000ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD11D14AM_FLASH_BASE              (0x00000000ul + BOOTLOADER_SIZE_4KB)
#define ATSAMD11D14AM_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD11D14AM_FLASH_PAGES             (256ul)
#define ATSAMD11D14AM_FLASH_PLANES            (1ul)
#define ATSAMD11D14AM_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD11D14AM_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD11D14AM_STACK_ADDR              (0x20001000ul)
#define ATSAMD11D14AM_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD11D14AS_NAME                    "ATSAMD11D14AS" // 20-pin SOIC
#define ATSAMD11D14AS_CHIPID                  (0x10030003ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD11D14AS_FLASH_BASE              (0x00000000ul + BOOTLOADER_SIZE_4KB)
#define ATSAMD11D14AS_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD11D14AS_FLASH_PAGES             (256ul)
#define ATSAMD11D14AS_FLASH_PLANES            (1ul)
#define ATSAMD11D14AS_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD11D14AS_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD11D14AS_STACK_ADDR              (0x20001000ul)
#define ATSAMD11D14AS_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD11C14A_NAME                    "ATSAMD11C14A"  // 14-pin SOIC
#define ATSAMD11C14A_CHIPID                  (0x10030006ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD11C14A_FLASH_BASE              (0x00000000ul + BOOTLOADER_SIZE_4KB)
#define ATSAMD11C14A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD11C14A_FLASH_PAGES             (256ul)
#define ATSAMD11C14A_FLASH_PLANES            (1ul)
#define ATSAMD11C14A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD11C14A_BUFFER_ADDR             (0x20000800ul)
#define ATSAMD11C14A_STACK_ADDR              (0x20001000ul)
#define ATSAMD11C14A_NVMCTRL_BASE            (0x41004000ul)

/* SAMR21 */
#define ATSAMR21E18A_NAME                    "ATSAMR21E18A"
#define ATSAMR21E18A_CHIPID                  (0x1001001cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR21E18A_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR21E18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR21E18A_FLASH_PAGES             (4096ul)
#define ATSAMR21E18A_FLASH_PLANES            (1ul)
#define ATSAMR21E18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR21E18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR21E18A_STACK_ADDR              (0x20008000ul)
#define ATSAMR21E18A_NVMCTRL_BASE            (0x41004000ul)


#endif // _DEVICES_H_
