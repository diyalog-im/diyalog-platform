//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/ResponseDoDH.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityResponseDoDH")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityResponseDoDH
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityResponseDoDH 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityResponseDoDH 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityResponseDoDH

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACResponseDoDH_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityResponseDoDH || defined(INCLUDE_ACResponseDoDH))
#define ACResponseDoDH_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;

@interface ACResponseDoDH : ACProtoStruct

+ (jint)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithLong:(jlong)randomId
               withByteArray:(IOSByteArray *)verify
               withByteArray:(IOSByteArray *)verifySign;

- (jlong)getRandomId;

- (IOSByteArray *)getVerify;

- (IOSByteArray *)getVerifySign;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACResponseDoDH)

inline jint ACResponseDoDH_get_HEADER();
#define ACResponseDoDH_HEADER 231
J2OBJC_STATIC_FIELD_CONSTANT(ACResponseDoDH, HEADER, jint)

FOUNDATION_EXPORT void ACResponseDoDH_initWithARDataInput_(ACResponseDoDH *self, ARDataInput *stream);

FOUNDATION_EXPORT ACResponseDoDH *new_ACResponseDoDH_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACResponseDoDH *create_ACResponseDoDH_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACResponseDoDH_initWithLong_withByteArray_withByteArray_(ACResponseDoDH *self, jlong randomId, IOSByteArray *verify, IOSByteArray *verifySign);

FOUNDATION_EXPORT ACResponseDoDH *new_ACResponseDoDH_initWithLong_withByteArray_withByteArray_(jlong randomId, IOSByteArray *verify, IOSByteArray *verifySign) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACResponseDoDH *create_ACResponseDoDH_initWithLong_withByteArray_withByteArray_(jlong randomId, IOSByteArray *verify, IOSByteArray *verifySign);

J2OBJC_TYPE_LITERAL_HEADER(ACResponseDoDH)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityResponseDoDH ACResponseDoDH;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityResponseDoDH")