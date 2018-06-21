//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/file/DownloadTask.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesFileDownloadTask")
#ifdef RESTRICT_ImDiyalogCoreModulesFileDownloadTask
#define INCLUDE_ALL_ImDiyalogCoreModulesFileDownloadTask 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesFileDownloadTask 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesFileDownloadTask

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesFileDownloadTask_) && (INCLUDE_ALL_ImDiyalogCoreModulesFileDownloadTask || defined(INCLUDE_ImDiyalogCoreModulesFileDownloadTask))
#define ImDiyalogCoreModulesFileDownloadTask_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ACFileReference;
@class ARActorRef;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesFileDownloadTask : ACModuleActor

#pragma mark Public

- (instancetype)initWithACFileReference:(ACFileReference *)fileReference
                         withARActorRef:(ARActorRef *)manager
                    withACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesFileDownloadTask)

FOUNDATION_EXPORT void ImDiyalogCoreModulesFileDownloadTask_initWithACFileReference_withARActorRef_withACModuleContext_(ImDiyalogCoreModulesFileDownloadTask *self, ACFileReference *fileReference, ARActorRef *manager, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesFileDownloadTask *new_ImDiyalogCoreModulesFileDownloadTask_initWithACFileReference_withARActorRef_withACModuleContext_(ACFileReference *fileReference, ARActorRef *manager, id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesFileDownloadTask *create_ImDiyalogCoreModulesFileDownloadTask_initWithACFileReference_withARActorRef_withACModuleContext_(ACFileReference *fileReference, ARActorRef *manager, id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesFileDownloadTask)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesFileDownloadTask")
