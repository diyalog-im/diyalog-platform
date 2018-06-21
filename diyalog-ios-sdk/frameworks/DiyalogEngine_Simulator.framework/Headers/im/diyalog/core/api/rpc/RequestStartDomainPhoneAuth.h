//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStartDomainPhoneAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStartDomainPhoneAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth || defined(INCLUDE_ARRequestStartDomainPhoneAuth))
#define ARRequestStartDomainPhoneAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStartDomainPhoneAuth : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)phoneNumber
                withNSString:(NSString * __nonnull)domainId
                withNSString:(NSString * __nonnull)domainAccessHash
                     withInt:(jint)appId
                withNSString:(NSString * __nonnull)apiKey
               withByteArray:(IOSByteArray * __nonnull)deviceHash
                withNSString:(NSString * __nonnull)deviceTitle
                withNSString:(NSString * __nullable)timeZone
            withJavaUtilList:(id<JavaUtilList> __nonnull)preferredLanguages;

+ (ARRequestStartDomainPhoneAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getApiKey;

- (jint)getAppId;

- (IOSByteArray * __nonnull)getDeviceHash;

- (NSString * __nonnull)getDeviceTitle;

- (NSString * __nonnull)getDomainAccessHash;

- (NSString * __nonnull)getDomainId;

- (jint)getHeaderKey;

- (jlong)getPhoneNumber;

- (id<JavaUtilList> __nonnull)getPreferredLanguages;

- (NSString * __nullable)getTimeZone;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStartDomainPhoneAuth)

inline jint ARRequestStartDomainPhoneAuth_get_HEADER();
#define ARRequestStartDomainPhoneAuth_HEADER 391
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStartDomainPhoneAuth, HEADER, jint)

FOUNDATION_EXPORT ARRequestStartDomainPhoneAuth *ARRequestStartDomainPhoneAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStartDomainPhoneAuth_initWithLong_withNSString_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(ARRequestStartDomainPhoneAuth *self, jlong phoneNumber, NSString *domainId, NSString *domainAccessHash, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT ARRequestStartDomainPhoneAuth *new_ARRequestStartDomainPhoneAuth_initWithLong_withNSString_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(jlong phoneNumber, NSString *domainId, NSString *domainAccessHash, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainPhoneAuth *create_ARRequestStartDomainPhoneAuth_initWithLong_withNSString_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(jlong phoneNumber, NSString *domainId, NSString *domainAccessHash, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT void ARRequestStartDomainPhoneAuth_init(ARRequestStartDomainPhoneAuth *self);

FOUNDATION_EXPORT ARRequestStartDomainPhoneAuth *new_ARRequestStartDomainPhoneAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainPhoneAuth *create_ARRequestStartDomainPhoneAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStartDomainPhoneAuth)

@compatibility_alias ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth ARRequestStartDomainPhoneAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainPhoneAuth")