// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerPickerCategoryLayout
// Superclass: UICollectionViewLayout
// Address: 0x112bc0538

@interface SCStickerPickerCategoryLayout

// Property: attributesForDataItems; attributes: T@"NSDictionary",&,N,V_attributesForDataItems
// Property: attributesForExpandableGroups; attributes: T@"NSDictionary",&,N,V_attributesForExpandableGroups
// Property: attributesForSectionHeaders; attributes: T@"NSDictionary",&,N,V_attributesForSectionHeaders
// Property: attributesForToggleableViews; attributes: T@"NSDictionary",&,N,V_attributesForToggleableViews
// Property: attributesForToggleableViewsToDelete; attributes: T@"NSDictionary",&,N,V_attributesForToggleableViewsToDelete
// Property: topYForExpandableGroups; attributes: T@"NSDictionary",&,N,V_topYForExpandableGroups
// Property: collectionViewContentSize; attributes: T{CGSize=dd},N,V_collectionViewContentSize
// Property: insertingIndexPaths; attributes: T@"NSArray",&,N,V_insertingIndexPaths
// Property: deletingIndexPaths; attributes: T@"NSArray",&,N,V_deletingIndexPaths
// Property: expandableGroupIndexPaths; attributes: T@"NSSet",&,N,V_expandableGroupIndexPaths
// Property: toggleableSupplementaryViewsToInsert; attributes: T@"NSMutableDictionary",&,N,V_toggleableSupplementaryViewsToInsert
// Property: toggleableSupplementaryViewsToDelete; attributes: T@"NSMutableDictionary",&,N,V_toggleableSupplementaryViewsToDelete
// Property: preUpdateIndexPathsInExpandableGroups; attributes: T@"NSSet",&,N,V_preUpdateIndexPathsInExpandableGroups
// Property: preUpdateDataAttributes; attributes: T@"NSDictionary",&,N,V_preUpdateDataAttributes
// Property: preUpdateGroupAttributes; attributes: T@"NSDictionary",&,N,V_preUpdateGroupAttributes
// Property: postUpdatePathToOldPath; attributes: T@"NSDictionary",&,N,V_postUpdatePathToOldPath
// Property: oldPathToPostUpdatePath; attributes: T@"NSDictionary",&,N,V_oldPathToPostUpdatePath
// Property: toggleableViewChange; attributes: TQ,N,V_toggleableViewChange
// Property: minimumLineSpacing; attributes: Td,N,V_minimumLineSpacing
// Property: delegate; attributes: T@"<SCStickerPickerCategoryLayoutDelegate>",W,N,V_delegate

// -[SCStickerPickerCategoryLayout initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1a57c

// -[SCStickerPickerCategoryLayout invalidateLayout]
// Type encoding: v16@0:8
// Implementation: 0x108d1a614

// -[SCStickerPickerCategoryLayout prepareLayout]
// Type encoding: v16@0:8
// Implementation: 0x108d1a6c8

// -[SCStickerPickerCategoryLayout _isNewLineNeededForNextIndexPath:nextOriginX:interItemSpacing:contentWidth:]
// Type encoding: B48@0:8@16d24d32d40
// Implementation: 0x108d1af7c

// -[SCStickerPickerCategoryLayout _createAttributesForToggleableSupplementaryViewWithIndexPath:kind:y:contentWidth:height:sourceRect:]
// Type encoding: @88@0:8@16@24d32d40d48{CGRect={CGPoint=dd}{CGSize=dd}}56
// Implementation: 0x108d1b028

// -[SCStickerPickerCategoryLayout _handleToggleableUIIfNecessaryForIndexPath:kind:dataItemAttributes:toggleableViewAttributes:contentWidth:currentY:]
// Type encoding: d64@0:8@16@24@32@40d48d56
// Implementation: 0x108d1b118

// -[SCStickerPickerCategoryLayout layoutAttributesForItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1b340

// -[SCStickerPickerCategoryLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d1b3ac

// -[SCStickerPickerCategoryLayout layoutAttributesForElementsInRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d1b504

// -[SCStickerPickerCategoryLayout prepareForCollectionViewUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1b8b8

// -[SCStickerPickerCategoryLayout finalizeCollectionViewUpdates]
// Type encoding: v16@0:8
// Implementation: 0x108d1bef4

// -[SCStickerPickerCategoryLayout initialLayoutAttributesForAppearingItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1bf3c

// -[SCStickerPickerCategoryLayout finalLayoutAttributesForDisappearingItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1c174

// -[SCStickerPickerCategoryLayout initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d1c35c

// -[SCStickerPickerCategoryLayout finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d1c470

// -[SCStickerPickerCategoryLayout indexPathsToInsertForSupplementaryViewOfKind:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1c584

// -[SCStickerPickerCategoryLayout indexPathsToDeleteForSupplementaryViewOfKind:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d1c618

// -[SCStickerPickerCategoryLayout flipsHorizontallyInOppositeLayoutDirection]
// Type encoding: B16@0:8
// Implementation: 0x108d1c6ac

