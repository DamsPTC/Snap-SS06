// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaDataManager
// Superclass: NSObject
// Address: 0x112be5ab8

@interface SCNeoMediaDataManager

// Property: configuration; attributes: T@"SCNeoMediaAssetConfiguration",R,N,V_configuration
// Property: enabled; attributes: TB,N

// -[SCNeoMediaDataManager initWithStreamId:queue:configuration:bufferChunkManager:instruments:]
// Type encoding: @56@0:8q16@24@32@40@48
// Implementation: 0x10909c0a4

// -[SCNeoMediaDataManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10909c380

// -[SCNeoMediaDataManager insertSourceAtIndex:dataProvider:byteRange:]
// Type encoding: v48@0:8q16@24{_NSRange=QQ}32
// Implementation: 0x10909c4cc

// -[SCNeoMediaDataManager bufferForSourceIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10909c524

// -[SCNeoMediaDataManager setDelegate:forSourceIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10909c59c

// -[SCNeoMediaDataManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909c638

// -[SCNeoMediaDataManager setLoadMode:forSourceIndex:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x10909c6d0

// -[SCNeoMediaDataManager setCurrentMediaByteOffset:forSourceIndex:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x10909c6e4

// -[SCNeoMediaDataManager setCurrentMediaByteRangeStart:byteRangeEnd:forSourceIndex:]
// Type encoding: v40@0:8Q16Q24q32
// Implementation: 0x10909c6f0

// -[SCNeoMediaDataManager setTotalFileSize:forSourceIndex:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x10909c6fc

// -[SCNeoMediaDataManager setTargetBitrate:forSourceIndex:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x10909c708

// -[SCNeoMediaDataManager setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10909c714

// -[SCNeoMediaDataManager enabled]
// Type encoding: B16@0:8
// Implementation: 0x10909c720

// -[SCNeoMediaDataManager setCurrentSourceRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x10909c72c

// -[SCNeoMediaDataManager beginUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10909c73c

// -[SCNeoMediaDataManager endUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10909c750

// -[SCNeoMediaDataManager computeMetrics]
// Type encoding: {SCNeoMediaDataManagerMetrics=qdqB}16@0:8
// Implementation: 0x10909c758

// -[SCNeoMediaDataManager configuration]
// Type encoding: @16@0:8
// Implementation: 0x10909c7b4

// -[SCNeoMediaDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909c7bc

// -[SCNeoMediaDataManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10909c7f4

@end
