//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/power/WakeLock.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimePowerWakeLock")
#ifdef RESTRICT_ImDiyalogRuntimePowerWakeLock
#define INCLUDE_ALL_ImDiyalogRuntimePowerWakeLock 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimePowerWakeLock 1
#endif
#undef RESTRICT_ImDiyalogRuntimePowerWakeLock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWakeLock_) && (INCLUDE_ALL_ImDiyalogRuntimePowerWakeLock || defined(INCLUDE_ARWakeLock))
#define ARWakeLock_

@protocol ARWakeLock < NSObject, JavaObject >

- (void)closeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWakeLock)

J2OBJC_TYPE_LITERAL_HEADER(ARWakeLock)

#define ImDiyalogRuntimePowerWakeLock ARWakeLock

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimePowerWakeLock")