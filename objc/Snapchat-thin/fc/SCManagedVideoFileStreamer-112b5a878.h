// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoFileStreamer
// Superclass: NSObject
// Address: 0x112b5a878

@interface SCManagedVideoFileStreamer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentFrame; attributes: T@"ARFrame",R,VcurrentFrame
// Property: lastDepthData; attributes: T@"AVDepthData",R,VlastDepthData
// Property: fieldOfView; attributes: Tf,R,VfieldOfView
// Property: fieldOfViewObservable; attributes: T@"SCObservable",R,N,VfieldOfViewObservable
// Property: shouldCacheCurrentFrame; attributes: TB,VshouldCacheCurrentFrame
// Property: processingPipeline; attributes: T@"<SCProcessingPipeline>",R,N,V_processingPipeline
// Property: sampleBufferDisplayController; attributes: T@"<SCManagedSampleBufferDisplayController>",R,N,V_sampleBufferDisplayController
// Property: didAddAnchorsObservable; attributes: T@"SCObservable",R,N,VdidAddAnchorsObservable
// Property: didUpdateAnchorsObservable; attributes: T@"SCObservable",R,N,VdidUpdateAnchorsObservable
// Property: didRemoveAnchorsObservable; attributes: T@"SCObservable",R,N,VdidRemoveAnchorsObservable
// Property: bufferDimensionObservable; attributes: T@"SCObservable",R,N,V_bufferDimensionSubject
// Property: cameraRenderRegionObservable; attributes: T@"SCObservable",R,N
// Property: frameAspectRatio; attributes: Td,R,N
// Property: videoOrientation; attributes: Tq,R,N,V_videoOrientation
// Property: viewportOrientation; attributes: TQ,R,N,V_viewportOrientation
// Property: viewfinderProvider; attributes: T@"<SCViewfinderSourceDelegate>",&,VviewfinderProvider
// Property: isStreaming; attributes: TB,R,N,V_isStreaming
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: resourceId; attributes: T@"NSString",R,N,VresourceId

// -[SCManagedVideoFileStreamer initWithPlaybackForURL:secondaryPlaybackURL:hardwareResource:hardwareRequestHandlerUpdatesObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10702cda8

// -[SCManagedVideoFileStreamer addSampleBufferDisplayController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702d138

// -[SCManagedVideoFileStreamer setSampleBufferDisplayEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702d168

// -[SCManagedVideoFileStreamer setKeepLateFramesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702d170

// -[SCManagedVideoFileStreamer stopStreamingWithoutRemovingPreview]
// Type encoding: v16@0:8
// Implementation: 0x10702d174

// -[SCManagedVideoFileStreamer stopStreamingAndFlushPreviewAfterDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702d178

// -[SCManagedVideoFileStreamer preemptivelyFlushOutdatedPreview]
// Type encoding: v16@0:8
// Implementation: 0x10702d17c

// -[SCManagedVideoFileStreamer waitUntilSampleBufferDisplayed:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10702d180

// -[SCManagedVideoFileStreamer startStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10702d18c

// -[SCManagedVideoFileStreamer stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10702d1e8

// -[SCManagedVideoFileStreamer addObserver:withFrameSamplingRate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10702d22c

// -[SCManagedVideoFileStreamer removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702d234

// -[SCManagedVideoFileStreamer setAsOutput:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10702d23c

// -[SCManagedVideoFileStreamer setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702d244

// -[SCManagedVideoFileStreamer setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702d24c

// -[SCManagedVideoFileStreamer setViewportOrientation:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10702d258

// -[SCManagedVideoFileStreamer invalidateCameraRenderRegion]
// Type encoding: v16@0:8
// Implementation: 0x10702d260

// -[SCManagedVideoFileStreamer beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702d264

// -[SCManagedVideoFileStreamer commitConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702d268

// -[SCManagedVideoFileStreamer setupWithSession:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10702d26c

// -[SCManagedVideoFileStreamer setupWithARSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702d270

// -[SCManagedVideoFileStreamer setZoomFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702d274

// -[SCManagedVideoFileStreamer activateTorch]
// Type encoding: v16@0:8
// Implementation: 0x10702d278

// -[SCManagedVideoFileStreamer shouldRecreateWhenSessionChange]
// Type encoding: B16@0:8
// Implementation: 0x10702d27c

// -[SCManagedVideoFileStreamer outputMediaDataWillChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702d284

// -[SCManagedVideoFileStreamer displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702d34c

// -[SCManagedVideoFileStreamer currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10702d9b4

// -[SCManagedVideoFileStreamer preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10702da4c

// -[SCManagedVideoFileStreamer createSampleBufferFromPixelBuffer:presentationTime:]
// Type encoding: ^{opaqueCMSampleBuffer=}48@0:8^{__CVBuffer=}16{?=qiIq}24
// Implementation: 0x10702da68

// -[SCManagedVideoFileStreamer configureOutput]
// Type encoding: v16@0:8
// Implementation: 0x10702db24

// -[SCManagedVideoFileStreamer configureSecondaryOutput]
// Type encoding: v16@0:8
// Implementation: 0x10702dc88

// -[SCManagedVideoFileStreamer getNextPixelBufferWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10702ddec

// -[SCManagedVideoFileStreamer addDidPlayToEndTimeNotificationForPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702de1c

// -[SCManagedVideoFileStreamer removeObservers]
// Type encoding: v16@0:8
// Implementation: 0x10702dfe0

// -[SCManagedVideoFileStreamer _applicationDidBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702e070

// -[SCManagedVideoFileStreamer _applicationWillForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702e07c

// -[SCManagedVideoFileStreamer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10702e088

// -[SCManagedVideoFileStreamer clearCurrentFrame]
// Type encoding: v16@0:8
// Implementation: 0x10702e0d4

// -[SCManagedVideoFileStreamer clearLastDepthData]
// Type encoding: v16@0:8
// Implementation: 0x10702e0d8

// -[SCManagedVideoFileStreamer cameraRenderRegionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e0dc

// -[SCManagedVideoFileStreamer frameAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x10702e148

// -[SCManagedVideoFileStreamer shouldCacheCurrentFrame]
// Type encoding: B16@0:8
// Implementation: 0x10702e14c

// -[SCManagedVideoFileStreamer setShouldCacheCurrentFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702e158

// -[SCManagedVideoFileStreamer currentFrame]
// Type encoding: @16@0:8
// Implementation: 0x10702e160

// -[SCManagedVideoFileStreamer bufferDimensionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e16c

// -[SCManagedVideoFileStreamer fieldOfViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e174

// -[SCManagedVideoFileStreamer lastDepthData]
// Type encoding: @16@0:8
// Implementation: 0x10702e17c

// -[SCManagedVideoFileStreamer fieldOfView]
// Type encoding: f16@0:8
// Implementation: 0x10702e188

// -[SCManagedVideoFileStreamer isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10702e190

// -[SCManagedVideoFileStreamer performer]
// Type encoding: @16@0:8
// Implementation: 0x10702e198

// -[SCManagedVideoFileStreamer videoOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10702e1a0

// -[SCManagedVideoFileStreamer processingPipeline]
// Type encoding: @16@0:8
// Implementation: 0x10702e1a8

// -[SCManagedVideoFileStreamer sampleBufferDisplayController]
// Type encoding: @16@0:8
// Implementation: 0x10702e1b0

// -[SCManagedVideoFileStreamer didAddAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e1b8

// -[SCManagedVideoFileStreamer didUpdateAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e1c0

// -[SCManagedVideoFileStreamer didRemoveAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e1c8

// -[SCManagedVideoFileStreamer resourceId]
// Type encoding: @16@0:8
// Implementation: 0x10702e1d0

// -[SCManagedVideoFileStreamer viewfinderProvider]
// Type encoding: @16@0:8
// Implementation: 0x10702e1d8

// -[SCManagedVideoFileStreamer setViewfinderProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702e1e4

// -[SCManagedVideoFileStreamer viewportOrientation]
// Type encoding: Q16@0:8
// Implementation: 0x10702e1ec

// -[SCManagedVideoFileStreamer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10702e1f4

@end
