//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/DefaultCryptoRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeDefaultCryptoRuntime")
#ifdef RESTRICT_ImDiyalogRuntimeDefaultCryptoRuntime
#define INCLUDE_ALL_ImDiyalogRuntimeDefaultCryptoRuntime 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeDefaultCryptoRuntime 1
#endif
#undef RESTRICT_ImDiyalogRuntimeDefaultCryptoRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDefaultCryptoRuntime_) && (INCLUDE_ALL_ImDiyalogRuntimeDefaultCryptoRuntime || defined(INCLUDE_ARDefaultCryptoRuntime))
#define ARDefaultCryptoRuntime_

#define RESTRICT_ImDiyalogRuntimeCryptoRuntime 1
#define INCLUDE_ARCryptoRuntime 1
#include "../../../im/diyalog/runtime/CryptoRuntime.h"

@class IOSByteArray;
@protocol ARBlockCipher;
@protocol ARDigest;

@interface ARDefaultCryptoRuntime : NSObject < ARCryptoRuntime >

#pragma mark Public

- (instancetype)init;

- (id<ARBlockCipher>)AES128WithByteArray:(IOSByteArray *)key;

- (id<ARDigest>)SHA256;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDefaultCryptoRuntime)

FOUNDATION_EXPORT void ARDefaultCryptoRuntime_init(ARDefaultCryptoRuntime *self);

J2OBJC_TYPE_LITERAL_HEADER(ARDefaultCryptoRuntime)

@compatibility_alias ImDiyalogRuntimeDefaultCryptoRuntime ARDefaultCryptoRuntime;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeDefaultCryptoRuntime")
