//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/LongDigest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest))
#define ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_

@class IOSByteArray;
@class IOSLongArray;

/*!
 @brief Base class for SHA-384 and SHA-512.
 */
@interface ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest : NSObject {
 @public
  jlong H1_, H2_, H3_, H4_, H5_, H6_, H7_, H8_;
}

+ (IOSLongArray *)K;

#pragma mark Public

- (void)finish;

- (jint)getByteLength;

- (void)reset;

- (void)updateWithByte:(jbyte)inArg;

- (void)updateWithByteArray:(IOSByteArray *)inArg
                    withInt:(jint)inOff
                    withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Constructor for variable length word
 */
- (instancetype)init;

/*!
 @brief Copy constructor.
 We are using copy constructors in place
 of the Object.clone() interface as this interface is not
 supported by J2ME.
 */
- (instancetype)initWithImDiyalogRuntimeCryptoPrimitivesDigestLongDigest:(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest *)t;

- (void)copyInWithImDiyalogRuntimeCryptoPrimitivesDigestLongDigest:(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest *)t OBJC_METHOD_FAMILY_NONE;

- (jint)getEncodedStateSize;

- (void)populateStateWithByteArray:(IOSByteArray *)state;

- (void)processBlock;

- (void)processLengthWithLong:(jlong)lowW
                     withLong:(jlong)hiW;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

- (void)restoreStateWithByteArray:(IOSByteArray *)encodedState;

@end

J2OBJC_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest)

inline IOSLongArray *ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_get_K();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_K;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest, K, IOSLongArray *)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_init(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest *self);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_initWithImDiyalogRuntimeCryptoPrimitivesDigestLongDigest_(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest *self, ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest *t);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestLongDigest")