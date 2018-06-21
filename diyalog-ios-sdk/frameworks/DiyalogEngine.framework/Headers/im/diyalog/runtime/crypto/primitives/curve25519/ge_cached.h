//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/ge_cached.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached_

@class IOSIntArray;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached : NSObject {
 @public
  IOSIntArray *YplusX_;
  IOSIntArray *YminusX_;
  IOSIntArray *Z_;
  IOSIntArray *T2d_;
}

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached)

J2OBJC_FIELD_SETTER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached, YplusX_, IOSIntArray *)
J2OBJC_FIELD_SETTER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached, YminusX_, IOSIntArray *)
J2OBJC_FIELD_SETTER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached, Z_, IOSIntArray *)
J2OBJC_FIELD_SETTER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached, T2d_, IOSIntArray *)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_cached;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_cached")
