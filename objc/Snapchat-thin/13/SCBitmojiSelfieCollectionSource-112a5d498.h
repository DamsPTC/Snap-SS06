// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiSelfieCollectionSource
// Superclass: NSObject
// Address: 0x112a5d498

@interface SCBitmojiSelfieCollectionSource

// Property: selectedSelfieId; attributes: T@"NSNumber",R,C,N,V_selectedSelfieId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiSelfieCollectionSource initWithDelegate:bitmojiAvatarProvider:bitmojiSelfieRequestBatcher:collectionView:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105713300

// -[SCBitmojiSelfieCollectionSource reloadCollectionView:selfieIds:selectedSelfieId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057134d4

// -[SCBitmojiSelfieCollectionSource numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x105713748

// -[SCBitmojiSelfieCollectionSource collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105713750

// -[SCBitmojiSelfieCollectionSource collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105713758

// -[SCBitmojiSelfieCollectionSource collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105713c20

// -[SCBitmojiSelfieCollectionSource collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x105713cc0

// -[SCBitmojiSelfieCollectionSource collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105713ccc

// -[SCBitmojiSelfieCollectionSource collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x105713d24

// -[SCBitmojiSelfieCollectionSource collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x105713d2c

// -[SCBitmojiSelfieCollectionSource collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x105713d34

// -[SCBitmojiSelfieCollectionSource collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x105713d4c

// -[SCBitmojiSelfieCollectionSource _selfieIdAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x105713de0

// -[SCBitmojiSelfieCollectionSource _handleSelfieImageLoadWithTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x105713e64

// -[SCBitmojiSelfieCollectionSource selectedSelfieId]
// Type encoding: @16@0:8
// Implementation: 0x105713eac

// -[SCBitmojiSelfieCollectionSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105713eb4

@end
