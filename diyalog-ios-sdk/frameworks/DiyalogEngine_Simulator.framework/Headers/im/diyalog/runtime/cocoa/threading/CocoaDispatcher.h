//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/threading/CocoaDispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaDispatcher_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher || defined(INCLUDE_ARCocoaDispatcher))
#define ARCocoaDispatcher_

#define RESTRICT_ImDiyalogRuntimeThreadingDispatcher 1
#define INCLUDE_ARDispatcher 1
#include "../../../../../im/diyalog/runtime/threading/Dispatcher.h"

@protocol ARCocoaDispatcherProxy;
@protocol ARDispatchCancel;
@protocol JavaLangRunnable;

@interface ARCocoaDispatcher : NSObject < ARDispatcher >

+ (id<ARCocoaDispatcherProxy>)dispatcherProxy;

+ (void)setDispatcherProxy:(id<ARCocoaDispatcherProxy>)value;

#pragma mark Public

- (instancetype)init;

- (id<ARDispatchCancel>)dispatchWithJavaLangRunnable:(id<JavaLangRunnable>)message
                                            withLong:(jlong)delay;

+ (id<ARCocoaDispatcherProxy>)getDispatcherProxy;

+ (void)setDispatcherProxyWithARCocoaDispatcherProxy:(id<ARCocoaDispatcherProxy>)dispatcherProxy;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaDispatcher)

inline id<ARCocoaDispatcherProxy> ARCocoaDispatcher_get_dispatcherProxy();
inline id<ARCocoaDispatcherProxy> ARCocoaDispatcher_set_dispatcherProxy(id<ARCocoaDispatcherProxy> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARCocoaDispatcherProxy> ARCocoaDispatcher_dispatcherProxy;
J2OBJC_STATIC_FIELD_OBJ(ARCocoaDispatcher, dispatcherProxy, id<ARCocoaDispatcherProxy>)

FOUNDATION_EXPORT id<ARCocoaDispatcherProxy> ARCocoaDispatcher_getDispatcherProxy();

FOUNDATION_EXPORT void ARCocoaDispatcher_setDispatcherProxyWithARCocoaDispatcherProxy_(id<ARCocoaDispatcherProxy> dispatcherProxy);

FOUNDATION_EXPORT void ARCocoaDispatcher_init(ARCocoaDispatcher *self);

FOUNDATION_EXPORT ARCocoaDispatcher *new_ARCocoaDispatcher_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaDispatcher *create_ARCocoaDispatcher_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaDispatcher)

@compatibility_alias ImDiyalogRuntimeCocoaThreadingCocoaDispatcher ARCocoaDispatcher;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaThreadingCocoaDispatcher")
