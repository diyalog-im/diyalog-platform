//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/fe_copy.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_

@class IOSIntArray;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_copyWithIntArray:(IOSIntArray *)h
               withIntArray:(IOSIntArray *)f;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_fe_copyWithIntArray_withIntArray_(IOSIntArray *h, IOSIntArray *f);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_copy;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_copy")