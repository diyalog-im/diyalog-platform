//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiEncryptionKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKey")
#ifdef RESTRICT_ImDiyalogCoreApiApiEncryptionKey
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKey 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKey 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiEncryptionKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiEncryptionKey_) && (INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKey || defined(INCLUDE_ARApiEncryptionKey))
#define ARApiEncryptionKey_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiEncryptionKey : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)keyId
                withNSString:(NSString * __nonnull)keyAlg
               withByteArray:(IOSByteArray * __nullable)keyMaterial
               withByteArray:(IOSByteArray * __nullable)keyHash;

- (NSString * __nonnull)getKeyAlg;

- (IOSByteArray * __nullable)getKeyHash;

- (jlong)getKeyId;

- (IOSByteArray * __nullable)getKeyMaterial;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiEncryptionKey)

FOUNDATION_EXPORT void ARApiEncryptionKey_initWithLong_withNSString_withByteArray_withByteArray_(ARApiEncryptionKey *self, jlong keyId, NSString *keyAlg, IOSByteArray *keyMaterial, IOSByteArray *keyHash);

FOUNDATION_EXPORT ARApiEncryptionKey *new_ARApiEncryptionKey_initWithLong_withNSString_withByteArray_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *keyMaterial, IOSByteArray *keyHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptionKey *create_ARApiEncryptionKey_initWithLong_withNSString_withByteArray_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *keyMaterial, IOSByteArray *keyHash);

FOUNDATION_EXPORT void ARApiEncryptionKey_init(ARApiEncryptionKey *self);

FOUNDATION_EXPORT ARApiEncryptionKey *new_ARApiEncryptionKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptionKey *create_ARApiEncryptionKey_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiEncryptionKey)

@compatibility_alias ImDiyalogCoreApiApiEncryptionKey ARApiEncryptionKey;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKey")
