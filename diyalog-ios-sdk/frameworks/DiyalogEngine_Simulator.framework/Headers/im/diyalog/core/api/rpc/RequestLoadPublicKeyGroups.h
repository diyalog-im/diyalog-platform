//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestLoadPublicKeyGroups.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadPublicKeyGroups_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups || defined(INCLUDE_ARRequestLoadPublicKeyGroups))
#define ARRequestLoadPublicKeyGroups_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiUserOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestLoadPublicKeyGroups : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiUserOutPeer:(ARApiUserOutPeer * __nonnull)userPeer;

+ (ARRequestLoadPublicKeyGroups *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiUserOutPeer * __nonnull)getUserPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadPublicKeyGroups)

inline jint ARRequestLoadPublicKeyGroups_get_HEADER();
#define ARRequestLoadPublicKeyGroups_HEADER 2601
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadPublicKeyGroups, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadPublicKeyGroups *ARRequestLoadPublicKeyGroups_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadPublicKeyGroups_initWithARApiUserOutPeer_(ARRequestLoadPublicKeyGroups *self, ARApiUserOutPeer *userPeer);

FOUNDATION_EXPORT ARRequestLoadPublicKeyGroups *new_ARRequestLoadPublicKeyGroups_initWithARApiUserOutPeer_(ARApiUserOutPeer *userPeer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadPublicKeyGroups *create_ARRequestLoadPublicKeyGroups_initWithARApiUserOutPeer_(ARApiUserOutPeer *userPeer);

FOUNDATION_EXPORT void ARRequestLoadPublicKeyGroups_init(ARRequestLoadPublicKeyGroups *self);

FOUNDATION_EXPORT ARRequestLoadPublicKeyGroups *new_ARRequestLoadPublicKeyGroups_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadPublicKeyGroups *create_ARRequestLoadPublicKeyGroups_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadPublicKeyGroups)

@compatibility_alias ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups ARRequestLoadPublicKeyGroups;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadPublicKeyGroups")