
#ifndef __LAYER_STRATEGY_EX__
#define __LAYER_STRATEGY_EX__

#include "layering_rule_base.h"

#define MAX_PHY_OVL_CNT 12
/* #define HAS_LARB_HRT */
#define HRT_AEE_LAYER_MASK 0xFFFFFFDF

enum DISP_DEBUG_LEVEL {
	DISP_DEBUG_LEVEL_CRITICAL = 0,
	DISP_DEBUG_LEVEL_ERR,
	DISP_DEBUG_LEVEL_WARN,
	DISP_DEBUG_LEVEL_DEBUG,
	DISP_DEBUG_LEVEL_INFO,
};

enum HRT_LEVEL {
	HRT_LEVEL_LEVEL0 = 0,	/* OPP3 */
	HRT_LEVEL_LEVEL1,	/* OPP2 */
	HRT_LEVEL_LEVEL2,	/* OPP1 */
	HRT_LEVEL_NUM,
};

enum HRT_TB_TYPE {
	HRT_TB_TYPE_GENERAL = 0,
	HRT_TB_TYPE_2_OVL_ONLY,
	HRT_TB_NUM,
};

enum {
	HRT_LEVEL_DEFAULT = HRT_LEVEL_NUM + 1,
};

enum HRT_BOUND_TYPE {
	HRT_BOUND_TYPE_LP4 = 0,		/* LP4-2ch */
	HRT_BOUND_TYPE_LP3,		/* LP3-1ch */
	HRT_BOUND_TYPE_LP4_FHD_PLUS,	/* LP4-FHD+ */
	HRT_BOUND_NUM,
};

enum HRT_PATH_SCENARIO {
	HRT_PATH_GENERAL =
		MAKE_UNIFIED_HRT_PATH_FMT(HRT_PATH_RSZ_NONE, HRT_PATH_PIPE_SINGLE, HRT_PATH_DISP_DUAL_EXT, 1),
	HRT_PATH_2_OVL_ONLY =
		MAKE_UNIFIED_HRT_PATH_FMT(HRT_PATH_RSZ_NONE, HRT_PATH_PIPE_SINGLE, HRT_PATH_DISP_DUAL_EXT, 2),
	HRT_PATH_UNKNOWN = MAKE_UNIFIED_HRT_PATH_FMT(0, 0, 0, 3),
	HRT_PATH_NUM = MAKE_UNIFIED_HRT_PATH_FMT(0, 0, 0, 4),
};

void layering_rule_init(void);

#endif