//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestMessageRemoveReaction.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageRemoveReaction")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestMessageRemoveReaction
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageRemoveReaction 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageRemoveReaction 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestMessageRemoveReaction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestMessageRemoveReaction_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageRemoveReaction || defined(INCLUDE_ARRequestMessageRemoveReaction))
#define ARRequestMessageRemoveReaction_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestMessageRemoveReaction : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer
                            withLong:(jlong)rid
                        withNSString:(NSString * __nonnull)code;

+ (ARRequestMessageRemoveReaction *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getCode;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (jlong)getRid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestMessageRemoveReaction)

inline jint ARRequestMessageRemoveReaction_get_HEADER();
#define ARRequestMessageRemoveReaction_HEADER 220
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestMessageRemoveReaction, HEADER, jint)

FOUNDATION_EXPORT ARRequestMessageRemoveReaction *ARRequestMessageRemoveReaction_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestMessageRemoveReaction_initWithARApiOutPeer_withLong_withNSString_(ARRequestMessageRemoveReaction *self, ARApiOutPeer *peer, jlong rid, NSString *code);

FOUNDATION_EXPORT ARRequestMessageRemoveReaction *new_ARRequestMessageRemoveReaction_initWithARApiOutPeer_withLong_withNSString_(ARApiOutPeer *peer, jlong rid, NSString *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageRemoveReaction *create_ARRequestMessageRemoveReaction_initWithARApiOutPeer_withLong_withNSString_(ARApiOutPeer *peer, jlong rid, NSString *code);

FOUNDATION_EXPORT void ARRequestMessageRemoveReaction_init(ARRequestMessageRemoveReaction *self);

FOUNDATION_EXPORT ARRequestMessageRemoveReaction *new_ARRequestMessageRemoveReaction_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageRemoveReaction *create_ARRequestMessageRemoveReaction_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestMessageRemoveReaction)

@compatibility_alias ImDiyalogCoreApiRpcRequestMessageRemoveReaction ARRequestMessageRemoveReaction;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageRemoveReaction")
