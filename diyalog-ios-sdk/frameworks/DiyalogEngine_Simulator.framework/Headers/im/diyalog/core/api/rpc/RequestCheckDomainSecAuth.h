//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestCheckDomainSecAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestCheckDomainSecAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth || defined(INCLUDE_ARRequestCheckDomainSecAuth))
#define ARRequestCheckDomainSecAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiDomainSecurity;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestCheckDomainSecAuth : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiDomainSecurity:(ARApiDomainSecurity * __nonnull)domainSecurity;

+ (ARRequestCheckDomainSecAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiDomainSecurity * __nonnull)getDomainSecurity;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestCheckDomainSecAuth)

inline jint ARRequestCheckDomainSecAuth_get_HEADER();
#define ARRequestCheckDomainSecAuth_HEADER 2578
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestCheckDomainSecAuth, HEADER, jint)

FOUNDATION_EXPORT ARRequestCheckDomainSecAuth *ARRequestCheckDomainSecAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestCheckDomainSecAuth_initWithARApiDomainSecurity_(ARRequestCheckDomainSecAuth *self, ARApiDomainSecurity *domainSecurity);

FOUNDATION_EXPORT ARRequestCheckDomainSecAuth *new_ARRequestCheckDomainSecAuth_initWithARApiDomainSecurity_(ARApiDomainSecurity *domainSecurity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCheckDomainSecAuth *create_ARRequestCheckDomainSecAuth_initWithARApiDomainSecurity_(ARApiDomainSecurity *domainSecurity);

FOUNDATION_EXPORT void ARRequestCheckDomainSecAuth_init(ARRequestCheckDomainSecAuth *self);

FOUNDATION_EXPORT ARRequestCheckDomainSecAuth *new_ARRequestCheckDomainSecAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCheckDomainSecAuth *create_ARRequestCheckDomainSecAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestCheckDomainSecAuth)

@compatibility_alias ImDiyalogCoreApiRpcRequestCheckDomainSecAuth ARRequestCheckDomainSecAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckDomainSecAuth")