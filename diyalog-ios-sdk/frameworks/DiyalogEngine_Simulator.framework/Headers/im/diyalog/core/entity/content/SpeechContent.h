//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/SpeechContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentSpeechContent")
#ifdef RESTRICT_ImDiyalogCoreEntityContentSpeechContent
#define INCLUDE_ALL_ImDiyalogCoreEntityContentSpeechContent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentSpeechContent 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentSpeechContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACSpeechContent_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentSpeechContent || defined(INCLUDE_ACSpeechContent))
#define ACSpeechContent_

#define RESTRICT_ImDiyalogCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/diyalog/core/entity/content/AbsContent.h"

@class ACContentRemoteContainer;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Created by tolga on 20/07/2017.
 */
@interface ACSpeechContent : ACAbsContent
@property (readonly, copy, nonatomic, getter=getText) NSString *text;

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACSpeechContent * __nonnull)createWithNSString:(NSString * __nonnull)text;

- (NSString *)getText;

@end

J2OBJC_EMPTY_STATIC_INIT(ACSpeechContent)

FOUNDATION_EXPORT ACSpeechContent *ACSpeechContent_createWithNSString_(NSString *text);

FOUNDATION_EXPORT void ACSpeechContent_initWithACContentRemoteContainer_(ACSpeechContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACSpeechContent *new_ACSpeechContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSpeechContent *create_ACSpeechContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACSpeechContent)

@compatibility_alias ImDiyalogCoreEntityContentSpeechContent ACSpeechContent;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentSpeechContent")