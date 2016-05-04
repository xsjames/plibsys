/*
 * Copyright (C) 2010-2016 Alexander Saprykin <xelfium@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/* SHA1 interface implementation for #PCryptoHash */

#if !defined (__PLIBSYS_H_INSIDE__) && !defined (PLIBSYS_COMPILATION)
#  error "Header files shouldn't be included directly, consider using <plibsys.h> instead."
#endif

#ifndef __PCRYPTOHASHSHA1_H__
#define __PCRYPTOHASHSHA1_H__

#include "ptypes.h"
#include "pmacros.h"

typedef struct _PHashSHA1 PHashSHA1;

P_BEGIN_DECLS

PHashSHA1 *	__p_sha1_new	(void);
void		__p_sha1_update	(PHashSHA1 *ctx, const puchar *data, psize len);
void		__p_sha1_finish	(PHashSHA1 *ctx);
const puchar *	__p_sha1_digest	(PHashSHA1 *ctx);
void		__p_sha1_reset	(PHashSHA1 *ctx);
void		__p_sha1_free	(PHashSHA1 *ctx);

P_END_DECLS

#endif /* __PCRYPTOHASHSHA1_H__ */
