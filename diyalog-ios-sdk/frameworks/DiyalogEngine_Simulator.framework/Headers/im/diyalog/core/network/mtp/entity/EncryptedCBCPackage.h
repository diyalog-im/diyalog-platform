//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/EncryptedCBCPackage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACEncryptedCBCPackage_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage || defined(INCLUDE_ACEncryptedCBCPackage))
#define ACEncryptedCBCPackage_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoObject 1
#define INCLUDE_ACProtoObject 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoObject.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;

@interface ACEncryptedCBCPackage : ACProtoObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)iv
                    withByteArray:(IOSByteArray *)encryptedContent;

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (IOSByteArray *)getEncryptedContent;

- (IOSByteArray *)getIv;

- (ACProtoObject *)readObjectWithARDataInput:(ARDataInput *)bs;

- (void)writeObjectWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACEncryptedCBCPackage)

FOUNDATION_EXPORT void ACEncryptedCBCPackage_initWithByteArray_withByteArray_(ACEncryptedCBCPackage *self, IOSByteArray *iv, IOSByteArray *encryptedContent);

FOUNDATION_EXPORT ACEncryptedCBCPackage *new_ACEncryptedCBCPackage_initWithByteArray_withByteArray_(IOSByteArray *iv, IOSByteArray *encryptedContent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACEncryptedCBCPackage *create_ACEncryptedCBCPackage_initWithByteArray_withByteArray_(IOSByteArray *iv, IOSByteArray *encryptedContent);

FOUNDATION_EXPORT void ACEncryptedCBCPackage_initWithARDataInput_(ACEncryptedCBCPackage *self, ARDataInput *stream);

FOUNDATION_EXPORT ACEncryptedCBCPackage *new_ACEncryptedCBCPackage_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACEncryptedCBCPackage *create_ACEncryptedCBCPackage_initWithARDataInput_(ARDataInput *stream);

J2OBJC_TYPE_LITERAL_HEADER(ACEncryptedCBCPackage)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage ACEncryptedCBCPackage;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityEncryptedCBCPackage")
