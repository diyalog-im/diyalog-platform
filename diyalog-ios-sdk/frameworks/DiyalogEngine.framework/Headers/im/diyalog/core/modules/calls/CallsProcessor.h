//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/CallsProcessor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsProcessor")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsCallsProcessor
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsProcessor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsProcessor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsCallsProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsCallsProcessor_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsProcessor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallsProcessor))
#define ImDiyalogCoreModulesCallsCallsProcessor_

#define RESTRICT_ImDiyalogCoreModulesSequenceProcessor 1
#define INCLUDE_ImDiyalogCoreModulesSequenceProcessor 1
#include "../../../../../im/diyalog/core/modules/sequence/Processor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesCallsCallsProcessor : NSObject < ImDiyalogCoreModulesSequenceProcessor >

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (jboolean)processWithId:(id)update;

- (void)resetProcessor;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallsProcessor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallsProcessor_initWithACModuleContext_(ImDiyalogCoreModulesCallsCallsProcessor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallsProcessor *new_ImDiyalogCoreModulesCallsCallsProcessor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallsProcessor *create_ImDiyalogCoreModulesCallsCallsProcessor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallsProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsProcessor")
