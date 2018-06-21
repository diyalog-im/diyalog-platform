//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/promise/PromiseFunc.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromiseFunc")
#ifdef RESTRICT_ImDiyalogRuntimePromisePromiseFunc
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromiseFunc 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromiseFunc 1
#endif
#undef RESTRICT_ImDiyalogRuntimePromisePromiseFunc

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromiseFunc_) && (INCLUDE_ALL_ImDiyalogRuntimePromisePromiseFunc || defined(INCLUDE_ARPromiseFunc))
#define ARPromiseFunc_

@class ARPromiseResolver;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Method that evaluate result of a promise
 */
@protocol ARPromiseFunc < NSObject, JavaObject >

- (void)exec:(ARPromiseResolver * __nonnull)resolver;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromiseFunc)

J2OBJC_TYPE_LITERAL_HEADER(ARPromiseFunc)

#define ImDiyalogRuntimePromisePromiseFunc ARPromiseFunc

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromiseFunc")
