// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureStateHandler
// Superclass: NSObject
// Address: 0x112b92458

@interface SCBatchCaptureStateHandler

// Property: indexProvider; attributes: T@"<SCBatchCaptureEditingIndexProvider>",W,N,V_indexProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBatchCaptureStateHandler initWithBatchCaptureEditingIndexProvider:batchCaptureConfiguration:overlaySize:userSession:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:userTaggingFeature:targetTrajectoryFactory:stickerInjector:ctpItemViewService:circumstanceEngine:snapEditorTweaks:]
// Type encoding: @128@0:8@16@24{CGSize=dd}32@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x108002d94

// -[SCBatchCaptureStateHandler didChangeStaticStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003198

// -[SCBatchCaptureStateHandler didUpdateMetadataOfStickerView:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1080031e8

// -[SCBatchCaptureStateHandler didChangeAudioFilter:audioEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108003248

// -[SCBatchCaptureStateHandler didChangeAttachmentURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080032a8

// -[SCBatchCaptureStateHandler updateAvailableFiltersWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080032f8

// -[SCBatchCaptureStateHandler didChangeFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003348

// -[SCBatchCaptureStateHandler didChangeVenueFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003398

// -[SCBatchCaptureStateHandler didChangeCroppingState:isInitialState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1080033e8

// -[SCBatchCaptureStateHandler didFinishTouchWithTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003448

// -[SCBatchCaptureStateHandler didChangeLiveCameraLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003510

// -[SCBatchCaptureStateHandler statesContainAudioVisualEdits]
// Type encoding: B16@0:8
// Implementation: 0x1080035a0

// -[SCBatchCaptureStateHandler multiSnapStateAtSegmentIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1080035dc

// -[SCBatchCaptureStateHandler gallerySnapOverlaysForAllSnaps]
// Type encoding: @16@0:8
// Implementation: 0x108003630

// -[SCBatchCaptureStateHandler overlaysForGalleryWithMultiSnapDrawingCache:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108003754

// -[SCBatchCaptureStateHandler _galleryTimeRangesForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108003ca4

// -[SCBatchCaptureStateHandler sendingStates]
// Type encoding: @16@0:8
// Implementation: 0x108003e20

// -[SCBatchCaptureStateHandler setBatchCaptureSavingConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108003fb0

// -[SCBatchCaptureStateHandler configureEphemeralMedias:configuration:multiSnapDrawingCache:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108003fe0

// -[SCBatchCaptureStateHandler maxUniqueStickerId]
// Type encoding: q16@0:8
// Implementation: 0x1080041e0

// -[SCBatchCaptureStateHandler editingIndex]
// Type encoding: q16@0:8
// Implementation: 0x108004420

// -[SCBatchCaptureStateHandler drawingView:addedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108004458

// -[SCBatchCaptureStateHandler drawingView:removedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080044c8

// -[SCBatchCaptureStateHandler didChangeStaticCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108004538

// -[SCBatchCaptureStateHandler didChangeTrackingCaption:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108004588

// -[SCBatchCaptureStateHandler didChangeAutoCaptionsState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080045e8

// -[SCBatchCaptureStateHandler didDeleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108004638

// -[SCBatchCaptureStateHandler currentMultiSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x108004670

// -[SCBatchCaptureStateHandler _currentEditingSegment]
// Type encoding: @16@0:8
// Implementation: 0x1080046d8

// -[SCBatchCaptureStateHandler _createMultiSnapStateHandlerForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108004770

// -[SCBatchCaptureStateHandler _configEphemeralMedias:startAtIndex:forSegment:stateHandler:allMediaTimeRanges:multiSnapDrawingCache:]
// Type encoding: q64@0:8@16q24@32@40@48@56
// Implementation: 0x108004954

// -[SCBatchCaptureStateHandler _addExportableGeoFiltersIfNecessaryToSnapState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108004ce8

// -[SCBatchCaptureStateHandler batchCaptureConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108004fb8

// -[SCBatchCaptureStateHandler batchCaptureConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108004ff8

// -[SCBatchCaptureStateHandler batchCaptureConfiguration:didDeleteSnapAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10800503c

// -[SCBatchCaptureStateHandler batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x1080050e8

// -[SCBatchCaptureStateHandler batchCaptureConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080050ec

// -[SCBatchCaptureStateHandler batchCaptureConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080050f4

// -[SCBatchCaptureStateHandler indexProvider]
// Type encoding: @16@0:8
// Implementation: 0x1080050f8

// -[SCBatchCaptureStateHandler setIndexProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108005110

// -[SCBatchCaptureStateHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10800511c

@end
