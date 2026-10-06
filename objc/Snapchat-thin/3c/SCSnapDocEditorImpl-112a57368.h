// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocEditorImpl
// Superclass: NSObject
// Address: 0x112a57368

@interface SCSnapDocEditorImpl

// Property: layerEditor; attributes: T@"SCPlaybackLayerEditorImpl",&,N,V_layerEditor
// Property: renderEffectsEditor; attributes: T@"SCRenderEffectsEditorImpl",&,N,V_renderEffectsEditor
// Property: gridEditor; attributes: T@"SCSnapDocGridEditorImpl",&,N,V_gridEditor
// Property: drawingEditor; attributes: T@"SCSnapDocDrawingEditorImpl",&,N,V_drawingEditor
// Property: metadataEditor; attributes: T@"SCSnapDocMetadataEditorImpl",&,N,V_metadataEditor
// Property: autoCaptionsEditor; attributes: T@"SCSnapDocAutoCaptionsEditorImpl",&,N,V_autoCaptionsEditor
// Property: mediaEditor; attributes: T@"SCSnapDocMediaEditorImpl",&,N,V_mediaEditor
// Property: sdomEditor; attributes: T@"SCSnapDocSdomEditorImpl",&,N,V_sdomEditor
// Property: filtersEditor; attributes: T@"SCSnapDocFiltersEditorImpl",&,N,V_filtersEditor
// Property: serialSnapDocUpdatePerformer; attributes: T@"<SCPerforming>",&,N,V_serialSnapDocUpdatePerformer
// Property: enabled; attributes: TB,N,Venabled
// Property: changeObservable; attributes: T@"SCObservable",R,C,N,V_snapDocChangeSubject
// Property: localSegmentCount; attributes: TQ,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: gridProperties; attributes: T@"SDMGridProperties",R,C,N
// Property: pixelSize; attributes: T{CGSize=dd},R,N
// Property: gridAspectRatio; attributes: Td,N
// Property: playbackCharacteristics; attributes: T@"SDMPlaybackCharacteristics",C,N
// Property: location; attributes: T@"CLLocation",C,N
// Property: createdTime; attributes: T@"NSDate",C,N
// Property: captureSessionId; attributes: T@"NSString",C,N
// Property: captureMode; attributes: Ti,N
// Property: weatherInfo; attributes: T@"SDMWeatherInfo",C,N
// Property: batteryStatus; attributes: Ti,N
// Property: snapDocKey; attributes: T@"SCSnapDocKey",R,N
// Property: shouldKeepClaimOnDealloc; attributes: TB,N
// Property: mediaIdToAssetId; attributes: T@"GPBInt64ObjectDictionary",R,C,N

// -[SCSnapDocEditorImpl initWithSnapDoc:serialSnapDocUpdatePerformer:pixelWidth:defaultGridWidth:mediaIdToAssetId:snapDocKey:snapDocConverterServices:snapDocManagerServices:nsDataWriterServices:temporaryFileWriterServices:mediaVideoImportServices:composerServices:capabilitiesServices:]
// Type encoding: @120@0:8@16@24d32Q40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1056a4b38

// -[SCSnapDocEditorImpl resetWithSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a5384

// -[SCSnapDocEditorImpl locklessMode]
// Type encoding: B16@0:8
// Implementation: 0x1056a5390

// -[SCSnapDocEditorImpl resetWithSnapDoc:snapDocKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056a53a0

// -[SCSnapDocEditorImpl resetWithSnapDoc:mediaIdToAssetId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056a53a8

// -[SCSnapDocEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056a53b4

// -[SCSnapDocEditorImpl waitUntil:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056a562c

// -[SCSnapDocEditorImpl snapDoc]
// Type encoding: @16@0:8
// Implementation: 0x1056a5984

// -[SCSnapDocEditorImpl snapDocKey]
// Type encoding: @16@0:8
// Implementation: 0x1056a5a84

// -[SCSnapDocEditorImpl mediaIdToAssetId]
// Type encoding: @16@0:8
// Implementation: 0x1056a5a8c

// -[SCSnapDocEditorImpl localSegmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x1056a5aa4

// -[SCSnapDocEditorImpl setLocalSegmentCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1056a5b78

// -[SCSnapDocEditorImpl playbackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a5be8

// -[SCSnapDocEditorImpl playbackLayerIdsAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a5d24

// -[SCSnapDocEditorImpl playbackLayerIdsAtSegment:where:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056a5e78

// -[SCSnapDocEditorImpl playbackLayerIdsWhere:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056a5fe8

// -[SCSnapDocEditorImpl segmentOfPlaybackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a6124

// -[SCSnapDocEditorImpl updateSnapDoc:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056a6260

// -[SCSnapDocEditorImpl deletePlaybackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a6300

// -[SCSnapDocEditorImpl deletePlaybackLayersAtSegment:where:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056a64f8

// -[SCSnapDocEditorImpl trackSegmentAtIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a67a0

// -[SCSnapDocEditorImpl trackIndexOfType:]
// Type encoding: I24@0:8q16
// Implementation: 0x1056a68dc

// -[SCSnapDocEditorImpl moveLocalSegmentAtIndex:toIndex:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1056a69b8

// -[SCSnapDocEditorImpl deleteSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a6a34

// -[SCSnapDocEditorImpl addPlaybackLayer:segment:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056a6ca8

// -[SCSnapDocEditorImpl addTimedPlaybackLayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a6e20

// -[SCSnapDocEditorImpl updatePlaybackLayerWithId:update:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056a6f64

// -[SCSnapDocEditorImpl updateTrackSegmentWithIndex:update:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056a70dc

// -[SCSnapDocEditorImpl dispose]
// Type encoding: v16@0:8
// Implementation: 0x1056a7254

// -[SCSnapDocEditorImpl setRenderEffect:onPlaybackLayer:forFeature:renderEffectType:]
// Type encoding: v40@0:8@16@24i32i36
// Implementation: 0x1056a72bc

// -[SCSnapDocEditorImpl setRenderEffect:onPlaybackLayer:forFeature:featureTagId:renderEffectType:]
// Type encoding: v48@0:8@16@24i32Q36i44
// Implementation: 0x1056a73a4

// -[SCSnapDocEditorImpl renderEffectNodesWhere:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056a7490

// -[SCSnapDocEditorImpl getRenderEffectWithPlaybackLayerInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a75cc

// -[SCSnapDocEditorImpl getRenderEffectNodeWithInput:renderEffectType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056a7708

// -[SCSnapDocEditorImpl getFilterRenderEffectNodeWithInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a7858

// -[SCSnapDocEditorImpl containsRenderEffectNodeOfType:where:]
// Type encoding: B28@0:8i16@?20
// Implementation: 0x1056a7994

// -[SCSnapDocEditorImpl maxOutputIndexOfRenderEffectNodesForType:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1056a7ab0

// -[SCSnapDocEditorImpl removeRenderEffectNodesWhere:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056a7b8c

// -[SCSnapDocEditorImpl removeRenderEffectsFromPlaybackLayerWithId:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056a7c1c

// -[SCSnapDocEditorImpl removeAllRenderEffectsFromPlaybackLayerWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a7ccc

// -[SCSnapDocEditorImpl addRenderEffectNode:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056a7d64

// -[SCSnapDocEditorImpl removeRenderEffectNode:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056a7e14

// -[SCSnapDocEditorImpl gridProperties]
// Type encoding: @16@0:8
// Implementation: 0x1056a7ec4

// -[SCSnapDocEditorImpl pixelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1056a7fcc

// -[SCSnapDocEditorImpl setGridAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x1056a80c4

// -[SCSnapDocEditorImpl gridAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x1056a813c

// -[SCSnapDocEditorImpl encodeX:]
// Type encoding: i24@0:8d16
// Implementation: 0x1056a8218

// -[SCSnapDocEditorImpl decodeX:]
// Type encoding: d20@0:8i16
// Implementation: 0x1056a82f4

// -[SCSnapDocEditorImpl encodeY:]
// Type encoding: i24@0:8d16
// Implementation: 0x1056a83d8

// -[SCSnapDocEditorImpl decodeY:]
// Type encoding: d20@0:8i16
// Implementation: 0x1056a84b4

// -[SCSnapDocEditorImpl encodeRelativeX:]
// Type encoding: i20@0:8f16
// Implementation: 0x1056a8598

// -[SCSnapDocEditorImpl decodeRelativeX:]
// Type encoding: f20@0:8i16
// Implementation: 0x1056a8674

// -[SCSnapDocEditorImpl encodeRelativeY:]
// Type encoding: i20@0:8f16
// Implementation: 0x1056a8758

// -[SCSnapDocEditorImpl decodeRelativeY:]
// Type encoding: f20@0:8i16
// Implementation: 0x1056a8834

// -[SCSnapDocEditorImpl encodePaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8918

// -[SCSnapDocEditorImpl decodePaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8a54

// -[SCSnapDocEditorImpl encodeTransforms:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8b90

// -[SCSnapDocEditorImpl decodeTransforms:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8ccc

// -[SCSnapDocEditorImpl encodeTimestampsMs:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8e08

// -[SCSnapDocEditorImpl decodeTimestampsMs:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a8f44

// -[SCSnapDocEditorImpl addDrawingPlaybackLayerWithStroke:segment:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056a9080

// -[SCSnapDocEditorImpl drawingStrokesAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a91f8

// -[SCSnapDocEditorImpl drawingStrokeOfPlaybackLayerWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056a9334

// -[SCSnapDocEditorImpl playbackCharacteristics]
// Type encoding: @16@0:8
// Implementation: 0x1056a9470

// -[SCSnapDocEditorImpl setPlaybackCharacteristics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a9578

// -[SCSnapDocEditorImpl location]
// Type encoding: @16@0:8
// Implementation: 0x1056a9610

// -[SCSnapDocEditorImpl setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a9718

// -[SCSnapDocEditorImpl createdTime]
// Type encoding: @16@0:8
// Implementation: 0x1056a97b0

// -[SCSnapDocEditorImpl setCreatedTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a98b8

// -[SCSnapDocEditorImpl captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1056a9950

// -[SCSnapDocEditorImpl setCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a9a58

// -[SCSnapDocEditorImpl captureMode]
// Type encoding: i16@0:8
// Implementation: 0x1056a9af0

// -[SCSnapDocEditorImpl setCaptureMode:]
// Type encoding: v20@0:8i16
// Implementation: 0x1056a9bc4

// -[SCSnapDocEditorImpl weatherInfo]
// Type encoding: @16@0:8
// Implementation: 0x1056a9c3c

// -[SCSnapDocEditorImpl setWeatherInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056a9d44

// -[SCSnapDocEditorImpl batteryStatus]
// Type encoding: i16@0:8
// Implementation: 0x1056a9ddc

// -[SCSnapDocEditorImpl setBatteryStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x1056a9eb0

// -[SCSnapDocEditorImpl updateContextClientInfo:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056a9f28

// -[SCSnapDocEditorImpl exportedContentMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1056a9fc0

// -[SCSnapDocEditorImpl fileEmbeddedMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1056aa0c8

// -[SCSnapDocEditorImpl contextAttachmentContextClientInfo]
// Type encoding: @16@0:8
// Implementation: 0x1056aa1d0

// -[SCSnapDocEditorImpl addAutoCaptionsPlaybackLayerWithAutoCaptionsState:segment:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056aa2d8

// -[SCSnapDocEditorImpl decodeAutoCaptionsMetadata:playbackLayerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056aa450

// -[SCSnapDocEditorImpl autoCaptionsStateAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aa5c0

// -[SCSnapDocEditorImpl updateRenderEffectsWithFilter:segment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056aa6fc

// -[SCSnapDocEditorImpl replaceRenderEffectsWithFilters:atSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056aa7cc

// -[SCSnapDocEditorImpl deleteRenderEffectsLastFilterNodeAtSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056aa89c

// -[SCSnapDocEditorImpl numberOfFiltersAppliedOnSegment:]
// Type encoding: q24@0:8@16
// Implementation: 0x1056aa934

// -[SCSnapDocEditorImpl filtersAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aaa3c

// -[SCSnapDocEditorImpl appliedFilters]
// Type encoding: @16@0:8
// Implementation: 0x1056aab78

// -[SCSnapDocEditorImpl setShouldKeepClaimOnDealloc:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056aac80

// -[SCSnapDocEditorImpl shouldKeepClaimOnDealloc]
// Type encoding: B16@0:8
// Implementation: 0x1056aac88

// -[SCSnapDocEditorImpl mediaReferenceWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aac90

// -[SCSnapDocEditorImpl mediaWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aadcc

// -[SCSnapDocEditorImpl contentResultWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aaf08

// -[SCSnapDocEditorImpl mediaUrlWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ab044

// -[SCSnapDocEditorImpl addBaseMediaWithInput:removeSoftTrim:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1056ab04c

// -[SCSnapDocEditorImpl addMediaWithInput:type:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056ab19c

// -[SCSnapDocEditorImpl updateMediaReferenceWithInput:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056ab2e8

// -[SCSnapDocEditorImpl syncAddMediaWithInput:type:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056ab448

// -[SCSnapDocEditorImpl deleteMediaWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ab488

// -[SCSnapDocEditorImpl localCacheKeyWithInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ab5e0

// -[SCSnapDocEditorImpl applySDOMCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ab71c

// -[SCSnapDocEditorImpl validate]
// Type encoding: @16@0:8
// Implementation: 0x1056ab868

// -[SCSnapDocEditorImpl getSnapDocTextualView]
// Type encoding: @16@0:8
// Implementation: 0x1056ab970

// -[SCSnapDocEditorImpl importMediaReferencesFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056aba78

// -[SCSnapDocEditorImpl _importBaseMediaPlaybackLayersFromSnapDoc:segmentForPlaybackLayer:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056abd98

// -[SCSnapDocEditorImpl _importPlaybackLayer:matchingSegmentType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056ac018

// -[SCSnapDocEditorImpl _didPlaybackLayerChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac1dc

// -[SCSnapDocEditorImpl _didSegmentChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac280

// -[SCSnapDocEditorImpl _didRenderEffectChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac324

// -[SCSnapDocEditorImpl _publishSnapDocChange]
// Type encoding: v16@0:8
// Implementation: 0x1056ac3c8

// -[SCSnapDocEditorImpl _synchronizedOnSerialQueueOrLocks:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056ac5c8

// -[SCSnapDocEditorImpl _isComposerThread]
// Type encoding: B16@0:8
// Implementation: 0x1056ac728

// -[SCSnapDocEditorImpl changeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056ac764

// -[SCSnapDocEditorImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x1056ac76c

// -[SCSnapDocEditorImpl setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056ac774

// -[SCSnapDocEditorImpl layerEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac77c

// -[SCSnapDocEditorImpl setLayerEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac784

// -[SCSnapDocEditorImpl renderEffectsEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac7b4

// -[SCSnapDocEditorImpl setRenderEffectsEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac7bc

// -[SCSnapDocEditorImpl gridEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac7ec

// -[SCSnapDocEditorImpl setGridEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac7f4

// -[SCSnapDocEditorImpl drawingEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac824

// -[SCSnapDocEditorImpl setDrawingEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac82c

// -[SCSnapDocEditorImpl metadataEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac85c

// -[SCSnapDocEditorImpl setMetadataEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac864

// -[SCSnapDocEditorImpl autoCaptionsEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac894

// -[SCSnapDocEditorImpl setAutoCaptionsEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac89c

// -[SCSnapDocEditorImpl mediaEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac8cc

// -[SCSnapDocEditorImpl setMediaEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac8d4

// -[SCSnapDocEditorImpl sdomEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac904

// -[SCSnapDocEditorImpl setSdomEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac90c

// -[SCSnapDocEditorImpl filtersEditor]
// Type encoding: @16@0:8
// Implementation: 0x1056ac93c

// -[SCSnapDocEditorImpl setFiltersEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac944

// -[SCSnapDocEditorImpl serialSnapDocUpdatePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1056ac974

// -[SCSnapDocEditorImpl setSerialSnapDocUpdatePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056ac97c

// -[SCSnapDocEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056ac9ac

@end
