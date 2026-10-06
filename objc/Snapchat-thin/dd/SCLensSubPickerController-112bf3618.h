// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSubPickerController
// Superclass: NSObject
// Address: 0x112bf3618

@interface SCLensSubPickerController

// Property: lensLogger; attributes: T@"<SCLensOptionLogger>",R,N,V_lensLogger
// Property: imageProvider; attributes: T@"<SCLensSubPickerImageProviderProtocol>",&,N,V_imageProvider
// Property: externalImageComponent; attributes: T@"<SCLensExternalMediaComponent>",&,N,V_externalImageComponent
// Property: mediaAssetManager; attributes: T@"<SCLensMediaAssetManagerProtocol>",&,N,V_mediaAssetManager
// Property: parentView; attributes: T@"UIView",W,N,V_parentView
// Property: lensContainer; attributes: T@"UIView",W,N,V_lensContainer
// Property: imageCollectionView; attributes: T@"UICollectionView",R,N
// Property: selectedOptionIndexPath; attributes: T@"NSIndexPath",&,N,V_selectedOptionIndexPath
// Property: selectedOptionId; attributes: T@"NSString",&,N,V_selectedOptionId
// Property: subPickerView; attributes: T@"SCLensSubPickerView",R,N,V_subPickerView
// Property: videoEditingEnabled; attributes: TB,R,N
// Property: isCollectionInSync; attributes: TB,R,N
// Property: delegate; attributes: T@"<SCLensSubPickerControllerDelegate>",W,N,V_delegate
// Property: selectedItemBorderColor; attributes: T@"UIColor",&,N,V_selectedItemBorderColor
// Property: pickerViewFillColor; attributes: T@"UIColor",&,N,V_pickerViewFillColor
// Property: selectedItemTransform; attributes: T{CGAffineTransform=dddddd},N,V_selectedItemTransform
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: selectedOptionIndex; attributes: Tq,R,D,N
// Property: pickerContentView; attributes: T@"UIView",R,N

// -[SCLensSubPickerController initWithBottomViewContainer:lensLogger:imageProvider:externalImageComponent:pickerFeature:resultFeature:mediaAssetManager:videoEditingEnabled:batchSize:hideArrow:lensOptionSourceType:selectionLimit:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64B72Q76B84q88Q96
// Implementation: 0x1091c57e8

// -[SCLensSubPickerController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091c5a30

// -[SCLensSubPickerController setUpViews:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c5abc

// -[SCLensSubPickerController showAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c5d80

// -[SCLensSubPickerController showAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091c5d88

// -[SCLensSubPickerController hideAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091c5e2c

// -[SCLensSubPickerController pointInside:view:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1091c5fec

// -[SCLensSubPickerController setOptionIdToRestore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c5ff4

// -[SCLensSubPickerController pickerContentView]
// Type encoding: @16@0:8
// Implementation: 0x1091c6058

// -[SCLensSubPickerController setPickerViewFillColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c609c

// -[SCLensSubPickerController selectedOptionIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1091c6124

// -[SCLensSubPickerController selectedOptionIndex]
// Type encoding: q16@0:8
// Implementation: 0x1091c61b4

// -[SCLensSubPickerController selectOptionAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c6210

// -[SCLensSubPickerController innerSelectOptionAtIndexPath:cellToSelect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c6710

// -[SCLensSubPickerController loadNextBatch]
// Type encoding: v16@0:8
// Implementation: 0x1091c6794

// -[SCLensSubPickerController showNoImagesWarningIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091c679c

// -[SCLensSubPickerController hideNoImagesWarning]
// Type encoding: v16@0:8
// Implementation: 0x1091c67a0

// -[SCLensSubPickerController restoreOptionSelectionIfNeededWithCanProcessMoreFlag:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c67a4

// -[SCLensSubPickerController videoEditingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091c68c4

// -[SCLensSubPickerController currentMediaTypes]
// Type encoding: Q16@0:8
// Implementation: 0x1091c68cc

// -[SCLensSubPickerController imageCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x1091c68d4

// -[SCLensSubPickerController activeFeatures]
// Type encoding: @16@0:8
// Implementation: 0x1091c68dc

// -[SCLensSubPickerController isCollectionInSync]
// Type encoding: B16@0:8
// Implementation: 0x1091c6968

// -[SCLensSubPickerController notifyUnselectedMediaForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c6a74

// -[SCLensSubPickerController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1091c6b1c

// -[SCLensSubPickerController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1091c6b24

// -[SCLensSubPickerController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091c6bac

// -[SCLensSubPickerController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c704c

// -[SCLensSubPickerController collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091c7054

// -[SCLensSubPickerController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x1091c7084

// -[SCLensSubPickerController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091c710c

// -[SCLensSubPickerController collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x1091c7268

// -[SCLensSubPickerController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c728c

// -[SCLensSubPickerController scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7290

// -[SCLensSubPickerController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7294

// -[SCLensSubPickerController lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1091c7298

// -[SCLensSubPickerController _loadNextBatchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091c7870

// -[SCLensSubPickerController _loadNextBatch]
// Type encoding: v16@0:8
// Implementation: 0x1091c7938

// -[SCLensSubPickerController layoutCollectionViewIfNeededWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c79a8

// -[SCLensSubPickerController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091c7b44

// -[SCLensSubPickerController _configureHeaderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7c68

// -[SCLensSubPickerController _headerViewTapped]
// Type encoding: v16@0:8
// Implementation: 0x1091c7c6c

// -[SCLensSubPickerController videoCellDidTapEditButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7c78

// -[SCLensSubPickerController setSelectedOptionIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7c7c

// -[SCLensSubPickerController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091c7cac

// -[SCLensSubPickerController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7cc4

// -[SCLensSubPickerController selectedItemBorderColor]
// Type encoding: @16@0:8
// Implementation: 0x1091c7cd0

// -[SCLensSubPickerController setSelectedItemBorderColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7cd8

// -[SCLensSubPickerController pickerViewFillColor]
// Type encoding: @16@0:8
// Implementation: 0x1091c7d08

// -[SCLensSubPickerController selectedItemTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x1091c7d10

// -[SCLensSubPickerController setSelectedItemTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x1091c7d24

// -[SCLensSubPickerController lensLogger]
// Type encoding: @16@0:8
// Implementation: 0x1091c7d38

// -[SCLensSubPickerController imageProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091c7d40

// -[SCLensSubPickerController setImageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7d48

// -[SCLensSubPickerController externalImageComponent]
// Type encoding: @16@0:8
// Implementation: 0x1091c7d78

// -[SCLensSubPickerController setExternalImageComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7d80

// -[SCLensSubPickerController mediaAssetManager]
// Type encoding: @16@0:8
// Implementation: 0x1091c7db0

// -[SCLensSubPickerController setMediaAssetManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7db8

// -[SCLensSubPickerController parentView]
// Type encoding: @16@0:8
// Implementation: 0x1091c7de8

// -[SCLensSubPickerController setParentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7e00

// -[SCLensSubPickerController lensContainer]
// Type encoding: @16@0:8
// Implementation: 0x1091c7e0c

// -[SCLensSubPickerController setLensContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7e24

// -[SCLensSubPickerController selectedOptionId]
// Type encoding: @16@0:8
// Implementation: 0x1091c7e30

// -[SCLensSubPickerController setSelectedOptionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c7e38

// -[SCLensSubPickerController subPickerView]
// Type encoding: @16@0:8
// Implementation: 0x1091c7e68

// -[SCLensSubPickerController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091c7e70

@end
