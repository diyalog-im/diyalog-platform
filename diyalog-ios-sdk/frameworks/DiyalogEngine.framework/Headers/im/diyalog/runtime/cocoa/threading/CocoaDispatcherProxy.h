//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/threading/CocoaDispatcherProxy.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaDispatcherProxy_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy || defined(INCLUDE_ARCocoaDispatcherProxy))
#define ARCocoaDispatcherProxy_

@protocol ARDispatchCancel;
@protocol JavaLangRunnable;

@protocol ARCocoaDispatcherProxy < NSObject, JavaObject >

- (id<ARDispatchCancel>)dispatchOnBackground:(id<JavaLangRunnable>)runnable
                                   withDelay:(jlong)delay;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaDispatcherProxy)

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaDispatcherProxy)

#define ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy ARCocoaDispatcherProxy

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcherProxy")
