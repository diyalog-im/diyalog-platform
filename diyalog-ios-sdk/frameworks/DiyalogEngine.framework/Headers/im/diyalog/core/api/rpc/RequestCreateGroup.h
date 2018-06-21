//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestCreateGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCreateGroup")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestCreateGroup
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCreateGroup 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCreateGroup 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestCreateGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestCreateGroup_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCreateGroup || defined(INCLUDE_ARRequestCreateGroup))
#define ARRequestCreateGroup_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiMapValue;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestCreateGroup : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)rid
                withNSString:(NSString * __nonnull)title
            withJavaUtilList:(id<JavaUtilList> __nonnull)users
                withNSString:(NSString * __nullable)groupType
           withARApiMapValue:(ARApiMapValue * __nullable)userData;

+ (ARRequestCreateGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getGroupType;

- (jint)getHeaderKey;

- (jlong)getRid;

- (NSString * __nonnull)getTitle;

- (ARApiMapValue * __nullable)getUserData;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestCreateGroup)

inline jint ARRequestCreateGroup_get_HEADER();
#define ARRequestCreateGroup_HEADER 230
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestCreateGroup, HEADER, jint)

FOUNDATION_EXPORT ARRequestCreateGroup *ARRequestCreateGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestCreateGroup_initWithLong_withNSString_withJavaUtilList_withNSString_withARApiMapValue_(ARRequestCreateGroup *self, jlong rid, NSString *title, id<JavaUtilList> users, NSString *groupType, ARApiMapValue *userData);

FOUNDATION_EXPORT ARRequestCreateGroup *new_ARRequestCreateGroup_initWithLong_withNSString_withJavaUtilList_withNSString_withARApiMapValue_(jlong rid, NSString *title, id<JavaUtilList> users, NSString *groupType, ARApiMapValue *userData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCreateGroup *create_ARRequestCreateGroup_initWithLong_withNSString_withJavaUtilList_withNSString_withARApiMapValue_(jlong rid, NSString *title, id<JavaUtilList> users, NSString *groupType, ARApiMapValue *userData);

FOUNDATION_EXPORT void ARRequestCreateGroup_init(ARRequestCreateGroup *self);

FOUNDATION_EXPORT ARRequestCreateGroup *new_ARRequestCreateGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCreateGroup *create_ARRequestCreateGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestCreateGroup)

@compatibility_alias ImDiyalogCoreApiRpcRequestCreateGroup ARRequestCreateGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCreateGroup")
