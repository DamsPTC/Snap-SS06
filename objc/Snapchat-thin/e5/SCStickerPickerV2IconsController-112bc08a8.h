// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerPickerV2IconsController
// Superclass: NSObject
// Address: 0x112bc08a8

@interface SCStickerPickerV2IconsController

// Property: superIconsCollectionView; attributes: T@"UICollectionView",&,V_superIconsCollectionView
// Property: delegate; attributes: T@"<SCStickerPickerV2IconsControllerDelegate>",W,N,V_delegate
// Property: dataSource; attributes: T@"<SCStickerPickerV2IconsDataSource>",W,N,V_dataSource
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerPickerV2IconsController initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d22f98

// -[SCStickerPickerV2IconsController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x108d232f8

// -[SCStickerPickerV2IconsController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108d23300

// -[SCStickerPickerV2IconsController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x108d23338

// -[SCStickerPickerV2IconsController collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x108d2334c

// -[SCStickerPickerV2IconsController _lineSpacingForWidth:numberOfItems:]
// Type encoding: d32@0:8d16q24
// Implementation: 0x108d23498

// -[SCStickerPickerV2IconsController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d234d8

// -[SCStickerPickerV2IconsController setSelectedIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d23a9c

// -[SCStickerPickerV2IconsController _handleSuperIconTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d23aec

// -[SCStickerPickerV2IconsController setSuperCategoryHighlightedItemIndex:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d23d2c

// -[SCStickerPickerV2IconsController _frameForItemInCollectionView:atIndex:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16q24
// Implementation: 0x108d23ecc

// -[SCStickerPickerV2IconsController _getHighlightedIndicatorProperties:withHighlightedItemIndex:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108d23f88

// -[SCStickerPickerV2IconsController _categoryIconCellAccessibilityIdentifierFromIndexPath:]
// Type encoding: @24@0:8q16
// Implementation: 0x108d24150

// -[SCStickerPickerV2IconsController _scrollItemAtIndexToVisible:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d241a4

// -[SCStickerPickerV2IconsController stickerPickerIconCellForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x108d242e4

// -[SCStickerPickerV2IconsController superIconsCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x108d24404

// -[SCStickerPickerV2IconsController setSuperIconsCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d24410

// -[SCStickerPickerV2IconsController delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d24418

// -[SCStickerPickerV2IconsController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d24430

// -[SCStickerPickerV2IconsController dataSource]
// Type encoding: @16@0:8
// Implementation: 0x108d2443c

// -[SCStickerPickerV2IconsController setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d24454

// -[SCStickerPickerV2IconsController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d24460

@end
