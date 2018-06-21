//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/promise/PromiseActorDispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromiseActorDispatcher")
#ifdef RESTRICT_ImDiyalogRuntimePromisePromiseActorDispatcher
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromiseActorDispatcher 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromiseActorDispatcher 1
#endif
#undef RESTRICT_ImDiyalogRuntimePromisePromiseActorDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromiseActorDispatcher_) && (INCLUDE_ALL_ImDiyalogRuntimePromisePromiseActorDispatcher || defined(INCLUDE_ARPromiseActorDispatcher))
#define ARPromiseActorDispatcher_

#define RESTRICT_ImDiyalogRuntimePromisePromiseDispatcher 1
#define INCLUDE_ARPromiseDispatcher 1
#include "../../../../im/diyalog/runtime/promise/PromiseDispatcher.h"

@class ARActorRef;
@class ARPromise;
@protocol JavaLangRunnable;

@interface ARPromiseActorDispatcher : ARPromiseDispatcher

#pragma mark Public

- (instancetype)initWithARActorRef:(ARActorRef *)ref;

- (void)dispatchWithARPromise:(ARPromise *)promise
         withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromiseActorDispatcher)

FOUNDATION_EXPORT void ARPromiseActorDispatcher_initWithARActorRef_(ARPromiseActorDispatcher *self, ARActorRef *ref);

FOUNDATION_EXPORT ARPromiseActorDispatcher *new_ARPromiseActorDispatcher_initWithARActorRef_(ARActorRef *ref) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARPromiseActorDispatcher *create_ARPromiseActorDispatcher_initWithARActorRef_(ARActorRef *ref);

J2OBJC_TYPE_LITERAL_HEADER(ARPromiseActorDispatcher)

@compatibility_alias ImDiyalogRuntimePromisePromiseActorDispatcher ARPromiseActorDispatcher;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromiseActorDispatcher")
