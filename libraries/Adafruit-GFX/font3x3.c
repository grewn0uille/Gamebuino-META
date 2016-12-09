/*
 * (C) Copyright 2014 Aurélien Rodot. All rights reserved.
 *
 * This file is part of the Gamebuino Library (http://gamebuino.com)
 *
 * The Gamebuino Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef FONT3x3_C
#define FONT3x3_C

#include <avr/io.h>
#include <avr/pgmspace.h> 

//standard ascii 3x3font
static const uint8_t font3x3[] PROGMEM = {
	3,3, //width and height
    0x07, 0x05, 0x07, // 0
    0x05, 0x04, 0x05, // 1
    0x05, 0x04, 0x05, // 2
    0x03, 0x06, 0x03, // 3
    0x02, 0x07, 0x02, // 4
    0x02, 0x01, 0x02, // 5
    0x02, 0x03, 0x02, // 6
    0x0E, 0x09, 0x0E, // 7
    0x0E, 0x0D, 0x0E, // 8
    0x0E, 0x0F, 0x0E, // 9
    0x07, 0x05, 0x07, // 10
    0x05, 0x03, 0x07, // 11
    0x05, 0x0F, 0x05, // 12
    0x07, 0x05, 0x07, // 13
    0x06, 0x07, 0x01, // 14
    0x02, 0x05, 0x02, // 15
    0x00, 0x07, 0x02, // 16
    0x02, 0x07, 0x00, // 17
    0x02, 0x07, 0x02, // 18
    0x00, 0x02, 0x07, // 19
    0x02, 0x00, 0x07, // 20
    0x06, 0x03, 0x06, // 21
    0x07, 0x07, 0x02, // 22
    0x02, 0x05, 0x05, // 23
    0x02, 0x01, 0x02, // 24
    0x02, 0x04, 0x02, // 25
    0x00, 0x05, 0x02, // 26
    0x02, 0x05, 0x00, // 27
    0x06, 0x07, 0x05, // 28
    0x05, 0x07, 0x05, // 29
    0x02, 0x03, 0x02, // 30
    0x02, 0x06, 0x02, // 31
    0x00, 0x00, 0x00, // 32
    0x00, 0x0B, 0x00, // 33
    0x03, 0x00, 0x03, // 34
    0x07, 0x05, 0x07, // 35
    0x04, 0x07, 0x01, // 36
    0x05, 0x02, 0x05, // 37
    0x07, 0x07, 0x04, // 38
    0x00, 0x03, 0x00, // 39
    0x00, 0x07, 0x05, // 40
    0x05, 0x07, 0x00, // 41
    0x05, 0x00, 0x05, // 42
    0x02, 0x07, 0x02, // 43
    0x00, 0x0C, 0x00, // 44
    0x02, 0x02, 0x02, // 45
    0x00, 0x04, 0x00, // 46
    0x04, 0x02, 0x01, // 47
    0x07, 0x05, 0x07, // 48
    0x05, 0x07, 0x04, // 49
    0x01, 0x07, 0x04, // 50
    0x05, 0x07, 0x02, // 51
    0x03, 0x02, 0x07, // 52
    0x04, 0x07, 0x01, // 53
    0x07, 0x06, 0x06, // 54
    0x01, 0x01, 0x07, // 55
    0x07, 0x07, 0x07, // 56
    0x03, 0x03, 0x07, // 57
    0x00, 0x05, 0x00, // 58
    0x00, 0x0D, 0x00, // 59
    0x02, 0x05, 0x00, // 60
    0x05, 0x05, 0x05, // 61
    0x00, 0x05, 0x02, // 62
    0x01, 0x07, 0x03, // 63
    0x0F, 0x09, 0x03, // 64
    0x06, 0x03, 0x06, // 65
    0x07, 0x07, 0x02, // 66
    0x02, 0x05, 0x05, // 67
    0x07, 0x07, 0x02, // 68
    0x07, 0x07, 0x05, // 69
    0x07, 0x03, 0x01, // 70
    0x07, 0x05, 0x06, // 71
    0x07, 0x02, 0x07, // 72
    0x05, 0x07, 0x05, // 73
    0x04, 0x04, 0x03, // 74
    0x07, 0x02, 0x05, // 75
    0x07, 0x04, 0x04, // 76
    0x07, 0x03, 0x07, // 77
    0x07, 0x01, 0x06, // 78
    0x07, 0x05, 0x07, // 79
    0x07, 0x03, 0x03, // 80
    0x07, 0x05, 0x03, // 81
    0x07, 0x03, 0x06, // 82
    0x04, 0x07, 0x01, // 83
    0x01, 0x07, 0x01, // 84
    0x07, 0x04, 0x07, // 85
    0x03, 0x04, 0x03, // 86
    0x07, 0x06, 0x07, // 87
    0x05, 0x02, 0x05, // 88
    0x01, 0x06, 0x01, // 89
    0x01, 0x07, 0x04, // 90
    0x00, 0x07, 0x05, // 91
    0x01, 0x02, 0x04, // 92
    0x05, 0x07, 0x00, // 93
    0x02, 0x01, 0x02, // 94
    0x08, 0x08, 0x08, // 95
    0x00, 0x03, 0x00, // 96
    0x06, 0x03, 0x06, // 97
    0x07, 0x07, 0x02, // 98
    0x02, 0x05, 0x05, // 99
    0x07, 0x05, 0x02, // 100
    0x07, 0x07, 0x05, // 101
    0x07, 0x03, 0x01, // 102
    0x07, 0x05, 0x06, // 103
    0x07, 0x02, 0x07, // 104
    0x05, 0x07, 0x05, // 105
    0x04, 0x04, 0x03, // 106
    0x07, 0x02, 0x05, // 107
    0x07, 0x04, 0x04, // 108
    0x07, 0x03, 0x07, // 109
    0x07, 0x01, 0x06, // 110
    0x07, 0x05, 0x07, // 111
    0x07, 0x03, 0x03, // 112
    0x07, 0x05, 0x03, // 113
    0x07, 0x03, 0x06, // 114
    0x04, 0x07, 0x01, // 115
    0x01, 0x07, 0x01, // 116
    0x07, 0x04, 0x07, // 117
    0x03, 0x04, 0x03, // 118
    0x07, 0x06, 0x07, // 119
    0x05, 0x02, 0x05, // 120
    0x01, 0x06, 0x01, // 121
    0x01, 0x07, 0x04, // 122
    0x02, 0x07, 0x05, // 123
    0x00, 0x07, 0x00, // 124
    0x05, 0x07, 0x02, // 125
    0x06, 0x02, 0x03, // 126
    0x07, 0x05, 0x07 // 127
};
	
#endif