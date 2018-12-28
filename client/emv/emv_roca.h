
// ROCA (CVE-2017-15361) fingerprint checker.
// Written by Rob Stradling (based on https://github.com/crocs-muni/roca/blob/master/roca/detect.py)
// Copyright (C) 2017 COMODO CA Limited
// modified 2018 iceman  (dropped openssl bignum,  now use mbedtls lib)
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//-----------------------------------------------------------------------------
// EMV roca commands
//-----------------------------------------------------------------------------

#ifndef EMV_ROCA_H__
#define EMV_ROCA_H__

#include <stdbool.h>
#include <string.h>
#include "mbedtls/bignum.h"
#include "util.h"

#define ROCA_PRINTS_LENGTH	17

void rocacheck_init(void);
void rocacheck_cleanup(void);
int bitand_is_zero(	mbedtls_mpi* a, mbedtls_mpi* b );

extern bool emv_rocacheck( const unsigned char *buf, size_t buflen );

#endif

