// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendsCameraRollPickerDriver
// Superclass: NSObject
// Address: 0x112b085c8

@interface SCAddFriendsCameraRollPickerDriver

// Property: collectionView; attributes: T@"UICollectionView",W,N,V_collectionView
// Property: itemSize; attributes: T{CGSize=dd},N,V_itemSize
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAddFriendsCameraRollPickerDriver initWithIsPageSourceFromSettings:snapcodeIdentifierProvider:modelProvider:deepScanConfiguration:delegate:]
// Type encoding: @52@0:8B16@20@28@36@44
// Implementation: 0x106989ae0

// -[SCAddFriendsCameraRollPickerDriver collectionWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106989be4

// -[SCAddFriendsCameraRollPickerDriver collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106989d30

// -[SCAddFriendsCameraRollPickerDriver collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106989d38

// -[SCAddFriendsCameraRollPickerDriver collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106989e8c

// -[SCAddFriendsCameraRollPickerDriver updateWithFetchResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x106989eec

// -[SCAddFriendsCameraRollPickerDriver collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x10698a01c

// -[SCAddFriendsCameraRollPickerDriver collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10698a020

// -[SCAddFriendsCameraRollPickerDriver scanForImage:originalImage:cellImage:scaleStep:rotateStep:shouldScanQRCode:]
// Type encoding: v52@0:8@16@24@32i40i44B48
// Implementation: 0x10698a0f4

// -[SCAddFriendsCameraRollPickerDriver _detectBarcodesWithImage:]
// Type encoding: B24@0:8@16
// Implementation: 0x10698a6b0

// -[SCAddFriendsCameraRollPickerDriver addFriendsCameraRollCellView:updateState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10698a8ec

// -[SCAddFriendsCameraRollPickerDriver itemSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10698a9a0

// -[SCAddFriendsCameraRollPickerDriver setItemSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10698a9a8

// -[SCAddFriendsCameraRollPickerDriver collectionView]
// Type encoding: @16@0:8
// Implementation: 0x10698a9b0

// -[SCAddFriendsCameraRollPickerDriver setCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10698a9c8

// -[SCAddFriendsCameraRollPickerDriver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10698a9d4

@end
