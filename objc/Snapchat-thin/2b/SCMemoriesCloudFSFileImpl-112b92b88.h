// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSFileImpl
// Superclass: NSObject
// Address: 0x112b92b88

@interface SCMemoriesCloudFSFileImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCloudFSFileImpl initWithMemoriesCloudFS:userTrackedLogger:entity:snapRepresentationToMediaResultMap:isReadOnlyMode:delayNetworkDownloadEnabled:resultMapThreadProtectionEnabled:invalidStreamingContentRemover:]
// Type encoding: @68@0:8@16@24@32@40B48B52B56@60
// Implementation: 0x108012404

// -[SCMemoriesCloudFSFileImpl isAvailableLocally]
// Type encoding: B16@0:8
// Implementation: 0x10801258c

// -[SCMemoriesCloudFSFileImpl isSynced]
// Type encoding: B16@0:8
// Implementation: 0x1080125e8

// -[SCMemoriesCloudFSFileImpl markAsSynced]
// Type encoding: v16@0:8
// Implementation: 0x10801272c

// -[SCMemoriesCloudFSFileImpl fileURLForRepresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10801276c

// -[SCMemoriesCloudFSFileImpl fileURLForRepresentation:assertIfUnavailable:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108012774

// -[SCMemoriesCloudFSFileImpl fileContentForRepresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x108012898

// -[SCMemoriesCloudFSFileImpl fileContentForRepresentation:assertIfUnavailable:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1080128a0

// -[SCMemoriesCloudFSFileImpl downloadWithProgressQueue:memoriesGrapheneContext:progressHandler:resultQueue:resultHandler:]
// Type encoding: @56@0:8@16@24@?32@40@?48
// Implementation: 0x108012984

// -[SCMemoriesCloudFSFileImpl invalidate]
// Type encoding: v16@0:8
// Implementation: 0x108012e00

// -[SCMemoriesCloudFSFileImpl snapRepresentationToMediaResultMap]
// Type encoding: @16@0:8
// Implementation: 0x108012e40

// -[SCMemoriesCloudFSFileImpl _checkAndSetSnapRepresentationToMediaResultMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108012e44

// -[SCMemoriesCloudFSFileImpl _safeReadSnapRepresentationToMediaResultMap]
// Type encoding: @16@0:8
// Implementation: 0x108013158

// -[SCMemoriesCloudFSFileImpl _safeWriteSnapRepresentationToMediaResultMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080131b0

// -[SCMemoriesCloudFSFileImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108013210

@end
