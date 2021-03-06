////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.h
//
// Project:	AXI DMA Check: A utility to measure AXI DMA speeds
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	/home/dan/work/rnd/opencores/autofpga/trunk/sw/autofpga /home/dan/work/rnd/opencores/autofpga/trunk/sw/autofpga -d autofpga.dbg -o ./ global.txt axibus.txt axiram.txt axidma.txt aximm2s.txt axis2mm.txt controlbus.txt streamsink.txt streamsrc.txt vibus.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2020-2021, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
#define	R_STREAMSINK_BEATS  	0x00000000	// 00000000, wbregs names: BEATS
#define	R_STREAMSINK_PACKETS	0x00000004	// 00000000, wbregs names: PACKETS
#define	R_STREAMSINK_CLOCKS 	0x00000008	// 00000000, wbregs names: CLOCKS
#define	R_AXIDMACTRL        	0x00000020	// 00000020, wbregs names: AXIDMACTRL
#define	R_AXIDMASRCLO       	0x00000028	// 00000020, wbregs names: AXIDMASRCLO
#define	R_AXIDMASRCHI       	0x0000002c	// 00000020, wbregs names: AXIDMASRCHI
#define	R_AXIDMADSTLO       	0x00000030	// 00000020, wbregs names: AXIDMADSTLO
#define	R_AXIDMADSTHI       	0x00000034	// 00000020, wbregs names: AXIDMADSTHI
#define	R_AXIDMALENLO       	0x00000038	// 00000020, wbregs names: AXIDMALENLO
#define	R_AXIDMALENHI       	0x0000003c	// 00000020, wbregs names: AXIDMALENHI
// AXI MM2S registers
#define	R_MM2SCTRL          	0x00000040	// 00000040, wbregs names: MM2SCTRL
#define	R_MM2SADDRLO        	0x00000048	// 00000040, wbregs names: MM2SADDRLO
#define	R_MM2SADDRHI        	0x0000004c	// 00000040, wbregs names: MM2SADDRHI
#define	R_MM2SLENLO         	0x00000058	// 00000040, wbregs names: MM2SLENLO
#define	R_MM2SLENHI         	0x0000005c	// 00000040, wbregs names: MM2SLENHI
#define	R_S2MMCTRL          	0x00000060	// 00000060, wbregs names: S2MMCTRL
#define	R_S2MMADDRLO        	0x00000070	// 00000060, wbregs names: S2MMADDRLO
#define	R_S2MMADDRHI        	0x00000074	// 00000060, wbregs names: S2MMADDRHI
#define	R_S2MMLENLO         	0x00000078	// 00000060, wbregs names: S2MMLENLO
#define	R_S2MMLENHI         	0x0000007c	// 00000060, wbregs names: S2MMLENHI
#define	R_AXIRAM            	0x01000000	// 01000000, wbregs names: AXIRAM, RAM


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
// @REGDEFS.H.DEFNS for peripherals
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters
// @REGDEFS.H.INSERT for peripherals
// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
