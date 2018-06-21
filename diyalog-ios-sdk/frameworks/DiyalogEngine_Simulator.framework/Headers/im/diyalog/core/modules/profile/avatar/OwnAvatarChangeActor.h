//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/profile/avatar/OwnAvatarChangeActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor")
#ifdef RESTRICT_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor
#define INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor || defined(INCLUDE_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor))
#define ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ACFileReference;
@class ACModules;

@interface ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModules:(ACModules *)modules;

- (void)avatarChangedWithLong:(jlong)rid;

- (void)changeAvatarWithNSString:(NSString *)descriptor;

- (void)onReceiveWithId:(id)message;

- (void)removeAvatar;

- (void)uploadCompletedWithLong:(jlong)rid
            withACFileReference:(ACFileReference *)fileReference;

- (void)uploadErrorWithLong:(jlong)rid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_initWithACModules_(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor *self, ACModules *modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor *new_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_initWithACModules_(ACModules *modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor *create_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_initWithACModules_(ACModules *modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor)

#endif

#if !defined (ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar_) && (INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor || defined(INCLUDE_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar))
#define ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar_

@interface ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)descriptor;

- (NSString *)getDescriptor;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar)

FOUNDATION_EXPORT void ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar_initWithNSString_(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar *self, NSString *descriptor);

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar *new_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar_initWithNSString_(NSString *descriptor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar *create_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar_initWithNSString_(NSString *descriptor);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_ChangeAvatar)

#endif

#if !defined (ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar_) && (INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor || defined(INCLUDE_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar))
#define ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar_

@interface ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar)

FOUNDATION_EXPORT void ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar_init(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar *new_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar *create_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_RemoveAvatar)

#endif

#if !defined (ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor || defined(INCLUDE_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged))
#define ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged_

@interface ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)rid;

- (jlong)getRid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged_initWithLong_(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged *self, jlong rid);

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged *new_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged_initWithLong_(jlong rid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged *create_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged_initWithLong_(jlong rid);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor_AvatarChanged)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesProfileAvatarOwnAvatarChangeActor")