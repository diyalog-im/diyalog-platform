//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/function/TriFunction.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionTriFunction")
#ifdef RESTRICT_ImDiyalogRuntimeFunctionTriFunction
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionTriFunction 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionTriFunction 1
#endif
#undef RESTRICT_ImDiyalogRuntimeFunctionTriFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARTriFunction_) && (INCLUDE_ALL_ImDiyalogRuntimeFunctionTriFunction || defined(INCLUDE_ARTriFunction))
#define ARTriFunction_

@protocol ARTriFunction < NSObject, JavaObject >

- (id)applyWithId:(id)t
           withId:(id)u
           withId:(id)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARTriFunction)

J2OBJC_TYPE_LITERAL_HEADER(ARTriFunction)

#define ImDiyalogRuntimeFunctionTriFunction ARTriFunction

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionTriFunction")
