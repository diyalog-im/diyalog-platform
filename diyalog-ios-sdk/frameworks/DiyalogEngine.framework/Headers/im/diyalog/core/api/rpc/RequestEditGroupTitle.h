//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestEditGroupTitle.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditGroupTitle")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestEditGroupTitle
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditGroupTitle 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditGroupTitle 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestEditGroupTitle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestEditGroupTitle_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditGroupTitle || defined(INCLUDE_ARRequestEditGroupTitle))
#define ARRequestEditGroupTitle_

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

@interface ARRequestEditGroupTitle : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiGroupOutPeer:(ARApiGroupOutPeer * __nonnull)groupPeer
                                 withLong:(jlong)rid
                             withNSString:(NSString * __nonnull)title;

+ (ARRequestEditGroupTitle *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiGroupOutPeer * __nonnull)getGroupPeer;

- (jint)getHeaderKey;

- (jlong)getRid;

- (NSString * __nonnull)getTitle;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestEditGroupTitle)

inline jint ARRequestEditGroupTitle_get_HEADER();
#define ARRequestEditGroupTitle_HEADER 85
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestEditGroupTitle, HEADER, jint)

FOUNDATION_EXPORT ARRequestEditGroupTitle *ARRequestEditGroupTitle_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestEditGroupTitle_initWithARApiGroupOutPeer_withLong_withNSString_(ARRequestEditGroupTitle *self, ARApiGroupOutPeer *groupPeer, jlong rid, NSString *title);

FOUNDATION_EXPORT ARRequestEditGroupTitle *new_ARRequestEditGroupTitle_initWithARApiGroupOutPeer_withLong_withNSString_(ARApiGroupOutPeer *groupPeer, jlong rid, NSString *title) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditGroupTitle *create_ARRequestEditGroupTitle_initWithARApiGroupOutPeer_withLong_withNSString_(ARApiGroupOutPeer *groupPeer, jlong rid, NSString *title);

FOUNDATION_EXPORT void ARRequestEditGroupTitle_init(ARRequestEditGroupTitle *self);

FOUNDATION_EXPORT ARRequestEditGroupTitle *new_ARRequestEditGroupTitle_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditGroupTitle *create_ARRequestEditGroupTitle_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestEditGroupTitle)

@compatibility_alias ImDiyalogCoreApiRpcRequestEditGroupTitle ARRequestEditGroupTitle;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditGroupTitle")
