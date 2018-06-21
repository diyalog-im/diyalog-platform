//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/com/google/j2objc/annotations/RetainedLocalRef.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedLocalRef")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsRetainedLocalRef
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedLocalRef 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedLocalRef 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsRetainedLocalRef

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ComGoogleJ2objcAnnotationsRetainedLocalRef_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedLocalRef || defined(INCLUDE_ComGoogleJ2objcAnnotationsRetainedLocalRef))
#define ComGoogleJ2objcAnnotationsRetainedLocalRef_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
@import j2objc;

/*!
 @brief Annotation that indicates a local variable should be retained outside of any
 subsequent AutoreleasePool use.
 Otherwise, if a local variable has a copy
 of an object in a container that is removed in an AutoreleasePool, it will
 be deallocated before the local variable goes out of scope.
 <p>
 For example, a ThreadPoolExecutor is used to process a list of tasks,
 removing each task from the list as it is processed. ThreadPoolExecutor
 tasks are run inside of an AutoreleasePool, since these executors are often
 long-lived. If a local variable is initialized to one of the task list's
 elements, by default that variable won't be valid (will be deallocated)
 after task processing. Adding a LocalRetain annotation to the local
 variable ensures it is still valid after task processing.
 @author Tom Ball
 */
@protocol ComGoogleJ2objcAnnotationsRetainedLocalRef < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsRetainedLocalRef)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsRetainedLocalRef)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsRetainedLocalRef")
