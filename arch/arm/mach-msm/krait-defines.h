/*
 * Author: Paul Reioux aka Faux123 <reioux@gmail.com> 
 * Modified by Matt Filetto <matt.filetto@gmail.com>
 *
 * krait-defines
 * Copyright 2013 Paul Reioux
*  Copyright 2013 Matt Filetto
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * For easy use with modifiying voltages and freq tables
 */


/* common freq table define */
#ifdef CONFIG_OC_ULTIMATE
#define CPU_MAX_NUM_FREQS            23
#else
#ifdef CONFIG_CPU_OVERCLOCK
#define CPU_MAX_NUM_FREQS            20
#else
#define CPU_MAX_NUM_FREQS            16
#endif
#endif


/* max freq with SEC dvfs enabled in .config */
#ifdef CONFIG_OC_ULTIMATE
#define SEC_DVFS_MAX_FREQ       2268000
#else
#ifdef CONFIG_CPU_OVERCLOCK
#define SEC_DVFS_MAX_FREQ       2106000
#else
#define SEC_DVFS_MAX_FREQ       1890000
#endif
#endif


/* min amd max allowed voltage */
#ifdef CONFIG_CPU_OVERCLOCK
#define HFPLL_MIN_VDD		 600000
#define HFPLL_MAX_VDD		1500000
#else
#define HFPLL_MIN_VDD		 600000
#define HFPLL_MAX_VDD		1300000
#endif

