//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/bser/UnknownFieldException.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeBserUnknownFieldException")
#ifdef RESTRICT_ImDiyalogRuntimeBserUnknownFieldException
#define INCLUDE_ALL_ImDiyalogRuntimeBserUnknownFieldException 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeBserUnknownFieldException 1
#endif
#undef RESTRICT_ImDiyalogRuntimeBserUnknownFieldException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUnknownFieldException_) && (INCLUDE_ALL_ImDiyalogRuntimeBserUnknownFieldException || defined(INCLUDE_ARUnknownFieldException))
#define ARUnknownFieldException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
@import j2objc;

@interface ARUnknownFieldException : JavaIoIOException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUnknownFieldException)

FOUNDATION_EXPORT void ARUnknownFieldException_init(ARUnknownFieldException *self);

FOUNDATION_EXPORT ARUnknownFieldException *new_ARUnknownFieldException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUnknownFieldException *create_ARUnknownFieldException_init();

FOUNDATION_EXPORT void ARUnknownFieldException_initWithNSString_(ARUnknownFieldException *self, NSString *message);

FOUNDATION_EXPORT ARUnknownFieldException *new_ARUnknownFieldException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUnknownFieldException *create_ARUnknownFieldException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ARUnknownFieldException_initWithNSString_withNSException_(ARUnknownFieldException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT ARUnknownFieldException *new_ARUnknownFieldException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUnknownFieldException *create_ARUnknownFieldException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void ARUnknownFieldException_initWithNSException_(ARUnknownFieldException *self, NSException *cause);

FOUNDATION_EXPORT ARUnknownFieldException *new_ARUnknownFieldException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUnknownFieldException *create_ARUnknownFieldException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(ARUnknownFieldException)

@compatibility_alias ImDiyalogRuntimeBserUnknownFieldException ARUnknownFieldException;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeBserUnknownFieldException")