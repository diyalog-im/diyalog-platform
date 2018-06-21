//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/sdp/entities/SDPCodec.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec || defined(INCLUDE_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec))
#define ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec_

@class JavaUtilArrayList;
@class JavaUtilHashMap;

@interface ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)index
               withNSString:(NSString *)name
                    withInt:(jint)clockRate
               withNSString:(NSString *)args;

- (NSString *)getArgs;

- (jint)getClockRate;

- (JavaUtilArrayList *)getCodecFeedback;

- (JavaUtilHashMap *)getFormat;

- (jint)getIndex;

- (NSString *)getName;

- (void)setCodecFeedbackWithJavaUtilArrayList:(JavaUtilArrayList *)codecFeedback;

- (void)setFormatWithJavaUtilHashMap:(JavaUtilHashMap *)format;

- (NSString *)toSDP;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec)

FOUNDATION_EXPORT void ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec_initWithInt_withNSString_withInt_withNSString_(ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec *self, jint index, NSString *name, jint clockRate, NSString *args);

FOUNDATION_EXPORT ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec *new_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec_initWithInt_withNSString_withInt_withNSString_(jint index, NSString *name, jint clockRate, NSString *args) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec *create_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec_initWithInt_withNSString_withInt_withNSString_(jint index, NSString *name, jint clockRate, NSString *args);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpEntitiesSDPCodec")