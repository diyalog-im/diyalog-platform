//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/ActorCancellable.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorCancellable")
#ifdef RESTRICT_ImDiyalogRuntimeActorsActorCancellable
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorCancellable 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorCancellable 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsActorCancellable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorCancellable_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsActorCancellable || defined(INCLUDE_ARActorCancellable))
#define ARActorCancellable_

@protocol ARActorCancellable < NSObject, JavaObject >

- (void)cancel;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorCancellable)

J2OBJC_TYPE_LITERAL_HEADER(ARActorCancellable)

#define ImDiyalogRuntimeActorsActorCancellable ARActorCancellable

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorCancellable")
