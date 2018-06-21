//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdatePauseNotifications.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdatePauseNotifications")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdatePauseNotifications
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdatePauseNotifications 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdatePauseNotifications 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdatePauseNotifications

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdatePauseNotifications_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdatePauseNotifications || defined(INCLUDE_ARUpdatePauseNotifications))
#define ARUpdatePauseNotifications_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARUpdatePauseNotifications : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)timeout;

+ (ARUpdatePauseNotifications *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getTimeout;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdatePauseNotifications)

inline jint ARUpdatePauseNotifications_get_HEADER();
#define ARUpdatePauseNotifications_HEADER 166
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdatePauseNotifications, HEADER, jint)

FOUNDATION_EXPORT ARUpdatePauseNotifications *ARUpdatePauseNotifications_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdatePauseNotifications_initWithInt_(ARUpdatePauseNotifications *self, jint timeout);

FOUNDATION_EXPORT ARUpdatePauseNotifications *new_ARUpdatePauseNotifications_initWithInt_(jint timeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdatePauseNotifications *create_ARUpdatePauseNotifications_initWithInt_(jint timeout);

FOUNDATION_EXPORT void ARUpdatePauseNotifications_init(ARUpdatePauseNotifications *self);

FOUNDATION_EXPORT ARUpdatePauseNotifications *new_ARUpdatePauseNotifications_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdatePauseNotifications *create_ARUpdatePauseNotifications_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdatePauseNotifications)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdatePauseNotifications ARUpdatePauseNotifications;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdatePauseNotifications")