//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExUserJoined.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserJoined")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExUserJoined
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserJoined 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserJoined 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExUserJoined

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExUserJoined_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserJoined || defined(INCLUDE_ARApiServiceExUserJoined))
#define ARApiServiceExUserJoined_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExUserJoined : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExUserJoined)

FOUNDATION_EXPORT void ARApiServiceExUserJoined_init(ARApiServiceExUserJoined *self);

FOUNDATION_EXPORT ARApiServiceExUserJoined *new_ARApiServiceExUserJoined_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExUserJoined *create_ARApiServiceExUserJoined_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExUserJoined)

@compatibility_alias ImDiyalogCoreApiApiServiceExUserJoined ARApiServiceExUserJoined;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserJoined")