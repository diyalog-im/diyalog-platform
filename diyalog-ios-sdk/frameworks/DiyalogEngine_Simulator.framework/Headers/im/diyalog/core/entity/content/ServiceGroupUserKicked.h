//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/ServiceGroupUserKicked.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentServiceGroupUserKicked")
#ifdef RESTRICT_ImDiyalogCoreEntityContentServiceGroupUserKicked
#define INCLUDE_ALL_ImDiyalogCoreEntityContentServiceGroupUserKicked 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentServiceGroupUserKicked 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentServiceGroupUserKicked

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACServiceGroupUserKicked_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentServiceGroupUserKicked || defined(INCLUDE_ACServiceGroupUserKicked))
#define ACServiceGroupUserKicked_

#define RESTRICT_ImDiyalogCoreEntityContentServiceContent 1
#define INCLUDE_ACServiceContent 1
#include "../../../../../im/diyalog/core/entity/content/ServiceContent.h"

@class ACContentRemoteContainer;

@interface ACServiceGroupUserKicked : ACServiceContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACServiceGroupUserKicked *)createWithInt:(jint)uid;

- (jint)getKickedUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ACServiceGroupUserKicked)

FOUNDATION_EXPORT ACServiceGroupUserKicked *ACServiceGroupUserKicked_createWithInt_(jint uid);

FOUNDATION_EXPORT void ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACServiceGroupUserKicked *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACServiceGroupUserKicked *new_ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACServiceGroupUserKicked *create_ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACServiceGroupUserKicked)

@compatibility_alias ImDiyalogCoreEntityContentServiceGroupUserKicked ACServiceGroupUserKicked;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentServiceGroupUserKicked")