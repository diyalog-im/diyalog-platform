//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/sdp/SDPReader.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPReader")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDPReader
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPReader 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPReader 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDPReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSDPReader_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPReader || defined(INCLUDE_ARSDPReader))
#define ARSDPReader_

@class ImDiyalogRuntimeWebrtcSdpEntitiesSDPRawRecord;

@interface ARSDPReader : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)sdp;

- (ImDiyalogRuntimeWebrtcSdpEntitiesSDPRawRecord *)readOptionalRecordWithChar:(jchar)v;

- (ImDiyalogRuntimeWebrtcSdpEntitiesSDPRawRecord *)readRecord;

- (ImDiyalogRuntimeWebrtcSdpEntitiesSDPRawRecord *)readRecordWithChar:(jchar)v;

- (ImDiyalogRuntimeWebrtcSdpEntitiesSDPRawRecord *)readUntilWithChar:(jchar)v;

- (jint)readVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSDPReader)

FOUNDATION_EXPORT void ARSDPReader_initWithNSString_(ARSDPReader *self, NSString *sdp);

FOUNDATION_EXPORT ARSDPReader *new_ARSDPReader_initWithNSString_(NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARSDPReader *create_ARSDPReader_initWithNSString_(NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ARSDPReader)

@compatibility_alias ImDiyalogRuntimeWebrtcSdpSDPReader ARSDPReader;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPReader")
