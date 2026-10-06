// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultDeltaSyncService
// Superclass: NSObject
// Address: 0x112a2f0e8

@interface SCDefaultDeltaSyncService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDefaultDeltaSyncService initWithProcessors:syncTokenRepository:syncClient:docObjectContext:performer:metricsReporter:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10076f444

// -[SCDefaultDeltaSyncService observeLoginComplete:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b03e0

// -[SCDefaultDeltaSyncService syncGroupWithKey:client:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10076ff74

// -[SCDefaultDeltaSyncService syncGroupWithKey:client:processor:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053b0628

// -[SCDefaultDeltaSyncService processLogInSyncData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b06dc

// -[SCDefaultDeltaSyncService hasSynced:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053b0b74

// -[SCDefaultDeltaSyncService shutdown]
// Type encoding: v16@0:8
// Implementation: 0x1053b0bb4

// -[SCDefaultDeltaSyncService processLogout:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053b0bb8

// -[SCDefaultDeltaSyncService _performLogoutCleanUp:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053b0cd8

// -[SCDefaultDeltaSyncService _performCleanUpIfNecessary:groupKey:isLogout:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1053b10e0

// -[SCDefaultDeltaSyncService clearSyncTokenForGroupKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b1424

// -[SCDefaultDeltaSyncService _syncPromise:forGroupKey:]
// Type encoding: B32@0:8^@16@24
// Implementation: 0x100770118

// -[SCDefaultDeltaSyncService _syncGroupWithKey:processor:client:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c16bdc

// -[SCDefaultDeltaSyncService _handleBatchSyncSuccessWithProcessor:processorVersion:groupKey:client:syncToken:response:]
// Type encoding: v64@0:8@16Q24@32@40@48@56
// Implementation: 0x1053b1888

// -[SCDefaultDeltaSyncService _initiateProcessOfSync:processorVersion:groupKey:client:previousSyncToken:deltaSyncResponse:rawResponse:isLoginProcessing:isInitialSync:isEmptyResponse:]
// Type encoding: v84@0:8@16Q24@32@40@48@56@64B72B76B80
// Implementation: 0x1053b1a30

// -[SCDefaultDeltaSyncService _processInitialDeltaSyncIfNecessary:groupKey:deltaSyncResponse:rawResponse:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1053b1d0c

// -[SCDefaultDeltaSyncService _processSync:processorVersion:groupKey:previousSyncToken:deltaSyncResponse:rawResponse:completion:]
// Type encoding: v72@0:8@16Q24@32@40@48@56@?64
// Implementation: 0x1053b1f9c

// -[SCDefaultDeltaSyncService _docObjectContextForProcessor:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c1706c

// -[SCDefaultDeltaSyncService _versionForProcessor:groupKey:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x100c16e4c

// -[SCDefaultDeltaSyncService _filterValidProcessorsWithPassingTest:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x100770384

// -[SCDefaultDeltaSyncService _inProgresSyncForGroupKey:orRun:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1053b2558

// -[SCDefaultDeltaSyncService _deltaforceSyncRequestForGroupKey:syncToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c1a18c

// -[SCDefaultDeltaSyncService _processedSyncWithGroupKey:success:unexpectedSyncToken:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1053b2680

// -[SCDefaultDeltaSyncService _handleSyncFailureForGroupKey:client:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1053b2868

// -[SCDefaultDeltaSyncService _syncTokenForProcessor:groupKey:version:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x100c16f94

// -[SCDefaultDeltaSyncService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053b2a84

@end
