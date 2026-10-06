// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRenderEffectsEditorImpl
// Superclass: NSObject
// Address: 0x112a57458

@interface SCRenderEffectsEditorImpl

// Property: renderEffectChangeObservable; attributes: T@"SCObservable",R,N,V_renderEffectChangeSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRenderEffectsEditorImpl initWithSnapDoc:layerEditor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056b0690

// -[SCRenderEffectsEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056b0750

// -[SCRenderEffectsEditorImpl setRenderEffect:onPlaybackLayer:forFeature:renderEffectType:]
// Type encoding: v40@0:8@16@24i32i36
// Implementation: 0x1056b0844

// -[SCRenderEffectsEditorImpl setRenderEffect:onPlaybackLayer:forFeature:featureTagId:renderEffectType:]
// Type encoding: v48@0:8@16@24i32Q36i44
// Implementation: 0x1056b0850

// -[SCRenderEffectsEditorImpl addRenderEffectNode:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056b0af4

// -[SCRenderEffectsEditorImpl removeRenderEffectNode:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056b0bcc

// -[SCRenderEffectsEditorImpl removeAllRenderEffectsFromPlaybackLayerWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056b0d48

// -[SCRenderEffectsEditorImpl removeRenderEffectNodesWhere:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056b0d94

// -[SCRenderEffectsEditorImpl removeRenderEffectsFromPlaybackLayerWithId:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056b1138

// -[SCRenderEffectsEditorImpl getRenderEffectWithPlaybackLayerInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b1368

// -[SCRenderEffectsEditorImpl renderEffectNodesWhere:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1056b1604

// -[SCRenderEffectsEditorImpl getRenderEffectNodeWithInput:renderEffectType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056b18d8

// -[SCRenderEffectsEditorImpl getFilterRenderEffectNodeWithInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b1ba4

// -[SCRenderEffectsEditorImpl containsRenderEffectNodeOfType:where:]
// Type encoding: B28@0:8i16@?20
// Implementation: 0x1056b1f60

// -[SCRenderEffectsEditorImpl maxOutputIndexOfRenderEffectNodesForType:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1056b21c0

// -[SCRenderEffectsEditorImpl _renderEffectDAGFromSceneOfType:]
// Type encoding: @20@0:8i16
// Implementation: 0x1056b22f0

// -[SCRenderEffectsEditorImpl _hasRenderEffectDAGFromSceneOfType:]
// Type encoding: B20@0:8i16
// Implementation: 0x1056b2664

// -[SCRenderEffectsEditorImpl _removeRenderEffectsWithInput:renderEffectType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1056b2834

// -[SCRenderEffectsEditorImpl renderEffectChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056b2cd8

// -[SCRenderEffectsEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056b2ce0

@end
