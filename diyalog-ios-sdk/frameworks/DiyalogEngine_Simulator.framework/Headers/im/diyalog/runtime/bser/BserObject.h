//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/bser/BserObject.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBserObject")
#ifdef RESTRICT_ImDiyalogRuntimeBserBserObject
#define INCLUDE_ALL_ImDiyalogRuntimeBserBserObject 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeBserBserObject 1
#endif
#undef RESTRICT_ImDiyalogRuntimeBserBserObject

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBserObject_) && (INCLUDE_ALL_ImDiyalogRuntimeBserBserObject || defined(INCLUDE_ARBserObject))
#define ARBserObject_

@class ARBserValues;
@class ARBserWriter;
@class ARSparseArray;
@class IOSByteArray;

@interface ARBserObject : NSObject

#pragma mark Public

- (instancetype)init;

- (ARSparseArray *)getUnmappedObjects;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (void)setUnmappedObjectsWithARSparseArray:(ARSparseArray *)unmappedObjects;

- (IOSByteArray *)toByteArray;

#pragma mark Protected

- (void)load__WithByteArray:(IOSByteArray *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBserObject)

FOUNDATION_EXPORT void ARBserObject_init(ARBserObject *self);

J2OBJC_TYPE_LITERAL_HEADER(ARBserObject)

@compatibility_alias ImDiyalogRuntimeBserBserObject ARBserObject;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBserObject")