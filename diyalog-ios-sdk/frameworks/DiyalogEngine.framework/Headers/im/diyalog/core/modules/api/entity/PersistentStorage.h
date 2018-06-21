//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/api/entity/PersistentStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesApiEntityPersistentStorage")
#ifdef RESTRICT_ImDiyalogCoreModulesApiEntityPersistentStorage
#define INCLUDE_ALL_ImDiyalogCoreModulesApiEntityPersistentStorage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesApiEntityPersistentStorage 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesApiEntityPersistentStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesApiEntityPersistentStorage_) && (INCLUDE_ALL_ImDiyalogCoreModulesApiEntityPersistentStorage || defined(INCLUDE_ImDiyalogCoreModulesApiEntityPersistentStorage))
#define ImDiyalogCoreModulesApiEntityPersistentStorage_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class ImDiyalogCoreModulesApiEntityCursorStoredRequest;
@class JavaUtilArrayList;

@interface ImDiyalogCoreModulesApiEntityPersistentStorage : ARBserObject

#pragma mark Public

- (instancetype)init;

- (ImDiyalogCoreModulesApiEntityCursorStoredRequest *)findCursorRequestWithNSString:(NSString *)name;

+ (ImDiyalogCoreModulesApiEntityPersistentStorage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (JavaUtilArrayList *)getCursorRequests;

- (JavaUtilArrayList *)getRequests;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesApiEntityPersistentStorage)

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityPersistentStorage *ImDiyalogCoreModulesApiEntityPersistentStorage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImDiyalogCoreModulesApiEntityPersistentStorage_init(ImDiyalogCoreModulesApiEntityPersistentStorage *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityPersistentStorage *new_ImDiyalogCoreModulesApiEntityPersistentStorage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityPersistentStorage *create_ImDiyalogCoreModulesApiEntityPersistentStorage_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesApiEntityPersistentStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesApiEntityPersistentStorage")
