/*
License: 5G-MAG Public License (v1.0)
Author: Dev Audsin
Copyright: (C) 2022 British Broadcasting Corporation

For full license terms please see the LICENSE file distributed with this
program. If this file is missing then the license can be retrieved from
https://drive.google.com/file/d/1cinCiA778IErENZ3JN52VFW-1ffHpx7Z/view
 */

#ifndef MSAF_EVENT_H
#define MSAF_EVENT_H

#include "ogs-proto.h"
#include "ogs-sbi.h"
#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct msaf_sess_s msaf_sess_t;

typedef enum {
    MSAF_EVENT_BASE = OGS_MAX_NUM_OF_PROTO_EVENT,

    MSAF_EVENT_SBI_LOCAL,

    MAX_NUM_OF_MSAF_EVENT,

} msaf_event_e;

typedef enum {
    MSAF_SBI_SERVER ,
    MSAF_M1_SERVER,
    MSAF_M5_SERVER,
    MSAF_MAF_MGMT_SERVER,

} msaf_server_type_e;

typedef struct msaf_application_server_state_node_s msaf_application_server_state_node_t;

typedef struct purge_resource_id_node_s purge_resource_id_node_t;

typedef struct msaf_event_s {
    ogs_event_t h;
    int local_id;
    msaf_application_server_state_node_t *application_server_state;
    purge_resource_id_node_t *purge_node;
    ogs_sbi_message_t *message;


    ogs_pkbuf_t *pkbuf;

    struct {
        ogs_sbi_service_type_e service_type;
        void *data;
        ogs_sbi_request_t *(*build)(msaf_sess_t *sess, void *data);
    } local;

    msaf_sess_t *sess;
} msaf_event_t;

OGS_STATIC_ASSERT(OGS_EVENT_SIZE >= sizeof(msaf_event_t));

extern const char *msaf_event_get_name(msaf_event_t *e);
extern int check_event_addresses(msaf_event_t *e, ogs_sockaddr_t *sockaddr_v4, ogs_sockaddr_t *sockaddr_v6);


#ifdef __cplusplus
}
#endif

#endif /* MSAF_EVENT_H */
