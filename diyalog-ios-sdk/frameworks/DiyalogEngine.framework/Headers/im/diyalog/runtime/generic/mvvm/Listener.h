//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/Listener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListener")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmListener
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListener 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListener 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARListener_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListener || defined(INCLUDE_ARListener))
#define ARListener_

/*!
 @brief Created by tolga on 21/11/2016.
 */
@protocol ARListener < NSObject, JavaObject >

- (void)onCollectionChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(ARListener)

J2OBJC_TYPE_LITERAL_HEADER(ARListener)

#define ImDiyalogRuntimeGenericMvvmListener ARListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListener")
