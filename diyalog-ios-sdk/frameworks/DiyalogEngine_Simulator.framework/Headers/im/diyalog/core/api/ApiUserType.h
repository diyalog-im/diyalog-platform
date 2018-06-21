//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiUserType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUserType")
#ifdef RESTRICT_ImDiyalogCoreApiApiUserType
#define INCLUDE_ALL_ImDiyalogCoreApiApiUserType 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiUserType 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiUserType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiUserType_) && (INCLUDE_ALL_ImDiyalogCoreApiApiUserType || defined(INCLUDE_ARApiUserType))
#define ARApiUserType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiUserType_Enum) {
  ARApiUserType_Enum_PERSONAL = 0,
  ARApiUserType_Enum_BUSINESS = 1,
  ARApiUserType_Enum_ENTERPRISE = 2,
  ARApiUserType_Enum_DOMAINUSER = 3,
  ARApiUserType_Enum_DOMAINCUSTOMER = 4,
  ARApiUserType_Enum_BOT = 5,
  ARApiUserType_Enum_ANONYMOUS = 6,
  ARApiUserType_Enum_UNKNOWN = 7,
  ARApiUserType_Enum_UNSUPPORTED_VALUE = 8,
};

@interface ARApiUserType : JavaLangEnum < NSCopying >

+ (ARApiUserType *)PERSONAL;

+ (ARApiUserType *)BUSINESS;

+ (ARApiUserType *)ENTERPRISE;

+ (ARApiUserType *)DOMAINUSER;

+ (ARApiUserType *)DOMAINCUSTOMER;

+ (ARApiUserType *)BOT;

+ (ARApiUserType *)ANONYMOUS;

+ (ARApiUserType *)UNKNOWN;

+ (ARApiUserType *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiUserType *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiUserType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiUserType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiUserType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiUserType *ARApiUserType_values_[];

inline ARApiUserType *ARApiUserType_get_PERSONAL();
J2OBJC_ENUM_CONSTANT(ARApiUserType, PERSONAL)

inline ARApiUserType *ARApiUserType_get_BUSINESS();
J2OBJC_ENUM_CONSTANT(ARApiUserType, BUSINESS)

inline ARApiUserType *ARApiUserType_get_ENTERPRISE();
J2OBJC_ENUM_CONSTANT(ARApiUserType, ENTERPRISE)

inline ARApiUserType *ARApiUserType_get_DOMAINUSER();
J2OBJC_ENUM_CONSTANT(ARApiUserType, DOMAINUSER)

inline ARApiUserType *ARApiUserType_get_DOMAINCUSTOMER();
J2OBJC_ENUM_CONSTANT(ARApiUserType, DOMAINCUSTOMER)

inline ARApiUserType *ARApiUserType_get_BOT();
J2OBJC_ENUM_CONSTANT(ARApiUserType, BOT)

inline ARApiUserType *ARApiUserType_get_ANONYMOUS();
J2OBJC_ENUM_CONSTANT(ARApiUserType, ANONYMOUS)

inline ARApiUserType *ARApiUserType_get_UNKNOWN();
J2OBJC_ENUM_CONSTANT(ARApiUserType, UNKNOWN)

inline ARApiUserType *ARApiUserType_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiUserType, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiUserType *ARApiUserType_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiUserType_values();

FOUNDATION_EXPORT ARApiUserType *ARApiUserType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiUserType *ARApiUserType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiUserType)

@compatibility_alias ImDiyalogCoreApiApiUserType ARApiUserType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUserType")
