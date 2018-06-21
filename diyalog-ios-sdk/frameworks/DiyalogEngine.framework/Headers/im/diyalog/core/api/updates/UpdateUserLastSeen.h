//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateUserLastSeen.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserLastSeen")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateUserLastSeen
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserLastSeen 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserLastSeen 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateUserLastSeen

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateUserLastSeen_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserLastSeen || defined(INCLUDE_ARUpdateUserLastSeen))
#define ARUpdateUserLastSeen_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARApiDeviceType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateUserLastSeen : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid
                   withLong:(jlong)date
        withARApiDeviceType:(ARApiDeviceType * __nullable)deviceType
               withNSString:(NSString * __nullable)deviceCategory;

+ (ARUpdateUserLastSeen *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (NSString * __nullable)getDeviceCategory;

- (ARApiDeviceType * __nullable)getDeviceType;

- (jint)getHeaderKey;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateUserLastSeen)

inline jint ARUpdateUserLastSeen_get_HEADER();
#define ARUpdateUserLastSeen_HEADER 9
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateUserLastSeen, HEADER, jint)

FOUNDATION_EXPORT ARUpdateUserLastSeen *ARUpdateUserLastSeen_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateUserLastSeen_initWithInt_withLong_withARApiDeviceType_withNSString_(ARUpdateUserLastSeen *self, jint uid, jlong date, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT ARUpdateUserLastSeen *new_ARUpdateUserLastSeen_initWithInt_withLong_withARApiDeviceType_withNSString_(jint uid, jlong date, ARApiDeviceType *deviceType, NSString *deviceCategory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserLastSeen *create_ARUpdateUserLastSeen_initWithInt_withLong_withARApiDeviceType_withNSString_(jint uid, jlong date, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT void ARUpdateUserLastSeen_init(ARUpdateUserLastSeen *self);

FOUNDATION_EXPORT ARUpdateUserLastSeen *new_ARUpdateUserLastSeen_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserLastSeen *create_ARUpdateUserLastSeen_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateUserLastSeen)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateUserLastSeen ARUpdateUserLastSeen;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserLastSeen")
