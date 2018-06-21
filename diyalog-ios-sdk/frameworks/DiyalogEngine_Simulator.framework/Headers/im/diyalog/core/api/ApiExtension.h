//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiExtension.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiExtension")
#ifdef RESTRICT_ImDiyalogCoreApiApiExtension
#define INCLUDE_ALL_ImDiyalogCoreApiApiExtension 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiExtension 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiExtension

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiExtension_) && (INCLUDE_ALL_ImDiyalogCoreApiApiExtension || defined(INCLUDE_ARApiExtension))
#define ARApiExtension_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiExtension : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)id_
              withByteArray:(IOSByteArray * __nonnull)data;

- (IOSByteArray * __nonnull)getData;

- (jint)getId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiExtension)

FOUNDATION_EXPORT void ARApiExtension_initWithInt_withByteArray_(ARApiExtension *self, jint id_, IOSByteArray *data);

FOUNDATION_EXPORT ARApiExtension *new_ARApiExtension_initWithInt_withByteArray_(jint id_, IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiExtension *create_ARApiExtension_initWithInt_withByteArray_(jint id_, IOSByteArray *data);

FOUNDATION_EXPORT void ARApiExtension_init(ARApiExtension *self);

FOUNDATION_EXPORT ARApiExtension *new_ARApiExtension_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiExtension *create_ARApiExtension_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiExtension)

@compatibility_alias ImDiyalogCoreApiApiExtension ARApiExtension;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiExtension")