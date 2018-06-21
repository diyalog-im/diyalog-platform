//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiBotCommand.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiBotCommand")
#ifdef RESTRICT_ImDiyalogCoreApiApiBotCommand
#define INCLUDE_ALL_ImDiyalogCoreApiApiBotCommand 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiBotCommand 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiBotCommand

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiBotCommand_) && (INCLUDE_ALL_ImDiyalogCoreApiApiBotCommand || defined(INCLUDE_ARApiBotCommand))
#define ARApiBotCommand_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiBotCommand : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)slashCommand
                    withNSString:(NSString * __nonnull)description_
                    withNSString:(NSString * __nullable)locKey;

- (NSString * __nonnull)getDescription;

- (NSString * __nullable)getLocKey;

- (NSString * __nonnull)getSlashCommand;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiBotCommand)

FOUNDATION_EXPORT void ARApiBotCommand_initWithNSString_withNSString_withNSString_(ARApiBotCommand *self, NSString *slashCommand, NSString *description_, NSString *locKey);

FOUNDATION_EXPORT ARApiBotCommand *new_ARApiBotCommand_initWithNSString_withNSString_withNSString_(NSString *slashCommand, NSString *description_, NSString *locKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiBotCommand *create_ARApiBotCommand_initWithNSString_withNSString_withNSString_(NSString *slashCommand, NSString *description_, NSString *locKey);

FOUNDATION_EXPORT void ARApiBotCommand_init(ARApiBotCommand *self);

FOUNDATION_EXPORT ARApiBotCommand *new_ARApiBotCommand_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiBotCommand *create_ARApiBotCommand_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiBotCommand)

@compatibility_alias ImDiyalogCoreApiApiBotCommand ARApiBotCommand;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiBotCommand")