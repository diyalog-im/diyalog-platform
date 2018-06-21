//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/streebog/Streebog512.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512))
#define ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512_

#define RESTRICT_ImDiyalogRuntimeCryptoDigest 1
#define INCLUDE_ARDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/Digest.h"

@class IOSByteArray;

@interface ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 : NSObject < ARDigest >

#pragma mark Public

- (instancetype)init;

- (void)doFinal:(IOSByteArray *)dest
     withOffset:(jint)destOffset;

- (jint)getDigestSize;

- (void)reset;

- (void)update:(IOSByteArray *)src
    withOffset:(jint)offset
    withLength:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512_init(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 *new_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512 *create_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebog512")
