//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/kuznechik/Kuz128.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128))
#define ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_

@class IOSByteArray;

/*!
 @brief 128-bit variable
 */
@interface ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithByteArray:(IOSByteArray *)b;

- (IOSByteArray *)getB;

- (jlong)getQWithInt:(jint)index;

- (void)setWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128:(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *)kuz128;

- (void)setQWithInt:(jint)index
           withLong:(jlong)l;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_initWithByteArray_(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *self, IOSByteArray *b);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *new_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_initWithByteArray_(IOSByteArray *b) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *create_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_initWithByteArray_(IOSByteArray *b);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_init(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *new_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *create_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128")