// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocFiltersEditorImpl
// Superclass: NSObject
// Address: 0x112a57598

@interface SCSnapDocFiltersEditorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocFiltersEditorImpl initWithSnapDoc:layerEditor:renderEffectsEditor:sdomEditor:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1056b4394

// -[SCSnapDocFiltersEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056b4494

// -[SCSnapDocFiltersEditorImpl updateRenderEffectsWithFilter:segment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056b44c4

// -[SCSnapDocFiltersEditorImpl replaceRenderEffectsWithFilters:atSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056b4808

// -[SCSnapDocFiltersEditorImpl deleteRenderEffectsLastFilterNodeAtSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056b493c

// -[SCSnapDocFiltersEditorImpl deleteRenderEffectsAllFiltersNodesAtSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056b4a70

// -[SCSnapDocFiltersEditorImpl numberOfFiltersAppliedOnSegment:]
// Type encoding: q24@0:8@16
// Implementation: 0x1056b4d44

// -[SCSnapDocFiltersEditorImpl _findLastNodeAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b4d48

// -[SCSnapDocFiltersEditorImpl _nodeCountOfSegment:]
// Type encoding: q24@0:8@16
// Implementation: 0x1056b4eac

// -[SCSnapDocFiltersEditorImpl filtersAtSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b4ee8

// -[SCSnapDocFiltersEditorImpl appliedFilters]
// Type encoding: @16@0:8
// Implementation: 0x1056b51ec

// -[SCSnapDocFiltersEditorImpl _renderEffectNodeInputsForSegmentIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b57c8

// -[SCSnapDocFiltersEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056b5cc4

@end
