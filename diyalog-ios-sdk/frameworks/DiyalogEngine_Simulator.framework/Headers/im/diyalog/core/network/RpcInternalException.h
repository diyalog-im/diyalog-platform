//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/RpcInternalException.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkRpcInternalException")
#ifdef RESTRICT_ImDiyalogCoreNetworkRpcInternalException
#define INCLUDE_ALL_ImDiyalogCoreNetworkRpcInternalException 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkRpcInternalException 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkRpcInternalException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRpcInternalException_) && (INCLUDE_ALL_ImDiyalogCoreNetworkRpcInternalException || defined(INCLUDE_ACRpcInternalException))
#define ACRpcInternalException_

#define RESTRICT_ImDiyalogCoreNetworkRpcException 1
#define INCLUDE_ACRpcException 1
#include "../../../../im/diyalog/core/network/RpcException.h"

@interface ACRpcInternalException : ACRpcException

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRpcInternalException)

FOUNDATION_EXPORT void ACRpcInternalException_init(ACRpcInternalException *self);

FOUNDATION_EXPORT ACRpcInternalException *new_ACRpcInternalException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRpcInternalException *create_ACRpcInternalException_init();

J2OBJC_TYPE_LITERAL_HEADER(ACRpcInternalException)

@compatibility_alias ImDiyalogCoreNetworkRpcInternalException ACRpcInternalException;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkRpcInternalException")