#include "config_site_sample.h"

/*
* PJLIB settings.
*/
#define PJ_HAS_IPV6                             1
#define PJ_GETHOSTIP_DISABLE_LOCAL_RESOLUTION   1

/*
* PJSIP settings.
*/
#define PJSIP_MAX_PKT_LEN                       8000
#define PJSIP_TRANSPORT_SERVER_IDLE_TIME        3

/*
* PJNAT settings.
*/
#define PJ_ICE_MAX_CAND                         256
#define PJ_ICE_ST_MAX_CAND                      32
#define PJ_ICE_MAX_STUN                         6
#define PJ_ICE_MAX_TURN                         4
#define PJ_ICE_COMP_BITS                        5
#define PJ_ICE_MAX_CHECKS                       1024
/* Set permanent permissions on the TURN
   server for all peer candidates */
#define PJ_ICE_ST_USE_TURN_PERMANENT_PERM       PJ_TRUE
