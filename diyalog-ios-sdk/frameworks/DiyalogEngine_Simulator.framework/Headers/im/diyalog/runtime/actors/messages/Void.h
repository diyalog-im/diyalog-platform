//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/messages/Void.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesVoid")
#ifdef RESTRICT_ImDiyalogRuntimeActorsMessagesVoid
#define INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesVoid 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesVoid 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsMessagesVoid

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARVoid_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesVoid || defined(INCLUDE_ARVoid))
#define ARVoid_

@interface ARVoid : NSObject

+ (ARVoid *)INSTANCE;

#pragma mark Public

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ARVoid)

inline ARVoid *ARVoid_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ARVoid *ARVoid_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARVoid, INSTANCE, ARVoid *)

J2OBJC_TYPE_LITERAL_HEADER(ARVoid)

@compatibility_alias ImDiyalogRuntimeActorsMessagesVoid ARVoid;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsMessagesVoid")
