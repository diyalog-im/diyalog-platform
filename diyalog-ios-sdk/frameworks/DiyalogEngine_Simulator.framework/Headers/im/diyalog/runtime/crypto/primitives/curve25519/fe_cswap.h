//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/fe_cswap.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_

@class IOSIntArray;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_cswapWithIntArray:(IOSIntArray *)f
                withIntArray:(IOSIntArray *)g
                     withInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_fe_cswapWithIntArray_withIntArray_withInt_(IOSIntArray *f, IOSIntArray *g, jint b);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_cswap;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_cswap")
