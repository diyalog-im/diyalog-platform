//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/util/ClassCreatorArg.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreatorArg")
#ifdef RESTRICT_ImDiyalogRuntimeUtilClassCreatorArg
#define INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreatorArg 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreatorArg 1
#endif
#undef RESTRICT_ImDiyalogRuntimeUtilClassCreatorArg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeUtilClassCreatorArg_) && (INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreatorArg || defined(INCLUDE_ImDiyalogRuntimeUtilClassCreatorArg))
#define ImDiyalogRuntimeUtilClassCreatorArg_

/*!
 @brief Interface for creating objects with one argument without reflection
 */
@protocol ImDiyalogRuntimeUtilClassCreatorArg < NSObject, JavaObject >

/*!
 @brief Create object instance
 @param arg constructor argument
 @return creted object
 */
- (id)newInstanceWithId:(id)arg OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeUtilClassCreatorArg)

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeUtilClassCreatorArg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreatorArg")
