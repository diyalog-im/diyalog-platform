//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/tools/BounceFilterActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor")
#ifdef RESTRICT_ImDiyalogRuntimeActorsToolsBounceFilterActor
#define INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsToolsBounceFilterActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeActorsToolsBounceFilterActor_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor || defined(INCLUDE_ImDiyalogRuntimeActorsToolsBounceFilterActor))
#define ImDiyalogRuntimeActorsToolsBounceFilterActor_

#define RESTRICT_ImDiyalogRuntimeActorsActor 1
#define INCLUDE_ARActor 1
#include "../../../../../im/diyalog/runtime/actors/Actor.h"

@class ImDiyalogRuntimeActorsToolsBounceFilterActor_Message;

@interface ImDiyalogRuntimeActorsToolsBounceFilterActor : ARActor

#pragma mark Public

- (instancetype)init;

- (void)onReceiveWithId:(id)message;

#pragma mark Protected

- (jboolean)isOverrideWithImDiyalogRuntimeActorsToolsBounceFilterActor_Message:(ImDiyalogRuntimeActorsToolsBounceFilterActor_Message *)current
                      withImDiyalogRuntimeActorsToolsBounceFilterActor_Message:(ImDiyalogRuntimeActorsToolsBounceFilterActor_Message *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeActorsToolsBounceFilterActor)

FOUNDATION_EXPORT void ImDiyalogRuntimeActorsToolsBounceFilterActor_init(ImDiyalogRuntimeActorsToolsBounceFilterActor *self);

FOUNDATION_EXPORT ImDiyalogRuntimeActorsToolsBounceFilterActor *new_ImDiyalogRuntimeActorsToolsBounceFilterActor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeActorsToolsBounceFilterActor *create_ImDiyalogRuntimeActorsToolsBounceFilterActor_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeActorsToolsBounceFilterActor)

#endif

#if !defined (ImDiyalogRuntimeActorsToolsBounceFilterActor_Message_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor || defined(INCLUDE_ImDiyalogRuntimeActorsToolsBounceFilterActor_Message))
#define ImDiyalogRuntimeActorsToolsBounceFilterActor_Message_

@class ARActorRef;

@interface ImDiyalogRuntimeActorsToolsBounceFilterActor_Message : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)object
            withARActorRef:(ARActorRef *)actorRef;

- (ARActorRef *)getActorRef;

- (id)getObject;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeActorsToolsBounceFilterActor_Message)

FOUNDATION_EXPORT void ImDiyalogRuntimeActorsToolsBounceFilterActor_Message_initWithId_withARActorRef_(ImDiyalogRuntimeActorsToolsBounceFilterActor_Message *self, id object, ARActorRef *actorRef);

FOUNDATION_EXPORT ImDiyalogRuntimeActorsToolsBounceFilterActor_Message *new_ImDiyalogRuntimeActorsToolsBounceFilterActor_Message_initWithId_withARActorRef_(id object, ARActorRef *actorRef) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeActorsToolsBounceFilterActor_Message *create_ImDiyalogRuntimeActorsToolsBounceFilterActor_Message_initWithId_withARActorRef_(id object, ARActorRef *actorRef);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeActorsToolsBounceFilterActor_Message)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsToolsBounceFilterActor")
