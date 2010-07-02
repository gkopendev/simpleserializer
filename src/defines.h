#ifndef H_DEFINES_H_100629201617__
#define H_DEFINES_H_100629201617__

#define TYPE_POSITIVE_FIXNUM       (0x00)
#define TYPE_POSITIVE_FIXNUM_MASK  (0x80)

#define TYPE_NEGATIVE_FIXNUM       (0xe0)
#define TYPE_NEGATIVE_FIXNUM_MASK  (0xe0)

#define TYPE_FIXROW                (0xa0)
#define TYPE_FIXROW_MASK           (0xe0)

#define TYPE_FIXARRAY              (0x90)
#define TYPE_FIXARRAY_MASK         (0xe0)

#define TYPE_FIXMAP                (0x80)
#define TYPE_FIXMAP_MASK           (0xe0)

#define TYPE_VALIABLE              (0xc0)
#define TYPE_VALIABLE_MASK         (0xe0)

#define TYPE_VALIABLE_NIL     (0xc0) ///< �V���A���C�Y�f�[�^�w�b�_(NIL     )
#define TYPE_VALIABLE_FALSE   (0xc4) ///< �V���A���C�Y�f�[�^�w�b�_(FALSE   )
#define TYPE_VALIABLE_TRUE    (0xc8) ///< �V���A���C�Y�f�[�^�w�b�_(TRUE    )

#define TYPE_VALIABLE_FLOAT   (0xca) ///< �V���A���C�Y�f�[�^�w�b�_(FLOAT   )
#define TYPE_VALIABLE_DOUBLE  (0xcb) ///< �V���A���C�Y�f�[�^�w�b�_(DOUBLE  )

#define TYPE_VALIABLE_UINT8   (0xcc) ///< �V���A���C�Y�f�[�^�w�b�_(UINT8   )
#define TYPE_VALIABLE_UINT16  (0xcd) ///< �V���A���C�Y�f�[�^�w�b�_(UINT16  )
#define TYPE_VALIABLE_UINT32  (0xce) ///< �V���A���C�Y�f�[�^�w�b�_(UINT32  )
#define TYPE_VALIABLE_UINT64  (0xcf) ///< �V���A���C�Y�f�[�^�w�b�_(UINT64  )

#define TYPE_VALIABLE_INT8    (0xd0) ///< �V���A���C�Y�f�[�^�w�b�_(INT8    )
#define TYPE_VALIABLE_INT16   (0xd1) ///< �V���A���C�Y�f�[�^�w�b�_(INT16   )
#define TYPE_VALIABLE_INT32   (0xd2) ///< �V���A���C�Y�f�[�^�w�b�_(INT32   )
#define TYPE_VALIABLE_INT64   (0xd3) ///< �V���A���C�Y�f�[�^�w�b�_(INT64   )

#define TYPE_VALIABLE_RAW16   (0xc1) ///< �V���A���C�Y�f�[�^�w�b�_(RAW16   )
#define TYPE_VALIABLE_RAW32   (0xc2) ///< �V���A���C�Y�f�[�^�w�b�_(RAW32   )

#define TYPE_VALIABLE_ARRAY16 (0xc5) ///< �V���A���C�Y�f�[�^�w�b�_(ARRAY16 )
#define TYPE_VALIABLE_ARRAY32 (0xc6) ///< �V���A���C�Y�f�[�^�w�b�_(ARRAY32 )

#define TYPE_VALIABLE_MAP16   (0xd5) ///< �V���A���C�Y�f�[�^�w�b�_(MAP16   )
#define TYPE_VALIABLE_MAP32   (0xd6) ///< �V���A���C�Y�f�[�^�w�b�_(MAP32   )

#endif //H_DEFINES_H_100629201617__
