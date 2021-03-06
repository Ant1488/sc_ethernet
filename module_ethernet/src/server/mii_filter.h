// Copyright (c) 2011, XMOS Ltd., All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

#ifndef __mii_filter_h__
#define __mii_filter_h__
#include "mii_queue.h"
#include "mii_malloc.h"

void one_port_filter(mii_mempool_t rx_mem,
                     const int mac[2],
                     REFERENCE_PARAM(mii_queue_t, internal_q),
                     streaming chanend c);

void two_port_filter(mii_packet_t buf[],
                     const int mac[2],
                     REFERENCE_PARAM(mii_queue_t,free_q),
                     REFERENCE_PARAM(mii_queue_t,internal_q),
                     REFERENCE_PARAM(mii_queue_t,q1),
                     REFERENCE_PARAM(mii_queue_t,q2),
                     streaming chanend c0,
                     streaming chanend c1);

#ifdef ETHERNET_COUNT_PACKETS
void ethernet_get_filter_counts(REFERENCE_PARAM(unsigned,address),
								REFERENCE_PARAM(unsigned,filter),
								REFERENCE_PARAM(unsigned,length));
#endif

#endif // __mii_filter_h__
