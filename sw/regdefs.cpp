////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.cpp
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
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include "regdefs.h"

const	REGNAME	raw_bregs[] = {
	{ R_STREAMSINK_BEATS  ,	"BEATS"      	},
	{ R_STREAMSINK_PACKETS,	"PACKETS"    	},
	{ R_STREAMSINK_CLOCKS ,	"CLOCKS"     	},
	{ R_AXIDMACTRL        ,	"AXIDMACTRL" 	},
	{ R_AXIDMASRCLO       ,	"AXIDMASRCLO"	},
	{ R_AXIDMASRCHI       ,	"AXIDMASRCHI"	},
	{ R_AXIDMADSTLO       ,	"AXIDMADSTLO"	},
	{ R_AXIDMADSTHI       ,	"AXIDMADSTHI"	},
	{ R_AXIDMALENLO       ,	"AXIDMALENLO"	},
	{ R_AXIDMALENHI       ,	"AXIDMALENHI"	},
	{ R_MM2SCTRL          ,	"MM2SCTRL"   	},
	{ R_MM2SADDRLO        ,	"MM2SADDRLO" 	},
	{ R_MM2SADDRHI        ,	"MM2SADDRHI" 	},
	{ R_MM2SLENLO         ,	"MM2SLENLO"  	},
	{ R_MM2SLENHI         ,	"MM2SLENHI"  	},
	{ R_S2MMCTRL          ,	"S2MMCTRL"   	},
	{ R_S2MMADDRLO        ,	"S2MMADDRLO" 	},
	{ R_S2MMADDRHI        ,	"S2MMADDRHI" 	},
	{ R_S2MMLENLO         ,	"S2MMLENLO"  	},
	{ R_S2MMLENHI         ,	"S2MMLENHI"  	},
	{ R_AXIRAM            ,	"AXIRAM"     	},
	{ R_AXIRAM            ,	"RAM"        	}
};

// REGSDEFS.CPP.INSERT for any bus masters
// And then from the peripherals
// And finally any master REGS.CPP.INSERT tags
#define	RAW_NREGS	(sizeof(raw_bregs)/sizeof(bregs[0]))

const	REGNAME		*bregs = raw_bregs;
const	int	NREGS = RAW_NREGS;

unsigned	addrdecode(const char *v) {
	if (isalpha(v[0])) {
		for(int i=0; i<NREGS; i++)
			if (strcasecmp(v, bregs[i].m_name)==0)
				return bregs[i].m_addr;
		fprintf(stderr, "Unknown register: %s\n", v);
		exit(-2);
	} else
		return strtoul(v, NULL, 0);
}

const	char *addrname(const unsigned v) {
	for(int i=0; i<NREGS; i++)
		if (bregs[i].m_addr == v)
			return bregs[i].m_name;
	return NULL;
}

