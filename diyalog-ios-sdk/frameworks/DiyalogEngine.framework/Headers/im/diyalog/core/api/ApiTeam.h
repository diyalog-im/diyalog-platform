//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiTeam.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiTeam")
#ifdef RESTRICT_ImDiyalogCoreApiApiTeam
#define INCLUDE_ALL_ImDiyalogCoreApiApiTeam 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiTeam 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiTeam

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiTeam_) && (INCLUDE_ALL_ImDiyalogCoreApiApiTeam || defined(INCLUDE_ARApiTeam))
#define ARApiTeam_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiTeam : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)id_
                   withLong:(jlong)accessHash
               withNSString:(NSString * __nonnull)name;

- (jlong)getAccessHash;

- (jint)getId;

- (NSString * __nonnull)getName;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiTeam)

FOUNDATION_EXPORT void ARApiTeam_initWithInt_withLong_withNSString_(ARApiTeam *self, jint id_, jlong accessHash, NSString *name);

FOUNDATION_EXPORT ARApiTeam *new_ARApiTeam_initWithInt_withLong_withNSString_(jint id_, jlong accessHash, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiTeam *create_ARApiTeam_initWithInt_withLong_withNSString_(jint id_, jlong accessHash, NSString *name);

FOUNDATION_EXPORT void ARApiTeam_init(ARApiTeam *self);

FOUNDATION_EXPORT ARApiTeam *new_ARApiTeam_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiTeam *create_ARApiTeam_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiTeam)

@compatibility_alias ImDiyalogCoreApiApiTeam ARApiTeam;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiTeam")
