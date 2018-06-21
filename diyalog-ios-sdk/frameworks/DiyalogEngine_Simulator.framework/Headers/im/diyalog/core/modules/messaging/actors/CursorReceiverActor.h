//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/CursorReceiverActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor))
#define ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_

#define RESTRICT_ImDiyalogCoreModulesMessagingActorsCursorActor 1
#define INCLUDE_ImDiyalogCoreModulesMessagingActorsCursorActor 1
#include "../../../../../../im/diyalog/core/modules/messaging/actors/CursorActor.h"

@class ACPeer;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMessagingActorsCursorReceiverActor : ImDiyalogCoreModulesMessagingActorsCursorActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

#pragma mark Protected

- (void)performWithACPeer:(ACPeer *)peer
                 withLong:(jlong)date;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_initWithACModuleContext_(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsCursorReceiverActor *new_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsCursorReceiverActor *create_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived))
#define ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date;

- (jlong)getDate;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived_initWithACPeer_withLong_(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived *self, ACPeer *peer, jlong date);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived *new_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived_initWithACPeer_withLong_(ACPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived *create_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived_initWithACPeer_withLong_(ACPeer *peer, jlong date);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsCursorReceiverActor_MarkReceived)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsCursorReceiverActor")
