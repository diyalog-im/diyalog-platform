//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestNotifyDialogOpened.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyDialogOpened")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestNotifyDialogOpened
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyDialogOpened 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyDialogOpened 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestNotifyDialogOpened

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestNotifyDialogOpened_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyDialogOpened || defined(INCLUDE_ARRequestNotifyDialogOpened))
#define ARRequestNotifyDialogOpened_

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

@interface ARRequestNotifyDialogOpened : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer;

+ (ARRequestNotifyDialogOpened *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestNotifyDialogOpened)

inline jint ARRequestNotifyDialogOpened_get_HEADER();
#define ARRequestNotifyDialogOpened_HEADER 2785
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestNotifyDialogOpened, HEADER, jint)

FOUNDATION_EXPORT ARRequestNotifyDialogOpened *ARRequestNotifyDialogOpened_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestNotifyDialogOpened_initWithARApiOutPeer_(ARRequestNotifyDialogOpened *self, ARApiOutPeer *peer);

FOUNDATION_EXPORT ARRequestNotifyDialogOpened *new_ARRequestNotifyDialogOpened_initWithARApiOutPeer_(ARApiOutPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestNotifyDialogOpened *create_ARRequestNotifyDialogOpened_initWithARApiOutPeer_(ARApiOutPeer *peer);

FOUNDATION_EXPORT void ARRequestNotifyDialogOpened_init(ARRequestNotifyDialogOpened *self);

FOUNDATION_EXPORT ARRequestNotifyDialogOpened *new_ARRequestNotifyDialogOpened_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestNotifyDialogOpened *create_ARRequestNotifyDialogOpened_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestNotifyDialogOpened)

@compatibility_alias ImDiyalogCoreApiRpcRequestNotifyDialogOpened ARRequestNotifyDialogOpened;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyDialogOpened")
