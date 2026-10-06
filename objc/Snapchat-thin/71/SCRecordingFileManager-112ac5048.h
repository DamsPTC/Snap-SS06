// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecordingFileManager
// Superclass: NSObject
// Address: 0x112ac5048

@interface SCRecordingFileManager

// Property: recordedVideo; attributes: T@"SCManagedRecordedVideo",&,N,V_recordedVideo

// -[SCRecordingFileManager initWithTemporaryDatastore:activeVideoPaths:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060c8510

// -[SCRecordingFileManager generateTempOutputURLAndAddActiveVideoURL]
// Type encoding: @16@0:8
// Implementation: 0x1060c85b4

// -[SCRecordingFileManager restoreActiveVideoURLs]
// Type encoding: v16@0:8
// Implementation: 0x1060c86d0

// -[SCRecordingFileManager addRecordingURLToActiveVideoPaths]
// Type encoding: v16@0:8
// Implementation: 0x1060c8708

// -[SCRecordingFileManager removeActiveRecordingURLOfRecordedVideo]
// Type encoding: v16@0:8
// Implementation: 0x1060c8770

// -[SCRecordingFileManager recordedVideo]
// Type encoding: @16@0:8
// Implementation: 0x1060c87ec

// -[SCRecordingFileManager setRecordedVideo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c87f4

// -[SCRecordingFileManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060c8824

@end
