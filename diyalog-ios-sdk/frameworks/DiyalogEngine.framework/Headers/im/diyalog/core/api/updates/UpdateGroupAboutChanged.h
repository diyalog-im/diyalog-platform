//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateGroupAboutChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupAboutChanged_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged || defined(INCLUDE_ARUpdateGroupAboutChanged))
#define ARUpdateGroupAboutChanged_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateGroupAboutChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
               withNSString:(NSString * __nullable)about;

+ (ARUpdateGroupAboutChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getAbout;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupAboutChanged)

inline jint ARUpdateGroupAboutChanged_get_HEADER();
#define ARUpdateGroupAboutChanged_HEADER 214
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupAboutChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupAboutChanged *ARUpdateGroupAboutChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupAboutChanged_initWithInt_withNSString_(ARUpdateGroupAboutChanged *self, jint groupId, NSString *about);

FOUNDATION_EXPORT ARUpdateGroupAboutChanged *new_ARUpdateGroupAboutChanged_initWithInt_withNSString_(jint groupId, NSString *about) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupAboutChanged *create_ARUpdateGroupAboutChanged_initWithInt_withNSString_(jint groupId, NSString *about);

FOUNDATION_EXPORT void ARUpdateGroupAboutChanged_init(ARUpdateGroupAboutChanged *self);

FOUNDATION_EXPORT ARUpdateGroupAboutChanged *new_ARUpdateGroupAboutChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupAboutChanged *create_ARUpdateGroupAboutChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupAboutChanged)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged ARUpdateGroupAboutChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAboutChanged")
