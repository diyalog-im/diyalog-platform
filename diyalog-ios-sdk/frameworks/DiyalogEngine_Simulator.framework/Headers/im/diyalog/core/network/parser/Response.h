//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/parser/Response.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkParserResponse")
#ifdef RESTRICT_ImDiyalogCoreNetworkParserResponse
#define INCLUDE_ALL_ImDiyalogCoreNetworkParserResponse 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkParserResponse 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkParserResponse

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACResponse_) && (INCLUDE_ALL_ImDiyalogCoreNetworkParserResponse || defined(INCLUDE_ACResponse))
#define ACResponse_

#define RESTRICT_ImDiyalogCoreNetworkParserRpcScope 1
#define INCLUDE_ACRpcScope 1
#include "../../../../../im/diyalog/core/network/parser/RpcScope.h"

@interface ACResponse : ACRpcScope

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ACResponse)

FOUNDATION_EXPORT void ACResponse_init(ACResponse *self);

J2OBJC_TYPE_LITERAL_HEADER(ACResponse)

@compatibility_alias ImDiyalogCoreNetworkParserResponse ACResponse;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkParserResponse")
