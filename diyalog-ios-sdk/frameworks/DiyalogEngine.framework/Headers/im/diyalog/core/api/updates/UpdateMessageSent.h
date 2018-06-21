//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateMessageSent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageSent")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateMessageSent
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageSent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageSent 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateMessageSent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateMessageSent_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageSent || defined(INCLUDE_ARUpdateMessageSent))
#define ARUpdateMessageSent_

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

@interface ARUpdateMessageSent : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiPeer:(ARApiPeer * __nonnull)peer
                         withLong:(jlong)rid
                         withLong:(jlong)date;

+ (ARUpdateMessageSent *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getHeaderKey;

- (ARApiPeer * __nonnull)getPeer;

- (jlong)getRid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateMessageSent)

inline jint ARUpdateMessageSent_get_HEADER();
#define ARUpdateMessageSent_HEADER 4
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateMessageSent, HEADER, jint)

FOUNDATION_EXPORT ARUpdateMessageSent *ARUpdateMessageSent_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateMessageSent_initWithARApiPeer_withLong_withLong_(ARUpdateMessageSent *self, ARApiPeer *peer, jlong rid, jlong date);

FOUNDATION_EXPORT ARUpdateMessageSent *new_ARUpdateMessageSent_initWithARApiPeer_withLong_withLong_(ARApiPeer *peer, jlong rid, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateMessageSent *create_ARUpdateMessageSent_initWithARApiPeer_withLong_withLong_(ARApiPeer *peer, jlong rid, jlong date);

FOUNDATION_EXPORT void ARUpdateMessageSent_init(ARUpdateMessageSent *self);

FOUNDATION_EXPORT ARUpdateMessageSent *new_ARUpdateMessageSent_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateMessageSent *create_ARUpdateMessageSent_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateMessageSent)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateMessageSent ARUpdateMessageSent;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateMessageSent")
