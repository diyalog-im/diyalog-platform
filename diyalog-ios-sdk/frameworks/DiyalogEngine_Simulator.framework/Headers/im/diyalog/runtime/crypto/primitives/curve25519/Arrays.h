//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/Arrays.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_

@class IOSByteArray;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Assigns the specified byte value to each element of the specified array
 of bytes.
 @param a   the array to be filled
 @param val the value to be stored in all elements of the array
 */
+ (void)fillWithByteArray:(IOSByteArray *)a
                 withByte:(jbyte)val;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_fillWithByteArray_withByte_(IOSByteArray *a, jbyte val);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Arrays")
