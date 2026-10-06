// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardFilePersistenceSink
// Superclass: NSObject
// Address: 0x112b11718

@interface SCBlizzardFilePersistenceSink

// Property: allTiersFileQueue; attributes: T@"SCBlizzardAllTiersFileQueue",&,N,V_allTiersFileQueue

// -[SCBlizzardFilePersistenceSink initWithAllTiersFileQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100322bc8

// -[SCBlizzardFilePersistenceSink appendProtoBytes:eventCount:highestPriority:region:eventNames:eagerUploadId:]
// Type encoding: v64@0:8@16Q24Q32Q40@48@56
// Implementation: 0x10057f570

// -[SCBlizzardFilePersistenceSink appendSpectrumBytes:eventCount:priority:region:eagerUploadId:]
// Type encoding: v56@0:8@16Q24Q32Q40@48
// Implementation: 0x106ad3f3c

// -[SCBlizzardFilePersistenceSink allTiersFileQueue]
// Type encoding: @16@0:8
// Implementation: 0x10057f64c

// -[SCBlizzardFilePersistenceSink setAllTiersFileQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad4004

// -[SCBlizzardFilePersistenceSink .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100367c48

@end
