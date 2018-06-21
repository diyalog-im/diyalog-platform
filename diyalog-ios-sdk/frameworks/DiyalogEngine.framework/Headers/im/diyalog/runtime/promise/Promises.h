//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/promise/Promises.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromises")
#ifdef RESTRICT_ImDiyalogRuntimePromisePromises
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromises 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromises 1
#endif
#undef RESTRICT_ImDiyalogRuntimePromisePromises

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromises_) && (INCLUDE_ALL_ImDiyalogRuntimePromisePromises || defined(INCLUDE_ARPromises))
#define ARPromises_

@class ARPromise;
@class ARPromiseResolver;
@protocol ARPromiseFunc;
@protocol JavaUtilList;

/*!
 @brief Various methods for creating promises.
 */
@interface ARPromises : NSObject

#pragma mark Public

- (instancetype)init;

+ (ARPromise *)logWithTag:(NSString *)TAG
             withResolver:(ARPromiseResolver *)resolver
                 withFunc:(id<ARPromiseFunc>)func;

/*!
 @brief Execute promises step by step
 @param queue queue of promises
 @return promise
 */
+ (ARPromise *)traverseWithJavaUtilList:(id<JavaUtilList>)queue;

/*!
 @brief Combines two promises to one with different data types
 @param t1   first argument
 @param t2   second argument
 @return promise
 */
+ (ARPromise *)tupleWithT1:(ARPromise *)t1
                    withT2:(ARPromise *)t2;

/*!
 @brief Combines tree promises to one with different data types
 @param t1   first argument
 @param t2   second argument
 @param t3   third argument
 @return promise
 */
+ (ARPromise *)tupleWithT1:(ARPromise *)t1
                    withT2:(ARPromise *)t2
                    withT3:(ARPromise *)t3;

/*!
 @brief Combines four promises to one with different data types
 @param t1   first argument
 @param t2   second argument
 @param t3   third argument
 @param t4   fourth argument
 @return promise
 */
+ (ARPromise *)tupleWithT1:(ARPromise *)t1
                    withT2:(ARPromise *)t2
                    withT3:(ARPromise *)t3
                    withT4:(ARPromise *)t4;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromises)

FOUNDATION_EXPORT ARPromise *ARPromises_logWithTag_withResolver_withFunc_(NSString *TAG, ARPromiseResolver *resolver, id<ARPromiseFunc> func);

FOUNDATION_EXPORT ARPromise *ARPromises_tupleWithT1_withT2_(ARPromise *t1, ARPromise *t2);

FOUNDATION_EXPORT ARPromise *ARPromises_tupleWithT1_withT2_withT3_(ARPromise *t1, ARPromise *t2, ARPromise *t3);

FOUNDATION_EXPORT ARPromise *ARPromises_tupleWithT1_withT2_withT3_withT4_(ARPromise *t1, ARPromise *t2, ARPromise *t3, ARPromise *t4);

FOUNDATION_EXPORT ARPromise *ARPromises_traverseWithJavaUtilList_(id<JavaUtilList> queue);

FOUNDATION_EXPORT void ARPromises_init(ARPromises *self);

FOUNDATION_EXPORT ARPromises *new_ARPromises_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARPromises *create_ARPromises_init();

J2OBJC_TYPE_LITERAL_HEADER(ARPromises)

@compatibility_alias ImDiyalogRuntimePromisePromises ARPromises;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromises")
