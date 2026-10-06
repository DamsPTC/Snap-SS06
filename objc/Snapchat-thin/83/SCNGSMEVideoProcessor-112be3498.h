// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMEVideoProcessor
// Superclass: NSObject
// Address: 0x112be3498

@interface SCNGSMEVideoProcessor

// Property: commandProvider; attributes: T@"<SCUcoCommandProvider>",W,N,V_commandProvider
// Property: renderInputImagesAsBGRA; attributes: TB,N,V_renderInputImagesAsBGRA
// Property: sessionTextureCacheEnabled; attributes: TB,N,V_sessionTextureCacheEnabled

// -[SCNGSMEVideoProcessor init]
// Type encoding: @16@0:8
// Implementation: 0x10905bda0

// -[SCNGSMEVideoProcessor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10905be20

// -[SCNGSMEVideoProcessor setRenderSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10905be74

// -[SCNGSMEVideoProcessor setRenderEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905be7c

// -[SCNGSMEVideoProcessor setIppRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905beb4

// -[SCNGSMEVideoProcessor setTotalDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10905bee4

// -[SCNGSMEVideoProcessor setupImageProcessor]
// Type encoding: v16@0:8
// Implementation: 0x10905bef8

// -[SCNGSMEVideoProcessor blankPixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10905bf84

// -[SCNGSMEVideoProcessor addSegmentInfoForTrackID:ngsmeInputID:timeRanges:images:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10905c028

// -[SCNGSMEVideoProcessor trackSegmentInfo]
// Type encoding: @16@0:8
// Implementation: 0x10905c390

// -[SCNGSMEVideoProcessor renderInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:completionHandler:]
// Type encoding: v112@0:8^{__CFArray=}16@24@32@40^{__CVBuffer=}48{?=qiIq}56{?=qiIq}80@?104
// Implementation: 0x10905c3b8

// -[SCNGSMEVideoProcessor renderInputsForPlayback:trackIds:orientations:transforms:outputTimestamp:frameTimestamp:completionHandler:]
// Type encoding: v104@0:8^{__CFArray=}16@24@32@40{?=qiIq}48{?=qiIq}72@?96
// Implementation: 0x10905c418

// -[SCNGSMEVideoProcessor _processInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:imageProcessor:outputRenderer:trackUnchangedFrames:completionHandler:]
// Type encoding: v132@0:8^{__CFArray=}16@24@32@40^{__CVBuffer=}48{?=qiIq}56{?=qiIq}80@104@112B120@?124
// Implementation: 0x10905c4a0

// -[SCNGSMEVideoProcessor _createExportRenderEffects]
// Type encoding: @16@0:8
// Implementation: 0x10905ca48

// -[SCNGSMEVideoProcessor _exportImageCommandForCommand:]
// Type encoding: @24@0:8@16
// Implementation: 0x10905ced0

// -[SCNGSMEVideoProcessor setupExportImageProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10905cfac

// -[SCNGSMEVideoProcessor exportInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:completionHandler:]
// Type encoding: v112@0:8^{__CFArray=}16@24@32@40^{__CVBuffer=}48{?=qiIq}56{?=qiIq}80@?104
// Implementation: 0x10905d040

// -[SCNGSMEVideoProcessor commandProvider]
// Type encoding: @16@0:8
// Implementation: 0x10905d150

// -[SCNGSMEVideoProcessor setCommandProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905d168

// -[SCNGSMEVideoProcessor renderInputImagesAsBGRA]
// Type encoding: B16@0:8
// Implementation: 0x10905d174

// -[SCNGSMEVideoProcessor setRenderInputImagesAsBGRA:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905d17c

// -[SCNGSMEVideoProcessor sessionTextureCacheEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10905d184

// -[SCNGSMEVideoProcessor setSessionTextureCacheEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10905d18c

// -[SCNGSMEVideoProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905d194

@end
