//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/AndroidListUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidListUpdate")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmAndroidListUpdate
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidListUpdate 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidListUpdate 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmAndroidListUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAndroidListUpdate_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidListUpdate || defined(INCLUDE_ARAndroidListUpdate))
#define ARAndroidListUpdate_

@class ARChangeDescription;
@class JavaUtilArrayList;

@interface ARAndroidListUpdate : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilArrayList:(JavaUtilArrayList *)list
                    withJavaUtilArrayList:(JavaUtilArrayList *)changes
                              withBoolean:(jboolean)isLoadMore;

- (id)getItemWithInt:(jint)index;

- (jint)getSize;

- (jboolean)isLoadMore;

- (ARChangeDescription *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAndroidListUpdate)

FOUNDATION_EXPORT void ARAndroidListUpdate_initWithJavaUtilArrayList_withJavaUtilArrayList_withBoolean_(ARAndroidListUpdate *self, JavaUtilArrayList *list, JavaUtilArrayList *changes, jboolean isLoadMore);

FOUNDATION_EXPORT ARAndroidListUpdate *new_ARAndroidListUpdate_initWithJavaUtilArrayList_withJavaUtilArrayList_withBoolean_(JavaUtilArrayList *list, JavaUtilArrayList *changes, jboolean isLoadMore) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARAndroidListUpdate *create_ARAndroidListUpdate_initWithJavaUtilArrayList_withJavaUtilArrayList_withBoolean_(JavaUtilArrayList *list, JavaUtilArrayList *changes, jboolean isLoadMore);

J2OBJC_TYPE_LITERAL_HEADER(ARAndroidListUpdate)

@compatibility_alias ImDiyalogRuntimeGenericMvvmAndroidListUpdate ARAndroidListUpdate;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidListUpdate")
