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
 
#ifndef __FUSIONEE_H__
#define __FUSIONEE_H__

typedef struct {
  int fusion_id;
} Fusionee;

Fusionee *fusionee_new (void);
void      fusionee_destroy (Fusionee *fusionee);



#endif
