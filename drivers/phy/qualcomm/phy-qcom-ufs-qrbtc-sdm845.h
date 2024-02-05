/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2016 - 2021, Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef UFS_QCOM_PHY_QRBTC_SDM845_H_
#define UFS_QCOM_PHY_QRBTC_SDM845_H_

#include "phy-qcom-ufs-i.h"

/* QCOM UFS PHY control registers */
#define COM_OFF(x)	(0x000 + x)
#define TX_OFF(n, x)	(0x400 + (0x400 * n) + x)
#define RX_OFF(n, x)	(0x600 + (0x400 * n) + x)
#define PHY_OFF(x)	(0xC00 + x)
#define PHY_USR(x)	(x)

/* UFS PHY PLL block registers */
#define QSERDES_COM_SYS_CLK_CTRL		COM_OFF(0x00)
#define QSERDES_COM_PLL_VCOTAIL_EN		COM_OFF(0x04)
#define QSERDES_COM_PLL_CNTRL			COM_OFF(0x14)
#define QSERDES_COM_PLL_IP_SETI			COM_OFF(0x18)
#define	QSERDES_COM_BIAS_EN_CLKBUFLR_EN		COM_OFF(0x20)
#define QSERDES_COM_PLL_CP_SETI			COM_OFF(0x24)
#define QSERDES_COM_PLL_IP_SETP			COM_OFF(0x28)
#define QSERDES_COM_PLL_CP_SETP			COM_OFF(0x2C)
#define QSERDES_COM_SYSCLK_EN_SEL		COM_OFF(0x38)
#define QSERDES_COM_RES_CODE_TXBAND		COM_OFF(0x3C)
#define QSERDES_COM_RESETSM_CNTRL		COM_OFF(0x40)
#define QSERDES_COM_PLLLOCK_CMP1		COM_OFF(0x44)
#define QSERDES_COM_PLLLOCK_CMP2		COM_OFF(0x48)
#define QSERDES_COM_PLLLOCK_CMP3		COM_OFF(0x4C)
#define QSERDES_COM_PLLLOCK_CMP_EN		COM_OFF(0x50)
#define QSERDES_COM_DEC_START1			COM_OFF(0x64)
#define QSERDES_COM_DIV_FRAC_START1		COM_OFF(0x98)
#define QSERDES_COM_DIV_FRAC_START2		COM_OFF(0x9C)
#define QSERDES_COM_DIV_FRAC_START3		COM_OFF(0xA0)
#define QSERDES_COM_DEC_START2			COM_OFF(0xA4)
#define QSERDES_COM_PLL_RXTXEPCLK_EN		COM_OFF(0xA8)
#define QSERDES_COM_PLL_CRCTRL			COM_OFF(0xAC)
#define QSERDES_COM_PLL_CLKEPDIV		COM_OFF(0xB0)
#define QSERDES_COM_RESET_SM			COM_OFF(0xBC)

/* TX LANE n (0, 1) registers */
#define QSERDES_TX_CLKBUF_ENABLE(n)		TX_OFF(n, 0x4)

/* RX LANE n (0, 1) registers */
#define QSERDES_RX_CDR_CONTROL(n)		RX_OFF(n, 0x0)
#define QSERDES_RX_RX_IQ_RXDET_EN(n)		RX_OFF(n, 0x28)
#define QSERDES_RX_SIGDET_CNTRL(n)		RX_OFF(n, 0x34)
#define QSERDES_RX_RX_BAND(n)			RX_OFF(n, 0x38)
#define QSERDES_RX_CDR_CONTROL_HALF(n)		RX_OFF(n, 0x98)
#define QSERDES_RX_CDR_CONTROL_QUARTER(n)	RX_OFF(n, 0x9C)
#define QSERDES_RX_PWM_CNTRL1(n)		RX_OFF(n, 0x80)
#define QSERDES_RX_PWM_CNTRL2(n)		RX_OFF(n, 0x84)
#define QSERDES_RX_PWM_NDIV(n)			RX_OFF(n, 0x88)
#define QSERDES_RX_SIGDET_CNTRL2(n)		RX_OFF(n, 0x8C)
#define QSERDES_RX_UFS_CNTRL(n)			RX_OFF(n, 0x90)

/* UFS PHY registers */
#define UFS_PHY_PHY_START			PHY_OFF(0x00)
#define UFS_PHY_POWER_DOWN_CONTROL		PHY_OFF(0x04)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_MSB	PHY_OFF(0x08)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_LSB	PHY_OFF(0x0C)
#define UFS_PHY_RX_SYM_RESYNC_CTRL		PHY_OFF(0x134)
#define UFS_PHY_MULTI_LANE_CTRL1		PHY_OFF(0x1C4)

/* QRBTC V2 USER REGISTERS */
#define U11_UFS_RESET_REG_OFFSET		PHY_USR(0x4)
#define U11_QRBTC_CONTROL_OFFSET		PHY_USR(0x18)
#define U11_QRBTC_TX_CLK_CTRL			PHY_USR(0x20)

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_PHY_START, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SYM_RESYNC_CTRL, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TIMER_20US_CORECLK_STEPS_MSB, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TIMER_20US_CORECLK_STEPS_LSB, 0x00),

	/* QSERDES Common */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIAS_EN_CLKBUFLR_EN, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYS_CLK_CTRL, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RES_CODE_TXBAND, 0xC0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_VCOTAIL_EN, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CNTRL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CLKEPDIV, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESETSM_CNTRL, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RXTXEPCLK_EN, 0x13),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CRCTRL, 0x43),

	/* QSERDES TX */
	/* Enable large amplitude setting */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_CLKBUF_ENABLE(0), 0x29),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_CLKBUF_ENABLE(1), 0x29),

	/* QSERDES RX0 */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_CNTRL1(0), 0x08),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_CNTRL2(0), 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_NDIV(0), 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL(0), 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL_HALF(0), 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL_QUARTER(0), 0x12),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL(0), 0xC0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL2(0), 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_BAND(0), 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UFS_CNTRL(0), 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_IQ_RXDET_EN(0), 0xF3),

	/* QSERDES RX1 */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_CNTRL1(1), 0x08),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_CNTRL2(1), 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_PWM_NDIV(1), 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL(1), 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL_HALF(1), 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_CDR_CONTROL_QUARTER(1), 0x12),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL(1), 0xC0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL2(1), 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_BAND(1), 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UFS_CNTRL(1), 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_IQ_RXDET_EN(1), 0xF3),

	/* QSERDES PLL Settings - Series A */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START1, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START2, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP1, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP2, 0x19),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP3, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP_EN, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IP_SETI, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CP_SETI, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IP_SETP, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CP_SETP, 0x01),

	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_MULTI_LANE_CTRL1, 0x02),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_B[] = {
	/* QSERDES PLL Settings - Series B */
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START2, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP1, 0x65),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP2, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP3, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLLLOCK_CMP_EN, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IP_SETI, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CP_SETI, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IP_SETP, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CP_SETP, 0x01),
};


/*
 * This structure represents the qrbtc-sdm845 specific phy.
 * common_cfg MUST remain the first field in this structure
 * in case extra fields are added. This way, when calling
 * get_ufs_qcom_phy() of generic phy, we can extract the
 * common phy structure (struct ufs_qcom_phy) out of it
 * regardless of the relevant specific phy.
 */
struct ufs_qcom_phy_qrbtc_sdm845 {
	struct ufs_qcom_phy common_cfg;
};

#endif
