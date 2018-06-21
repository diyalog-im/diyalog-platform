//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/GenericTemplateContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentGenericTemplateContent")
#ifdef RESTRICT_ImDiyalogCoreEntityContentGenericTemplateContent
#define INCLUDE_ALL_ImDiyalogCoreEntityContentGenericTemplateContent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentGenericTemplateContent 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentGenericTemplateContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACGenericTemplateContent_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentGenericTemplateContent || defined(INCLUDE_ACGenericTemplateContent))
#define ACGenericTemplateContent_

#define RESTRICT_ImDiyalogCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/diyalog/core/entity/content/AbsContent.h"

@class ACContentRemoteContainer;
@class JavaUtilArrayList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Created by tolga on 11/07/2017.
 */
@interface ACGenericTemplateContent : ACAbsContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACGenericTemplateContent * __nonnull)createWithJavaUtilArrayList:(JavaUtilArrayList * __nullable)elements;

- (JavaUtilArrayList * __nullable)getElements;

- (NSString *)getRawMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ACGenericTemplateContent)

FOUNDATION_EXPORT ACGenericTemplateContent *ACGenericTemplateContent_createWithJavaUtilArrayList_(JavaUtilArrayList *elements);

FOUNDATION_EXPORT void ACGenericTemplateContent_initWithACContentRemoteContainer_(ACGenericTemplateContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACGenericTemplateContent *new_ACGenericTemplateContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACGenericTemplateContent *create_ACGenericTemplateContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACGenericTemplateContent)

@compatibility_alias ImDiyalogCoreEntityContentGenericTemplateContent ACGenericTemplateContent;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentGenericTemplateContent")
