// ----------------------------------------------------------------------------
//	ascii.cxx  --  ASCII table
//
// Copyright (C) 2006
//		Dave Freese, W1HKJ
//
// This file is part of fldigi.  Adapted from code contained in gmfsk source code
// distribution.
//  gmfsk Copyright (C) 2001, 2002, 2003
//  Tomi Manninen (oh2bns@sral.fi)
//
// This file is part of fldigi.
//
// Fldigi is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Fldigi is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with fldigi.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#include <config.h>

#include "ascii.h"

const char *ascii[256] = {
	"", "", "", "",
	"", "", "", "",
	"\b",    "\t",    "\n",    "",
	"",  "\r",    "",  "",
	"", "", "", "",
	"", "", "", "",
	"", "", "", "",
	"", "", "", "",
	" ",     "!",     "\"",    "#",
	"$",     "%",     "&",     "\'",
	"(",     ")",     "*",     "+",
	",",     "-",     ".",     "/",
	"0",     "1",     "2",     "3",
	"4",     "5",     "6",     "7",
	"8",     "9",     ":",     ";",
	"<",     "=",     ">",     "?",
	"@",     "A",     "B",     "C",
	"D",     "E",     "F",     "G",
	"H",     "I",     "J",     "K",
	"L",     "M",     "N",     "O",
	"P",     "Q",     "R",     "S",
	"T",     "U",     "V",     "W",
	"X",     "Y",     "Z",     "[",
	"\\",    "]",     "^",     "_",
	"`",     "a",     "b",     "c",
	"d",     "e",     "f",     "g",
	"h",     "i",     "j",     "k",
	"l",     "m",     "n",     "o",
	"p",     "q",     "r",     "s",
	"t",     "u",     "v",     "w",
	"x",     "y",     "z",     "{",
	"|",     "}",     "~",     "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""
};

const char *ascii2[256] = {
	"<NUL>", "<SOH>", "<STX>", "<ETX>",
	"<EOT>", "<ENQ>", "<ACK>", "<BEL>",
	"\b",    "\t",    "\n",    "<VT>",
	"<FF>",  "\r",    "<SO>",  "<SI>",
	"<DLE>", "<DC1>", "<DC2>", "<DC3>",
	"<DC4>", "<NAK>", "<SYN>", "<ETB>",
	"<CAN>", "<EM>",  "<SUB>", "<ESC>",
	"<FS>",  "<GS>",  "<RS>",  "<US>",
	" ",     "!",     "\"",    "#",
	"$",     "%",     "&",     "\'",
	"(",     ")",     "*",     "+",
	",",     "-",     ".",     "/",
	"0",     "1",     "2",     "3",
	"4",     "5",     "6",     "7",
	"8",     "9",     ":",     ";",
	"<",     "=",     ">",     "?",
	"@",     "A",     "B",     "C",
	"D",     "E",     "F",     "G",
	"H",     "I",     "J",     "K",
	"L",     "M",     "N",     "O",
	"P",     "Q",     "R",     "S",
	"T",     "U",     "V",     "W",
	"X",     "Y",     "Z",     "[",
	"\\",    "]",     "^",     "_",
	"`",     "a",     "b",     "c",
	"d",     "e",     "f",     "g",
	"h",     "i",     "j",     "k",
	"l",     "m",     "n",     "o",
	"p",     "q",     "r",     "s",
	"t",     "u",     "v",     "w",
	"x",     "y",     "z",     "{",
	"|",     "}",     "~",     "<DEL>",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-",
	"-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-"
};

const char *ascii3[256] = {
	"<NUL>", "<SOH>", "<STX>", "<ETX>", "<EOT>", "<ENQ>", "<ACK>", "<BEL>",
	"<BS>",  "<TAB>", "<LF>",  "<VT>", "<FF>",  "<CR>",  "<SO>",  "<SI>",
	"<DLE>", "<DC1>", "<DC2>", "<DC3>", "<DC4>", "<NAK>", "<SYN>", "<ETB>",
	"<CAN>", "<EM>",  "<SUB>", "<ESC>", "<FS>",  "<GS>",  "<RS>",  "<US>",
	" ",     "!",     "\"",    "#",     "$",     "%",     "&",     "\'",
	"(",     ")",     "*",     "+",     ",",     "-",     ".",     "/",
	"0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",
	"8",     "9",     ":",     ";",     "<",     "=",     ">",     "?",
	"@",     "A",     "B",     "C",     "D",     "E",     "F",     "G",
	"H",     "I",     "J",     "K",     "L",     "M",     "N",     "O",
	"P",     "Q",     "R",     "S",     "T",     "U",     "V",     "W",
	"X",     "Y",     "Z",     "[",     "\\",    "]",     "^",     "_",
	"`",     "a",     "b",     "c",     "d",     "e",     "f",     "g",
	"h",     "i",     "j",     "k",     "l",     "m",     "n",     "o",
	"p",     "q",     "r",     "s",     "t",     "u",     "v",     "w",
	"x",     "y",     "z",     "{",     "|",     "}",     "~",     "<DEL>",
	"<128>", "<129>", "<130>", "<131>", "<132>", "<133>", "<134>", "<135>",
	"<136>", "<137>", "<138>", "<139>", "<140>", "<141>", "<142>", "<143>",
	"<144>", "<145>", "<146>", "<147>", "<148>", "<149>", "<150>", "<151>",
	"<152>", "<153>", "<154>", "<155>", "<156>", "<157>", "<158>", "<159>",
	"<160>", "<161>", "<162>", "<163>", "<164>", "<165>", "<166>", "<167>",
	"<168>", "<169>", "<170>", "<171>", "<172>", "<173>", "<174>", "<175>",
	"<176>", "<177>", "<178>", "<179>", "<180>", "<181>", "<182>", "<183>",
	"<184>", "<185>", "<186>", "<187>", "<188>", "<189>", "<190>", "<191>",
	"<192>", "<193>", "<194>", "<195>", "<196>", "<197>", "<198>", "<199>",
	"<200>", "<201>", "<202>", "<203>", "<204>", "<205>", "<206>", "<207>",
	"<208>", "<209>", "<210>", "<211>", "<212>", "<213>", "<214>", "<215>",
	"<216>", "<217>", "<218>", "<219>", "<220>", "<221>", "<222>", "<223>",
	"<224>", "<225>", "<226>", "<227>", "<228>", "<229>", "<230>", "<231>",
	"<232>", "<233>", "<234>", "<235>", "<236>", "<237>", "<238>", "<239>",
	"<240>", "<241>", "<242>", "<243>", "<244>", "<245>", "<246>", "<247>",
	"<248>", "<249>", "<250>", "<251>", "<252>", "<253>", "<254>", "<255>" 
};
