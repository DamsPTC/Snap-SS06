// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoSourceProviderStreamer
// Superclass: NSObject
// Address: 0x112b5a788

@interface SCManagedVideoSourceProviderStreamer

// Property: currentFrame; attributes: T@"ARFrame",R,VcurrentFrame
// Property: lastDepthData; attributes: T@"AVDepthData",R,VlastDepthData
// Property: fieldOfView; attributes: Tf,R
// Property: fieldOfViewObservable; attributes: T@"SCObservable",R,N
// Property: shouldCacheCurrentFrame; attributes: TB,VshouldCacheCurrentFrame
// Property: processingPipeline; attributes: T@"<SCProcessingPipeline>",R,N,V_processingPipeline
// Property: sampleBufferDisplayController; attributes: T@"<SCManagedSampleBufferDisplayController>",R,N,V_sampleBufferDisplayController
// Property: didAddAnchorsObservable; attributes: T@"SCObservable",R,N,VdidAddAnchorsObservable
// Property: didUpdateAnchorsObservable; attributes: T@"SCObservable",R,N,VdidUpdateAnchorsObservable
// Property: didRemoveAnchorsObservable; attributes: T@"SCObservable",R,N,VdidRemoveAnchorsObservable
// Property: bufferDimensionObservable; attributes: T@"SCObservable",R,N,VbufferDimensionObservable
// Property: cameraRenderRegionObservable; attributes: T@"SCObservable",R,N
// Property: frameAspectRatio; attributes: Td,R,N
// Property: videoOrientation; attributes: Tq,R,N,V_videoOrientation
// Property: viewportOrientation; attributes: TQ,R,N,V_viewportOrientation
// Property: viewfinderProvider; attributes: T@"<SCViewfinderSourceDelegate>",&,VviewfinderProvider
// Property: isStreaming; attributes: TB,R,N,V_isStreaming
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: resourceId; attributes: T@"NSString",R,N,VresourceId

// -[SCManagedVideoSourceProviderStreamer initWithStreamProvider:hardwareResource:captureDeviceManager:hardwareRequestHandlerUpdatesObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10702bac4

// -[SCManagedVideoSourceProviderStreamer fieldOfView]
// Type encoding: f16@0:8
// Implementation: 0x10702bd54

// -[SCManagedVideoSourceProviderStreamer fieldOfViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702bdb4

// -[SCManagedVideoSourceProviderStreamer addSampleBufferDisplayController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702be1c

// -[SCManagedVideoSourceProviderStreamer setSampleBufferDisplayEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702be4c

// -[SCManagedVideoSourceProviderStreamer setKeepLateFramesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702be54

// -[SCManagedVideoSourceProviderStreamer stopStreamingWithoutRemovingPreview]
// Type encoding: v16@0:8
// Implementation: 0x10702be58

// -[SCManagedVideoSourceProviderStreamer stopStreamingAndFlushPreviewAfterDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702be5c

// -[SCManagedVideoSourceProviderStreamer preemptivelyFlushOutdatedPreview]
// Type encoding: v16@0:8
// Implementation: 0x10702be60

// -[SCManagedVideoSourceProviderStreamer waitUntilSampleBufferDisplayed:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10702bf3c

// -[SCManagedVideoSourceProviderStreamer startStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10702bf48

// -[SCManagedVideoSourceProviderStreamer stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10702bfa0

// -[SCManagedVideoSourceProviderStreamer addObserver:withFrameSamplingRate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10702c0c0

// -[SCManagedVideoSourceProviderStreamer removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c0c8

// -[SCManagedVideoSourceProviderStreamer setAsOutput:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10702c0d0

// -[SCManagedVideoSourceProviderStreamer setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702c0d8

// -[SCManagedVideoSourceProviderStreamer setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702c0e0

// -[SCManagedVideoSourceProviderStreamer setViewportOrientation:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10702c0ec

// -[SCManagedVideoSourceProviderStreamer beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702c0f4

// -[SCManagedVideoSourceProviderStreamer commitConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702c0f8

// -[SCManagedVideoSourceProviderStreamer setupWithSession:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10702c0fc

