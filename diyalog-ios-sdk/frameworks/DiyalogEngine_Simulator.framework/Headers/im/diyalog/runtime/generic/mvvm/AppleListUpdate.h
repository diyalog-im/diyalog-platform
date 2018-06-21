//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/AppleListUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleListUpdate")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmAppleListUpdate
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleListUpdate 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleListUpdate 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmAppleListUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAppleListUpdate_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleListUpdate || defined(INCLUDE_ARAppleListUpdate))
#define ARAppleListUpdate_

@class ARMove;
@class JavaUtilArrayList;

@interface ARAppleListUpdate : NSObject
@property JavaUtilArrayList *removed;
@property JavaUtilArrayList *added;
@property JavaUtilArrayList *moved;
@property JavaUtilArrayList *updated;
@property (nonatomic, getter=isLoadMore) jboolean isLoadMore;

#pragma mark Public

- (instancetype)initWithRemoved:(JavaUtilArrayList *)removed
                      withAdded:(JavaUtilArrayList *)added
                      withMoved:(JavaUtilArrayList *)moved
                    withUpdated:(JavaUtilArrayList *)updated
                   withLoadMore:(jboolean)isLoadMore;

- (jint)addedCount;

- (jint)getAdded:(jint)index;

- (ARMove *)getMoved:(jint)index;

- (jint)getRemoved:(jint)index;

- (jint)getUpdated:(jint)index;

- (jboolean)isLoadMore;

- (jint)movedCount;

- (jint)nonUpdateCount;

- (jint)removedCount;

- (jint)size;

- (jint)updatedCount;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAppleListUpdate)

FOUNDATION_EXPORT void ARAppleListUpdate_initWithRemoved_withAdded_withMoved_withUpdated_withLoadMore_(ARAppleListUpdate *self, JavaUtilArrayList *removed, JavaUtilArrayList *added, JavaUtilArrayList *moved, JavaUtilArrayList *updated, jboolean isLoadMore);

FOUNDATION_EXPORT ARAppleListUpdate *new_ARAppleListUpdate_initWithRemoved_withAdded_withMoved_withUpdated_withLoadMore_(JavaUtilArrayList *removed, JavaUtilArrayList *added, JavaUtilArrayList *moved, JavaUtilArrayList *updated, jboolean isLoadMore) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARAppleListUpdate *create_ARAppleListUpdate_initWithRemoved_withAdded_withMoved_withUpdated_withLoadMore_(JavaUtilArrayList *removed, JavaUtilArrayList *added, JavaUtilArrayList *moved, JavaUtilArrayList *updated, jboolean isLoadMore);

J2OBJC_TYPE_LITERAL_HEADER(ARAppleListUpdate)

@compatibility_alias ImDiyalogRuntimeGenericMvvmAppleListUpdate ARAppleListUpdate;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleListUpdate")