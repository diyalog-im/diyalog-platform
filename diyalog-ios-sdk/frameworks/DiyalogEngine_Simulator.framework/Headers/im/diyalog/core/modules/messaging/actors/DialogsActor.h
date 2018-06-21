//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/DialogsActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsDialogsActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsDialogsActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_initWithACModuleContext_(ImDiyalogCoreModulesMessagingActorsDialogsActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage_

@class ACMessage;
@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                 withACMessage:(ACMessage *)message
                       withInt:(jint)counter;

- (jint)getCounter;

- (ACMessage *)getMessage;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage_initWithACPeer_withACMessage_withInt_(ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage *self, ACPeer *peer, ACMessage *message, jint counter);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage_initWithACPeer_withACMessage_withInt_(ACPeer *peer, ACMessage *message, jint counter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage_initWithACPeer_withACMessage_withInt_(ACPeer *peer, ACMessage *message, jint counter);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_InMessage)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                       withInt:(jint)counter;

- (jint)getCounter;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged_initWithACPeer_withInt_(ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged *self, ACPeer *peer, jint counter);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged_initWithACPeer_withInt_(ACPeer *peer, jint counter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged_initWithACPeer_withInt_(ACPeer *peer, jint counter);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_CounterChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged_

@class ACUser;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged : NSObject

#pragma mark Public

- (instancetype)initWithACUser:(ACUser *)user;

- (ACUser *)getUser;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged_initWithACUser_(ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged *self, ACUser *user);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged_initWithACUser_(ACUser *user) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged_initWithACUser_(ACUser *user);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_UserChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged_

@class ACGroup;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged : NSObject

#pragma mark Public

- (instancetype)initWithACGroup:(ACGroup *)group;

- (ACGroup *)getGroup;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged_initWithACGroup_(ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged *self, ACGroup *group);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged_initWithACGroup_(ACGroup *group) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged_initWithACGroup_(ACGroup *group);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_GroupChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear_initWithACPeer_(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear *self, ACPeer *peer);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatClear)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete_initWithACPeer_(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete *self, ACPeer *peer);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_ChatDelete)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date;

- (jlong)getDate;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged_initWithACPeer_withLong_(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged *self, ACPeer *peer, jlong date);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged_initWithACPeer_withLong_(ACPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged_initWithACPeer_withLong_(ACPeer *peer, jlong date);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReadChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date;

- (jlong)getDate;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged_initWithACPeer_withLong_(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged *self, ACPeer *peer, jlong date);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged_initWithACPeer_withLong_(ACPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged_initWithACPeer_withLong_(ACPeer *peer, jlong date);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_PeerReceiveChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged_

@class ACAbsContent;
@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)rid
              withACAbsContent:(ACAbsContent *)content;

- (ACAbsContent *)getContent;

- (ACPeer *)getPeer;

- (jlong)getRid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged_initWithACPeer_withLong_withACAbsContent_(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged *self, ACPeer *peer, jlong rid, ACAbsContent *content);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged_initWithACPeer_withLong_withACAbsContent_(ACPeer *peer, jlong rid, ACAbsContent *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged_initWithACPeer_withLong_withACAbsContent_(ACPeer *peer, jlong rid, ACAbsContent *content);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageContentChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted_

@class ACMessage;
@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                 withACMessage:(ACMessage *)topMessage;

- (ACPeer *)getPeer;

- (ACMessage *)getTopMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted_initWithACPeer_withACMessage_(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted *self, ACPeer *peer, ACMessage *topMessage);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted_initWithACPeer_withACMessage_(ACPeer *peer, ACMessage *topMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted_initWithACPeer_withACMessage_(ACPeer *peer, ACMessage *topMessage);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_MessageDeleted)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded))
#define ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded_

@protocol JavaUtilList;

@interface ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)history;

- (id<JavaUtilList>)getHistory;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded_initWithJavaUtilList_(ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded *self, id<JavaUtilList> history);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded *new_ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded_initWithJavaUtilList_(id<JavaUtilList> history) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded *create_ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded_initWithJavaUtilList_(id<JavaUtilList> history);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsActor_HistoryLoaded)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsActor")