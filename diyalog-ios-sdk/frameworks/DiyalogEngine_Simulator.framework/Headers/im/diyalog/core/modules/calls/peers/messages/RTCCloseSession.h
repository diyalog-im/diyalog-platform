//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/peers/messages/RTCCloseSession.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession || defined(INCLUDE_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession))
#define ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession_

@interface ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)deviceId
                    withLong:(jlong)sessionId;

- (jlong)getDeviceId;

- (jlong)getSessionId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession_initWithLong_withLong_(ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession *self, jlong deviceId, jlong sessionId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession *new_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession_initWithLong_withLong_(jlong deviceId, jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession *create_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession_initWithLong_withLong_(jlong deviceId, jlong sessionId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCCloseSession")
