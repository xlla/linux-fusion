/*
 *	Fusion Kernel Module
 *
 *	(c) Copyright 2002  convergence integrated media GmbH
 *
 *      Written by Denis Oliver Kropp <dok@directfb.org>
 *
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 */

#ifndef __FUSION__FIFO_H__
#define __FUSION__FIFO_H__

#include "types.h"
#include "list.h"

typedef struct {
  FusionLink *first;
  FusionLink *last;

  int         count;
} FusionFifo;

void        fusion_fifo_put   (FusionFifo *fifo,
                               FusionLink *link);

FusionLink *fusion_fifo_get   (FusionFifo *fifo);

int         fusion_fifo_count (FusionFifo *fifo);

//#define fusion_list_foreach(link, list)  for (link = list; link; link = link->next)

#endif /* __FUSION__LIST_H__ */

