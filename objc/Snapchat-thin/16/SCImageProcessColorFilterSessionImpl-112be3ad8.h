// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessColorFilterSessionImpl
// Superclass: NSObject
// Address: 0x112be3ad8

@interface SCImageProcessColorFilterSessionImpl

// Property: appliesColorConversionDuringScaling; attributes: TB,N,V_appliesColorConversionDuringScaling
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessColorFilterSessionImpl initWithQueue:commandManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109069058

// -[SCImageProcessColorFilterSessionImpl setImage:withScaledImageFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090691e8

// -[SCImageProcessColorFilterSessionImpl setRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069760

// -[SCImageProcessColorFilterSessionImpl setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x10906979c

// -[SCImageProcessColorFilterSessionImpl setShouldRenderContinuously:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906980c

// -[SCImageProcessColorFilterSessionImpl setShouldRenderFullSizeImageForExport:]
// Type encoding: v20@0:8B16
// Implementation: 0x109069814

// -[SCImageProcessColorFilterSessionImpl setShouldAnimateBackgroundCommand:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906981c

// -[SCImageProcessColorFilterSessionImpl notifyInputCommandsChanged]
// Type encoding: v16@0:8
// Implementation: 0x109069824

// -[SCImageProcessColorFilterSessionImpl setOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x109069848

// -[SCImageProcessColorFilterSessionImpl filterImageWithCroppingAspectRatio:transcodingTaskId:useBackgroundAnimationCommand:imageFilteringCompletionHandler:]
// Type encoding: v44@0:8d16@24B32@?36
// Implementation: 0x10906988c

// -[SCImageProcessColorFilterSessionImpl setBackgroundAnimationCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069aa4

// -[SCImageProcessColorFilterSessionImpl _addBackgroundAnimationCommandUnloadRequest]
// Type encoding: v16@0:8
// Implementation: 0x109069b60

// -[SCImageProcessColorFilterSessionImpl _addUnloadRequestForCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069c20

// -[SCImageProcessColorFilterSessionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109069c90

// -[SCImageProcessColorFilterSessionImpl cleanup]
// Type encoding: v16@0:8
// Implementation: 0x109069cec

// -[SCImageProcessColorFilterSessionImpl cleanupCommandsAndRenderer]
// Type encoding: v16@0:8
// Implementation: 0x109069d18

// -[SCImageProcessColorFilterSessionImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069d9c

// -[SCImageProcessColorFilterSessionImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069da4

// -[SCImageProcessColorFilterSessionImpl stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x109069dac

// -[SCImageProcessColorFilterSessionImpl startRunning]
// Type encoding: v16@0:8
// Implementation: 0x109069e2c

// -[SCImageProcessColorFilterSessionImpl _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x109069f4c

// -[SCImageProcessColorFilterSessionImpl _addRequestWithBackgroundAnimationCommand:imageFilteringCompletionHandler:croppingAspectRatio:backgroundColor:transcodingTaskID:requestCompletionHandler:resetShouldSubmitNewRequest:presentationTime:]
// Type encoding: v88@0:8B16@?20d28@36@44@?52B60{?=qiIq}64
// Implementation: 0x10906a248

// -[SCImageProcessColorFilterSessionImpl _presentationTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10906a5e4

// -[SCImageProcessColorFilterSessionImpl _generateSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10906a6a4

// -[SCImageProcessColorFilterSessionImpl _applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906a720

// -[SCImageProcessColorFilterSessionImpl _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906a72c

// -[SCImageProcessColorFilterSessionImpl appliesColorConversionDuringScaling]
// Type encoding: B16@0:8
// Implementation: 0x10906a738

// -[SCImageProcessColorFilterSessionImpl setAppliesColorConversionDuringScaling:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906a740

// -[SCImageProcessColorFilterSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10906a748

@end
