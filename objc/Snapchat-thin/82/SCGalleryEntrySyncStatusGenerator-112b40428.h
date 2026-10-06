// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEntrySyncStatusGenerator
// Superclass: NSObject
// Address: 0x112b40428

@interface SCGalleryEntrySyncStatusGenerator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: syncStatusIcon; attributes: T@"SCMemoriesStatusIcon",R,N,V_syncStatusIcon
// Property: delegate; attributes: T@"<SCMemoriesSyncStatusGeneratorDelegate>",W,N,V_delegate
// Property: status; attributes: TQ,R,N,V_status
// Property: selectMode; attributes: TB,N,V_selectMode

// -[SCGalleryEntrySyncStatusGenerator initWithEntry:selectMode:retryDataMutator:mergedDataSource:cloudSync:spectaclesManager:memoriesExperimentService:]
// Type encoding: @68@0:8@16B24@28@36@44@52@60
// Implementation: 0x106e70d3c

// -[SCGalleryEntrySyncStatusGenerator initWithSnap:entry:selectMode:retryDataMutator:mergedDataSource:cloudSync:spectaclesManager:shouldCreateIcon:memoriesExperimentService:]
// Type encoding: @80@0:8@16@24B32@36@44@52@60B68@72
// Implementation: 0x106e70ea0

// -[SCGalleryEntrySyncStatusGenerator updateEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e7103c

// -[SCGalleryEntrySyncStatusGenerator updateSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e7106c

// -[SCGalleryEntrySyncStatusGenerator _createSyncStatusIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e7109c

// -[SCGalleryEntrySyncStatusGenerator _startInfiniteSyncAnimationWithIsTacomaEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e710f0

// -[SCGalleryEntrySyncStatusGenerator _startTransitorySyncAnimationWithIsTacomaEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e710fc

// -[SCGalleryEntrySyncStatusGenerator _startSyncAnimationWithRepeatCount:isTacomaEnabled:]
// Type encoding: v24@0:8f16B20
// Implementation: 0x106e71108

// -[SCGalleryEntrySyncStatusGenerator _stopSyncAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106e71370

// -[SCGalleryEntrySyncStatusGenerator _updateIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e71404

// -[SCGalleryEntrySyncStatusGenerator isShowingSyncStatusIcon]
// Type encoding: B16@0:8
// Implementation: 0x106e71618

// -[SCGalleryEntrySyncStatusGenerator setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e71628

// -[SCGalleryEntrySyncStatusGenerator _isSnapPartOfCurrentSpectaclesTransferSession]
// Type encoding: B16@0:8
// Implementation: 0x106e71630

// -[SCGalleryEntrySyncStatusGenerator startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e716fc

// -[SCGalleryEntrySyncStatusGenerator stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106e71914

// -[SCGalleryEntrySyncStatusGenerator reset]
// Type encoding: v16@0:8
// Implementation: 0x106e71964

// -[SCGalleryEntrySyncStatusGenerator cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x106e71994

// -[SCGalleryEntrySyncStatusGenerator cloudSync:didChangeEntrySyncStatus:entryId:snapId:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x106e71998

// -[SCGalleryEntrySyncStatusGenerator _handleChangeEntrySyncStatus:entryId:snapId:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x106e71a64

// -[SCGalleryEntrySyncStatusGenerator _presentBackupAlert]
// Type encoding: v16@0:8
// Implementation: 0x106e71b5c

// -[SCGalleryEntrySyncStatusGenerator syncStatusIcon]
// Type encoding: @16@0:8
// Implementation: 0x106e71eb8

// -[SCGalleryEntrySyncStatusGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106e71ec0

// -[SCGalleryEntrySyncStatusGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e71ed8

// -[SCGalleryEntrySyncStatusGenerator status]
// Type encoding: Q16@0:8
// Implementation: 0x106e71ee4

// -[SCGalleryEntrySyncStatusGenerator selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106e71eec

// -[SCGalleryEntrySyncStatusGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e71ef4

@end
