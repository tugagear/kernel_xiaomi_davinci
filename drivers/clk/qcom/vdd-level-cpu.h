/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __DRIVERS_CLK_QCOM_VDD_LEVEL_CPU_H
#define __DRIVERS_CLK_QCOM_VDD_LEVEL_CPU_H

#include <linux/regulator/rpm-smd-regulator.h>
#include <linux/regulator/consumer.h>

enum vdd_hf_pll_levels {
	VDD_HF_PLL_OFF,
	VDD_HF_PLL_RET,
	VDD_HF_PLL_RETP,
	VDD_HF_PLL_MSVS,
	VDD_HF_PLL_LSVS,
	VDD_HF_PLL_SVS,
	VDD_HF_PLL_SVSP,
	VDD_HF_PLL_NOM,
	VDD_HF_PLL_NOMP,
	VDD_HF_PLL_TUR,
	VDD_HF_PLL_NUM,
};

static int vdd_hf_levels[] = {
	0,	 RPM_REGULATOR_LEVEL_NONE,	/* VDD_HF_PLL_OFF */
	1900000, RPM_REGULATOR_LEVEL_RETENTION,	/* VDD_HF_PLL_RET */
	1900000, RPM_REGULATOR_LEVEL_RETENTION_PLUS,	/* VDD_HF_PLL_RETP */
	1900000, RPM_REGULATOR_LEVEL_MIN_SVS,	/* VDD_HF_PLL_MSVS */
	1900000, RPM_REGULATOR_LEVEL_LOW_SVS,	/* VDD_HF_PLL_LSVS */
	1900000, RPM_REGULATOR_LEVEL_SVS,	/* VDD_HF_PLL_SVS */
	1900000, RPM_REGULATOR_LEVEL_SVS_PLUS,	/* VDD_HF_PLL_SVSP */
	1900000, RPM_REGULATOR_LEVEL_NOM,	/* VDD_HF_PLL_NOM */
	1900000, RPM_REGULATOR_LEVEL_NOM_PLUS,	/* VDD_HF_PLL_NOMP */
	1900000, RPM_REGULATOR_LEVEL_TURBO,	/* VDD_HF_PLL_TUR */
};

#endif
