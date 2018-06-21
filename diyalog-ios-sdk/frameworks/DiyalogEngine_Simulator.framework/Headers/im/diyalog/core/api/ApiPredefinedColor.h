//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiPredefinedColor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiPredefinedColor")
#ifdef RESTRICT_ImDiyalogCoreApiApiPredefinedColor
#define INCLUDE_ALL_ImDiyalogCoreApiApiPredefinedColor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiPredefinedColor 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiPredefinedColor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiPredefinedColor_) && (INCLUDE_ALL_ImDiyalogCoreApiApiPredefinedColor || defined(INCLUDE_ARApiPredefinedColor))
#define ARApiPredefinedColor_

#define RESTRICT_ImDiyalogCoreApiApiColor 1
#define INCLUDE_ARApiColor 1
#include "../../../../im/diyalog/core/api/ApiColor.h"

@class ARApiColors;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiPredefinedColor : ARApiColor

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiColors:(ARApiColors * __nonnull)color;

- (ARApiColors * __nonnull)getColor;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiPredefinedColor)

FOUNDATION_EXPORT void ARApiPredefinedColor_initWithARApiColors_(ARApiPredefinedColor *self, ARApiColors *color);

FOUNDATION_EXPORT ARApiPredefinedColor *new_ARApiPredefinedColor_initWithARApiColors_(ARApiColors *color) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiPredefinedColor *create_ARApiPredefinedColor_initWithARApiColors_(ARApiColors *color);

FOUNDATION_EXPORT void ARApiPredefinedColor_init(ARApiPredefinedColor *self);

FOUNDATION_EXPORT ARApiPredefinedColor *new_ARApiPredefinedColor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiPredefinedColor *create_ARApiPredefinedColor_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiPredefinedColor)

@compatibility_alias ImDiyalogCoreApiApiPredefinedColor ARApiPredefinedColor;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiPredefinedColor")