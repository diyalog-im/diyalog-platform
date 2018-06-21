//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestEnterGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEnterGroup")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestEnterGroup
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEnterGroup 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEnterGroup 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestEnterGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestEnterGroup_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEnterGroup || defined(INCLUDE_ARRequestEnterGroup))
#define ARRequestEnterGroup_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiGroupOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestEnterGroup : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiGroupOutPeer:(ARApiGroupOutPeer * __nonnull)peer;

+ (ARRequestEnterGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiGroupOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestEnterGroup)

inline jint ARRequestEnterGroup_get_HEADER();
#define ARRequestEnterGroup_HEADER 199
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestEnterGroup, HEADER, jint)

FOUNDATION_EXPORT ARRequestEnterGroup *ARRequestEnterGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestEnterGroup_initWithARApiGroupOutPeer_(ARRequestEnterGroup *self, ARApiGroupOutPeer *peer);

FOUNDATION_EXPORT ARRequestEnterGroup *new_ARRequestEnterGroup_initWithARApiGroupOutPeer_(ARApiGroupOutPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEnterGroup *create_ARRequestEnterGroup_initWithARApiGroupOutPeer_(ARApiGroupOutPeer *peer);

FOUNDATION_EXPORT void ARRequestEnterGroup_init(ARRequestEnterGroup *self);

FOUNDATION_EXPORT ARRequestEnterGroup *new_ARRequestEnterGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEnterGroup *create_ARRequestEnterGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestEnterGroup)

@compatibility_alias ImDiyalogCoreApiRpcRequestEnterGroup ARRequestEnterGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEnterGroup")