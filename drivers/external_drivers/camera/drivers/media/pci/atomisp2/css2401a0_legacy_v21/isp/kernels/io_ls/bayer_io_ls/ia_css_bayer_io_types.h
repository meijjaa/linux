/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2015 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */


#ifndef __IA_CSS_BAYER_IO_TYPES_H
#define __IA_CSS_BAYER_IO_TYPES_H

struct ia_css_bayer_io_config {
	unsigned base_address;
	unsigned width;
	unsigned height;
	unsigned stride;
	unsigned ddr_elems_per_word;
	unsigned dma_channel;
};

#endif /* __IA_CSS_BAYER_IO_TYPES_H */
