/**
 * Copyright (C) Mellanox Technologies Ltd. 2001-2014.  ALL RIGHTS RESERVED.
 *
 * See file LICENSE for terms.
 */

#ifndef UD_VERBS_H
#define UD_VERBS_H

#include <uct/ib/base/ib_verbs.h>

#include <uct/ib/ud/base/ud_iface.h>
#include <uct/ib/ud/base/ud_ep.h>
#include <uct/ib/ud/base/ud_def.h>


typedef struct {
    uct_ud_ep_t          super;
    struct ibv_ah       *ah;
} uct_ud_verbs_ep_t;

typedef struct {
    uct_ud_iface_t          super;
    struct {
        struct ibv_sge      sge[UCT_UD_MAX_SGE];
        struct ibv_send_wr  wr_inl;
        struct ibv_send_wr  wr_skb;
    } tx;
} uct_ud_verbs_iface_t;


ucs_status_t uct_ud_verbs_ep_connect_to_ep(uct_ep_h tl_ep, const struct sockaddr *addr);


#endif

