//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStartDomainUserTokenAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStartDomainUserTokenAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth || defined(INCLUDE_ARRequestStartDomainUserTokenAuth))
#define ARRequestStartDomainUserTokenAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangLong;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStartDomainUserTokenAuth : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)sessionId
                    withNSString:(NSString * __nonnull)userId
                    withNSString:(NSString * __nonnull)userName
                withJavaLangLong:(JavaLangLong * __nullable)userPhone
                    withNSString:(NSString * __nullable)userEmail
                         withInt:(jint)appId
                    withNSString:(NSString * __nonnull)apiKey
                   withByteArray:(IOSByteArray * __nonnull)deviceHash
                    withNSString:(NSString * __nonnull)deviceTitle
                    withNSString:(NSString * __nullable)timeZone
                withJavaUtilList:(id<JavaUtilList> __nonnull)preferredLanguages;

+ (ARRequestStartDomainUserTokenAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getApiKey;

- (jint)getAppId;

- (IOSByteArray * __nonnull)getDeviceHash;

- (NSString * __nonnull)getDeviceTitle;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getPreferredLanguages;

- (NSString * __nonnull)getSessionId;

- (NSString * __nullable)getTimeZone;

- (NSString * __nullable)getUserEmail;

- (NSString * __nonnull)getUserId;

- (NSString * __nonnull)getUserName;

- (JavaLangLong * __nullable)getUserPhone;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStartDomainUserTokenAuth)

inline jint ARRequestStartDomainUserTokenAuth_get_HEADER();
#define ARRequestStartDomainUserTokenAuth_HEADER 204
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStartDomainUserTokenAuth, HEADER, jint)

FOUNDATION_EXPORT ARRequestStartDomainUserTokenAuth *ARRequestStartDomainUserTokenAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStartDomainUserTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(ARRequestStartDomainUserTokenAuth *self, NSString *sessionId, NSString *userId, NSString *userName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT ARRequestStartDomainUserTokenAuth *new_ARRequestStartDomainUserTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *sessionId, NSString *userId, NSString *userName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainUserTokenAuth *create_ARRequestStartDomainUserTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *sessionId, NSString *userId, NSString *userName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT void ARRequestStartDomainUserTokenAuth_init(ARRequestStartDomainUserTokenAuth *self);

FOUNDATION_EXPORT ARRequestStartDomainUserTokenAuth *new_ARRequestStartDomainUserTokenAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainUserTokenAuth *create_ARRequestStartDomainUserTokenAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStartDomainUserTokenAuth)

@compatibility_alias ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth ARRequestStartDomainUserTokenAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainUserTokenAuth")
