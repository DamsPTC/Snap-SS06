// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigRepository
// Superclass: NSObject
// Address: 0x112a2b628

@interface SCConfigRepository

// Property: needsASERSync; attributes: TB,V_needsASERSync
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConfigRepository initWithConfigMetric:preferences:appStartExperimentReaderRepository:performer:bundle:fileSystemDirectoryPath:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1000b5c74

// -[SCConfigRepository dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105333208

// -[SCConfigRepository _markAserSyncIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1000e31fc

// -[SCConfigRepository _markAserSynced]
// Type encoding: v16@0:8
// Implementation: 0x105333260

// -[SCConfigRepository fetchConfigRulesForConfigIDs:]
// Type encoding: @24@0:8@16
// Implementation: 0x105333384

// -[SCConfigRepository getConfigsFromDBForConfigKey:waitForRecovery:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x100107338

// -[SCConfigRepository getConfigsFromDBForConfigKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1001073fc

// -[SCConfigRepository getConfigsFromDBForNamespaceKey:waitForRecovery:]
// Type encoding: @28@0:8i16@?20
// Implementation: 0x10029125c

// -[SCConfigRepository getConfigsFromDBForNamespaceKey:]
// Type encoding: @20@0:8i16
// Implementation: 0x10029137c

// -[SCConfigRepository readEtagFromDB:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100182a4c

// -[SCConfigRepository _readEtagFromFileSystemOnly:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100182a50

// -[SCConfigRepository readEtagAndTimestampFromFileSystemDB:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100182af0

// -[SCConfigRepository updateEtag:lastUpdateTimestampSeconds:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x1053333d8

// -[SCConfigRepository _ignoreAssertion]
// Type encoding: B16@0:8
// Implementation: 0x105333488

// -[SCConfigRepository writeFullSync:crashRecovery:loginSync:updateAserImmediately:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:]
// Type encoding: v76@0:8@16B24B28B32@36@44@52@?60@?68
// Implementation: 0x105333490

// -[SCConfigRepository writeDeltaSync:crashRecovery:loginSync:updateAserImmediately:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:]
// Type encoding: v76@0:8@16B24B28B32@36@44@52@?60@?68
// Implementation: 0x1053335cc

// -[SCConfigRepository _writeFullSyncToFileSystem:crashRecovery:loginSync:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:]
// Type encoding: v72@0:8@16B24B28@32@40@48@?56@?64
// Implementation: 0x105333728

// -[SCConfigRepository _writeDeltaSyncToFileSystem:crashRecovery:loginSync:lastUpdatedTimestamp:etag:bitmap:updatedConfigIds:etagDeleteBlock:syncCompleteBlock:]
// Type encoding: v80@0:8@16B24B28@32@40@48@56@?64@?72
// Implementation: 0x105334338

// -[SCConfigRepository getAllConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1053350b8

// -[SCConfigRepository isAserSynced]
// Type encoding: B16@0:8
// Implementation: 0x100123d90

// -[SCConfigRepository _syncAserAndRegisterUpdatedIds:updateImmediately:isFullSync:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x1053350d4

// -[SCConfigRepository _getConfigsFromFileSystemForConfigKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x100107418

// -[SCConfigRepository _getConfigsFromFileSystemForNamespaceKey:]
// Type encoding: @20@0:8i16
// Implementation: 0x100291380

// -[SCConfigRepository _getAllConfigsFromFileSystem]
// Type encoding: @16@0:8
// Implementation: 0x1053354f8

// -[SCConfigRepository _bitmapVectorFromData:]
// Type encoding: {vector<unsigned char, std::allocator<unsigned char>>=**{?=*}}24@0:8@16
// Implementation: 0x105335608

// -[SCConfigRepository _dataFromBitmap:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x1053356a8

// -[SCConfigRepository getBitmapForTweakSync]
// Type encoding: @16@0:8
// Implementation: 0x1053356ec

// -[SCConfigRepository getBitmapForNextSyncMatchingEtag:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053357c4

// -[SCConfigRepository _fetchConfigRulesFromFileSystemForConfigIDs:]
// Type encoding: @24@0:8@16
// Implementation: 0x105335904

// -[SCConfigRepository needsASERSync]
// Type encoding: B16@0:8
// Implementation: 0x100125b2c

// -[SCConfigRepository setNeedsASERSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x100182970

// -[SCConfigRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105335b04

@end
