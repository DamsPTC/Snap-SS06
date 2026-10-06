// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoStreamer
// Superclass: NSObject
// Address: 0x112b5a8c8

@interface SCManagedVideoStreamer

// Property: currentFrame; attributes: T@"ARFrame",&,V_currentFrame
// Property: lastDepthData; attributes: T@"AVDepthData",&,V_lastDepthData
// Property: fieldOfView; attributes: Tf,V_fieldOfView
// Property: isStreaming; attributes: TB,N,V_isStreaming
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: processingPipeline; attributes: T@"<SCProcessingPipeline>",R,N,V_processingPipeline
// Property: sampleBufferDisplayController; attributes: T@"<SCManagedSampleBufferDisplayController>",R,N,V_sampleBufferDisplayController
// Property: didAddAnchorsObservable; attributes: T@"SCObservable",R,N,V_didAddAnchorsSubject
// Property: didUpdateAnchorsObservable; attributes: T@"SCObservable",R,N,V_didUpdateAnchorsSubject
// Property: didRemoveAnchorsObservable; attributes: T@"SCObservable",R,N,V_didRemoveAnchorsSubject
// Property: bufferDimensionObservable; attributes: T@"SCObservable",R,N
// Property: cameraRenderRegionObservable; attributes: T@"SCObservable",R,N
// Property: frameAspectRatio; attributes: Td,R,N
// Property: videoOrientation; attributes: Tq,R,N,V_videoOrientation
// Property: viewportOrientation; attributes: TQ,R,N,V_viewportOrientation
// Property: viewfinderProvider; attributes: T@"<SCViewfinderSourceDelegate>",&,VviewfinderProvider
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: resourceId; attributes: T@"NSString",R,N,VresourceId
// Property: fieldOfViewObservable; attributes: T@"SCObservable",R,N
// Property: shouldCacheCurrentFrame; attributes: TB,VshouldCacheCurrentFrame

// -[SCManagedVideoStreamer initWithResource:captureDeviceManager:systemConfiguration:managedCaptureSession:hardwareRequestHandlerUpdatesObservable:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10034d540

// -[SCManagedVideoStreamer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10702e310

// -[SCManagedVideoStreamer invalidateCameraRenderRegion]
// Type encoding: v16@0:8
// Implementation: 0x10702e354

// -[SCManagedVideoStreamer setupWithSession:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10034de2c

// -[SCManagedVideoStreamer setupWithARSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003525e4

// -[SCManagedVideoStreamer addSampleBufferDisplayController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100455548

// -[SCManagedVideoStreamer setSampleBufferDisplayEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702e42c

// -[SCManagedVideoStreamer waitUntilSampleBufferDisplayed:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10702e490

// -[SCManagedVideoStreamer startStreaming]
// Type encoding: v16@0:8
// Implementation: 0x100c2384c

// -[SCManagedVideoStreamer callbackPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10034e460

// -[SCManagedVideoStreamer stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10034df08

// -[SCManagedVideoStreamer stopStreamingAndFlushPreviewAfterDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x10034df10

// -[SCManagedVideoStreamer isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10034e060

// -[SCManagedVideoStreamer setIsStreaming:]
// Type encoding: v20@0:8B16
// Implementation: 0x10034e15c

// -[SCManagedVideoStreamer preemptivelyFlushOutdatedPreview]
// Type encoding: v16@0:8
// Implementation: 0x10702e698

// -[SCManagedVideoStreamer stopStreamingWithoutRemovingPreview]
// Type encoding: v16@0:8
// Implementation: 0x10034dfb8

// -[SCManagedVideoStreamer beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702e6f4

// -[SCManagedVideoStreamer setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702e754

// -[SCManagedVideoStreamer setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702e7d4

// -[SCManagedVideoStreamer setViewportOrientation:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10702e808

// -[SCManagedVideoStreamer setKeepLateFramesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702e810

// -[SCManagedVideoStreamer setZoomFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x10702e908

// -[SCManagedVideoStreamer activateTorch]
// Type encoding: v16@0:8
// Implementation: 0x10702e910

// -[SCManagedVideoStreamer commitConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10702e970

// -[SCManagedVideoStreamer addObserver:withFrameSamplingRate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1003532b8

// -[SCManagedVideoStreamer removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702e9cc

// -[SCManagedVideoStreamer shouldRecreateWhenSessionChange]
// Type encoding: B16@0:8
// Implementation: 0x10702e9d4

// -[SCManagedVideoStreamer fieldOfViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702e9dc

// -[SCManagedVideoStreamer bufferDimensionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702ea04

// -[SCManagedVideoStreamer cameraRenderRegionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10085ee14

// -[SCManagedVideoStreamer frameAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x10702ea2c

// -[SCManagedVideoStreamer currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10702ea34

// -[SCManagedVideoStreamer preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10702eacc

// -[SCManagedVideoStreamer _saveSecondaryCameraBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10702eadc

