// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AdItemLoadStatus
// Superclass: SCAdItemLoadStatus
// Address: 0x1128a0278

@interface AdItemLoadStatus

// Property: loadedOnEntry; attributes: TB,N
// Property: loadedOnExit; attributes: TB,N
// Property: mediaWaitTimeInSec; attributes: Td,N,R

// -[AdItemLoadStatus loadedOnEntry]
// Type encoding: B16@0:8
// Implementation: 0x102cfd0f0

// -[AdItemLoadStatus setLoadedOnEntry:]
// Type encoding: v20@0:8B16
// Implementation: 0x102cfd100

// -[AdItemLoadStatus loadedOnExit]
// Type encoding: B16@0:8
// Implementation: 0x102cfd110

// -[AdItemLoadStatus setLoadedOnExit:]
// Type encoding: v20@0:8B16
// Implementation: 0x102cfd120

// -[AdItemLoadStatus mediaWaitTimeInSec]
// Type encoding: d16@0:8
// Implementation: 0x102cfd130

// -[AdItemLoadStatus initWithItemId:itemOpenTimestampInSec:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x102cfd170

// -[AdItemLoadStatus updateItemLoadedTimestampInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x102cfd240

// -[AdItemLoadStatus updateItemCloseTimestampInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x102cfd260

@end
