/*
 * License: 5G-MAG Public License (v1.0)
 * Copyright: (C) 2023 British Broadcasting Corporation
 *
 * For full license terms please see the LICENSE file distributed with this
 * program. If this file is missing then the license can be retrieved from
 * https://drive.google.com/file/d/1cinCiA778IErENZ3JN52VFW-1ffHpx7Z/view
*/

#ifndef __TESTS_BSF_TEST_LOCAL_H
#define __TESTS_BSF_TEST_LOCAL_H

#include "af/sbi-path.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    BSF_LOCAL_START = 0,	
    BSF_TEST_LOCAL_DISCOVER_AND_SEND,
    BSF_TEST_LOCAL_SEND_TO_PCF,

    MAX_NUM_OF_BSF_TEST_LOCAL,

} bsf_test_local_e;

extern const char *bsf_test_local_get_name(bsf_test_local_e typ);

#ifdef __cplusplus
}
#endif

#endif /* ifndef __TESTS_BSF_TEST_LOCAL_H */

/* vim:ts=8:sts=4:sw=4:expandtab:
 */