// -[SCManagedVideoSourceProviderStreamer setupWithARSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c100

// -[SCManagedVideoSourceProviderStreamer setZoomFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702c104

// -[SCManagedVideoSourceProviderStreamer activateTorch]
// Type encoding: v16@0:8
// Implementation: 0x10702c108

// -[SCManagedVideoSourceProviderStreamer shouldRecreateWhenSessionChange]
// Type encoding: B16@0:8
// Implementation: 0x10702c10c

// -[SCManagedVideoSourceProviderStreamer clearCurrentFrame]
// Type encoding: v16@0:8
// Implementation: 0x10702c114

// -[SCManagedVideoSourceProviderStreamer clearLastDepthData]
// Type encoding: v16@0:8
// Implementation: 0x10702c118

// -[SCManagedVideoSourceProviderStreamer invalidateCameraRenderRegion]
// Type encoding: v16@0:8
// Implementation: 0x10702c11c

// -[SCManagedVideoSourceProviderStreamer cameraRenderRegionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702c1f4

// -[SCManagedVideoSourceProviderStreamer frameAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x10702c21c

// -[SCManagedVideoSourceProviderStreamer displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c224

// -[SCManagedVideoSourceProviderStreamer _fetchStreamFromProviderAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702c42c

// -[SCManagedVideoSourceProviderStreamer currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10702c72c

// -[SCManagedVideoSourceProviderStreamer preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10702c744

// -[SCManagedVideoSourceProviderStreamer getNextPixelBufferWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10702c760

// -[SCManagedVideoSourceProviderStreamer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10702c790

// -[SCManagedVideoSourceProviderStreamer _updateCameraRenderRegion:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10702c798

// -[SCManagedVideoSourceProviderStreamer _getResolutionFromSampleBuffer:]
// Type encoding: {CGSize=dd}24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10702c894

// -[SCManagedVideoSourceProviderStreamer _applicationDidBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c8d0

// -[SCManagedVideoSourceProviderStreamer _applicationWillForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c8dc

// -[SCManagedVideoSourceProviderStreamer bufferDimensionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702c8e8

// -[SCManagedVideoSourceProviderStreamer shouldCacheCurrentFrame]
// Type encoding: B16@0:8
// Implementation: 0x10702c8f0

// -[SCManagedVideoSourceProviderStreamer setShouldCacheCurrentFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702c8fc

// -[SCManagedVideoSourceProviderStreamer currentFrame]
// Type encoding: @16@0:8
// Implementation: 0x10702c904

// -[SCManagedVideoSourceProviderStreamer lastDepthData]
// Type encoding: @16@0:8
// Implementation: 0x10702c910

// -[SCManagedVideoSourceProviderStreamer isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10702c91c

// -[SCManagedVideoSourceProviderStreamer performer]
// Type encoding: @16@0:8
// Implementation: 0x10702c924

// -[SCManagedVideoSourceProviderStreamer videoOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10702c92c

// -[SCManagedVideoSourceProviderStreamer processingPipeline]
// Type encoding: @16@0:8
// Implementation: 0x10702c934

// -[SCManagedVideoSourceProviderStreamer sampleBufferDisplayController]
// Type encoding: @16@0:8
// Implementation: 0x10702c93c

// -[SCManagedVideoSourceProviderStreamer didAddAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702c944

// -[SCManagedVideoSourceProviderStreamer didUpdateAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702c94c

// -[SCManagedVideoSourceProviderStreamer didRemoveAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702c954

// -[SCManagedVideoSourceProviderStreamer resourceId]
// Type encoding: @16@0:8
// Implementation: 0x10702c95c

// -[SCManagedVideoSourceProviderStreamer viewfinderProvider]
// Type encoding: @16@0:8
// Implementation: 0x10702c964

// -[SCManagedVideoSourceProviderStreamer setViewfinderProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702c970

// -[SCManagedVideoSourceProviderStreamer viewportOrientation]
// Type encoding: Q16@0:8
// Implementation: 0x10702c978

// -[SCManagedVideoSourceProviderStreamer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10702c980

@end
