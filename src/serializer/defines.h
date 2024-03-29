/**
 *  Copyright (c) 2010  Yukio Obuchi
 * 
 *   Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation files
 *  (the "Software"), to deal in the Software without restriction,
 *  including without limitation the rights to use, copy, modify, merge,
 *  publish, distribute, sublicense, and/or sell copies of the Software,
 *  and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 * 
 *   The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 * 
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 *  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 *  ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 *  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 */

#ifndef H_DEFINES_H_100629201617__
#define H_DEFINES_H_100629201617__

#define TYPE_POSITIVE_FIXNUM       (0x00)
#define TYPE_POSITIVE_FIXNUM_MASK  (0x80)

#define TYPE_NEGATIVE_FIXNUM       (0xe0)
#define TYPE_NEGATIVE_FIXNUM_MASK  (0xe0)

#define TYPE_FIXRAW                (0xa0)
#define TYPE_FIXRAW_MASK           (0xe0)

#define TYPE_FIXARRAY              (0x90)
#define TYPE_FIXARRAY_MASK         (0xe0)

#define TYPE_FIXMAP                (0x80)
#define TYPE_FIXMAP_MASK           (0xe0)

#define TYPE_VALIABLE              (0xc0)
#define TYPE_VALIABLE_MASK         (0xe0)

#define TYPE_VALIABLE_NIL     (0xc0) ///< シリアライズデータヘッダ(NIL     )
#define TYPE_VALIABLE_FALSE   (0xc2) ///< シリアライズデータヘッダ(FALSE   )
#define TYPE_VALIABLE_TRUE    (0xc3) ///< シリアライズデータヘッダ(TRUE    )

#define TYPE_VALIABLE_FLOAT   (0xca) ///< シリアライズデータヘッダ(FLOAT   )
#define TYPE_VALIABLE_DOUBLE  (0xcb) ///< シリアライズデータヘッダ(DOUBLE  )

#define TYPE_VALIABLE_UINT8   (0xcc) ///< シリアライズデータヘッダ(UINT8   )
#define TYPE_VALIABLE_UINT16  (0xcd) ///< シリアライズデータヘッダ(UINT16  )
#define TYPE_VALIABLE_UINT32  (0xce) ///< シリアライズデータヘッダ(UINT32  )
#define TYPE_VALIABLE_UINT64  (0xcf) ///< シリアライズデータヘッダ(UINT64  )

#define TYPE_VALIABLE_INT8    (0xd0) ///< シリアライズデータヘッダ(INT8    )
#define TYPE_VALIABLE_INT16   (0xd1) ///< シリアライズデータヘッダ(INT16   )
#define TYPE_VALIABLE_INT32   (0xd2) ///< シリアライズデータヘッダ(INT32   )
#define TYPE_VALIABLE_INT64   (0xd3) ///< シリアライズデータヘッダ(INT64   )

#define TYPE_VALIABLE_RAW16   (0xda) ///< シリアライズデータヘッダ(RAW16   )
#define TYPE_VALIABLE_RAW32   (0xdb) ///< シリアライズデータヘッダ(RAW32   )

#define TYPE_VALIABLE_ARRAY16 (0xdc) ///< シリアライズデータヘッダ(ARRAY16 )
#define TYPE_VALIABLE_ARRAY32 (0xdd) ///< シリアライズデータヘッダ(ARRAY32 )

#define TYPE_VALIABLE_MAP16   (0xde) ///< シリアライズデータヘッダ(MAP16   )
#define TYPE_VALIABLE_MAP32   (0xdf) ///< シリアライズデータヘッダ(MAP32   )

#endif //H_DEFINES_H_100629201617__
