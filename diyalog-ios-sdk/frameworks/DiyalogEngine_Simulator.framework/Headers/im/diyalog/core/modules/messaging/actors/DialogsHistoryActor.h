//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/DialogsHistoryActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor))
#define ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_initWithACModuleContext_(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor *new_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor *create_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore))
#define ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore_

@interface ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore_init(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore *new_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore *create_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadMore)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore))
#define ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore_

@interface ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)loaded
                   withLong:(jlong)maxLoadedDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore_initWithInt_withLong_(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore *self, jint loaded, jlong maxLoadedDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore *new_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore_initWithInt_withLong_(jint loaded, jlong maxLoadedDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore *create_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore_initWithInt_withLong_(jint loaded, jlong maxLoadedDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor_LoadedMore)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsDialogsHistoryActor")
