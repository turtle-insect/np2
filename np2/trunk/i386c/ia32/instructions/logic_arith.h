/*	$Id: logic_arith.h,v 1.1 2003/12/08 00:55:32 yui Exp $	*/

/*
 * Copyright (c) 2003 NONAKA Kimihiro
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef	IA32_CPU_INSTRUCTION_LOGIC_ARITH_H__
#define	IA32_CPU_INSTRUCTION_LOGIC_ARITH_H__

#ifdef __cplusplus
extern "C" {
#endif

/*
 * AND
 */
void AND_EbGb(void);
void AND_EwGw(void);
void AND_EdGd(void);
void AND_GbEb(void);
void AND_GwEw(void);
void AND_GdEd(void);
void AND_ALIb(void);
void AND_AXIw(void);
void AND_EAXId(void);
void AND_EbIb(BYTE *);
void AND_EwIx(WORD *, DWORD);
void AND_EdIx(DWORD *, DWORD);
void AND_EbIb_ext(DWORD);
void AND_EwIx_ext(DWORD, DWORD);
void AND_EdIx_ext(DWORD, DWORD);

/*
 * OR
 */
void OR_EbGb(void);
void OR_EwGw(void);
void OR_EdGd(void);
void OR_GbEb(void);
void OR_GwEw(void);
void OR_GdEd(void);
void OR_ALIb(void);
void OR_AXIw(void);
void OR_EAXId(void);
void OR_EbIb(BYTE *);
void OR_EwIx(WORD *, DWORD);
void OR_EdIx(DWORD *, DWORD);
void OR_EbIb_ext(DWORD);
void OR_EwIx_ext(DWORD, DWORD);
void OR_EdIx_ext(DWORD, DWORD);

/*
 * XOR
 */
void XOR_EbGb(void);
void XOR_EwGw(void);
void XOR_EdGd(void);
void XOR_GbEb(void);
void XOR_GwEw(void);
void XOR_GdEd(void);
void XOR_ALIb(void);
void XOR_AXIw(void);
void XOR_EAXId(void);
void XOR_EbIb(BYTE *);
void XOR_EwIx(WORD *, DWORD);
void XOR_EdIx(DWORD *, DWORD);
void XOR_EbIb_ext(DWORD);
void XOR_EwIx_ext(DWORD, DWORD);
void XOR_EdIx_ext(DWORD, DWORD);

/*
 * NOT
 */
void NOT_Eb(DWORD op);
void NOT_Ew(DWORD op);
void NOT_Ed(DWORD op);

#ifdef __cplusplus
}
#endif

#endif	/* IA32_CPU_INSTRUCTION_LOGIC_ARITH_H__ */