// -[SCStickerPickerCategoryLayout toggleToggleableSupplementaryViewOfKind:indexPath:shouldBeOpen:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108d1c6b4

// -[SCStickerPickerCategoryLayout _switchToggleableSupplementaryViewFromKind:toKind:fromIndexPath:toIndexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108d1c6c0

// -[SCStickerPickerCategoryLayout _toggleOnToggleableSupplementaryViewOfKind:indexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d1ca2c

// -[SCStickerPickerCategoryLayout _toggleOffToggleableSupplementaryViewOfKind:indexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d1ccf8

// -[SCStickerPickerCategoryLayout minimumLineSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108d1cf40

// -[SCStickerPickerCategoryLayout setMinimumLineSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d1cf50

// -[SCStickerPickerCategoryLayout delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d1cf60

// -[SCStickerPickerCategoryLayout setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1cf80

// -[SCStickerPickerCategoryLayout attributesForDataItems]
// Type encoding: @16@0:8
// Implementation: 0x108d1cf94

// -[SCStickerPickerCategoryLayout setAttributesForDataItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1cfa4

// -[SCStickerPickerCategoryLayout attributesForExpandableGroups]
// Type encoding: @16@0:8
// Implementation: 0x108d1cfe4

// -[SCStickerPickerCategoryLayout setAttributesForExpandableGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1cff4

// -[SCStickerPickerCategoryLayout attributesForSectionHeaders]
// Type encoding: @16@0:8
// Implementation: 0x108d1d034

// -[SCStickerPickerCategoryLayout setAttributesForSectionHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d044

// -[SCStickerPickerCategoryLayout attributesForToggleableViews]
// Type encoding: @16@0:8
// Implementation: 0x108d1d084

// -[SCStickerPickerCategoryLayout setAttributesForToggleableViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d094

// -[SCStickerPickerCategoryLayout attributesForToggleableViewsToDelete]
// Type encoding: @16@0:8
// Implementation: 0x108d1d0d4

// -[SCStickerPickerCategoryLayout setAttributesForToggleableViewsToDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d0e4

// -[SCStickerPickerCategoryLayout topYForExpandableGroups]
// Type encoding: @16@0:8
// Implementation: 0x108d1d124

// -[SCStickerPickerCategoryLayout setTopYForExpandableGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d134

// -[SCStickerPickerCategoryLayout collectionViewContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108d1d174

// -[SCStickerPickerCategoryLayout setCollectionViewContentSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108d1d188

// -[SCStickerPickerCategoryLayout insertingIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x108d1d19c

// -[SCStickerPickerCategoryLayout setInsertingIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d1ac

// -[SCStickerPickerCategoryLayout deletingIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x108d1d1ec

// -[SCStickerPickerCategoryLayout setDeletingIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d1fc

// -[SCStickerPickerCategoryLayout expandableGroupIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x108d1d23c

// -[SCStickerPickerCategoryLayout setExpandableGroupIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d24c

// -[SCStickerPickerCategoryLayout toggleableSupplementaryViewsToInsert]
// Type encoding: @16@0:8
// Implementation: 0x108d1d28c

// -[SCStickerPickerCategoryLayout setToggleableSupplementaryViewsToInsert:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d29c

// -[SCStickerPickerCategoryLayout toggleableSupplementaryViewsToDelete]
// Type encoding: @16@0:8
// Implementation: 0x108d1d2dc

// -[SCStickerPickerCategoryLayout setToggleableSupplementaryViewsToDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d2ec

// -[SCStickerPickerCategoryLayout preUpdateIndexPathsInExpandableGroups]
// Type encoding: @16@0:8
// Implementation: 0x108d1d32c

// -[SCStickerPickerCategoryLayout setPreUpdateIndexPathsInExpandableGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d33c

// -[SCStickerPickerCategoryLayout preUpdateDataAttributes]
// Type encoding: @16@0:8
// Implementation: 0x108d1d37c

// -[SCStickerPickerCategoryLayout setPreUpdateDataAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d38c

// -[SCStickerPickerCategoryLayout preUpdateGroupAttributes]
// Type encoding: @16@0:8
// Implementation: 0x108d1d3cc

// -[SCStickerPickerCategoryLayout setPreUpdateGroupAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d3dc

// -[SCStickerPickerCategoryLayout postUpdatePathToOldPath]
// Type encoding: @16@0:8
// Implementation: 0x108d1d41c

// -[SCStickerPickerCategoryLayout setPostUpdatePathToOldPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d42c

// -[SCStickerPickerCategoryLayout oldPathToPostUpdatePath]
// Type encoding: @16@0:8
// Implementation: 0x108d1d46c

// -[SCStickerPickerCategoryLayout setOldPathToPostUpdatePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1d47c

// -[SCStickerPickerCategoryLayout toggleableViewChange]
// Type encoding: Q16@0:8
// Implementation: 0x108d1d4bc

// -[SCStickerPickerCategoryLayout setToggleableViewChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108d1d4cc

// -[SCStickerPickerCategoryLayout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d1d4dc

@end
