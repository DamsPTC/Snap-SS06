// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightPlaceTagCarousel
// Superclass: UICollectionView
// Address: 0x112aa09c8

@interface SCSpotlightPlaceTagCarousel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightPlaceTagCarousel initWithActionHandler:nearbyPlaceTagsObservable:snapCaptureLocation:spotlightPlaceTagsLogger:showRemixLabel:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x105e0040c

// -[SCSpotlightPlaceTagCarousel collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x105e006f0

// -[SCSpotlightPlaceTagCarousel collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105e008c4

// -[SCSpotlightPlaceTagCarousel collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e0091c

// -[SCSpotlightPlaceTagCarousel scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x105e00c48

// -[SCSpotlightPlaceTagCarousel didTapCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e00c84

// -[SCSpotlightPlaceTagCarousel _handleSelectCellAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e00cd4

// -[SCSpotlightPlaceTagCarousel _leadingAccessoryForIdentifier:isSelected:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105e00fb4

// -[SCSpotlightPlaceTagCarousel _getImageForPillWithIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e010c0

// -[SCSpotlightPlaceTagCarousel _updateStylingForCell:isSelected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e01174

// -[SCSpotlightPlaceTagCarousel _insertSearchPlacePill]
// Type encoding: v16@0:8
// Implementation: 0x105e012b0

// -[SCSpotlightPlaceTagCarousel _getSpotlightPlaceTagsWithDataObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e01304

// -[SCSpotlightPlaceTagCarousel _handleNearbyPlaceTags:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e014dc

// -[SCSpotlightPlaceTagCarousel _handleTaggedPlaceWithDataObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e01628

// -[SCSpotlightPlaceTagCarousel _updateTaggedPlaceWithTaggedPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e01788

// -[SCSpotlightPlaceTagCarousel _constructPlaceTagsMetadataForPlaceTag:index:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105e01888

// -[SCSpotlightPlaceTagCarousel _shouldShowRemixPillForIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e019c4

// -[SCSpotlightPlaceTagCarousel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e01a1c

@end
