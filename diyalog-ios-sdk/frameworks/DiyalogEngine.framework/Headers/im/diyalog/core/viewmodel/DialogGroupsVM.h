//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/DialogGroupsVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDialogGroupsVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelDialogGroupsVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDialogGroupsVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDialogGroupsVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelDialogGroupsVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDialogGroupsVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelDialogGroupsVM || defined(INCLUDE_ACDialogGroupsVM))
#define ACDialogGroupsVM_

@class ARValueModel;

@interface ACDialogGroupsVM : NSObject

#pragma mark Public

- (instancetype)init;

- (ARValueModel *)getGroupsValueModel;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDialogGroupsVM)

FOUNDATION_EXPORT void ACDialogGroupsVM_init(ACDialogGroupsVM *self);

FOUNDATION_EXPORT ACDialogGroupsVM *new_ACDialogGroupsVM_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDialogGroupsVM *create_ACDialogGroupsVM_init();

J2OBJC_TYPE_LITERAL_HEADER(ACDialogGroupsVM)

@compatibility_alias ImDiyalogCoreViewmodelDialogGroupsVM ACDialogGroupsVM;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDialogGroupsVM")