// -[SCManagedVideoStreamer _releaseSecondaryCameraBuffer]
// Type encoding: v16@0:8
// Implementation: 0x10034e0f8

// -[SCManagedVideoStreamer _isSecondaryCameraConnection:]
// Type encoding: B24@0:8@16
// Implementation: 0x1007088fc

// -[SCManagedVideoStreamer _didOutputSampleBuffer:isSecondaryCameraConnection:]
// Type encoding: v28@0:8^{opaqueCMSampleBuffer=}16B24
// Implementation: 0x100708a20

// -[SCManagedVideoStreamer _didOutputSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x100708b1c

// -[SCManagedVideoStreamer _getResolutionFromSampleBuffer:]
// Type encoding: {CGSize=dd}24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x100709360

// -[SCManagedVideoStreamer _is4By3Resolution:]
// Type encoding: B32@0:8{CGSize=dd}16
// Implementation: 0x1007093ac

// -[SCManagedVideoStreamer didDropSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10702ebc4

// -[SCManagedVideoStreamer didDisplayFrameForController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702ed40

// -[SCManagedVideoStreamer captureOutput:didOutputSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x100708800

// -[SCManagedVideoStreamer captureOutput:didDropSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x10702edf8

// -[SCManagedVideoStreamer session:cameraDidChangeTrackingState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702ee00

// -[SCManagedVideoStreamer session:didUpdateFrame:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702ee38

// -[SCManagedVideoStreamer session:didAddAnchors:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702f144

// -[SCManagedVideoStreamer session:didUpdateAnchors:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702f1e0

// -[SCManagedVideoStreamer session:didRemoveAnchors:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702f27c

// -[SCManagedVideoStreamer session:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702f318

// -[SCManagedVideoStreamer sessionWasInterrupted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702f4fc

// -[SCManagedVideoStreamer sessionInterruptionEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702f510

// -[SCManagedVideoStreamer clearCurrentFrame]
// Type encoding: v16@0:8
// Implementation: 0x100352650

// -[SCManagedVideoStreamer clearLastDepthData]
// Type encoding: v16@0:8
// Implementation: 0x1003526f8

// -[SCManagedVideoStreamer _sampleBuffersCallbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x10034e2fc

// -[SCManagedVideoStreamer _performCompletionHandlersForWaitUntilSampleBufferDisplayed]
// Type encoding: v16@0:8
// Implementation: 0x1007098b0

// -[SCManagedVideoStreamer _enableVideoMirrorForDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x10034e7ac

// -[SCManagedVideoStreamer _updateCameraRenderRegion:fillMode:]
// Type encoding: v40@0:8{CGSize=dd}16Q32
// Implementation: 0x1007093f4

// -[SCManagedVideoStreamer _updateFieldOfViewWithARFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702f524

// -[SCManagedVideoStreamer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10702f658

// -[SCManagedVideoStreamer _performWithTrace:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10702f65c

// -[SCManagedVideoStreamer _performImmediatelyIfCurrentPerformerWithTrace:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10034e068

// -[SCManagedVideoStreamer performer]
// Type encoding: @16@0:8
// Implementation: 0x10702f6f8

// -[SCManagedVideoStreamer currentFrame]
// Type encoding: @16@0:8
// Implementation: 0x10702f700

// -[SCManagedVideoStreamer setCurrentFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003528dc

// -[SCManagedVideoStreamer fieldOfView]
// Type encoding: f16@0:8
// Implementation: 0x10702f70c

// -[SCManagedVideoStreamer setFieldOfView:]
// Type encoding: v20@0:8f16
// Implementation: 0x10702f714

// -[SCManagedVideoStreamer lastDepthData]
// Type encoding: @16@0:8
// Implementation: 0x10702f71c

// -[SCManagedVideoStreamer setLastDepthData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100352928

// -[SCManagedVideoStreamer videoOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10702f728

// -[SCManagedVideoStreamer processingPipeline]
// Type encoding: @16@0:8
// Implementation: 0x10702f730

// -[SCManagedVideoStreamer sampleBufferDisplayController]
// Type encoding: @16@0:8
// Implementation: 0x10702f738

// -[SCManagedVideoStreamer shouldCacheCurrentFrame]
// Type encoding: B16@0:8
// Implementation: 0x1003527e4

// -[SCManagedVideoStreamer setShouldCacheCurrentFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702f740

// -[SCManagedVideoStreamer didAddAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702f748

// -[SCManagedVideoStreamer didUpdateAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702f750

// -[SCManagedVideoStreamer didRemoveAnchorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10702f758

// -[SCManagedVideoStreamer resourceId]
// Type encoding: @16@0:8
// Implementation: 0x10702f760

// -[SCManagedVideoStreamer viewfinderProvider]
// Type encoding: @16@0:8
// Implementation: 0x100709500

// -[SCManagedVideoStreamer setViewfinderProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006c7f10

// -[SCManagedVideoStreamer viewportOrientation]
// Type encoding: Q16@0:8
// Implementation: 0x10702f768

// -[SCManagedVideoStreamer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10702f770

@end
