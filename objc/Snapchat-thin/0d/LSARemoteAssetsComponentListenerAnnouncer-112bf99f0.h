// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSARemoteAssetsComponentListenerAnnouncer
// Superclass: NSObject
// Address: 0x112bf99f0

@interface LSARemoteAssetsComponentListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSARemoteAssetsComponentListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10adb2564

// -[LSARemoteAssetsComponentListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10adb2740

// -[LSARemoteAssetsComponentListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb2b84

// -[LSARemoteAssetsComponentListenerAnnouncer hasAnyListeners]
// Type encoding: B16@0:8
// Implementation: 0x10adb2db4

// -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAsset:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10adb2e00

// -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:lensId:deleteAfterUploading:assetType:]
// Type encoding: v60@0:8@16@24@32@40B48q52
// Implementation: 0x10adb2f2c

// -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:encryptionKey:encryptionIv:assetBatchId:lensId:deleteAfterUploading:assetType:]
// Type encoding: v84@0:8@16@24@32@40@48@56@64B72q76
// Implementation: 0x10adb3098

// -[LSARemoteAssetsComponentListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb3264

// -[LSARemoteAssetsComponentListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adb328c

@end
