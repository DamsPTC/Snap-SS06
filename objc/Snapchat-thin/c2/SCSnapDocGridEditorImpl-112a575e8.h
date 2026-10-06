// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocGridEditorImpl
// Superclass: NSObject
// Address: 0x112a575e8

@interface SCSnapDocGridEditorImpl

// Property: gridProperties; attributes: T@"SDMGridProperties",R,C,N
// Property: pixelSize; attributes: T{CGSize=dd},R,N
// Property: gridAspectRatio; attributes: Td,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocGridEditorImpl initWithSnapDoc:pixelWidth:defaultGridWidth:]
// Type encoding: @40@0:8@16d24Q32
// Implementation: 0x1056b5d0c

// -[SCSnapDocGridEditorImpl isGridSizeSet]
// Type encoding: B16@0:8
// Implementation: 0x1056b5da0

// -[SCSnapDocGridEditorImpl pixelHeight]
// Type encoding: f16@0:8
// Implementation: 0x1056b5de4

// -[SCSnapDocGridEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056b5e0c

// -[SCSnapDocGridEditorImpl gridProperties]
// Type encoding: @16@0:8
// Implementation: 0x1056b5e3c

// -[SCSnapDocGridEditorImpl pixelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1056b5e94

// -[SCSnapDocGridEditorImpl gridAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x1056b5f1c

// -[SCSnapDocGridEditorImpl setGridAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x1056b5fc8

// -[SCSnapDocGridEditorImpl encodeX:]
// Type encoding: i24@0:8d16
// Implementation: 0x1056b60b4

// -[SCSnapDocGridEditorImpl decodeX:]
// Type encoding: d20@0:8i16
// Implementation: 0x1056b6130

// -[SCSnapDocGridEditorImpl encodeY:]
// Type encoding: i24@0:8d16
// Implementation: 0x1056b61b0

// -[SCSnapDocGridEditorImpl decodeY:]
// Type encoding: d20@0:8i16
// Implementation: 0x1056b6230

// -[SCSnapDocGridEditorImpl encodeRelativeX:]
// Type encoding: i20@0:8f16
// Implementation: 0x1056b62b4

// -[SCSnapDocGridEditorImpl decodeRelativeX:]
// Type encoding: f20@0:8i16
// Implementation: 0x1056b6324

// -[SCSnapDocGridEditorImpl encodeRelativeY:]
// Type encoding: i20@0:8f16
// Implementation: 0x1056b639c

// -[SCSnapDocGridEditorImpl decodeRelativeY:]
// Type encoding: f20@0:8i16
// Implementation: 0x1056b640c

// -[SCSnapDocGridEditorImpl encodePaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b6484

// -[SCSnapDocGridEditorImpl decodePaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b6560

// -[SCSnapDocGridEditorImpl encodeTransforms:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b663c

// -[SCSnapDocGridEditorImpl decodeTransforms:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b66f4

// -[SCSnapDocGridEditorImpl encodeTimestampsMs:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b67ac

// -[SCSnapDocGridEditorImpl decodeTimestampsMs:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b6870

// -[SCSnapDocGridEditorImpl _assertSizeSet]
// Type encoding: v16@0:8
// Implementation: 0x1056b692c

// -[SCSnapDocGridEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056b6930

@end
