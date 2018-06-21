//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/generics/StringValueModel.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsStringValueModel")
#ifdef RESTRICT_ImDiyalogCoreViewmodelGenericsStringValueModel
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsStringValueModel 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsStringValueModel 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelGenericsStringValueModel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACStringValueModel_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsStringValueModel || defined(INCLUDE_ACStringValueModel))
#define ACStringValueModel_

#define RESTRICT_ImDiyalogRuntimeMvvmValueModel 1
#define INCLUDE_ARValueModel 1
#include "../../../../../im/diyalog/runtime/mvvm/ValueModel.h"

@interface ACStringValueModel : ARValueModel

#pragma mark Public

/*!
 @brief Create ValueModel
 @param name         name of variable
 @param defaultValue default value
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)defaultValue;

- (NSString *)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ACStringValueModel)

FOUNDATION_EXPORT void ACStringValueModel_initWithNSString_withNSString_(ACStringValueModel *self, NSString *name, NSString *defaultValue);

FOUNDATION_EXPORT ACStringValueModel *new_ACStringValueModel_initWithNSString_withNSString_(NSString *name, NSString *defaultValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACStringValueModel *create_ACStringValueModel_initWithNSString_withNSString_(NSString *name, NSString *defaultValue);

J2OBJC_TYPE_LITERAL_HEADER(ACStringValueModel)

@compatibility_alias ImDiyalogCoreViewmodelGenericsStringValueModel ACStringValueModel;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsStringValueModel")