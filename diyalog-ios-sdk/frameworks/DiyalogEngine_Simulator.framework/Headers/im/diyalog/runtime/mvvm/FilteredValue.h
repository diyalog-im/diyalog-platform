//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mvvm/FilteredValue.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmFilteredValue")
#ifdef RESTRICT_ImDiyalogRuntimeMvvmFilteredValue
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmFilteredValue 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmFilteredValue 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMvvmFilteredValue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARFilteredValue_) && (INCLUDE_ALL_ImDiyalogRuntimeMvvmFilteredValue || defined(INCLUDE_ARFilteredValue))
#define ARFilteredValue_

#define RESTRICT_ImDiyalogRuntimeMvvmValue 1
#define INCLUDE_ARValue 1
#include "../../../../im/diyalog/runtime/mvvm/Value.h"

@protocol ARValueConverter;

@interface ARFilteredValue : ARValue

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                     withARValue:(ARValue *)valueModel
            withARValueConverter:(id<ARValueConverter>)converter;

- (void)destroy;

- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ARFilteredValue)

FOUNDATION_EXPORT void ARFilteredValue_initWithNSString_withARValue_withARValueConverter_(ARFilteredValue *self, NSString *name, ARValue *valueModel, id<ARValueConverter> converter);

FOUNDATION_EXPORT ARFilteredValue *new_ARFilteredValue_initWithNSString_withARValue_withARValueConverter_(NSString *name, ARValue *valueModel, id<ARValueConverter> converter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARFilteredValue *create_ARFilteredValue_initWithNSString_withARValue_withARValueConverter_(NSString *name, ARValue *valueModel, id<ARValueConverter> converter);

J2OBJC_TYPE_LITERAL_HEADER(ARFilteredValue)

@compatibility_alias ImDiyalogRuntimeMvvmFilteredValue ARFilteredValue;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmFilteredValue")