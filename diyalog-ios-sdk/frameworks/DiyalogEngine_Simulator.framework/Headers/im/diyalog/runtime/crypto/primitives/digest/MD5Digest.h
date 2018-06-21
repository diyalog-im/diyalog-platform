//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/MD5Digest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest))
#define ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_

#define RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 1
#define INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/primitives/digest/GeneralDigest.h"

@class IOSByteArray;

/*!
 @brief implementation of MD5 as outlined in "Handbook of Applied Cryptography", pages 346 - 347.
 */
@interface ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest : ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest

#pragma mark Public

/*!
 @brief Standard constructor
 */
- (instancetype)init;

/*!
 @brief Copy constructor.
 This will copy the state of the provided
 message digest.
 */
- (instancetype)initWithImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest:(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *)t;

- (jint)doFinalWithByteArray:(IOSByteArray *)outArg
                     withInt:(jint)outOff;

- (NSString *)getAlgorithmName;

- (jint)getDigestSize;

/*!
 @brief reset the chaining variables to the IV values.
 */
- (void)reset;

#pragma mark Protected

- (void)processBlock;

- (void)processLengthWithLong:(jlong)bitLength;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_init(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *new_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *create_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_init();

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_initWithImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *self, ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *t);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *new_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_initWithImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *create_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_initWithImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest_(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest *t);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5Digest")
