/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Jeff Epler for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "py/obj.h"
#include "py/stream.h"
#include "shared-module/displayio/Bitmap.h"
#include "shared-bindings/bitmaptools/__init__.h"

extern const mp_obj_type_t jpegio_jpegdecoder_type;

typedef struct jpegio_jpegdecoder_obj jpegio_jpegdecoder_obj_t;

void common_hal_jpegio_jpegdecoder_construct(jpegio_jpegdecoder_obj_t *self);
void common_hal_jpegio_jpegdecoder_close(jpegio_jpegdecoder_obj_t *self);
mp_obj_t common_hal_jpegio_jpegdecoder_set_source_buffer(jpegio_jpegdecoder_obj_t *self, mp_obj_t jpeg_data);
mp_obj_t common_hal_jpegio_jpegdecoder_set_source_file(jpegio_jpegdecoder_obj_t *self, mp_obj_t file_obj);
void common_hal_jpegio_jpegdecoder_decode_into(
    jpegio_jpegdecoder_obj_t *self,
    displayio_bitmap_t *bitmap, int scale, int16_t x, int16_t y,
    bitmaptools_rect_t *lim,
    uint32_t skip_source_index, bool skip_source_index_none,
    uint32_t skip_dest_index, bool skip_dest_index_none);
