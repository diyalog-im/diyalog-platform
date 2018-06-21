//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/RequestResend.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestResend")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityRequestResend
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestResend 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestResend 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityRequestResend

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRequestResend_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestResend || defined(INCLUDE_ACRequestResend))
#define ACRequestResend_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACRequestResend : ACProtoStruct

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithLong:(jlong)messageId;

- (jlong)getMessageId;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRequestResend)

inline jbyte ACRequestResend_get_HEADER();
#define ACRequestResend_HEADER 9
J2OBJC_STATIC_FIELD_CONSTANT(ACRequestResend, HEADER, jbyte)

FOUNDATION_EXPORT void ACRequestResend_initWithLong_(ACRequestResend *self, jlong messageId);

FOUNDATION_EXPORT ACRequestResend *new_ACRequestResend_initWithLong_(jlong messageId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRequestResend *create_ACRequestResend_initWithLong_(jlong messageId);

FOUNDATION_EXPORT void ACRequestResend_initWithARDataInput_(ACRequestResend *self, ARDataInput *stream);

FOUNDATION_EXPORT ACRequestResend *new_ACRequestResend_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRequestResend *create_ACRequestResend_initWithARDataInput_(ARDataInput *stream);

J2OBJC_TYPE_LITERAL_HEADER(ACRequestResend)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityRequestResend ACRequestResend;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestResend")
