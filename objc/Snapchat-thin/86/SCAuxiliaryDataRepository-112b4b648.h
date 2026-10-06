// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuxiliaryDataRepository
// Superclass: NSObject
// Address: 0x112b4b648

@interface SCAuxiliaryDataRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuxiliaryDataRepository initWithPerformer:directory:maxRepoSize:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x106f6b334

// -[SCAuxiliaryDataRepository writeData:ofType:graphId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106f6b42c

// -[SCAuxiliaryDataRepository _writeData:ofType:graphId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106f6b5bc

// -[SCAuxiliaryDataRepository fetchDataOfType:graphId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106f6b790

// -[SCAuxiliaryDataRepository _fetchDataOfType:filename:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106f6bbc8

// -[SCAuxiliaryDataRepository _recordDataUsage:filename:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f6bd74

// -[SCAuxiliaryDataRepository retainDataForGraphId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6be1c

// -[SCAuxiliaryDataRepository releaseDataForGraphId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6bedc

// -[SCAuxiliaryDataRepository totalSizeOfCacheFilesWithQueue:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f6c02c

// -[SCAuxiliaryDataRepository cleanUpCacheWithQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f6c1ac

// -[SCAuxiliaryDataRepository _canEvictFilename:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f6c2e8

// -[SCAuxiliaryDataRepository _sizeOfItemAtPath:]
// Type encoding: q24@0:8@16
// Implementation: 0x106f6c3a8

// -[SCAuxiliaryDataRepository _trimToSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f6c488

// -[SCAuxiliaryDataRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f6c89c

@end
