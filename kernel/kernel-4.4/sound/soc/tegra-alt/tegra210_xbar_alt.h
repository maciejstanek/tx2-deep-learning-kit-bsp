/*
 * tegra210_xbar_alt.h - TEGRA210 XBAR registers
 *
 * Copyright (c) 2014-2017, NVIDIA CORPORATION.  All rights reserved.
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

#ifndef __TEGRA210_XBAR_ALT_H__
#define __TEGRA210_XBAR_ALT_H__

#define TEGRA210_XBAR_PART0_RX					0x0
#define TEGRA210_XBAR_PART1_RX					0x200
#define TEGRA210_XBAR_PART2_RX					0x400
#define TEGRA210_XBAR_RX_STRIDE					0x4
#define TEGRA210_XBAR_AUDIO_RX_COUNT				90

/* This register repeats twice for each XBAR TX CIF */
/* The fields in this register are 1 bit per XBAR RX CIF */

/* Fields in *_CIF_RX/TX_CTRL; used by AHUB FIFOs, and all other audio modules */

#define TEGRA210_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT	24
#define TEGRA210_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US	0x3f
#define TEGRA210_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK	(TEGRA210_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US << TEGRA210_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT)

/* Channel count minus 1 */
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT	20
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US	0xf
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK	(TEGRA210_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US << TEGRA210_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT)

/* Channel count minus 1 */
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT	16
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US	0xf
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK	(TEGRA210_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US << TEGRA210_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT)

#define TEGRA210_AUDIOCIF_BITS_RVDS			0
#define TEGRA210_AUDIOCIF_BITS_8			1
#define TEGRA210_AUDIOCIF_BITS_12			2
#define TEGRA210_AUDIOCIF_BITS_16			3
#define TEGRA210_AUDIOCIF_BITS_20			4
#define TEGRA210_AUDIOCIF_BITS_24			5
#define TEGRA210_AUDIOCIF_BITS_28			6
#define TEGRA210_AUDIOCIF_BITS_32			7

