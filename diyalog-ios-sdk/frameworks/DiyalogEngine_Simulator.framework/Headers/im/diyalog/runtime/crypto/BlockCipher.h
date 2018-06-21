//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/BlockCipher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoBlockCipher")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoBlockCipher
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoBlockCipher 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoBlockCipher 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoBlockCipher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBlockCipher_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoBlockCipher || defined(INCLUDE_ARBlockCipher))
#define ARBlockCipher_

@class IOSByteArray;

/*!
 @brief Block-based cipher
 */
@protocol ARBlockCipher < NSObject, JavaObject >

/*!
 @brief Encrypting block
 @param data       plain-text data
 @param offset     offset for data
 @param dest       destination buffer
 @param destOffset destination offset
 */
- (void)encryptBlock:(IOSByteArray *)data
          withOffset:(jint)offset
              toDest:(IOSByteArray *)dest
          withOffset:(jint)destOffset;

/*!
 @brief Decrypting block
 @param data       cipher-text data
 @param offset     offset for data
 @param dest       destination buffer
 @param destOffset destination offset
 */
- (void)decryptBlock:(IOSByteArray *)data
          withOffset:(jint)offset
              toDest:(IOSByteArray *)dest
          withOffset:(jint)destOffset;

/*!
 @brief Getting cipher's block size
 @return block size in bytes
 */
- (jint)getBlockSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBlockCipher)

J2OBJC_TYPE_LITERAL_HEADER(ARBlockCipher)

#define ImDiyalogRuntimeCryptoBlockCipher ARBlockCipher

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoBlockCipher")
