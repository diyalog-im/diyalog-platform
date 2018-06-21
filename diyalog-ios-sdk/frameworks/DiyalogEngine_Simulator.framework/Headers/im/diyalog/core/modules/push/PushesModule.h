//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/push/PushesModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesPushPushesModule")
#ifdef RESTRICT_ImDiyalogCoreModulesPushPushesModule
#define INCLUDE_ALL_ImDiyalogCoreModulesPushPushesModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesPushPushesModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesPushPushesModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesPushPushesModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesPushPushesModule || defined(INCLUDE_ImDiyalogCoreModulesPushPushesModule))
#define ImDiyalogCoreModulesPushPushesModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesPushPushesModule : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)modules;

- (void)registerActorPushWithNSString:(NSString *)endpoint;

- (void)registerApplePushWithInt:(jint)apnsKey
                    withNSString:(NSString *)token;

- (void)registerApplePushKitWithInt:(jint)apnsKey
                       withNSString:(NSString *)token;

- (void)registerGooglePushWithLong:(jlong)projectId
                      withNSString:(NSString *)token;

- (void)resetModule;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPushPushesModule)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPushPushesModule_initWithACModuleContext_(ImDiyalogCoreModulesPushPushesModule *self, id<ACModuleContext> modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesPushPushesModule *new_ImDiyalogCoreModulesPushPushesModule_initWithACModuleContext_(id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPushPushesModule *create_ImDiyalogCoreModulesPushPushesModule_initWithACModuleContext_(id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPushPushesModule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesPushPushesModule")