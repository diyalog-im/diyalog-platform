//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/threading/AtomicLongCompat.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicLongCompat")
#ifdef RESTRICT_ImDiyalogRuntimeThreadingAtomicLongCompat
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicLongCompat 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicLongCompat 1
#endif
#undef RESTRICT_ImDiyalogRuntimeThreadingAtomicLongCompat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAtomicLongCompat_) && (INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicLongCompat || defined(INCLUDE_ARAtomicLongCompat))
#define ARAtomicLongCompat_

/*!
 @brief Abstract Atomic Long
 */
@interface ARAtomicLongCompat : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Get Long value
 @return the value
 */
- (jlong)get;

/*!
 @brief Get value and increment
 @return value before increment
 */
- (jlong)getAndIncrement;

/*!
 @brief Increment and get value
 @return incremented value
 */
- (jlong)incrementAndGet;

/*!
 @brief Set Value
 @param v new value
 */
- (void)setWithLong:(jlong)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAtomicLongCompat)

FOUNDATION_EXPORT void ARAtomicLongCompat_init(ARAtomicLongCompat *self);

J2OBJC_TYPE_LITERAL_HEADER(ARAtomicLongCompat)

@compatibility_alias ImDiyalogRuntimeThreadingAtomicLongCompat ARAtomicLongCompat;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicLongCompat")