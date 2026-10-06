// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackLayerEditorImpl
// Superclass: NSObject
// Address: 0x112a57408

@interface SCPlaybackLayerEditorImpl

// Property: snapDoc; attributes: T@"SDMSnapDoc",R,N,V_snapDoc
// Property: playbackLayerChangeObservable; attributes: T@"SCObservable",R,N,V_playbackLayerChangeSubject
// Property: segmentChangeObservable; attributes: T@"SCObservable",R,N,V_segmentChangeSubject
// Property: localSegmentCount; attributes: TQ,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackLayerEditorImpl initWithSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056acb34

// -[SCPlaybackLayerEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056acbe4

// -[SCPlaybackLayerEditorImpl localSegmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x1056ad1b0

// -[SCPlaybackLayerEditorImpl setLocalSegmentCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1056ad230

// -[SCPlaybackLayerEditorImpl playbackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ad2fc

// -[SCPlaybackLayerEditorImpl playbackLayerIds]
// Type encoding: @16@0:8
// Implementation: 0x1056ad33c

// -[SCPlaybackLayerEditorImpl playbackLayerIdsAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ad64c

// -[SCPlaybackLayerEditorImpl playbackLayerIdsAtSegment:where:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056ad660

// -[SCPlaybackLayerEditorImpl playbackLayerIdsWhere:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056ad7c0

// -[SCPlaybackLayerEditorImpl segmentOfPlaybackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ad8fc

// -[SCPlaybackLayerEditorImpl deletePlaybackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056adb10

// -[SCPlaybackLayerEditorImpl deletePlaybackLayersAtSegment:where:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056ae2c0

// -[SCPlaybackLayerEditorImpl trackSegmentAtIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ae414

// -[SCPlaybackLayerEditorImpl trackIndexOfType:]
// Type encoding: I24@0:8q16
// Implementation: 0x1056ae450

// -[SCPlaybackLayerEditorImpl moveLocalSegmentAtIndex:toIndex:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1056ae550

// -[SCPlaybackLayerEditorImpl deleteSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ae78c

// -[SCPlaybackLayerEditorImpl addPlaybackLayer:segment:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056aebec

// -[SCPlaybackLayerEditorImpl addTimedPlaybackLayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aee70

// -[SCPlaybackLayerEditorImpl updatePlaybackLayerWithId:update:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056aefc8

// -[SCPlaybackLayerEditorImpl updateTrackSegmentWithIndex:update:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056af110

// -[SCPlaybackLayerEditorImpl _insertPlaybackLayer:segment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056af210

// -[SCPlaybackLayerEditorImpl _addSegmentIfNeededForSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056af3e0

// -[SCPlaybackLayerEditorImpl _trackSegmentAtIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056af8c0

// -[SCPlaybackLayerEditorImpl _firstTrackWhere:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056afa20

// -[SCPlaybackLayerEditorImpl _errorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056afb84

// -[SCPlaybackLayerEditorImpl _assertValidStateForPlaybackLayerId:exists:segment:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1056afcb8

// -[SCPlaybackLayerEditorImpl playbackLayerChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056b03dc

// -[SCPlaybackLayerEditorImpl segmentChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056b03e4

// -[SCPlaybackLayerEditorImpl snapDoc]
// Type encoding: @16@0:8
// Implementation: 0x1056b03ec

// -[SCPlaybackLayerEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056b03f4

// +[SCPlaybackLayerEditorImpl _defaultPlaybackLayerTypeCountsArray]
// Type encoding: @16@0:8
// Implementation: 0x1056af864

@end
