//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseCommitFileUpload.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCommitFileUpload")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseCommitFileUpload
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCommitFileUpload 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCommitFileUpload 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseCommitFileUpload

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseCommitFileUpload_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCommitFileUpload || defined(INCLUDE_ARResponseCommitFileUpload))
#define ARResponseCommitFileUpload_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARApiFileLocation;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseCommitFileUpload : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiFileLocation:(ARApiFileLocation * __nonnull)uploadedFileLocation;

+ (ARResponseCommitFileUpload *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiFileLocation * __nonnull)getUploadedFileLocation;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseCommitFileUpload)

inline jint ARResponseCommitFileUpload_get_HEADER();
#define ARResponseCommitFileUpload_HEADER 138
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseCommitFileUpload, HEADER, jint)

FOUNDATION_EXPORT ARResponseCommitFileUpload *ARResponseCommitFileUpload_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseCommitFileUpload_initWithARApiFileLocation_(ARResponseCommitFileUpload *self, ARApiFileLocation *uploadedFileLocation);

FOUNDATION_EXPORT ARResponseCommitFileUpload *new_ARResponseCommitFileUpload_initWithARApiFileLocation_(ARApiFileLocation *uploadedFileLocation) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCommitFileUpload *create_ARResponseCommitFileUpload_initWithARApiFileLocation_(ARApiFileLocation *uploadedFileLocation);

FOUNDATION_EXPORT void ARResponseCommitFileUpload_init(ARResponseCommitFileUpload *self);

FOUNDATION_EXPORT ARResponseCommitFileUpload *new_ARResponseCommitFileUpload_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCommitFileUpload *create_ARResponseCommitFileUpload_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseCommitFileUpload)

@compatibility_alias ImDiyalogCoreApiRpcResponseCommitFileUpload ARResponseCommitFileUpload;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCommitFileUpload")
