/*
 * Copyright (C) 2011 Samsung Electronics
 * Heungjun Kim <riverful.kim@samsung.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __ASM_ARM_ARCH_POWER_H_
#define __ASM_ARM_ARCH_POWER_H_

#ifndef __ASSEMBLY__
struct exynos4_power {
	unsigned int	om_stat;
	unsigned char	res1[0x8];
	unsigned int	rtc_clko_sel;
	unsigned int	gnss_rtc_out_ctrl;
	unsigned char	res2[0x1ec];
	unsigned int	system_power_down_ctrl;
	unsigned char	res3[0x1];
	unsigned int	system_power_down_option;
	unsigned char	res4[0x1f4];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned char	res5[0x1f8];
	unsigned int	wakeup_stat;
	unsigned int	eint_wakeup_mask;
	unsigned int	wakeup_mask;
	unsigned char	res6[0xf4];
	unsigned int	hdmi_phy_control;
	unsigned int	usbdevice_phy_control;
	unsigned int	usbhost_phy_control;
	unsigned int	dac_phy_control;
	unsigned int	mipi_phy0_control;
	unsigned int	mipi_phy1_control;
	unsigned int	adc_phy_control;
	unsigned int	pcie_phy_control;
	unsigned int	sata_phy_control;
	unsigned char	res7[0xdc];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	inform4;
	unsigned int	inform5;
	unsigned int	inform6;
	unsigned int	inform7;
	unsigned char	res8[0x1e0];
	unsigned int	pmu_debug;
	unsigned char	res9[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;
	unsigned char	res10[0xc];
	unsigned int	arm_core1_sys_pwr_reg;
	unsigned char	res11[0x6c];
	unsigned int	arm_common_sys_pwr_reg;
	unsigned char	res12[0x3c];
	unsigned int	arm_cpu_l2_0_sys_pwr_reg;
	unsigned int	arm_cpu_l2_1_sys_pwr_reg;
	unsigned char	res13[0x38];
	unsigned int	cmu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_sclkstop_sys_pwr_reg;
	unsigned char	res14[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;
	unsigned char	res15[0x10];
	unsigned int	apll_sysclk_sys_pwr_reg;
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;
	unsigned char	res16[0x8];
	unsigned int	cmu_clkstop_gps_alive_sys_pwr_reg;
	unsigned int	cmu_reset_gps_alive_sys_pwr_reg;
	unsigned int	cmu_clkstop_cam_sys_pwr_reg;
	unsigned int	cmu_clkstop_tv_sys_pwr_reg;
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;
	unsigned int	cmu_clkstop_lcd0_sys_pwr_reg;
	unsigned int	cmu_clkstop_lcd1_sys_pwr_reg;
	unsigned int	cmu_clkstop_maudio_sys_pwr_reg;
	unsigned int	cmu_clkstop_gps_sys_pwr_reg;
	unsigned int	cmu_reset_cam_sys_pwr_reg;
	unsigned int	cmu_reset_tv_sys_pwr_reg;
	unsigned int	cmu_reset_mfc_sys_pwr_reg;
	unsigned int	cmu_reset_g3d_sys_pwr_reg;
	unsigned int	cmu_reset_lcd0_sys_pwr_reg;
	unsigned int	cmu_reset_lcd1_sys_pwr_reg;
	unsigned int	cmu_reset_maudio_sys_pwr_reg;
	unsigned int	cmu_reset_gps_sys_pwr_reg;
	unsigned int	top_bus_sys_pwr_reg;
	unsigned int	top_retention_sys_pwr_reg;
	unsigned int	top_pwr_sys_pwr_reg;
	unsigned char	res17[0x1c];
	unsigned int	logic_reset_sys_pwr_reg;
	unsigned char	res18[0x14];
	unsigned int	onenandxl_mem_sys_pwr_reg;
	unsigned int	modemif_mem_sys_pwr_reg;
	unsigned char	res19[0x4];
	unsigned int	usbdevice_mem_sys_pwr_reg;
	unsigned int	sdmmc_mem_sys_pwr_reg;
	unsigned int	cssys_mem_sys_pwr_reg;
	unsigned int	secss_mem_sys_pwr_reg;
	unsigned char	res20[0x4];
	unsigned int	pcie_mem_sys_pwr_reg;
	unsigned int	sata_mem_sys_pwr_reg;
	unsigned char	res21[0x18];
	unsigned int	pad_retention_dram_sys_pwr_reg;
	unsigned int	pad_retention_maudio_sys_pwr_reg;
	unsigned char	res22[0x18];
	unsigned int	pad_retention_gpio_sys_pwr_reg;
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmca_sys_pwr_reg;
	unsigned int	pad_retention_mmcb_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;
	unsigned char	res23[0x8];
	unsigned int	pad_isolation_sys_pwr_reg;
	unsigned char	res24[0x1c];
	unsigned int	pad_alv_sel_sys_pwr_reg;
	unsigned char	res25[0x1c];
	unsigned int	xusbxti_sys_pwr_reg;
	unsigned int	xxti_sys_pwr_reg;
	unsigned char	res26[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;
	unsigned char	res27[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;
	unsigned char	res28[0x3c];
	unsigned int	gpio_mode_maudio_sys_pwr_reg;
	unsigned char	res29[0x3c];
	unsigned int	cam_sys_pwr_reg;
	unsigned int	tv_sys_pwr_reg;
	unsigned int	mfc_sys_pwr_reg;
	unsigned int	g3d_sys_pwr_reg;
	unsigned int	lcd0_sys_pwr_reg;
	unsigned int	lcd1_sys_pwr_reg;
	unsigned int	maudio_sys_pwr_reg;
	unsigned int	gps_sys_pwr_reg;
	unsigned int	gps_alive_sys_pwr_reg;
	unsigned char	res30[0xc5c];
	unsigned int	arm_core0_configuration;
	unsigned int	arm_core0_status;
	unsigned int	arm_core0_option;
	unsigned char	res31[0x74];
	unsigned int	arm_core1_configuration;
	unsigned int	arm_core1_status;
	unsigned int	arm_core1_option;
	unsigned char	res32[0x37c];
	unsigned int	arm_common_option;
	unsigned char	res33[0x1f4];
	unsigned int	arm_cpu_l2_0_configuration;
	unsigned int	arm_cpu_l2_0_status;
	unsigned char	res34[0x18];
	unsigned int	arm_cpu_l2_1_configuration;
	unsigned int	arm_cpu_l2_1_status;
	unsigned char	res35[0xa00];
	unsigned int	pad_retention_maudio_option;
	unsigned char	res36[0xdc];
	unsigned int	pad_retention_gpio_option;
	unsigned char	res37[0x1c];
	unsigned int	pad_retention_uart_option;
	unsigned char	res38[0x1c];
	unsigned int	pad_retention_mmca_option;
	unsigned char	res39[0x1c];
	unsigned int	pad_retention_mmcb_option;
	unsigned char	res40[0x1c];
	unsigned int	pad_retention_ebia_option;
	unsigned char	res41[0x1c];
	unsigned int	pad_retention_ebib_option;
	unsigned char	res42[0x160];
	unsigned int	ps_hold_control;
	unsigned char	res43[0xf0];
	unsigned int	xusbxti_configuration;
	unsigned int	xusbxti_status;
	unsigned char	res44[0x14];
	unsigned int	xusbxti_duration;
	unsigned int	xxti_configuration;
	unsigned int	xxti_status;
	unsigned char	res45[0x14];
	unsigned int	xxti_duration;
	unsigned char	res46[0x1dc];
	unsigned int	ext_regulator_duration;
	unsigned char	res47[0x5e0];
	unsigned int	cam_configuration;
	unsigned int	cam_status;
	unsigned int	cam_option;
	unsigned char	res48[0x14];
	unsigned int	tv_configuration;
	unsigned int	tv_status;
	unsigned int	tv_option;
	unsigned char	res49[0x14];
	unsigned int	mfc_configuration;
	unsigned int	mfc_status;
	unsigned int	mfc_option;
	unsigned char	res50[0x14];
	unsigned int	g3d_configuration;
	unsigned int	g3d_status;
	unsigned int	g3d_option;
	unsigned char	res51[0x14];
	unsigned int	lcd0_configuration;
	unsigned int	lcd0_status;
	unsigned int	lcd0_option;
	unsigned char	res52[0x14];
	unsigned int	lcd1_configuration;
	unsigned int	lcd1_status;
	unsigned int	lcd1_option;
	unsigned char	res53[0x34];
	unsigned int	gps_configuration;
	unsigned int	gps_status;
	unsigned int	gps_option;
	unsigned char	res54[0x14];
	unsigned int	gps_alive_configuration;
	unsigned int	gps_alive_status;
	unsigned int	gps_alive_option;
};

struct exynos4412_power {
	unsigned char	res1[0x0704];
	unsigned int	usbhost_phy_control;
	unsigned int	hsic1_phy_control;
	unsigned int	hsic2_phy_control;
};

struct exynos5_power {
	unsigned int	om_stat;
	unsigned char	res1[0x18];
	unsigned int	rtc_clko_sel;
	unsigned int	gnss_rtc_out_ctrl;
	unsigned char	res2[0x1dc];
	unsigned int	central_seq_configuration;
	unsigned int	central_seq_status;
	unsigned int	central_seq_option;
	unsigned char	res3[0x14];
	unsigned int	seq_transition0;
	unsigned int	seq_transition1;
	unsigned int	seq_transition2;
	unsigned int	seq_transition3;
	unsigned int	seq_transition4;
	unsigned int	seq_transition5;
	unsigned int	seq_transition6;
	unsigned int	seq_transition7;
	unsigned int	central_seq_dmc_configuration;
	unsigned int	central_seq_dmc_status;
	unsigned int	central_seq_dmc_option;
	unsigned char	res4[0x14];
	unsigned int	seq_dmc_transition0;
	unsigned int	seq_dmc_transition1;
	unsigned int	seq_dmc_transition2;
	unsigned int	seq_dmc_transition3;
	unsigned int	seq_dmc_transition4;
	unsigned int	seq_dmc_transition5;
	unsigned int	seq_dmc_transition6;
	unsigned int	seq_dmc_transition7;
	unsigned char	res5[0x180];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned int	automatic_wdt_reset_disable;
	unsigned int	mask_wdt_reset_request;
	unsigned int	mask_wreset_request;
	unsigned char	res6[0xec];
	unsigned int	reset_sequencer_configuration;
	unsigned int	reset_sequencer_status;
	unsigned int	reset_sequencer_option;
	unsigned char	res7[0xf4];
	unsigned int	wakeup_stat;
	unsigned int	eint_wakeup_mask;
	unsigned int	wakeup_mask;
	unsigned int	wakeup_interrupt;
	unsigned char	res8[0x10];
	unsigned int	wakeup_stat_dmc;
	unsigned int	eint_wakeup_mask_dmc;
	unsigned int	wakeup_mask_dmc;
	unsigned int	wakeup_interrupt_dmc;
	unsigned char	res9[0xd0];
	unsigned int	hdmi_phy_control;
	unsigned int	usbdrd_phy_control;
	unsigned int	usbhost_phy_control;
	unsigned int	efnand_phy_control;
	unsigned int	mipi_phy0_control;
	unsigned int	mipi_phy1_control;
	unsigned int	adc_phy_control;
	unsigned int	mtcadc_phy_control;
	unsigned int	dptx_phy_control;
	unsigned int	sata_phy_control;
	unsigned char	res10[0xd8];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	sysip_dat0;
	unsigned int	sysip_dat1;
	unsigned int	sysip_dat2;
	unsigned int	sysip_dat3;
	unsigned char	res11[0xe0];
	unsigned int	pmu_spare0;
	unsigned int	pmu_spare1;
	unsigned int	pmu_spare2;
	unsigned int	pmu_spare3;
	unsigned char	res12[0x70];
	unsigned int	irom_data_reg0;
	unsigned int	irom_data_reg1;
	unsigned int	irom_data_reg2;
	unsigned int	irom_data_reg3;
	unsigned char	res13[0x70];
	unsigned int	pmu_debug;
	unsigned char	res14[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;
	unsigned int	dis_irq_arm_core0_local_sys_pwr_reg;
	unsigned int	dis_irq_arm_core0_central_sys_pwr_reg;
	unsigned char	res15[0x4];
	unsigned int	arm_core1_sys_pwr_reg;
	unsigned int	dis_irq_arm_core1_local_sys_pwr_reg;
	unsigned int	dis_irq_arm_core1_central_sys_pwr_reg;
	unsigned char	res16[0x24];
	unsigned int	fsys_arm_sys_pwr_reg;
	unsigned int	dis_irq_fsys_arm_local_sys_pwr_reg;
	unsigned int	dis_irq_fsys_arm_central_sys_pwr_reg;
	unsigned char	res17[0x4];
	unsigned int	isp_arm_sys_pwr_reg;
	unsigned int	dis_irq_isp_arm_local_sys_pwr_reg;
	unsigned int	dis_irq_isp_arm_central_sys_pwr_reg;
	unsigned char	res18[0x24];
	unsigned int	arm_common_sys_pwr_reg;
	unsigned char	res19[0x3c];
	unsigned int	arm_l2_sys_pwr_reg;
	unsigned char	res20[0x3c];
	unsigned int	cmu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_sclkstop_sys_pwr_reg;
	unsigned char	res21[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;
	unsigned char	res22[0x10];
	unsigned int	cmu_aclkstop_dmc_sys_pwr_reg;
	unsigned int	cmu_sclkstop_dmc_sys_pwr_reg;
	unsigned char	res23[0x4];
	unsigned int	cmu_reset_dmc_sys_pwr_reg;
	unsigned char	res24[0x8];
	unsigned int	ddrphy_dlllock_sys_pwr_reg;
	unsigned char	res25[0x4];
	unsigned int	apll_sysclk_sys_pwr_reg;
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;
	unsigned int	bpll_sysclk_sys_pwr_reg;
	unsigned int	cpll_sysclk_sys_pwr_reg;
	unsigned int	gpll_sysclk_sys_pwr_reg;
	unsigned char	res26[0x8];
	unsigned int	mplluser_sysclk_sys_pwr_reg;
	unsigned char	res27[0x8];
	unsigned int	bplluser_sysclk_sys_pwr_reg;
	unsigned char	res28[0xc];
	unsigned int	top_bus_sys_pwr_reg;
	unsigned int	top_retention_sys_pwr_reg;
	unsigned int	top_pwr_sys_pwr_reg;
	unsigned char	res29[0x4];
	unsigned int	top_bus_dmc_sys_pwr_reg;
	unsigned int	top_retention_dmc_sys_pwr_reg;
	unsigned int	top_pwr_dmc_sys_pwr_reg;
	unsigned char	res30[0x4];
	unsigned int	logic_reset_sys_pwr_reg;
	unsigned int	oscclk_gate_sys_pwr_reg;
	unsigned char	res31[0x8];
	unsigned int	logic_reset_dmc_sys_pwr_reg;
	unsigned int	oscclk_gate_dmc_sys_pwr_reg;
	unsigned char	res32[0x8];
	unsigned int	usbotg_mem_sys_pwr_reg;
	unsigned char	res33[0x4];
	unsigned int	g2d_mem_sys_pwr_reg;
	unsigned int	usbdrd_mem_sys_pwr_reg;
	unsigned int	efnand_mem_sys_pwr_reg;
	unsigned int	cssys_mem_sys_pwr_reg;
	unsigned int	secss_mem_sys_pwr_reg;
	unsigned int	rotator_mem_sys_pwr_reg;
	unsigned int	intram_mem_sys_pwr_reg;
	unsigned int	introm_mem_sys_pwr_reg;
	unsigned int	jpeg_mem_sys_pwr_reg;
	unsigned int	hsi_mem_sys_pwr_reg;
	unsigned char	res34[0x4];
	unsigned int	mcuiop_mem_sys_pwr_reg;
	unsigned char	res35[0x4];
	unsigned int	sata_mem_sys_pwr_reg;
	unsigned int	pad_retention_dram_sys_pwr_reg;
	unsigned int	pad_retention_mau_sys_pwr_reg;
	unsigned int	pad_retention_jtag_sys_pwr_reg;
	unsigned char	res36[0xc];
	unsigned int	pad_retention_mmc2_sys_pwr_reg;
	unsigned int	pad_retention_mmc3_sys_pwr_reg;
	unsigned int	pad_retention_gpio_sys_pwr_reg;
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmc0_sys_pwr_reg;
	unsigned int	pad_retention_mmc1_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;
	unsigned int	pad_retention_spi_sys_pwr_reg;
	unsigned int	pad_retention_gpio_dmc_sys_pwr_reg;
	unsigned int	pad_isolation_sys_pwr_reg;
	unsigned char	res37[0xc];
	unsigned int	pad_isolation_dmc_sys_pwr_reg;
	unsigned char	res38[0xc];
	unsigned int	pad_alv_sel_sys_pwr_reg;
	unsigned char	res39[0x20];
	unsigned int	xxti_sys_pwr_reg;
	unsigned char	res40[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;
	unsigned char	res41[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;
	unsigned char	res42[0x1c];
	unsigned int	gpio_mode_dmc_sys_pwr_reg;
	unsigned char	res43[0x1c];
	unsigned int	gpio_mode_mau_sys_pwr_reg;
	unsigned int	top_asb_reset_sys_pwr_reg;
	unsigned int	top_asb_isolation_sys_pwr_reg;
	unsigned char	res44[0xb4];
	unsigned int	gscl_sys_pwr_reg;
	unsigned int	isp_sys_pwr_reg;
	unsigned int	mfc_sys_pwr_reg;
	unsigned int	g3d_sys_pwr_reg;
	unsigned char	res45[0x4];
	unsigned int	disp1_sys_pwr_reg;
	unsigned int	mau_sys_pwr_reg;
	unsigned char	res46[0x64];
	unsigned int	cmu_clkstop_gscl_sys_pwr_reg;
	unsigned int	cmu_clkstop_isp_sys_pwr_reg;
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;
	unsigned char	res47[0x4];
	unsigned int	cmu_clkstop_disp1_sys_pwr_reg;
	unsigned int	cmu_clkstop_mau_sys_pwr_reg;
	unsigned char	res48[0x24];
	unsigned int	cmu_sysclk_gscl_sys_pwr_reg;
	unsigned int	cmu_sysclk_isp_sys_pwr_reg;
	unsigned int	cmu_sysclk_mfc_sys_pwr_reg;
	unsigned int	cmu_sysclk_g3d_sys_pwr_reg;
	unsigned char	res49[0x4];
	unsigned int	cmu_sysclk_disp1_sys_pwr_reg;
	unsigned int	cmu_sysclk_mau_sys_pwr_reg;
	unsigned char	res50[0xa4];
	unsigned int	cmu_reset_gscl_sys_pwr_reg;
	unsigned int	cmu_reset_isp_sys_pwr_reg;
	unsigned int	cmu_reset_mfc_sys_pwr_reg;
	unsigned int	cmu_reset_g3d_sys_pwr_reg;
	unsigned char	res51[0x4];
	unsigned int	cmu_reset_disp1_sys_pwr_reg;
	unsigned int	cmu_reset_mau_sys_pwr_reg;
	unsigned char	res52[0xa64];
	unsigned int	arm_core0_configuration;
	unsigned int	arm_core0_status;
	unsigned int	arm_core0_option;
	unsigned char	res53[0x14];
	unsigned int	dis_irq_arm_core0_local_configuration;
	unsigned int	dis_irq_arm_core0_local_status;
	unsigned int	dis_irq_arm_core0_local_option;
	unsigned char	res54[0x14];
	unsigned int	dis_irq_arm_core0_central_configuration;
	unsigned int	dis_irq_arm_core0_central_status;
	unsigned int	dis_irq_arm_core0_central_option;
	unsigned char	res55[0x34];
	unsigned int	arm_core1_configuration;
	unsigned int	arm_core1_status;
	unsigned int	arm_core1_option;
	unsigned char	res56[0x14];
	unsigned int	dis_irq_arm_core1_local_configuration;
	unsigned int	dis_irq_arm_core1_local_status;
	unsigned int	dis_irq_arm_core1_local_option;
	unsigned char	res57[0x14];
	unsigned int	dis_irq_arm_core1_central_configuration;
	unsigned int	dis_irq_arm_core1_central_status;
	unsigned int	dis_irq_arm_core1_central_option;
	unsigned char	res58[0x134];
	unsigned int	fsys_arm_configuration;
	unsigned int	fsys_arm_status;
	unsigned int	fsys_arm_option;
	unsigned char	res59[0x14];
	unsigned int	dis_irq_fsys_arm_local_configuration;
	unsigned int	dis_irq_fsys_arm_local_status;
	unsigned int	dis_irq_fsys_arm_local_option;
	unsigned char	res60[0x14];
	unsigned int	dis_irq_fsys_arm_central_configuration;
	unsigned int	dis_irq_fsys_arm_central_status;
	unsigned int	dis_irq_fsys_arm_central_option;
	unsigned char	res61[0x34];
	unsigned int	isp_arm_configuration;
	unsigned int	isp_arm_status;
	unsigned int	isp_arm_option;
	unsigned char	res62[0x14];
	unsigned int	dis_irq_isp_arm_local_configuration;
	unsigned int	dis_irq_isp_arm_local_status;
	unsigned int	dis_irq_isp_arm_local_option;
	unsigned char	res63[0x14];
	unsigned int	dis_irq_isp_arm_central_configuration;
	unsigned int	dis_irq_isp_arm_central_status;
	unsigned int	dis_irq_isp_arm_central_option;
	unsigned char	res64[0x134];
	unsigned int	arm_common_configuration;
	unsigned int	arm_common_status;
	unsigned int	arm_common_option;
	unsigned char	res65[0x1f4];
	unsigned int	arm_l2_configuration;
	unsigned int	arm_l2_status;
	unsigned int	arm_l2_option;
	unsigned char	res66[0x1f4];
	unsigned int	cmu_aclkstop_configuration;
	unsigned int	cmu_aclkstop_status;
	unsigned int	cmu_aclkstop_option;
	unsigned char	res67[0x14];
	unsigned int	cmu_sclkstop_configuration;
	unsigned int	cmu_sclkstop_status;
	unsigned int	cmu_sclkstop_option;
	unsigned char	res68[0x34];
	unsigned int	cmu_reset_configuration;
	unsigned int	cmu_reset_status;
	unsigned int	cmu_reset_option;
	unsigned char	res69[0x94];
	unsigned int	cmu_aclkstop_dmc_configuration;
	unsigned int	cmu_aclkstop_dmc_status;
	unsigned int	cmu_aclkstop_dmc_option;
	unsigned char	res70[0x14];
	unsigned int	cmu_sclkstop_dmc_configuration;
	unsigned int	cmu_sclkstop_dmc_status;
	unsigned int	cmu_sclkstop_dmc_option;
	unsigned char	res71[0x34];
	unsigned int	cmu_reset_dmc_configuration;
	unsigned int	cmu_reset_dmc_status;
	unsigned int	cmu_reset_dmc_option;
	unsigned char	res72[0x54];
	unsigned int	ddrphy_dlllock_configuration;
	unsigned int	ddrphy_dlllock_status;
	unsigned int	ddrphy_dlllock_option;
	unsigned char	res73[0x34];
	unsigned int	apll_sysclk_configuration;
	unsigned int	apll_sysclk_status;
	unsigned int	apll_sysclk_option;
	unsigned char	res74[0x18];
	unsigned int	mpll_sysclk_status;
	unsigned int	mpll_sysclk_option;
	unsigned char	res75[0x14];
	unsigned int	vpll_sysclk_configuration;
	unsigned int	vpll_sysclk_status;
	unsigned int	vpll_sysclk_option;
	unsigned char	res76[0x14];
	unsigned int	epll_sysclk_configuration;
	unsigned int	epll_sysclk_status;
	unsigned int	epll_sysclk_option;
	unsigned char	res77[0x14];
	unsigned int	bpll_sysclk_configuration;
	unsigned int	bpll_sysclk_status;
	unsigned int	bpll_sysclk_option;
	unsigned char	res78[0x14];
	unsigned int	cpll_sysclk_configuration;
	unsigned int	cpll_sysclk_status;
	unsigned int	cpll_sysclk_option;
	unsigned char	res79[0x14];
	unsigned int	gpll_sysclk_configuration;
	unsigned int	gpll_sysclk_status;
	unsigned int	gpll_sysclk_option;
	unsigned char	res80[0x54];
	unsigned int	mplluser_sysclk_configuration;
	unsigned int	mplluser_sysclk_status;
	unsigned int	mplluser_sysclk_option;
	unsigned char	res81[0x54];
	unsigned int	bplluser_sysclk_configuration;
	unsigned int	bplluser_sysclk_status;
	unsigned int	bplluser_sysclk_option;
	unsigned char	res82[0x74];
	unsigned int	top_bus_configuration;
	unsigned int	top_bus_status;
	unsigned int	top_bus_option;
	unsigned char	res83[0x14];
	unsigned int	top_retention_configuration;
	unsigned int	top_retention_status;
	unsigned int	top_retention_option;
	unsigned char	res84[0x14];
	unsigned int	top_pwr_configuration;
	unsigned int	top_pwr_status;
	unsigned int	top_pwr_option;
	unsigned char	res85[0x34];
	unsigned int	top_bus_dmc_configuration;
	unsigned int	top_bus_dmc_status;
	unsigned int	top_bus_dmc_option;
	unsigned char	res86[0x14];
	unsigned int	top_retention_dmc_configuration;
	unsigned int	top_retention_dmc_status;
	unsigned int	top_retention_dmc_option;
	unsigned char	res87[0x14];
	unsigned int	top_pwr_dmc_configuration;
	unsigned int	top_pwr_dmc_status;
	unsigned int	top_pwr_dmc_option;
	unsigned char	res88[0x34];
	unsigned int	logic_reset_configuration;
	unsigned int	logic_reset_status;
	unsigned int	logic_reset_option;
	unsigned char	res89[0x14];
	unsigned int	oscclk_gate_configuration;
	unsigned int	oscclk_gate_status;
	unsigned int	oscclk_gate_option;
	unsigned char	res90[0x54];
	unsigned int	logic_reset_dmc_configuration;
	unsigned int	logic_reset_dmc_status;
	unsigned int	logic_reset_dmc_option;
	unsigned char	res91[0x14];
	unsigned int	oscclk_gate_dmc_configuration;
	unsigned int	oscclk_gate_dmc_status;
	unsigned int	oscclk_gate_dmc_option;
	unsigned char	res92[0x54];
	unsigned int	usbotg_mem_configuration;
	unsigned int	usbotg_mem_status;
	unsigned int	usbotg_mem_option;
	unsigned char	res93[0x34];
	unsigned int	g2d_mem_configuration;
	unsigned int	g2d_mem_status;
	unsigned int	g2d_mem_option;
	unsigned char	res94[0x14];
	unsigned int	usbdrd_mem_configuration;
	unsigned int	usbdrd_mem_status;
	unsigned int	usbdrd_mem_option;
	unsigned char	res95[0x14];
	unsigned int	efnand_mem_configuration;
	unsigned int	efnand_mem_status;
	unsigned int	efnand_mem_option;
	unsigned char	res96[0x14];
	unsigned int	cssys_mem_configuration;
	unsigned int	cssys_mem_status;
	unsigned int	cssys_mem_option;
	unsigned char	res97[0x14];
	unsigned int	secss_mem_configuration;
	unsigned int	secss_mem_status;
	unsigned int	secss_mem_option;
	unsigned char	res98[0x14];
	unsigned int	rotator_mem_configuration;
	unsigned int	rotator_mem_status;
	unsigned int	rotator_mem_option;
	unsigned char	res99[0x14];
	unsigned int	intram_mem_configuration;
	unsigned int	intram_mem_status;
	unsigned int	intram_mem_option;
	unsigned char	res100[0x14];
	unsigned int	introm_mem_configuration;
	unsigned int	introm_mem_status;
	unsigned int	introm_mem_option;
	unsigned char	res101[0x14];
	unsigned int	jpeg_mem_configuration;
	unsigned int	jpeg_mem_status;
	unsigned int	jpeg_mem_option;
	unsigned char	res102[0x14];
	unsigned int	hsi_mem_configuration;
	unsigned int	hsi_mem_status;
	unsigned int	hsi_mem_option;
	unsigned char	res103[0x34];
	unsigned int	mcuiop_mem_configuration;
	unsigned int	mcuiop_mem_status;
	unsigned int	mcuiop_mem_option;
	unsigned char	res104[0x14];
	unsigned int	sata_mem_configuration;
	unsigned int	sata_mem_status;
	unsigned int	sata_mem_option;
	unsigned char	res105[0x34];
	unsigned int	pad_retention_dram_configuration;
	unsigned int	pad_retention_dram_status;
	unsigned int	pad_retention_dram_option;
	unsigned char	res106[0x14];
	unsigned int	pad_retention_mau_configuration;
	unsigned int	pad_retention_mau_status;
	unsigned int	pad_retention_mau_option;
	unsigned char	res107[0x14];
	unsigned int	pad_retention_jtag_configuration;
	unsigned int	pad_retention_jtag_status;
	unsigned int	pad_retention_jtag_option;
	unsigned char	res108[0x74];
	unsigned int	pad_retention_mmc2_configuration;
	unsigned int	pad_retention_mmc2_status;
	unsigned int	pad_retention_mmc2_option;
	unsigned char	res109[0x14];
	unsigned int	pad_retention_mmc3_configuration;
	unsigned int	pad_retention_mmc3_status;
	unsigned int	pad_retention_mmc3_option;
	unsigned char	res110[0x14];
	unsigned int	pad_retention_gpio_configuration;
	unsigned int	pad_retention_gpio_status;
	unsigned int	pad_retention_gpio_option;
	unsigned char	res111[0x14];
	unsigned int	pad_retention_uart_configuration;
	unsigned int	pad_retention_uart_status;
	unsigned int	pad_retention_uart_option;
	unsigned char	res112[0x14];
	unsigned int	pad_retention_mmc0_configuration;
	unsigned int	pad_retention_mmc0_status;
	unsigned int	pad_retention_mmc0_option;
	unsigned char	res113[0x14];
	unsigned int	pad_retention_mmc1_configuration;
	unsigned int	pad_retention_mmc1_status;
	unsigned int	pad_retention_mmc1_option;
	unsigned char	res114[0x14];
	unsigned int	pad_retention_ebia_configuration;
	unsigned int	pad_retention_ebia_status;
	unsigned int	pad_retention_ebia_option;
	unsigned char	res115[0x14];
	unsigned int	pad_retention_ebib_configuration;
	unsigned int	pad_retention_ebib_status;
	unsigned int	pad_retention_ebib_option;
	unsigned char	res116[0x14];
	unsigned int	pad_retention_spi_configuration;
	unsigned int	pad_retention_spi_status;
	unsigned int	pad_retention_spi_option;
	unsigned char	res117[0x14];
	unsigned int	pad_retention_gpio_dmc_configuration;
	unsigned int	pad_retention_gpio_dmc_status;
	unsigned int	pad_retention_gpio_dmc_option;
	unsigned char	res118[0x14];
	unsigned int	pad_isolation_configuration;
	unsigned int	pad_isolation_status;
	unsigned int	pad_isolation_option;
	unsigned char	res119[0x74];
	unsigned int	pad_isolation_dmc_configuration;
	unsigned int	pad_isolation_dmc_status;
	unsigned int	pad_isolation_dmc_option;
	unsigned char	res120[0x74];
	unsigned int	pad_alv_sel_configuration;
	unsigned int	pad_alv_sel_status;
	unsigned int	pad_alv_sel_option0;
	unsigned int	ps_hold_control;
	unsigned char	res130[0x110];
	unsigned int	xxti_configuration;
	unsigned int	xxti_status;
	unsigned int	xxti_option;
	unsigned char	res131[0x10];
	unsigned int	xxti_duration3;
	unsigned char	res132[0x1c0];
	unsigned int	ext_regulator_configuration;
	unsigned int	ext_regulator_status;
	unsigned int	ext_regulator_option;
	unsigned char	res133[0x10];
	unsigned int	ext_regulator_duration3;
	unsigned char	res134[0x1e0];
	unsigned int	gpio_mode_configuration;
	unsigned int	gpio_mode_status;
	unsigned int	gpio_mode_option;
	unsigned char	res135[0xf4];
	unsigned int	gpio_mode_dmc_configuration;
	unsigned int	gpio_mode_dmc_status;
	unsigned int	gpio_mode_dmc_option;
	unsigned char	res136[0xd4];
	unsigned int	gpio_mode_mau_configuration;
	unsigned int	gpio_mode_mau_status;
	unsigned int	gpio_mode_mau_option;
	unsigned char	res137[0x14];
	unsigned int	top_asb_reset_configuration;
	unsigned int	top_asb_reset_status;
	unsigned int	top_asb_reset_option;
	unsigned char	res138[0x14];
	unsigned int	top_asb_isolation_configuration;
	unsigned int	top_asb_isolation_status;
	unsigned int	top_asb_isolation_option;
	unsigned char	res139[0x5d4];
	unsigned int	gscl_configuration;
	unsigned int	gscl_status;
	unsigned int	gscl_option;
	unsigned char	res140[0x14];
	unsigned int	isp_configuration;
	unsigned int	isp_status;
	unsigned int	isp_option;
	unsigned char	res141[0x14];
	unsigned int	mfc_configuration;
	unsigned int	mfc_status;
	unsigned int	mfc_option;
	unsigned char	res142[0x14];
	unsigned int	g3d_configuration;
	unsigned int	g3d_status;
	unsigned int	g3d_option;
	unsigned char	res143[0x34];
	unsigned int	disp1_configuration;
	unsigned int	disp1_status;
	unsigned int	disp1_option;
	unsigned char	res144[0x14];
	unsigned int	mau_configuration;
	unsigned int	mau_status;
	unsigned int	mau_option;
	unsigned char	res145[0x334];
	unsigned int	cmu_clkstop_gscl_configuration;
	unsigned int	cmu_clkstop_gscl_status;
	unsigned int	cmu_clkstop_gscl_option;
	unsigned char	res146[0x14];
	unsigned int	cmu_clkstop_isp_configuration;
	unsigned int	cmu_clkstop_isp_status;
	unsigned int	cmu_clkstop_isp_option;
	unsigned char	res147[0x14];
	unsigned int	cmu_clkstop_mfc_configuration;
	unsigned int	cmu_clkstop_mfc_status;
	unsigned int	cmu_clkstop_mfc_option;
	unsigned char	res148[0x14];
	unsigned int	cmu_clkstop_g3d_configuration;
	unsigned int	cmu_clkstop_g3d_status;
	unsigned int	cmu_clkstop_g3d_option;
	unsigned char	res149[0x34];
	unsigned int	cmu_clkstop_disp1_configuration;
	unsigned int	cmu_clkstop_disp1_status;
	unsigned int	cmu_clkstop_disp1_option;
	unsigned char	res150[0x14];
	unsigned int	cmu_clkstop_mau_configuration;
	unsigned int	cmu_clkstop_mau_status;
	unsigned int	cmu_clkstop_mau_option;
	unsigned char	res151[0x134];
	unsigned int	cmu_sysclk_gscl_configuration;
	unsigned int	cmu_sysclk_gscl_status;
	unsigned int	cmu_sysclk_gscl_option;
	unsigned char	res152[0x18];
	unsigned int	cmu_sysclk_isp_status;
	unsigned int	cmu_sysclk_isp_option;
	unsigned char	res153[0x18];
	unsigned int	cmu_sysclk_mfc_status;
	unsigned int	cmu_sysclk_mfc_option;
	unsigned char	res154[0x18];
	unsigned int	cmu_sysclk_g3d_status;
	unsigned int	cmu_sysclk_g3d_option;
	unsigned char	res155[0x38];
	unsigned int	cmu_sysclk_disp1_status;
	unsigned int	cmu_sysclk_disp1_option;
	unsigned char	res156[0x18];
	unsigned int	cmu_sysclk_mau_status;
	unsigned int	cmu_sysclk_mau_option;
	unsigned char	res157[0x534];
	unsigned int	cmu_reset_gscl_configuration;
	unsigned int	cmu_reset_gscl_status;
	unsigned int	cmu_reset_gscl_option;
	unsigned char	res158[0x14];
	unsigned int	cmu_reset_isp_configuration;
	unsigned int	cmu_reset_isp_status;
	unsigned int	cmu_reset_isp_option;
	unsigned char	res159[0x14];
	unsigned int	cmu_reset_mfc_configuration;
	unsigned int	cmu_reset_mfc_status;
	unsigned int	cmu_reset_mfc_option;
	unsigned char	res160[0x14];
	unsigned int	cmu_reset_g3d_configuration;
	unsigned int	cmu_reset_g3d_status;
	unsigned int	cmu_reset_g3d_option;
	unsigned char	res161[0x34];
	unsigned int	cmu_reset_disp1_configuration;
	unsigned int	cmu_reset_disp1_status;
	unsigned int	cmu_reset_disp1_option;
	unsigned char	res162[0x14];
	unsigned int	cmu_reset_mau_configuration;
	unsigned int	cmu_reset_mau_status;
	unsigned int	cmu_reset_mau_option;
	unsigned char	res163[0x24];
};

struct exynos5260_power {
	unsigned int	om_stat;
	unsigned char	res1[0x3fc];
	unsigned int	sw_reset;
	unsigned int	rst_stat;
	unsigned char	res2[0x3f8];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	sysip_dat0;
	unsigned int	sysip_dat1;
	unsigned int	sysip_dat2;
	unsigned int	sysip_dat3;
	unsigned char	res3[0xe0];
	unsigned int	pmu_spare0;
	unsigned int	pmu_spare1;
	unsigned int	pmu_spare2;
	unsigned int	pmu_spare3;
	unsigned char	res4[0x70];
	unsigned int	irom_data_reg0;
	unsigned int	irom_data_reg1;
	unsigned int	irom_data_reg2;
	unsigned int	irom_data_reg3;
};

struct exynos5430_power {
	unsigned int	om_stat;		/* 0x105C_0000 */
	unsigned char	res1[0x3fc];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned char	res2[0x3f8];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	sysip_dat0;
	unsigned int	sysip_dat1;
	unsigned int	sysip_dat2;
	unsigned int	sysip_dat3;
	unsigned char	res3[0xe0];
	unsigned int	pmu_spare0;
	unsigned int	pmu_spare1;
	unsigned int	pmu_spare2;
	unsigned int	pmu_spare3;
	unsigned char	res4[0x70];
	unsigned int	irom_data_reg0;
	unsigned int	irom_data_reg1;
	unsigned int	irom_data_reg2;
	unsigned int	irom_data_reg3;
};
#endif	/* __ASSEMBLY__ */

