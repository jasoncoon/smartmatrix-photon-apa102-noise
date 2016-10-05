// Created from bdf2c Version 3, (c) 2009, 2010 by Lutz Sammer
//	License AGPLv3: GNU Affero General Public License version 3

// original public domain font source:
// http://www.opensource.apple.com/source/X11fonts/X11fonts-14/font-misc-misc/font-misc-misc-1.1.2/6x10.bdf

#include "MatrixFontCommon.h"

	/// character bitmap for each encoding
static const unsigned char __apple6x10_bitmap__[] = {
//   0 $00 'char0'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_X_X___,
	________,
	X___X___,
	________,
	X___X___,
	________,
	X_X_X___,
	________,
	________,
//  32 $20 'space'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  33 $21 'exclam'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	__X_____,
	________,
	________,
//  34 $22 'quotedbl'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	_X_X____,
	_X_X____,
	________,
	________,
	________,
	________,
	________,
	________,
//  35 $23 'numbersign'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	_X_X____,
	XXXXX___,
	_X_X____,
	XXXXX___,
	_X_X____,
	_X_X____,
	________,
	________,
//  36 $24 'dollar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_XXX____,
	X_X_____,
	_XXX____,
	__X_X___,
	_XXX____,
	__X_____,
	________,
	________,
//  37 $25 'percent'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X__X___,
	X_X_X___,
	_X_X____,
	__X_____,
	_X_X____,
	X_X_X___,
	X__X____,
	________,
	________,
//  38 $26 'ampersand'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	X_X_____,
	X_X_____,
	_X______,
	X_X_X___,
	X__X____,
	_XX_X___,
	________,
	________,
//  39 $27 'quotesingle'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
//  40 $28 'parenleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__X_____,
	_X______,
	_X______,
	_X______,
	__X_____,
	___X____,
	________,
	________,
//  41 $29 'parenright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	__X_____,
	___X____,
	___X____,
	___X____,
	__X_____,
	_X______,
	________,
	________,
//  42 $2a 'asterisk'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	X___X___,
	_X_X____,
	XXXXX___,
	_X_X____,
	X___X___,
	________,
	________,
	________,
//  43 $2b 'plus'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	________,
	________,
	________,
//  44 $2c 'comma'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	__XX____,
	__X_____,
	_X______,
	________,
//  45 $2d 'hyphen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	XXXXX___,
	________,
	________,
	________,
	________,
	________,
//  46 $2e 'period'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
//  47 $2f 'slash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	____X___,
	___X____,
	__X_____,
	_X______,
	X_______,
	X_______,
	________,
	________,
//  48 $30 'zero'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	________,
	________,
//  49 $31 'one'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_XX_____,
	X_X_____,
	__X_____,
	__X_____,
	__X_____,
	XXXXX___,
	________,
	________,
//  50 $32 'two'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	____X___,
	__XX____,
	_X______,
	X_______,
	XXXXX___,
	________,
	________,
//  51 $33 'three'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	__XX____,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  52 $34 'four'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__XX____,
	_X_X____,
	X__X____,
	XXXXX___,
	___X____,
	___X____,
	________,
	________,
//  53 $35 'five'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_XX____,
	XX__X___,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  54 $36 'six'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	_XXX____,
	________,
	________,
//  55 $37 'seven'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	___X____,
	__X_____,
	_X______,
	_X______,
	________,
	________,
//  56 $38 'eight'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	_XXX____,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  57 $39 'nine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	___X____,
	_XX_____,
	________,
	________,
//  58 $3a 'colon'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
//  59 $3b 'semicolon'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
	__XX____,
	__X_____,
	_X______,
	________,
//  60 $3c 'less'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	___X____,
	__X_____,
	_X______,
	__X_____,
	___X____,
	____X___,
	________,
	________,
//  61 $3d 'equal'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XXXXX___,
	________,
	XXXXX___,
	________,
	________,
	________,
	________,
//  62 $3e 'greater'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	__X_____,
	___X____,
	____X___,
	___X____,
	__X_____,
	_X______,
	________,
	________,
//  63 $3f 'question'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	___X____,
	__X_____,
	__X_____,
	________,
	__X_____,
	________,
	________,
//  64 $40 'at'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__XX___,
	X_X_X___,
	X_XX____,
	X_______,
	_XXX____,
	________,
	________,
//  65 $41 'A'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
//  66 $42 'B'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
//  67 $43 'C'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X_______,
	X___X___,
	_XXX____,
	________,
	________,
//  68 $44 'D'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
//  69 $45 'E'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
//  70 $46 'F'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
//  71 $47 'G'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X__XX___,
	X___X___,
	_XXX____,
	________,
	________,
//  72 $48 'H'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
//  73 $49 'I'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
//  74 $4a 'J'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXX___,
	___X____,
	___X____,
	___X____,
	___X____,
	X__X____,
	_XX_____,
	________,
	________,
//  75 $4b 'K'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X__X____,
	X_X_____,
	XX______,
	X_X_____,
	X__X____,
	X___X___,
	________,
	________,
//  76 $4c 'L'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
//  77 $4d 'M'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	XX_XX___,
	X_X_X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
//  78 $4e 'N'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	XX__X___,
	X_X_X___,
	X__XX___,
	X___X___,
	X___X___,
	________,
	________,
//  79 $4f 'O'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  80 $50 'P'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
//  81 $51 'Q'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X_X_X___,
	_XXX____,
	____X___,
	________,
//  82 $52 'R'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_X_____,
	X__X____,
	X___X___,
	________,
	________,
//  83 $53 'S'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	_XXX____,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  84 $54 'T'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
//  85 $55 'U'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  86 $56 'V'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	________,
	________,
//  87 $57 'W'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	X_X_X___,
	X_X_X___,
	XX_XX___,
	X___X___,
	________,
	________,
//  88 $58 'X'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	________,
	________,
//  89 $59 'Y'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
//  90 $5a 'Z'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	__X_____,
	_X______,
	X_______,
	XXXXX___,
	________,
	________,
//  91 $5b 'bracketleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_XXX____,
	________,
	________,
//  92 $5c 'backslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	_X______,
	__X_____,
	___X____,
	____X___,
	____X___,
	________,
	________,
//  93 $5d 'bracketright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	_XXX____,
	________,
	________,
//  94 $5e 'asciicircum'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
	________,
	________,
	________,
	________,
//  95 $5f 'underscore'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	XXXXX___,
	________,
//  96 $60 'grave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	___X____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  97 $61 'a'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
//  98 $62 'b'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	XX__X___,
	X_XX____,
	________,
	________,
//  99 $63 'c'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X_______,
	X___X___,
	_XXX____,
	________,
	________,
// 100 $64 'd'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	____X___,
	_XX_X___,
	X__XX___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 101 $65 'e'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 102 $66 'f'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X______,
	XXXX____,
	_X______,
	_X______,
	_X______,
	________,
	________,
// 103 $67 'g'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXXX___,
	X___X___,
	X___X___,
	_XXXX___,
	____X___,
	X___X___,
	_XXX____,
// 104 $68 'h'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 105 $69 'i'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 106 $6a 'j'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	________,
	___XX___,
	____X___,
	____X___,
	____X___,
	_X__X___,
	_X__X___,
	__XX____,
// 107 $6b 'k'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X___X___,
	X__X____,
	XXX_____,
	X__X____,
	X___X___,
	________,
	________,
// 108 $6c 'l'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 109 $6d 'm'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XX_X____,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	X___X___,
	________,
	________,
// 110 $6e 'n'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 111 $6f 'o'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 112 $70 'p'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	XX__X___,
	X_XX____,
	X_______,
	X_______,
// 113 $71 'q'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XX_X___,
	X__XX___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	____X___,
// 114 $72 'r'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X_XX____,
	XX__X___,
	X_______,
	X_______,
	X_______,
	________,
	________,
// 115 $73 's'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X_______,
	_XXX____,
	____X___,
	XXXX____,
	________,
	________,
// 116 $74 't'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	_X______,
	XXXX____,
	_X______,
	_X______,
	_X__X___,
	__XX____,
	________,
	________,
// 117 $75 'u'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 118 $76 'v'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	_X_X____,
	_X_X____,
	__X_____,
	________,
	________,
// 119 $77 'w'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X_X_X___,
	X_X_X___,
	_X_X____,
	________,
	________,
// 120 $78 'x'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
// 121 $79 'y'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
// 122 $7a 'z'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XXXXX___,
	___X____,
	__X_____,
	_X______,
	XXXXX___,
	________,
	________,
// 123 $7b 'braceleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___XX___,
	__X_____,
	___X____,
	_XX_____,
	___X____,
	__X_____,
	___XX___,
	________,
	________,
// 124 $7c 'bar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 125 $7d 'braceright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XX_____,
	___X____,
	__X_____,
	___XX___,
	__X_____,
	___X____,
	_XX_____,
	________,
	________,
// 126 $7e 'asciitilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X__X___,
	X_X_X___,
	X__X____,
	________,
	________,
	________,
	________,
	________,
	________,
// 160 $a0 'space'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 161 $a1 'exclamdown'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 162 $a2 'cent'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXXX___,
	X_X_____,
	X_X_____,
	X_X_____,
	_XXXX___,
	__X_____,
	________,
// 163 $a3 'sterling'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X______,
	XXX_____,
	_X______,
	_X__X___,
	X_XX____,
	________,
	________,
// 164 $a4 'currency'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_XXX____,
	_X_X____,
	_XXX____,
	X___X___,
	________,
	________,
// 165 $a5 'yen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	__X_____,
	________,
// 166 $a6 'brokenbar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 167 $a7 'section'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X_______,
	XXX_____,
	X__X____,
	_X__X___,
	__XXX___,
	____X___,
	_XXX____,
	________,
// 168 $a8 'dieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 169 $a9 'copyright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_X_X___,
	XX__X___,
	X_X_X___,
	X___X___,
	_XXX____,
	________,
	________,
// 170 $aa 'ordfeminine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXX___,
	_X__X___,
	_X_XX___,
	__X_X___,
	________,
	_XXXX___,
	________,
	________,
	________,
// 171 $ab 'guillemotleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	__X__X__,
	_X__X___,
	X__X____,
	_X__X___,
	__X__X__,
	________,
	________,
// 172 $ac 'logicalnot'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	_XXXX___,
	____X___,
	________,
	________,
	________,
	________,
// 173 $ad 'hyphen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	_XXXX___,
	________,
	________,
	________,
	________,
	________,
// 174 $ae 'registered'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	XXX_X___,
	XX__X___,
	XX__X___,
	X___X___,
	_XXX____,
	________,
	________,
// 175 $af 'macron'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	XXXXX___,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 176 $b0 'degree'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
// 177 $b1 'plusminus'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	XXXXX___,
	________,
	________,
// 178 $b2 'twosuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__XX____,
	_X__X___,
	___X____,
	__X_____,
	_XXXX___,
	________,
	________,
	________,
	________,
	________,
// 179 $b3 'threesuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_XXX____,
	____X___,
	__XX____,
	____X___,
	_XXX____,
	________,
	________,
	________,
	________,
	________,
// 180 $b4 'acute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 181 $b5 'mu'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X___X___,
	XX__X___,
	X_XX____,
	X_______,
	________,
// 182 $b6 'paragraph'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXXX___,
	XXX_X___,
	XXX_X___,
	_XX_X___,
	__X_X___,
	__X_X___,
	__X_X___,
	________,
	________,
// 183 $b7 'periodcentered'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	__X_____,
	________,
	________,
	________,
	________,
	________,
// 184 $b8 'cedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	___X____,
	__X_____,
// 185 $b9 'onesuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
	________,
	________,
	________,
// 186 $ba 'ordmasculine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	_XXXX___,
	________,
	________,
	________,
// 187 $bb 'guillemotright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X__X____,
	_X__X___,
	__X__X__,
	_X__X___,
	X__X____,
	________,
	________,
// 188 $bc 'onequarter'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XX______,
	_X______,
	_X______,
	XXX__X__,
	____XX__,
	___X_X__,
	__XXXX__,
	_____X__,
	________,
// 189 $bd 'onehalf'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XX______,
	_X______,
	_X______,
	XXX_X___,
	___X_X__,
	_____X__,
	____X___,
	___XXX__,
	________,
// 190 $be 'threequarters'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	XX______,
	__X_____,
	_X______,
	__X_____,
	XX__X___,
	___XX___,
	__X_X___,
	_XXXX___,
	____X___,
	________,
// 191 $bf 'questiondown'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	__X_____,
	__X_____,
	_X______,
	X___X___,
	_XXX____,
	________,
	________,
// 192 $c0 'Agrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 193 $c1 'Aacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 194 $c2 'Acircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 195 $c3 'Atilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X__X___,
	X_XX____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 196 $c4 'Adieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 197 $c5 'Aring'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 198 $c6 'AE'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXXX__,
	_X_X____,
	X__X____,
	X__XXX__,
	XXXX____,
	X__X____,
	X__XXX__,
	________,
	________,
// 199 $c7 'Ccedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X_______,
	X___X___,
	_XXX____,
	__X_____,
	_X______,
// 200 $c8 'Egrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 201 $c9 'Eacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 202 $ca 'Ecircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 203 $cb 'Edieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 204 $cc 'Igrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 205 $cd 'Iacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 206 $ce 'Icircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 207 $cf 'Idieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 208 $d0 'Eth'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	XXX_X___,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
// 209 $d1 'Ntilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	X___X___,
	XX__X___,
	X_X_X___,
	X__XX___,
	X___X___,
	X___X___,
	________,
	________,
// 210 $d2 'Ograve'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 211 $d3 'Oacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 212 $d4 'Ocircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 213 $d5 'Otilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 214 $d6 'Odieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 215 $d7 'multiply'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
// 216 $d8 'Oslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X__XX___,
	X__XX___,
	X_X_X___,
	XX__X___,
	XX__X___,
	_XXX____,
	________,
	________,
// 217 $d9 'Ugrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 218 $da 'Uacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 219 $db 'Ucircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 220 $dc 'Udieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 221 $dd 'Yacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 222 $de 'Thorn'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	XXXX____,
	X___X___,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
// 223 $df 'germandbls'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__X____,
	X_X_____,
	X__X____,
	X___X___,
	X_XX____,
	________,
	________,
// 224 $e0 'agrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 225 $e1 'aacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 226 $e2 'acircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 227 $e3 'atilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 228 $e4 'adieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 229 $e5 'aring'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	__X_____,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 230 $e6 'ae'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXXX___,
	___X_X__,
	_XXXXX__,
	X__X____,
	_XXXXX__,
	________,
	________,
// 231 $e7 'ccedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X_______,
	X___X___,
	_XXX____,
	__X_____,
	_X______,
// 232 $e8 'egrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 233 $e9 'eacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 234 $ea 'ecircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 235 $eb 'edieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 236 $ec 'igrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 237 $ed 'iacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X______,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 238 $ee 'icircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 239 $ef 'idieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 240 $f0 'eth'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XX______,
	__XX____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 241 $f1 'ntilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 242 $f2 'ograve'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 243 $f3 'oacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 244 $f4 'ocircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 245 $f5 'otilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 246 $f6 'odieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 247 $f7 'divide'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	________,
	XXXXX___,
	________,
	__X_____,
	________,
	________,
	________,
// 248 $f8 'oslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXXX___,
	X__XX___,
	X_X_X___,
	XX__X___,
	XXXX____,
	________,
	________,
// 249 $f9 'ugrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 250 $fa 'uacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 251 $fb 'ucircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 252 $fc 'udieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 253 $fd 'yacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__X_____,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
// 254 $fe 'thorn'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	X_______,
	XXXX____,
	X___X___,
	X___X___,
	X___X___,
	XXXX____,
	X_______,
	X_______,
// 255 $ff 'ydieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
};


	/// character encoding for each index entry
static const unsigned short __apple6x10_index__[] = {
	0,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
	256,
	257,
	258,
	259,
	260,
	261,
	262,
	263,
	264,
	265,
	266,
	267,
	268,
	269,
	270,
	271,
	272,
	273,
	274,
	275,
	276,
	277,
	278,
	279,
	280,
	281,
	282,
	283,
	284,
	285,
	286,
	287,
	288,
	289,
	290,
	291,
	292,
	293,
	294,
	295,
	296,
	297,
	298,
	299,
	300,
	301,
	302,
	303,
	304,
	305,
	306,
	307,
	308,
	309,
	310,
	311,
	312,
	313,
	314,
	315,
	316,
	317,
	318,
	319,

};

	/// bitmap font structure
const struct bitmap_font apple6x10 = {
	.Width = 6, .Height = 10,
	.Chars = 192,
	.Widths = 0,
	.Index = __apple6x10_index__,
	.Bitmap = __apple6x10_bitmap__,
};