#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT		12
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_MASK		(7                        << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_8		(TEGRA210_AUDIOCIF_BITS_8  << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_12		(TEGRA210_AUDIOCIF_BITS_12 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_16		(TEGRA210_AUDIOCIF_BITS_16 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_20		(TEGRA210_AUDIOCIF_BITS_20 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_24		(TEGRA210_AUDIOCIF_BITS_24 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_28		(TEGRA210_AUDIOCIF_BITS_28 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_32		(TEGRA210_AUDIOCIF_BITS_32 << TEGRA210_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)

#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT	8
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_MASK		(7                        << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_8		(TEGRA210_AUDIOCIF_BITS_8  << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_12		(TEGRA210_AUDIOCIF_BITS_12 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_16		(TEGRA210_AUDIOCIF_BITS_16 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_20		(TEGRA210_AUDIOCIF_BITS_20 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_24		(TEGRA210_AUDIOCIF_BITS_24 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_28		(TEGRA210_AUDIOCIF_BITS_28 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_32		(TEGRA210_AUDIOCIF_BITS_32 << TEGRA210_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)

#define TEGRA210_AUDIOCIF_EXPAND_ZERO			0
#define TEGRA210_AUDIOCIF_EXPAND_ONE			1
#define TEGRA210_AUDIOCIF_EXPAND_LFSR			2

#define TEGRA210_AUDIOCIF_CTRL_EXPAND_SHIFT		6
#define TEGRA210_AUDIOCIF_CTRL_EXPAND_MASK		(3                            << TEGRA210_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_EXPAND_ZERO		(TEGRA210_AUDIOCIF_EXPAND_ZERO << TEGRA210_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_EXPAND_ONE		(TEGRA210_AUDIOCIF_EXPAND_ONE  << TEGRA210_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_EXPAND_LFSR		(TEGRA210_AUDIOCIF_EXPAND_LFSR << TEGRA210_AUDIOCIF_CTRL_EXPAND_SHIFT)

#define TEGRA210_AUDIOCIF_STEREO_CONV_CH0		0
#define TEGRA210_AUDIOCIF_STEREO_CONV_CH1		1
#define TEGRA210_AUDIOCIF_STEREO_CONV_AVG		2

#define TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_SHIFT	4
#define TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_MASK		(3                                << TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_CH0		(TEGRA210_AUDIOCIF_STEREO_CONV_CH0 << TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_CH1		(TEGRA210_AUDIOCIF_STEREO_CONV_CH1 << TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_AVG		(TEGRA210_AUDIOCIF_STEREO_CONV_AVG << TEGRA210_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)

#define TEGRA210_AUDIOCIF_CTRL_REPLICATE_SHIFT		3

#define TEGRA210_AUDIOCIF_TRUNCATE_ROUND		0
#define TEGRA210_AUDIOCIF_TRUNCATE_CHOP			1

#define TEGRA210_AUDIOCIF_CTRL_TRUNCATE_SHIFT		1
#define TEGRA210_AUDIOCIF_CTRL_TRUNCATE_MASK		(1                               << TEGRA210_AUDIOCIF_CTRL_TRUNCATE_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_TRUNCATE_ROUND		(TEGRA210_AUDIOCIF_TRUNCATE_ROUND << TEGRA210_AUDIOCIF_CTRL_TRUNCATE_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_TRUNCATE_CHOP		(TEGRA210_AUDIOCIF_TRUNCATE_CHOP  << TEGRA210_AUDIOCIF_CTRL_TRUNCATE_SHIFT)

#define TEGRA210_AUDIOCIF_MONO_CONV_ZERO		0
#define TEGRA210_AUDIOCIF_MONO_CONV_COPY		1

#define TEGRA210_AUDIOCIF_CTRL_MONO_CONV_SHIFT		0
#define TEGRA210_AUDIOCIF_CTRL_MONO_CONV_MASK		(1                               << TEGRA210_AUDIOCIF_CTRL_MONO_CONV_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_MONO_CONV_ZERO		(TEGRA210_AUDIOCIF_MONO_CONV_ZERO << TEGRA210_AUDIOCIF_CTRL_MONO_CONV_SHIFT)
#define TEGRA210_AUDIOCIF_CTRL_MONO_CONV_COPY		(TEGRA210_AUDIOCIF_MONO_CONV_COPY << TEGRA210_AUDIOCIF_CTRL_MONO_CONV_SHIFT)

/* Fields in *AHUBRAMCTL_CTRL; used by different AHUB modules */
#define TEGRA210_AHUBRAMCTL_CTRL_READ_BUSY_SHIFT	31
#define TEGRA210_AHUBRAMCTL_CTRL_READ_BUSY_MASK		(1 << TEGRA210_AHUBRAMCTL_CTRL_READ_BUSY_SHIFT)
#define TEGRA210_AHUBRAMCTL_CTRL_READ_BUSY		(1 << TEGRA210_AHUBRAMCTL_CTRL_READ_BUSY_SHIFT)

#define TEGRA210_AHUBRAMCTL_CTRL_SEQ_READ_COUNT_SHIFT	16
#define TEGRA210_AHUBRAMCTL_CTRL_SEQ_READ_COUNT_MASK	(0xff << TEGRA210_AHUBRAMCTL_CTRL_SEQ_READ_COUNT_SHIFT)

#define TEGRA210_AHUBRAMCTL_CTRL_RW_SHIFT		14
#define TEGRA210_AHUBRAMCTL_CTRL_RW_MASK		(1 << TEGRA210_AHUBRAMCTL_CTRL_RW_SHIFT)
#define TEGRA210_AHUBRAMCTL_CTRL_RW_READ		(0 << TEGRA210_AHUBRAMCTL_CTRL_RW_SHIFT)
#define TEGRA210_AHUBRAMCTL_CTRL_RW_WRITE		(1 << TEGRA210_AHUBRAMCTL_CTRL_RW_SHIFT)

#define TEGRA210_AHUBRAMCTL_CTRL_ADDR_INIT_EN_SHIFT	13
#define TEGRA210_AHUBRAMCTL_CTRL_ADDR_INIT_EN_MASK	(1 << TEGRA210_AHUBRAMCTL_CTRL_ADDR_INIT_EN_SHIFT)
#define TEGRA210_AHUBRAMCTL_CTRL_ADDR_INIT_EN		(1 << TEGRA210_AHUBRAMCTL_CTRL_ADDR_INIT_EN_SHIFT)

#define TEGRA210_AHUBRAMCTL_CTRL_SEQ_ACCESS_EN_SHIFT	12
#define TEGRA210_AHUBRAMCTL_CTRL_SEQ_ACCESS_EN_MASK	(1 << TEGRA210_AHUBRAMCTL_CTRL_SEQ_ACCESS_EN_SHIFT)
#define TEGRA210_AHUBRAMCTL_CTRL_SEQ_ACCESS_EN		(1 << TEGRA210_AHUBRAMCTL_CTRL_SEQ_ACCESS_EN_SHIFT)

#define TEGRA210_AHUBRAMCTL_CTRL_RAM_ADDR_SHIFT		0
#define TEGRA210_AHUBRAMCTL_CTRL_RAM_ADDR_MASK		(0x1ff << TEGRA210_AHUBRAMCTL_CTRL_RAM_ADDR_SHIFT)

#if defined(CONFIG_ARCH_TEGRA_210_SOC)
#define NUM_DAIS		69
#define NUM_MUX_WIDGETS		52
#define NUM_MUX_INPUT		56	/* size of TEGRA210_ROUTES */

#define MAX_REGISTER_ADDR (TEGRA210_XBAR_PART2_RX +\
	(TEGRA210_XBAR_RX_STRIDE * (TEGRA210_XBAR_AUDIO_RX_COUNT - 1)))

#define TEGRA210_XBAR_REG_MASK_0	0xf1f03ff
#define TEGRA210_XBAR_REG_MASK_1	0x3f30031f
#define TEGRA210_XBAR_REG_MASK_2	0xff1cf313
#define TEGRA210_XBAR_REG_MASK_3	0x0
#define TEGRA210_XBAR_UPDATE_MAX_REG	3

#define ADMAIF_BASE_ADDR	0x702d0000
#define I2S1_BASE_ADDR		0x702d1000
#define I2S2_BASE_ADDR		0x702d1100
#define I2S3_BASE_ADDR		0x702d1200
#define I2S4_BASE_ADDR		0x702d1300
#define I2S5_BASE_ADDR		0x702d1400
#define AMX1_BASE_ADDR		0x702d3000
#define AMX2_BASE_ADDR		0x702d3100
#define ADX1_BASE_ADDR		0x702d3800
#define ADX2_BASE_ADDR		0x702d3900
#define AFC1_BASE_ADDR		0x702d7000
#define AFC2_BASE_ADDR		0x702d7100
#define AFC3_BASE_ADDR		0x702d7200
#define AFC4_BASE_ADDR		0x702d7300
#define AFC5_BASE_ADDR		0x702d7400
#define AFC6_BASE_ADDR		0x702d7500
#define SFC1_BASE_ADDR		0x702d2000
#define SFC2_BASE_ADDR		0x702d2200
#define SFC3_BASE_ADDR		0x702d2400
#define SFC4_BASE_ADDR		0x702d2600
#define MVC1_BASE_ADDR		0x702da000
#define MVC2_BASE_ADDR		0x702da200
#define IQC1_BASE_ADDR		0x702de000
#define IQC2_BASE_ADDR		0x702de200
#define DMIC1_BASE_ADDR		0x702d4000
#define DMIC2_BASE_ADDR		0x702d4100
#define DMIC3_BASE_ADDR		0x702d4200
#define OPE1_BASE_ADDR		0x702d8000
#define OPE2_BASE_ADDR		0x702d8400
#define AMIXER1_BASE_ADDR	0x702dbb00
#define SPDIF1_BASE_ADDR	0x702d6000
#endif

struct tegra210_xbar_cif_conf {
	unsigned int threshold;
	unsigned int audio_channels;
	unsigned int client_channels;
	unsigned int audio_bits;
	unsigned int client_bits;
	unsigned int expand;
	unsigned int stereo_conv;
	union {
		unsigned int fifo_size_downshift;
		unsigned int replicate;
	};
	unsigned int truncate;
	unsigned int mono_conv;
};

void tegra210_xbar_set_cif(struct regmap *regmap, unsigned int reg,
			  struct tegra210_xbar_cif_conf *conf);
void tegra210_xbar_write_ahubram(struct regmap *regmap, unsigned int reg_ctrl,
				unsigned int reg_data, unsigned int ram_offset,
				unsigned int *data, size_t size);
void tegra210_xbar_read_ahubram(struct regmap *regmap, unsigned int reg_ctrl,
				unsigned int reg_data, unsigned int ram_offset,
				unsigned int *data, size_t size);
int tegra210_xbar_read_reg (unsigned int reg, unsigned int *val);
int tegra210_xbar_set_clock(unsigned long rate);

struct tegra210_xbar_soc_data {
	const struct regmap_config *regmap_config;
	unsigned int mask[4];
	unsigned int reg_count;
	unsigned int reg_offset;
};

struct tegra210_xbar {
	struct clk *clk;
	struct clk *clk_parent;
	struct clk *clk_ape;
	struct clk *clk_apb2ape;
	struct regmap *regmap;
	const struct tegra210_xbar_soc_data *soc_data;
	bool is_shutdown;
};

/* Extension of soc_bytes structure defined in sound/soc.h */
struct tegra_soc_bytes {
	struct soc_bytes soc;
	u32 shift; /* Used as offset for ahub ram related programing */
};

/* Utility structures for using mixer control of type snd_soc_bytes */
#define TEGRA_SOC_BYTES_EXT(xname, xbase, xregs, xshift, xmask, \
	xhandler_get, xhandler_put, xinfo) \
	{.iface = SNDRV_CTL_ELEM_IFACE_MIXER, .name = xname, \
	 .info = xinfo, .get = xhandler_get, .put = xhandler_put, \
	 .private_value = ((unsigned long)&(struct tegra_soc_bytes) \
		{.soc.base = xbase, .soc.num_regs = xregs, .soc.mask = xmask, \
		 .shift = xshift })}
#endif