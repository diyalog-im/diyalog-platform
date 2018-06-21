//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateMessageReceived.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageReceived")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateMessageReceived
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageReceived 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageReceived 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateMessageReceived

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateMessageReceived_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageReceived || defined(INCLUDE_ARUpdateMessageReceived))
#define ARUpdateMessageReceived_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARApiPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateMessageReceived : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiPeer:(ARApiPeer * __nonnull)peer
                         withLong:(jlong)startDate
                         withLong:(jlong)receivedDate;

+ (ARUpdateMessageReceived *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiPeer * __nonnull)getPeer;

- (jlong)getReceivedDate;

- (jlong)getStartDate;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateMessageReceived)

inline jint ARUpdateMessageReceived_get_HEADER();
#define ARUpdateMessageReceived_HEADER 54
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateMessageReceived, HEADER, jint)

FOUNDATION_EXPORT ARUpdateMessageReceived *ARUpdateMessageReceived_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateMessageReceived_initWithARApiPeer_withLong_withLong_(ARUpdateMessageReceived *self, ARApiPeer *peer, jlong startDate, jlong receivedDate);

FOUNDATION_EXPORT ARUpdateMessageReceived *new_ARUpdateMessageReceived_initWithARApiPeer_withLong_withLong_(ARApiPeer *peer, jlong startDate, jlong receivedDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateMessageReceived *create_ARUpdateMessageReceived_initWithARApiPeer_withLong_withLong_(ARApiPeer *peer, jlong startDate, jlong receivedDate);

FOUNDATION_EXPORT void ARUpdateMessageReceived_init(ARUpdateMessageReceived *self);

FOUNDATION_EXPORT ARUpdateMessageReceived *new_ARUpdateMessageReceived_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateMessageReceived *create_ARUpdateMessageReceived_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateMessageReceived)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateMessageReceived ARUpdateMessageReceived;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageReceived")
