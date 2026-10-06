// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryBackupFailedView
// Superclass: UIView
// Address: 0x112a91248

@interface SCGalleryBackupFailedView

// Property: failedEntries; attributes: T@"NSArray",C,N,V_failedEntries
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryBackupFailedView initWithFrame:failedEntryHandler:retryMutator:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:]
// Type encoding: @80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@?48@56@64@72
// Implementation: 0x105bfdc9c

// -[SCGalleryBackupFailedView setFailedEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bfe490

// -[SCGalleryBackupFailedView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105bfe594

// -[SCGalleryBackupFailedView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105bfe5a4

// -[SCGalleryBackupFailedView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x105bfe6ac

// -[SCGalleryBackupFailedView _handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bfe728

// -[SCGalleryBackupFailedView _handleLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bfe8dc

// -[SCGalleryBackupFailedView _failedEntryUnderGesture:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bfe960

// -[SCGalleryBackupFailedView failedEntries]
// Type encoding: @16@0:8
// Implementation: 0x105bfe9ec

// -[SCGalleryBackupFailedView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bfe9fc

@end
