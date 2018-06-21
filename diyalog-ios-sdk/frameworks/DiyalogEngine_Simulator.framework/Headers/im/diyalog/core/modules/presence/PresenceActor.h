//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/presence/PresenceActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor")
#ifdef RESTRICT_ImDiyalogCoreModulesPresencePresenceActor
#define INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesPresencePresenceActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor))
#define ImDiyalogCoreModulesPresencePresenceActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

#define RESTRICT_ImDiyalogRuntimeEventbusBusSubscriber 1
#define INCLUDE_ImDiyalogRuntimeEventbusBusSubscriber 1
#include "../../../../../im/diyalog/runtime/eventbus/BusSubscriber.h"

@class ARActorRef;
@class ImDiyalogRuntimeEventbusEvent;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesPresencePresenceActor : ACModuleActor < ImDiyalogRuntimeEventbusBusSubscriber >

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)messenger;

+ (ARActorRef *)createWithACModuleContext:(id<ACModuleContext>)messenger;

- (void)onBusEventWithImDiyalogRuntimeEventbusEvent:(ImDiyalogRuntimeEventbusEvent *)event;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor)

FOUNDATION_EXPORT ARActorRef *ImDiyalogCoreModulesPresencePresenceActor_createWithACModuleContext_(id<ACModuleContext> messenger);

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_initWithACModuleContext_(ImDiyalogCoreModulesPresencePresenceActor *self, id<ACModuleContext> messenger);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor *new_ImDiyalogCoreModulesPresencePresenceActor_initWithACModuleContext_(id<ACModuleContext> messenger) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor *create_ImDiyalogCoreModulesPresencePresenceActor_initWithACModuleContext_(id<ACModuleContext> messenger);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_UserOnline_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_UserOnline))
#define ImDiyalogCoreModulesPresencePresenceActor_UserOnline_

@interface ImDiyalogCoreModulesPresencePresenceActor_UserOnline : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                   withLong:(jlong)updateDate;

- (jint)getUid;

- (jlong)getUpdateDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_UserOnline)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_UserOnline_initWithInt_withLong_(ImDiyalogCoreModulesPresencePresenceActor_UserOnline *self, jint uid, jlong updateDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserOnline *new_ImDiyalogCoreModulesPresencePresenceActor_UserOnline_initWithInt_withLong_(jint uid, jlong updateDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserOnline *create_ImDiyalogCoreModulesPresencePresenceActor_UserOnline_initWithInt_withLong_(jint uid, jlong updateDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_UserOnline)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_UserOffline_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_UserOffline))
#define ImDiyalogCoreModulesPresencePresenceActor_UserOffline_

@interface ImDiyalogCoreModulesPresencePresenceActor_UserOffline : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                   withLong:(jlong)updateDate;

- (jint)getUid;

- (jlong)getUpdateDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_UserOffline)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_UserOffline_initWithInt_withLong_(ImDiyalogCoreModulesPresencePresenceActor_UserOffline *self, jint uid, jlong updateDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserOffline *new_ImDiyalogCoreModulesPresencePresenceActor_UserOffline_initWithInt_withLong_(jint uid, jlong updateDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserOffline *create_ImDiyalogCoreModulesPresencePresenceActor_UserOffline_initWithInt_withLong_(jint uid, jlong updateDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_UserOffline)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen))
#define ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen_

@interface ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)date
                   withLong:(jlong)updateDate;

- (jint)getDate;

- (jint)getUid;

- (jlong)getUpdateDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen_initWithInt_withInt_withLong_(ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen *self, jint uid, jint date, jlong updateDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen *new_ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen_initWithInt_withInt_withLong_(jint uid, jint date, jlong updateDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen *create_ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen_initWithInt_withInt_withLong_(jint uid, jint date, jlong updateDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_UserLastSeen)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_GroupOnline_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_GroupOnline))
#define ImDiyalogCoreModulesPresencePresenceActor_GroupOnline_

@interface ImDiyalogCoreModulesPresencePresenceActor_GroupOnline : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)gid
                    withInt:(jint)count
                   withLong:(jlong)updateDate;

- (jint)getCount;

- (jint)getGid;

- (jlong)getUpdateDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_GroupOnline)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_GroupOnline_initWithInt_withInt_withLong_(ImDiyalogCoreModulesPresencePresenceActor_GroupOnline *self, jint gid, jint count, jlong updateDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_GroupOnline *new_ImDiyalogCoreModulesPresencePresenceActor_GroupOnline_initWithInt_withInt_withLong_(jint gid, jint count, jlong updateDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_GroupOnline *create_ImDiyalogCoreModulesPresencePresenceActor_GroupOnline_initWithInt_withInt_withLong_(jint gid, jint count, jlong updateDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_GroupOnline)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_Subscribe_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_Subscribe))
#define ImDiyalogCoreModulesPresencePresenceActor_Subscribe_

@class ACPeer;

@interface ImDiyalogCoreModulesPresencePresenceActor_Subscribe : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_Subscribe)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_Subscribe_initWithACPeer_(ImDiyalogCoreModulesPresencePresenceActor_Subscribe *self, ACPeer *peer);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_Subscribe *new_ImDiyalogCoreModulesPresencePresenceActor_Subscribe_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_Subscribe *create_ImDiyalogCoreModulesPresencePresenceActor_Subscribe_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_Subscribe)

#endif

#if !defined (ImDiyalogCoreModulesPresencePresenceActor_SessionCreated_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresencePresenceActor_SessionCreated))
#define ImDiyalogCoreModulesPresencePresenceActor_SessionCreated_

@interface ImDiyalogCoreModulesPresencePresenceActor_SessionCreated : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresencePresenceActor_SessionCreated)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresencePresenceActor_SessionCreated_init(ImDiyalogCoreModulesPresencePresenceActor_SessionCreated *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_SessionCreated *new_ImDiyalogCoreModulesPresencePresenceActor_SessionCreated_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresencePresenceActor_SessionCreated *create_ImDiyalogCoreModulesPresencePresenceActor_SessionCreated_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresencePresenceActor_SessionCreated)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesPresencePresenceActor")