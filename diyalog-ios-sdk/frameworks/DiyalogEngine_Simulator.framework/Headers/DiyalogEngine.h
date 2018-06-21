//
//  DiyalogEngine.h
//  DiyalogEngine
//
//  Created by Tolga_MacBook on 24/11/2016.
//  Copyright © 2016 Tolga_MacBook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DZNWebViewController.h"
#import "RSKImageCropper.h"
#import "YYImage.h"
#import "TTTAttributedLabel.h"
//! Project version number for DiyalogEngine.
FOUNDATION_EXPORT double DiyalogEngineVersionNumber;

//! Project version string for DiyalogEngine.
FOUNDATION_EXPORT const unsigned char DiyalogEngineVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DiyalogEngine/PublicHeader.h>


// Importing J2ObjC Runtime

//@import j2objc;

// Importing Diyalog Core libraries

#import "ActorCoreUmbrella.h"
#import "UIImage+YYAdd.h"

#import "UIView+YYAdd.h"
#import "SZTextView.h"
// Phone Input
#import "JDStatusBarNotification.h"
#import "VBFPopFlatButton.h"
#import "MBProgressHUD.h"
#import "ABPhoneField.h"
#import "RMPhoneFormat.h"
//#import "SRWebSocket.h"
// FMDB include. FMDB Doesn't support frameworks yet, so we included it to app itself
//#import <SocketRocket/SocketRocket.h>
#import "SocketRocket.h"

#import "zipzap.h"
//#import "GCDAsyncSocket.h"
//#import "GCDAsyncUdpSocket.h"
#import "FMDatabase.h"
#import "FMResultSet.h"
#import "FMDatabaseAdditions.h"
#import "FMDatabaseQueue.h"
#import "GCDAsyncSocket.h" // for TCP
#import "GCDAsyncUdpSocket.h" // for UDP

#import "Alamofire.h"
#import "AlamofireImage.h"

#import "CLTokenInputView.h"    

// Ogg record

#import "SLKTextViewController.h"

#import "NYTPhotosViewController.h"
#import "NYTPhoto.h"
#import "NYTPhotoViewController.h"
#import "NYTPhotosViewControllerDataSource.h"
#import "NYTPhotoCaptionViewLayoutWidthHinting.h"

#import "AAAudioRecorder.h"
#import "AAAudioPlayer.h"
#import "AAModernConversationAudioPlayer.h"

// CLTokenView

#import "CLTokenView.h"

// YYKit

#import "YYText.h"
#import "YYDispatchQueuePool.h"
#import "YYAsyncLayer.h"

// WebRTC

#import "WebRTC.h"

// Siri like wave
#import "SCSiriWaveformView.h"
