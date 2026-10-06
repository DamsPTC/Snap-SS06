// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: _TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager
// Superclass: NSObject
// Address: 0x1128032a8

@interface _TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager


// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager addSnapGenOperationWithGalleryEntryId:detailedState:completionHandler:]
// Type encoding: v40@0:8@"NSString"16@"NSData"24@?<v@?@"NSError">32
// Implementation: 0x101d4ec38

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenOperationsWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?@"NSError">16
// Implementation: 0x101d4f124

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenJobsForEnteringMemories]
// Type encoding: v16@0:8
// Implementation: 0x101d4f554

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenOperationsImmediatelyWith:completionHandler:]
// Type encoding: v32@0:8@"NSArray"16@?<v@?@"NSError">24
// Implementation: 0x101d4f898

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationForSnapGenOperationId:completionHandler:]
// Type encoding: v32@0:8@"NSString"16@?<v@?B@"NSError">24
// Implementation: 0x101d4feac

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationsForSnapGenOperationIds:completionHandler:]
// Type encoding: v32@0:8@"NSArray"16@?<v@?@"NSArray"@"NSError">24
// Implementation: 0x101d505e8

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager addBackupOperationForEntryId:operationType:dependencyEntryIds:detailedState:approximateTotalMediaSizeInBytes:cloudSyncOperationRequestID:origin:completion:]
// Type encoding: v72@0:8@16i24@28@36@44@52i60@?64
// Implementation: 0x101d49434

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForAddSnapsActionForEntryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x101d49cac

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForIncompleteOperationsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x101d4a2d8

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForIncompleteOperationsWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?@"NSError">16
// Implementation: 0x101d4aac4

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager backupWithBackupOptions:onSuccess:onError:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x101d4b9ec

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager backupForLogoutActionOnSuccess:onError:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x101d4c524

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager schedulePendingBackupJobsForEnteringMemories]
// Type encoding: v16@0:8
// Implementation: 0x101d4c960

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager deleteBackupOperationsAndDescendantsWithEntryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x101d4ce20

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationForCloudSyncOperationRequestID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x101d4d5c0

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager deleteBackupOperationsForRequestIDs:onSuccess:onFailure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x101d4dd98

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager waitForAllAddOperationToTacomaToFinish]
// Type encoding: v16@0:8
// Implementation: 0x101d4de78

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager endService]
// Type encoding: v16@0:8
// Implementation: 0x101d4e130

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager init]
// Type encoding: @16@0:8
// Implementation: 0x101d513d4

// -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x101d51450

@end
