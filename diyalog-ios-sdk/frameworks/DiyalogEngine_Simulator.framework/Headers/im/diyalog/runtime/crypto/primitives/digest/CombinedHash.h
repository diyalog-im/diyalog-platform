//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/CombinedHash.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash))
#define ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash_

#define RESTRICT_ImDiyalogRuntimeCryptoDigest 1
#define INCLUDE_ARDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/Digest.h"

@class IOSByteArray;
@class IOSObjectArray;

@interface ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash : NSObject < ARDigest >

#pragma mark Public

- (instancetype)initWithARDigestArray:(IOSObjectArray *)digests;

- (void)doFinal:(IOSByteArray *)dest
     withOffset:(jint)destOffset;

- (jint)getDigestSize;

- (void)reset;

- (void)update:(IOSByteArray *)src
    withOffset:(jint)offset
    withLength:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash *self, IOSObjectArray *digests);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash *new_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(IOSObjectArray *digests) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash *create_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(IOSObjectArray *digests);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestCombinedHash")