//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/IntegrityException.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoIntegrityException")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoIntegrityException
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoIntegrityException 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoIntegrityException 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoIntegrityException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARIntegrityException_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoIntegrityException || defined(INCLUDE_ARIntegrityException))
#define ARIntegrityException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
@import j2objc;

@interface ARIntegrityException : JavaIoIOException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ARIntegrityException)

FOUNDATION_EXPORT void ARIntegrityException_init(ARIntegrityException *self);

FOUNDATION_EXPORT ARIntegrityException *new_ARIntegrityException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARIntegrityException *create_ARIntegrityException_init();

FOUNDATION_EXPORT void ARIntegrityException_initWithNSString_(ARIntegrityException *self, NSString *message);

FOUNDATION_EXPORT ARIntegrityException *new_ARIntegrityException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARIntegrityException *create_ARIntegrityException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ARIntegrityException_initWithNSString_withNSException_(ARIntegrityException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT ARIntegrityException *new_ARIntegrityException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARIntegrityException *create_ARIntegrityException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void ARIntegrityException_initWithNSException_(ARIntegrityException *self, NSException *cause);

FOUNDATION_EXPORT ARIntegrityException *new_ARIntegrityException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARIntegrityException *create_ARIntegrityException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(ARIntegrityException)

@compatibility_alias ImDiyalogRuntimeCryptoIntegrityException ARIntegrityException;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoIntegrityException")
