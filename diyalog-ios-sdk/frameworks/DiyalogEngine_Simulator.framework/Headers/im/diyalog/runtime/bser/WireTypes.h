//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/bser/WireTypes.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeBserWireTypes")
#ifdef RESTRICT_ImDiyalogRuntimeBserWireTypes
#define INCLUDE_ALL_ImDiyalogRuntimeBserWireTypes 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeBserWireTypes 1
#endif
#undef RESTRICT_ImDiyalogRuntimeBserWireTypes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWireTypes_) && (INCLUDE_ALL_ImDiyalogRuntimeBserWireTypes || defined(INCLUDE_ARWireTypes))
#define ARWireTypes_

@interface ARWireTypes : NSObject

+ (jint)TYPE_VARINT;

+ (jint)TYPE_32BIT;

+ (jint)TYPE_64BIT;

+ (jint)TYPE_LENGTH_DELIMITED;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWireTypes)

inline jint ARWireTypes_get_TYPE_VARINT();
#define ARWireTypes_TYPE_VARINT 0
J2OBJC_STATIC_FIELD_CONSTANT(ARWireTypes, TYPE_VARINT, jint)

inline jint ARWireTypes_get_TYPE_32BIT();
#define ARWireTypes_TYPE_32BIT 5
J2OBJC_STATIC_FIELD_CONSTANT(ARWireTypes, TYPE_32BIT, jint)

inline jint ARWireTypes_get_TYPE_64BIT();
#define ARWireTypes_TYPE_64BIT 1
J2OBJC_STATIC_FIELD_CONSTANT(ARWireTypes, TYPE_64BIT, jint)

inline jint ARWireTypes_get_TYPE_LENGTH_DELIMITED();
#define ARWireTypes_TYPE_LENGTH_DELIMITED 2
J2OBJC_STATIC_FIELD_CONSTANT(ARWireTypes, TYPE_LENGTH_DELIMITED, jint)

FOUNDATION_EXPORT void ARWireTypes_init(ARWireTypes *self);

FOUNDATION_EXPORT ARWireTypes *new_ARWireTypes_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWireTypes *create_ARWireTypes_init();

J2OBJC_TYPE_LITERAL_HEADER(ARWireTypes)

@compatibility_alias ImDiyalogRuntimeBserWireTypes ARWireTypes;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeBserWireTypes")
