//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/LifecycleRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeLifecycleRuntime")
#ifdef RESTRICT_ImDiyalogRuntimeLifecycleRuntime
#define INCLUDE_ALL_ImDiyalogRuntimeLifecycleRuntime 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeLifecycleRuntime 1
#endif
#undef RESTRICT_ImDiyalogRuntimeLifecycleRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARLifecycleRuntime_) && (INCLUDE_ALL_ImDiyalogRuntimeLifecycleRuntime || defined(INCLUDE_ARLifecycleRuntime))
#define ARLifecycleRuntime_

@protocol ARWakeLock;

@protocol ARLifecycleRuntime < NSObject, JavaObject >

- (void)killApp;

- (id<ARWakeLock>)makeWakeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(ARLifecycleRuntime)

J2OBJC_TYPE_LITERAL_HEADER(ARLifecycleRuntime)

#define ImDiyalogRuntimeLifecycleRuntime ARLifecycleRuntime

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeLifecycleRuntime")