#define OM_PIN_BITS	0x1f
#define OM_PIN_SHIFT	0x1
#define OM_PIN_MASK	(OM_PIN_BITS << OM_PIN_SHIFT)

enum {
	/*
	 * Assign the OM pin values for respective boot modes.
	 * Exynos4 does not support spi boot and the mmc boot OM
	 * pin values are the same across Exynos4 and Exynos5.
	 */
	BOOT_MODE_SD = 4,      /* SD_CH2  | USB */
	BOOT_MODE_EMMC = 8,     /* EMMC4.4 | USB */
	BOOT_MODE_EMMC_SD = 40, /* EMMC4.4 | SD_CH2 */
	BOOT_MODE_SERIAL = 20,
	/* Boot based on Operating Mode pin settings */
	BOOT_MODE_OM = 32,
	BOOT_MODE_USB,	/* Boot using USB download */
};

unsigned int get_boot_mode(void);

void set_mipi_phy_ctrl(unsigned int dev_index, unsigned int enable);

#define EXYNOS_MIPI_PHY_ENABLE		(1 << 0)
#define EXYNOS_MIPI_PHY_SRESETN		(1 << 1)
#define EXYNOS_MIPI_PHY_MRESETN		(1 << 2)

void set_usbhost_phy_ctrl(unsigned int enable);

/* Enables hardware tripping to power off the system when TMU fails */
void set_hw_thermal_trip(void);

#define POWER_USB_HOST_PHY_CTRL_EN		(1 << 0)
#define POWER_USB_HOST_PHY_CTRL_DISABLE		(0 << 0)

void set_usbdrd_phy_ctrl(unsigned int enable);

#define POWER_USB_DRD_PHY_CTRL_EN		(1 << 0)
#define POWER_USB_DRD_PHY_CTRL_DISABLE		(0 << 0)

void set_dp_phy_ctrl(unsigned int enable);

#define EXYNOS_DP_PHY_ENABLE		(1 << 0)

#define EXYNOS_PS_HOLD_CONTROL_DATA_HIGH	(1 << 8)
#define POWER_ENABLE_HW_TRIP			(1UL << 31)

/*
 * Set ps_hold data driving value high
 * This enables the machine to stay powered on
 * after the initial power-on condition goes away
 * (e.g. power button).
 */
void set_ps_hold_ctrl(void);

/* PMU_DEBUG bits [12:8] = 0x1000 selects XXTI clock source */
#define PMU_DEBUG_XXTI                          0x1000
/* Mask bit[12:8] for xxti clock selection */
#define PMU_DEBUG_CLKOUT_SEL_MASK               0x1f00

/*
 * Pmu debug is used for xclkout, enable xclkout with
 * source as XXTI
 */
void set_xclkout(void);

/*
 *  Read inform1 to get the reset status.
 *  @return: the value can be either S5P_CHECK_SLEEP or
 *  S5P_CHECK_DIDLE or S5P_CHECK_LPA as stored in inform1
 *  if none of these then its normal booting.
 */
uint32_t get_reset_status(void);


/* Read the resume function and call it */
void power_exit_wakeup(void);
#endif