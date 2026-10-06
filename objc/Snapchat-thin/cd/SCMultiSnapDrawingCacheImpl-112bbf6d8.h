// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapDrawingCacheImpl
// Superclass: NSObject
// Address: 0x112bbf6d8

@interface SCMultiSnapDrawingCacheImpl

// Property: editingSegmentUniqueId; attributes: Tq,N,V_editingSegmentUniqueId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSnapDrawingCacheImpl init]
// Type encoding: @16@0:8
// Implementation: 0x108cf41c0

// -[SCMultiSnapDrawingCacheImpl receivedMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x108cf4290

// -[SCMultiSnapDrawingCacheImpl addCacheEntryForImage:startingStrokeId:endingStrokeId:strokeCount:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x108cf46f4

// -[SCMultiSnapDrawingCacheImpl cachedImageForDrawingHistory:historyCount:endStrokeIndexPtr:clearUnusedEntries:]
// Type encoding: @44@0:8@16q24^q32B40
// Implementation: 0x108cf484c

// -[SCMultiSnapDrawingCacheImpl updateWithMultiSnapConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cf4ce8

// -[SCMultiSnapDrawingCacheImpl _removeUnusedCacheEntries]
// Type encoding: v16@0:8
// Implementation: 0x108cf5220

// -[SCMultiSnapDrawingCacheImpl editingSegmentUniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108cf52bc

// -[SCMultiSnapDrawingCacheImpl setEditingSegmentUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cf52c4

// -[SCMultiSnapDrawingCacheImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cf52cc

@end
