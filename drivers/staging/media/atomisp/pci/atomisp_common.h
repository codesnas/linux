/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Medifield PNW Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 Intel Corporation. All Rights Reserved.
 *
 * Copyright (c) 2010 Silicon Hive www.siliconhive.com.
 */

#ifndef	__ATOMISP_COMMON_H__
#define	__ATOMISP_COMMON_H__

#include "../../include/linux/atomisp.h"

#include <linux/v4l2-mediabus.h>

#include <media/videobuf2-v4l2.h>

#include "atomisp_compat.h"

#include "ia_css.h"

extern int dbg_level;
extern int dbg_func;
extern int pad_w;
extern int pad_h;

/* Minimum padding requirements for ISP2400 (BYT) */
#define ISP2400_MIN_PAD_W		12
#define ISP2400_MIN_PAD_H		12

#define CSS_DTRACE_VERBOSITY_LEVEL	5	/* Controls trace verbosity */
#define CSS_DTRACE_VERBOSITY_TIMEOUT	9	/* Verbosity on ISP timeout */
#define MRFLD_MAX_ZOOM_FACTOR	1024

/* ISP2401 */
#define ATOMISP_CSS_ISP_PIPE_VERSION_2_7    1

struct atomisp_format_bridge {
	unsigned int pixelformat;
	unsigned int depth;
	u32 mbus_code;
	enum ia_css_frame_format sh_fmt;
	unsigned char description[32];	/* the same as struct v4l2_fmtdesc */
	bool planar;
};

struct atomisp_fmt {
	u32 pixelformat;
	u32 depth;
	u32 bytesperline;
	u32 framesize;
	u32 imagesize;
	u32 width;
	u32 height;
	u32 bayer_order;
};

#endif
