//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiDomainSecurityExUnsupported.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurityExUnsupported")
#ifdef RESTRICT_ImDiyalogCoreApiApiDomainSecurityExUnsupported
#define INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurityExUnsupported 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurityExUnsupported 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiDomainSecurityExUnsupported

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiDomainSecurityExUnsupported_) && (INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurityExUnsupported || defined(INCLUDE_ARApiDomainSecurityExUnsupported))
#define ARApiDomainSecurityExUnsupported_

#define RESTRICT_ImDiyalogCoreApiApiDomainSecurityEx 1
#define INCLUDE_ARApiDomainSecurityEx 1
#include "../../../../im/diyalog/core/api/ApiDomainSecurityEx.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARApiDomainSecurityExUnsupported : ARApiDomainSecurityEx

#pragma mark Public

- (instancetype)initWithInt:(jint)key
              withByteArray:(IOSByteArray *)content;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiDomainSecurityExUnsupported)

FOUNDATION_EXPORT void ARApiDomainSecurityExUnsupported_initWithInt_withByteArray_(ARApiDomainSecurityExUnsupported *self, jint key, IOSByteArray *content);

FOUNDATION_EXPORT ARApiDomainSecurityExUnsupported *new_ARApiDomainSecurityExUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDomainSecurityExUnsupported *create_ARApiDomainSecurityExUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content);

J2OBJC_TYPE_LITERAL_HEADER(ARApiDomainSecurityExUnsupported)

@compatibility_alias ImDiyalogCoreApiApiDomainSecurityExUnsupported ARApiDomainSecurityExUnsupported;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurityExUnsupported")
