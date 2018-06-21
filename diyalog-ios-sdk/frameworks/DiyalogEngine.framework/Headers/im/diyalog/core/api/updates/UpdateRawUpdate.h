//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateRawUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRawUpdate")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateRawUpdate
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRawUpdate 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRawUpdate 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateRawUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateRawUpdate_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRawUpdate || defined(INCLUDE_ARUpdateRawUpdate))
#define ARUpdateRawUpdate_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateRawUpdate : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nullable)type
                   withByteArray:(IOSByteArray * __nonnull)bytes;

+ (ARUpdateRawUpdate *)fromBytesWithByteArray:(IOSByteArray *)data;

- (IOSByteArray * __nonnull)getBytes;

- (jint)getHeaderKey;

- (NSString * __nullable)getType;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateRawUpdate)

inline jint ARUpdateRawUpdate_get_HEADER();
#define ARUpdateRawUpdate_HEADER 80
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateRawUpdate, HEADER, jint)

FOUNDATION_EXPORT ARUpdateRawUpdate *ARUpdateRawUpdate_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateRawUpdate_initWithNSString_withByteArray_(ARUpdateRawUpdate *self, NSString *type, IOSByteArray *bytes);

FOUNDATION_EXPORT ARUpdateRawUpdate *new_ARUpdateRawUpdate_initWithNSString_withByteArray_(NSString *type, IOSByteArray *bytes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateRawUpdate *create_ARUpdateRawUpdate_initWithNSString_withByteArray_(NSString *type, IOSByteArray *bytes);

FOUNDATION_EXPORT void ARUpdateRawUpdate_init(ARUpdateRawUpdate *self);

FOUNDATION_EXPORT ARUpdateRawUpdate *new_ARUpdateRawUpdate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateRawUpdate *create_ARUpdateRawUpdate_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateRawUpdate)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateRawUpdate ARUpdateRawUpdate;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRawUpdate")
