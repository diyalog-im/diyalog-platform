//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateStickerCollectionsChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateStickerCollectionsChanged_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged || defined(INCLUDE_ARUpdateStickerCollectionsChanged))
#define ARUpdateStickerCollectionsChanged_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateStickerCollectionsChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)collections;

+ (ARUpdateStickerCollectionsChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getCollections;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateStickerCollectionsChanged)

inline jint ARUpdateStickerCollectionsChanged_get_HEADER();
#define ARUpdateStickerCollectionsChanged_HEADER 164
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateStickerCollectionsChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateStickerCollectionsChanged *ARUpdateStickerCollectionsChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateStickerCollectionsChanged_initWithJavaUtilList_(ARUpdateStickerCollectionsChanged *self, id<JavaUtilList> collections);

FOUNDATION_EXPORT ARUpdateStickerCollectionsChanged *new_ARUpdateStickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> collections) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateStickerCollectionsChanged *create_ARUpdateStickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> collections);

FOUNDATION_EXPORT void ARUpdateStickerCollectionsChanged_init(ARUpdateStickerCollectionsChanged *self);

FOUNDATION_EXPORT ARUpdateStickerCollectionsChanged *new_ARUpdateStickerCollectionsChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateStickerCollectionsChanged *create_ARUpdateStickerCollectionsChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateStickerCollectionsChanged)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged ARUpdateStickerCollectionsChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateStickerCollectionsChanged")