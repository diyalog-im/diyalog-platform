//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/StashedMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsStashedMessage")
#ifdef RESTRICT_ImDiyalogRuntimeActorsStashedMessage
#define INCLUDE_ALL_ImDiyalogRuntimeActorsStashedMessage 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsStashedMessage 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsStashedMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARStashedMessage_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsStashedMessage || defined(INCLUDE_ARStashedMessage))
#define ARStashedMessage_

@class ARActorRef;

@interface ARStashedMessage : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)message
            withARActorRef:(ARActorRef *)sender;

- (id)getMessage;

- (ARActorRef *)getSender;

@end

J2OBJC_EMPTY_STATIC_INIT(ARStashedMessage)

FOUNDATION_EXPORT void ARStashedMessage_initWithId_withARActorRef_(ARStashedMessage *self, id message, ARActorRef *sender);

FOUNDATION_EXPORT ARStashedMessage *new_ARStashedMessage_initWithId_withARActorRef_(id message, ARActorRef *sender) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARStashedMessage *create_ARStashedMessage_initWithId_withARActorRef_(id message, ARActorRef *sender);

J2OBJC_TYPE_LITERAL_HEADER(ARStashedMessage)

@compatibility_alias ImDiyalogRuntimeActorsStashedMessage ARStashedMessage;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsStashedMessage")
