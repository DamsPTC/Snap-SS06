// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapSyncStateListener
// Superclass: NSObject
// Address: 0x112ab0fa8

@interface SCMemoriesSnapSyncStateListener

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapSyncStateListener initWithSyncStatusGenerator:gallerySnap:galleryEntry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f65c18

// -[SCMemoriesSnapSyncStateListener observe]
// Type encoding: @16@0:8
// Implementation: 0x105f65e0c

// -[SCMemoriesSnapSyncStateListener syncStatusGenerator:didUpdateStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f65e14

// -[SCMemoriesSnapSyncStateListener _getUploadStatesFromSyncStatus:]
// Type encoding: i24@0:8Q16
// Implementation: 0x105f65ec4

// -[SCMemoriesSnapSyncStateListener .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f65ee8

@end
