//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/generics/ValueModelUserEmail.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsValueModelUserEmail")
#ifdef RESTRICT_ImDiyalogCoreViewmodelGenericsValueModelUserEmail
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsValueModelUserEmail 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsValueModelUserEmail 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelGenericsValueModelUserEmail

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACValueModelUserEmail_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsValueModelUserEmail || defined(INCLUDE_ACValueModelUserEmail))
#define ACValueModelUserEmail_

#define RESTRICT_ImDiyalogRuntimeMvvmValueModel 1
#define INCLUDE_ARValueModel 1
#include "../../../../../im/diyalog/runtime/mvvm/ValueModel.h"

@class ACArrayListUserEmail;
@protocol ARValueChangedListener;

@interface ACValueModelUserEmail : ARValueModel

#pragma mark Public

/*!
 @brief Create ValueModel
 @param name         name of variable
 @param defaultValue default value
 */
- (instancetype)initWithNSString:(NSString *)name
        withACArrayListUserEmail:(ACArrayListUserEmail *)defaultValue;

- (ACArrayListUserEmail *)get;

- (void)subscribeWithListener:(id<ARValueChangedListener>)listener;

- (void)subscribeWithListener:(id<ARValueChangedListener>)listener
                       notify:(jboolean)notify;

- (void)unsubscribeWithListener:(id<ARValueChangedListener>)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(ACValueModelUserEmail)

FOUNDATION_EXPORT void ACValueModelUserEmail_initWithNSString_withACArrayListUserEmail_(ACValueModelUserEmail *self, NSString *name, ACArrayListUserEmail *defaultValue);

FOUNDATION_EXPORT ACValueModelUserEmail *new_ACValueModelUserEmail_initWithNSString_withACArrayListUserEmail_(NSString *name, ACArrayListUserEmail *defaultValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACValueModelUserEmail *create_ACValueModelUserEmail_initWithNSString_withACArrayListUserEmail_(NSString *name, ACArrayListUserEmail *defaultValue);

J2OBJC_TYPE_LITERAL_HEADER(ACValueModelUserEmail)

@compatibility_alias ImDiyalogCoreViewmodelGenericsValueModelUserEmail ACValueModelUserEmail;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsValueModelUserEmail")
