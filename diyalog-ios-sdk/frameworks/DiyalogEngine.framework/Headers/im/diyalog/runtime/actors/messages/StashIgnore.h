//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/messages/StashIgnore.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesStashIgnore")
#ifdef RESTRICT_ImDiyalogRuntimeActorsMessagesStashIgnore
#define INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesStashIgnore 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesStashIgnore 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsMessagesStashIgnore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARStashIgnore_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesStashIgnore || defined(INCLUDE_ARStashIgnore))
#define ARStashIgnore_

@interface ARStashIgnore : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)message;

- (id)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ARStashIgnore)

FOUNDATION_EXPORT void ARStashIgnore_initWithId_(ARStashIgnore *self, id message);

FOUNDATION_EXPORT ARStashIgnore *new_ARStashIgnore_initWithId_(id message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARStashIgnore *create_ARStashIgnore_initWithId_(id message);

J2OBJC_TYPE_LITERAL_HEADER(ARStashIgnore)

@compatibility_alias ImDiyalogRuntimeActorsMessagesStashIgnore ARStashIgnore;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesStashIgnore")
