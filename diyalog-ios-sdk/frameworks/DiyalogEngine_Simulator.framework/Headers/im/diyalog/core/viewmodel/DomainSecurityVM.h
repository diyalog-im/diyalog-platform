//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/DomainSecurityVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDomainSecurityVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelDomainSecurityVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDomainSecurityVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDomainSecurityVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelDomainSecurityVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDomainSecurityVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelDomainSecurityVM || defined(INCLUDE_ACDomainSecurityVM))
#define ACDomainSecurityVM_

@class ARValueModel;

@interface ACDomainSecurityVM : NSObject
@property (readonly, nonatomic, getter=getDomainSecurity) ARValueModel *domainSecurity;

#pragma mark Public

- (instancetype)init;

- (ARValueModel *)getDomainSecurity;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDomainSecurityVM)

FOUNDATION_EXPORT void ACDomainSecurityVM_init(ACDomainSecurityVM *self);

FOUNDATION_EXPORT ACDomainSecurityVM *new_ACDomainSecurityVM_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDomainSecurityVM *create_ACDomainSecurityVM_init();

J2OBJC_TYPE_LITERAL_HEADER(ACDomainSecurityVM)

@compatibility_alias ImDiyalogCoreViewmodelDomainSecurityVM ACDomainSecurityVM;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDomainSecurityVM")
