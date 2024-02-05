// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#include <linux/regmap.h>
#include <linux/device.h>
#include "wcd-usbss-registers.h"

const u8 wcd_usbss_reg_access[WCD_USBSS_NUM_REGISTERS] = {
	[WCD_USBSS_REG(WCD_USBSS_PAGE0_PAGE)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_EN)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_OUT1)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_OUT2)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_CLK)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_MISC1)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_PMP_MISC2)]                    = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_EN)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_RST)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_CLK)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_IBIAS)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_MISC1)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RCO_MISC2)]                    = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_DP_EN)]                        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DP_BIAS)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DP_DN_MISC1)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DN_EN)]                        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DN_BIAS)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DP_DN_MISC2)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG1_EN)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG1_BIAS)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG1_CTSNS_CTL)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG1_MISC)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG2_EN)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG2_BIAS)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG2_CTSNS_CTL)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_MG2_MISC)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_BIAS_TOP)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_VREF_CTRL)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_TOP_MISC1)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_TOP_MISC2)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_STATUS_1)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_STATUS_2)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_STATUS_3)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_LIN_EN)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_INT_LIN_EN)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_COMBINER_IREF_PROG_1)]         = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_COMBINER_IREF_PROG_2)]         = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXTSW_AMP_BIAS)]               = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_INTSW_ILIFT)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_SW_CTRL_1)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_SW_CTRL_2)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_INT_SW_CTRL_1)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_INT_SW_CTRL_2)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_INT_SW_CTRL_3)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_ATEST_CTRL)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_LIN_AUD_CEQ_PRG)]          = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_LIN_GND_CEQ_PRG)]          = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LIN_STATUS_1)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_LIN_STATUS_2)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_LIN_STATUS_3)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_LIN_STATUS_4)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_LIN_CTRL)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_LIN_CTRL_1)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LDO_3P6)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_BANK_ATEST)]            = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EQ_EN)]                        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EQ_MISC)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_STATUS_MISC)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS1)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS2)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS3)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS4)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS5)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS6)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS7)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DELAYS8)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_DEBUG_SIGNALS)]            = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_OVERRIDE)]                 = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_ENABLE_STATUS)]                = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_FRZ_STATUS)]                   = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_DPR_DNL_SWITCH_ENABLE_STATUS)] = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SBU_GSBU_SWITCH_ENABLE_STATUS)] = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_DPAUX_SWITCH_ENABLE_STATUS)]   = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_DPR_DNL_EXTFET_GATE_MUX_STATUS)] = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SBU_EXTFET_GATE_MUX_OVP_STATUS)] = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_CP_LIN_CNTL_STATUS)]           = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_DISP_AUXP_THRESH)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DISP_AUXP_CTL)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DISP_AUXM_THRESH)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DISP_AUXM_CTL)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_CTRL_0)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_CTRL_1)]                       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DC_TRIMCODE_1)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DC_TRIMCODE_2)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DC_TRIMCODE_3)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AC_TRIMCODE_1)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AC_TRIMCODE_2)]                = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_CPLDO_CTL1)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_CPLDO_CTL2)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG0)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG1)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG2)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG3)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG4)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG5)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG6)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG7)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG8)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG9)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG10)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG11)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG12)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG13)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG14)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG15)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG16)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG17)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG18)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG19)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG20)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG21)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG22)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG23)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG24)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG25)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG26)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG27)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG28)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG29)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG30)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG31)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG32)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG33)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG34)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG35)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG36)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG37)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG38)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG39)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG40)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG41)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG42)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG43)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG44)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG45)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG46)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG47)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG48)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG49)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG50)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG51)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG52)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG53)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG54)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG55)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG56)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG57)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG58)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG59)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG60)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG61)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG62)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG63)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG64)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG65)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG66)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG67)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG68)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG69)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG70)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG71)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG72)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG73)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG74)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG75)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG76)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG77)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG78)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG79)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG80)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG81)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG82)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG83)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG84)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG85)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG86)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG87)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG88)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG89)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG90)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG91)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG92)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG93)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG94)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG95)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG96)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG97)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG98)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG99)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG100)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG101)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG102)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG103)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG104)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG105)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG106)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG107)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG108)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG109)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG110)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG111)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG112)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG113)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG114)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG115)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG116)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG117)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG118)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG119)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG120)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG121)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG122)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG123)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG124)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG125)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG126)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG127)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG128)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG129)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG130)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG131)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG132)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG133)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG134)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG135)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG136)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG137)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG138)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG139)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG140)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG141)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG142)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG143)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG144)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG145)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG146)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG147)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG148)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG149)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG150)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG151)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG152)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG153)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG154)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG155)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG156)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG157)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG158)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG159)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG160)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG161)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG162)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG163)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG164)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG165)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG166)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG167)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG168)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG169)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG170)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG171)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG172)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG173)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG174)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG175)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG176)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG177)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG178)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG179)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG180)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG181)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG182)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG183)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG184)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG185)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG186)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG187)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG188)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG189)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG190)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG191)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG192)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG193)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG194)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG195)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG196)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG197)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG198)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG199)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG200)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG201)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG202)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG203)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG204)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG205)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG206)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG207)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG208)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG209)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_LUT_REG210)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DATA_SEL)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OFF3)]                         = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OFF2_LSB)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OFF2_MSB)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OFF1_LSB)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OFF1_MSB)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_L)]                        = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_R)]                        = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_L)]                        = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_R)]                        = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_USB_DIG_PAGE)]                 = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_OVP_STATUS_SELF_CLEARING)]     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_OVP_STATUS)]                   = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_SETTINGS_ENABLE)]       = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_SELECT0)]               = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_SELECT1)]               = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_STATUS0)]               = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SWITCH_STATUS1)]               = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_LEFT_SW_SLOW)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_RIGHT_SW_SLOW)]            = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_MIC_SW_SLOW)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_SENSE_SW_SLOW)]            = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_GND_SW_SLOW)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DELAY_R_SW)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DELAY_MIC_SW)]                 = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DELAY_SENSE_SW)]               = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DELAY_GND_SW)]                 = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DELAY_L_SW)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EXT_FET_ENABLE_DELAY)]         = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FUNCTION_ENABLE)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_USB_RST_CTL)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_EQUALIZER1)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SPARE_0)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_DIG_FUNCTIONS_STATUS)]         = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_CLK_SOURCE)]                   = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_USB_SS_CNTL)]                  = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SPARE_1)]                      = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_ANA_FUNCTIONS_STATUS)]         = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_STATUS)]                   = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_SPARE_14)]                     = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SAFE_STATE_PD_DPAUX)]          = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUDIO_FSM_START)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FSM_RESET)]                    = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_CHIP_ID0)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_CHIP_ID1)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_CHIP_ID2)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_CHIP_ID3)]                     = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_LINEARIZER_CFG)]               = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RATIO_SPKR_REXT_L_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RATIO_SPKR_REXT_L_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RATIO_SPKR_REXT_R_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_RATIO_SPKR_REXT_R_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_AUD_L_LSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_AUD_L_MSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_AUD_R_LSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_AUD_R_MSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_GND_L_LSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_GND_L_MSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_GND_R_LSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_SW_TAP_GND_R_MSB)]             = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_AUD_L_LSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_AUD_L_MSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_AUD_R_LSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_AUD_R_MSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_GND_L_LSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_GND_L_MSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_GND_R_LSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_HW_TAP_GND_R_MSB)]             = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K0_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K0_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K0_2)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K1_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K1_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K2_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K2_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K3_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K3_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K4_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K4_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K5_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_L_K5_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K0_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K0_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K0_2)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K1_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K1_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K2_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K2_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K3_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K3_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K4_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K4_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K5_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_COEF_R_K5_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K0_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K0_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K0_2)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K1_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K1_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K2_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K2_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K3_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K3_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K4_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K4_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K5_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_L_K5_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K0_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K0_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K0_2)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K1_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K1_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K2_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K2_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K3_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K3_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K4_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K4_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K5_0)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_COEF_R_K5_1)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_L_SLOPE_SCALE_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_L_SLOPE_SCALE_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_R_SLOPE_SCALE_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_R_SLOPE_SCALE_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_L_SLOPE_SCALE_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_L_SLOPE_SCALE_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_R_SLOPE_SCALE_LSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_R_SLOPE_SCALE_MSB)]        = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_L_FIRST_TAP)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_AUD_R_FIRST_TAP)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_L_FIRST_TAP)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_GND_R_FIRST_TAP)]              = RD_WR_REG,
	[WCD_USBSS_REG(WCD_USBSS_FEATURE_SELECTION)]            = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_0)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_1)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_2)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_3)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_4)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_5)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_6)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_7)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_8)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_9)]                  = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_10)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_11)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_12)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_13)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_14)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_REG_15)]                 = RD_REG,
	[WCD_USBSS_REG(WCD_USBSS_EFUSE_PRG_CTL)]                = RD_WR_REG,
};

