/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2023, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_DISP_CC_MONACO_AUTO_H
#define _DT_BINDINGS_CLK_QCOM_DISP_CC_MONACO_AUTO_H

/* DISP_CC clocks */
#define DISP_CC_PLL0						0
#define DISP_CC_PLL1						1
#define DISP_CC_MDSS_AHB1_CLK					2
#define DISP_CC_MDSS_AHB_CLK					3
#define DISP_CC_MDSS_AHB_CLK_SRC				4
#define DISP_CC_MDSS_BYTE0_CLK					5
#define DISP_CC_MDSS_BYTE0_CLK_SRC				6
#define DISP_CC_MDSS_BYTE0_DIV_CLK_SRC				7
#define DISP_CC_MDSS_BYTE0_INTF_CLK				8
#define DISP_CC_MDSS_BYTE1_CLK					9
#define DISP_CC_MDSS_BYTE1_CLK_SRC				10
#define DISP_CC_MDSS_BYTE1_DIV_CLK_SRC				11
#define DISP_CC_MDSS_BYTE1_INTF_CLK				12
#define DISP_CC_MDSS_DPTX0_AUX_CLK				13
#define DISP_CC_MDSS_DPTX0_AUX_CLK_SRC				14
#define DISP_CC_MDSS_DPTX0_CRYPTO_CLK				15
#define DISP_CC_MDSS_DPTX0_CRYPTO_CLK_SRC			16
#define DISP_CC_MDSS_DPTX0_LINK_CLK				17
#define DISP_CC_MDSS_DPTX0_LINK_CLK_SRC				18
#define DISP_CC_MDSS_DPTX0_LINK_DIV_CLK_SRC			19
#define DISP_CC_MDSS_DPTX0_LINK_INTF_CLK			20
#define DISP_CC_MDSS_DPTX0_PIXEL0_CLK				21
#define DISP_CC_MDSS_DPTX0_PIXEL0_CLK_SRC			22
#define DISP_CC_MDSS_DPTX0_PIXEL1_CLK				23
#define DISP_CC_MDSS_DPTX0_PIXEL1_CLK_SRC			24
#define DISP_CC_MDSS_DPTX0_PIXEL2_CLK				25
#define DISP_CC_MDSS_DPTX0_PIXEL2_CLK_SRC			26
#define DISP_CC_MDSS_DPTX0_PIXEL3_CLK				27
#define DISP_CC_MDSS_DPTX0_PIXEL3_CLK_SRC			28
#define DISP_CC_MDSS_DPTX0_USB_ROUTER_LINK_INTF_CLK		29
#define DISP_CC_MDSS_DPTX1_AUX_CLK				30
#define DISP_CC_MDSS_DPTX1_AUX_CLK_SRC				31
#define DISP_CC_MDSS_DPTX1_CRYPTO_CLK				32
#define DISP_CC_MDSS_DPTX1_CRYPTO_CLK_SRC			33
#define DISP_CC_MDSS_DPTX1_LINK_CLK				34
#define DISP_CC_MDSS_DPTX1_LINK_CLK_SRC				35
#define DISP_CC_MDSS_DPTX1_LINK_DIV_CLK_SRC			36
#define DISP_CC_MDSS_DPTX1_LINK_INTF_CLK			37
#define DISP_CC_MDSS_DPTX1_PIXEL0_CLK				38
#define DISP_CC_MDSS_DPTX1_PIXEL0_CLK_SRC			39
#define DISP_CC_MDSS_DPTX1_PIXEL1_CLK				40
#define DISP_CC_MDSS_DPTX1_PIXEL1_CLK_SRC			41
#define DISP_CC_MDSS_DPTX1_USB_ROUTER_LINK_INTF_CLK		42
#define DISP_CC_MDSS_ESC0_CLK					43
#define DISP_CC_MDSS_ESC0_CLK_SRC				44
#define DISP_CC_MDSS_ESC1_CLK					45
#define DISP_CC_MDSS_ESC1_CLK_SRC				46
#define DISP_CC_MDSS_MDP1_CLK					47
#define DISP_CC_MDSS_MDP_CLK					48
#define DISP_CC_MDSS_MDP_CLK_SRC				49
#define DISP_CC_MDSS_MDP_LUT1_CLK				50
#define DISP_CC_MDSS_MDP_LUT_CLK				51
#define DISP_CC_MDSS_NON_GDSC_AHB_CLK				52
#define DISP_CC_MDSS_PCLK0_CLK					53
#define DISP_CC_MDSS_PCLK0_CLK_SRC				54
#define DISP_CC_MDSS_PLL_LOCK_MONITOR_CLK			55
#define DISP_CC_MDSS_PCLK1_CLK					56
#define DISP_CC_MDSS_PCLK1_CLK_SRC				57
#define DISP_CC_MDSS_RSCC_AHB_CLK				58
#define DISP_CC_MDSS_RSCC_VSYNC_CLK				59
#define DISP_CC_MDSS_VSYNC1_CLK					60
#define DISP_CC_MDSS_VSYNC_CLK					61
#define DISP_CC_MDSS_VSYNC_CLK_SRC				62
#define DISP_CC_SLEEP_CLK					63
#define DISP_CC_SLEEP_CLK_SRC					64
#define DISP_CC_XO_CLK						65
#define DISP_CC_SM_OBS_CLK					66
#define DISP_CC_XO_CLK_SRC					67

/* DISP_CC power domains */
#define DISP_CC_MDSS_CORE_GDSC					0
#define DISP_CC_MDSS_CORE_INT2_GDSC				1

/* DISP_CC resets */
#define DISP_CC_MDSS_CORE_BCR				0
#define DISP_CC_MDSS_RSCC_BCR				1

#endif
