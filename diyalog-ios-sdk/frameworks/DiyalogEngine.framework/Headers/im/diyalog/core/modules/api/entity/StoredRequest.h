//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/api/entity/StoredRequest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesApiEntityStoredRequest")
#ifdef RESTRICT_ImDiyalogCoreModulesApiEntityStoredRequest
#define INCLUDE_ALL_ImDiyalogCoreModulesApiEntityStoredRequest 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesApiEntityStoredRequest 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesApiEntityStoredRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesApiEntityStoredRequest_) && (INCLUDE_ALL_ImDiyalogCoreModulesApiEntityStoredRequest || defined(INCLUDE_ImDiyalogCoreModulesApiEntityStoredRequest))
#define ImDiyalogCoreModulesApiEntityStoredRequest_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ACRequest;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImDiyalogCoreModulesApiEntityStoredRequest : ARBserObject

#pragma mark Public

- (instancetype)initWithACRequest:(ACRequest *)request;

+ (ImDiyalogCoreModulesApiEntityStoredRequest *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ACRequest *)getRequest;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ImDiyalogCoreModulesApiEntityStoredRequest)

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityStoredRequest *ImDiyalogCoreModulesApiEntityStoredRequest_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImDiyalogCoreModulesApiEntityStoredRequest_initWithACRequest_(ImDiyalogCoreModulesApiEntityStoredRequest *self, ACRequest *request);

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityStoredRequest *new_ImDiyalogCoreModulesApiEntityStoredRequest_initWithACRequest_(ACRequest *request) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesApiEntityStoredRequest *create_ImDiyalogCoreModulesApiEntityStoredRequest_initWithACRequest_(ACRequest *request);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesApiEntityStoredRequest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesApiEntityStoredRequest")
