//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/ConversationState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityConversationState")
#ifdef RESTRICT_ImDiyalogCoreEntityConversationState
#define INCLUDE_ALL_ImDiyalogCoreEntityConversationState 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityConversationState 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityConversationState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACConversationState_) && (INCLUDE_ALL_ImDiyalogCoreEntityConversationState || defined(INCLUDE_ACConversationState))
#define ACConversationState_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

#define RESTRICT_ImDiyalogRuntimeStorageKeyValueItem 1
#define INCLUDE_ARKeyValueItem 1
#include "../../../../im/diyalog/runtime/storage/KeyValueItem.h"

@class ACPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol ARBserCreator;
@protocol ARValueDefaultCreator;

@interface ACConversationState : ARBserObject < ARKeyValueItem >

+ (id<ARBserCreator>)CREATOR;

+ (void)setCREATOR:(id<ARBserCreator>)value;

+ (id<ARValueDefaultCreator>)DEFAULT_CREATOR;

+ (void)setDEFAULT_CREATOR:(id<ARValueDefaultCreator>)value;

+ (NSString *)ENTITY_NAME;

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                   withBoolean:(jboolean)isLoaded
                      withLong:(jlong)inMaxMessageDate
                      withLong:(jlong)inReadDate
                      withLong:(jlong)outReadDate
                      withLong:(jlong)outReceiveState;

- (ACConversationState *)changeInMaxDateWithLong:(jlong)inMaxMessageDate;

- (ACConversationState *)changeInReadDateWithLong:(jlong)inReadDate;

- (ACConversationState *)changeIsLoadedWithBoolean:(jboolean)isLoaded;

- (ACConversationState *)changeOutReadDateWithLong:(jlong)outReadDate;

- (ACConversationState *)changeOutReceiveDateWithLong:(jlong)outReceiveState;

+ (ACConversationState *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getEngineId;

- (jlong)getInMaxMessageDate;

- (jlong)getInReadDate;

- (jlong)getOutReadDate;

- (jlong)getOutReceiveState;

- (ACPeer *)getPeer;

- (jboolean)isLoaded;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ACConversationState)

inline id<ARBserCreator> ACConversationState_get_CREATOR();
inline id<ARBserCreator> ACConversationState_set_CREATOR(id<ARBserCreator> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACConversationState_CREATOR;
J2OBJC_STATIC_FIELD_OBJ(ACConversationState, CREATOR, id<ARBserCreator>)

inline id<ARValueDefaultCreator> ACConversationState_get_DEFAULT_CREATOR();
inline id<ARValueDefaultCreator> ACConversationState_set_DEFAULT_CREATOR(id<ARValueDefaultCreator> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARValueDefaultCreator> ACConversationState_DEFAULT_CREATOR;
J2OBJC_STATIC_FIELD_OBJ(ACConversationState, DEFAULT_CREATOR, id<ARValueDefaultCreator>)

inline NSString *ACConversationState_get_ENTITY_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACConversationState_ENTITY_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACConversationState, ENTITY_NAME, NSString *)

FOUNDATION_EXPORT ACConversationState *ACConversationState_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ACConversationState_initWithACPeer_withBoolean_withLong_withLong_withLong_withLong_(ACConversationState *self, ACPeer *peer, jboolean isLoaded, jlong inMaxMessageDate, jlong inReadDate, jlong outReadDate, jlong outReceiveState);

FOUNDATION_EXPORT ACConversationState *new_ACConversationState_initWithACPeer_withBoolean_withLong_withLong_withLong_withLong_(ACPeer *peer, jboolean isLoaded, jlong inMaxMessageDate, jlong inReadDate, jlong outReadDate, jlong outReceiveState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACConversationState *create_ACConversationState_initWithACPeer_withBoolean_withLong_withLong_withLong_withLong_(ACPeer *peer, jboolean isLoaded, jlong inMaxMessageDate, jlong inReadDate, jlong outReadDate, jlong outReceiveState);

J2OBJC_TYPE_LITERAL_HEADER(ACConversationState)

@compatibility_alias ImDiyalogCoreEntityConversationState ACConversationState;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityConversationState")