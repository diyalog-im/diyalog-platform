//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestRemoveAvatar.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRemoveAvatar")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestRemoveAvatar
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRemoveAvatar 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRemoveAvatar 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestRemoveAvatar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestRemoveAvatar_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRemoveAvatar || defined(INCLUDE_ARRequestRemoveAvatar))
#define ARRequestRemoveAvatar_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestRemoveAvatar : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARRequestRemoveAvatar *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestRemoveAvatar)

inline jint ARRequestRemoveAvatar_get_HEADER();
#define ARRequestRemoveAvatar_HEADER 91
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestRemoveAvatar, HEADER, jint)

FOUNDATION_EXPORT ARRequestRemoveAvatar *ARRequestRemoveAvatar_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestRemoveAvatar_init(ARRequestRemoveAvatar *self);

FOUNDATION_EXPORT ARRequestRemoveAvatar *new_ARRequestRemoveAvatar_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestRemoveAvatar *create_ARRequestRemoveAvatar_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestRemoveAvatar)

@compatibility_alias ImDiyalogCoreApiRpcRequestRemoveAvatar ARRequestRemoveAvatar;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRemoveAvatar")