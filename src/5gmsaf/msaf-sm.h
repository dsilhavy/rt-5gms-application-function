/*
License: 5G-MAG Public License (v1.0)
Author: Dev Audsin
Copyright: (C) 2022 British Broadcasting Corporation

For full license terms please see the LICENSE file distributed with this
program. If this file is missing then the license can be retrieved from
https://drive.google.com/file/d/1cinCiA778IErENZ3JN52VFW-1ffHpx7Z/view
 */

#ifndef MSAF_SM_H
#define MSAF_SM_H

#include "event.h"
#include "ContentProtocolsDiscovery_body.h"

#ifdef __cplusplus
extern "C" {
#endif

void msaf_state_initial(ogs_fsm_t *s, msaf_event_t *e);
void msaf_state_final(ogs_fsm_t *s, msaf_event_t *e);
void msaf_state_functional(ogs_fsm_t *s, msaf_event_t *e);
void msaf_state_exception(ogs_fsm_t *s, msaf_event_t *e);

void msaf_m1_state_initial(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m1_state_final(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m1_state_functional(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m1_state_exception(ogs_fsm_t *s, msaf_event_t *e);

void msaf_m5_state_initial(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m5_state_final(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m5_state_functional(ogs_fsm_t *s, msaf_event_t *e);
void msaf_m5_state_exception(ogs_fsm_t *s, msaf_event_t *e);

void msaf_maf_mgmt_state_initial(ogs_fsm_t *s, msaf_event_t *e);
void msaf_maf_mgmt_state_final(ogs_fsm_t *s, msaf_event_t *e);
void msaf_maf_mgmt_state_functional(ogs_fsm_t *s, msaf_event_t *e);
void msaf_maf_mgmt_state_exception(ogs_fsm_t *s, msaf_event_t *e);

#define msaf_sm_debug(__pe) \
    ogs_debug("%s(): %s", __func__, msaf_event_get_name(__pe))

#ifdef __cplusplus
}
#endif

#endif
