/*
 * Copyright (c) 2014-2016, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ABI_BPMP_T210_ABI_H_
#define _ABI_BPMP_T210_ABI_H_

/**
 * This header file documents the T210 only specific Application
 * Binary Interface (ABI) of BPMP processor complex and CCPLEX
 *
 * Table of Contents
 *  1. Message payloads
 *   3.2 Do idle (MRQ_DO_IDLE)
 *   3.3 Tolerate idle (MRQ_TOLERATE_IDLE)
 *   3.6 Switch cluster (MRQ_SWITCH_CLUSTER)
 *   3.12 SCx enable (MRQ_SCX_ENABLE)
 *   3.16 SCLK skip set rate (MRQ_SCLK_SKIP_SET_RATE)
 *   3.17 Enable suspend (MRQ_ENABLE_SUSPEND)
 *   3.18 PASR mask (MRQ_PASR_MASK)
 */

#define MRQ_DO_IDLE		2
#define MRQ_TOLERATE_IDLE	3
#define MRQ_SWITCH_CLUSTER	6
#define MRQ_CPUIDLE_USAGE	10
#define MRQ_SCX_ENABLE		12
#define MRQ_CPU_FROZEN		13
#define MRQ_SCLK_SKIP_SET_RATE	16
#define MRQ_ENABLE_SUSPEND	17
#define MRQ_PASR_MASK		18

/* Tegra PM states as known to BPMP */
#define TEGRA_PM_CC0		8
#define TEGRA_PM_CC1		9
#define TEGRA_PM_CC4		12
#define TEGRA_PM_CC6		14
#define TEGRA_PM_CC7		15
#define TEGRA_PM_SC1		17
#define TEGRA_PM_SC2		18
#define TEGRA_PM_SC3		19
#define TEGRA_PM_SC4		20
#define TEGRA_PM_SC7		23

#endif
