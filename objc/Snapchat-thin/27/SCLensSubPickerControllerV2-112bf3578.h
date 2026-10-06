// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSubPickerControllerV2
// Superclass: NSObject
// Address: 0x112bf3578

@interface SCLensSubPickerControllerV2

// Property: lensLogger; attributes: T@"<SCLensOptionLogger>",R,N,V_lensLogger
// Property: imageProvider; attributes: T@"<SCLensSubPickerImageProviderProtocol>",&,N,V_imageProvider
// Property: externalImageComponent; attributes: T@"<SCLensExternalMediaComponent>",&,N,V_externalImageComponent
// Property: mediaAssetManager; attributes: T@"<SCLensMediaAssetManagerProtocol>",&,N,V_mediaAssetManager
// Property: parentView; attributes: T@"UIView",W,N,V_parentView
// Property: lensContainer; attributes: T@"UIView",W,N,V_lensContainer
// Property: imageCollectionView; attributes: T@"UICollectionView",R,N
// Property: selectedIndexPaths; attributes: T@"NSMutableOrderedSet",&,N,V_selectedIndexPaths
// Property: subPickerView; attributes: T@"SCLensSubPickerView",R,N,V_subPickerView
// Property: videoEditingEnabled; attributes: TB,R,N
// Property: resultFeatures; attributes: T@"NSArray",&,N,V_resultFeatures
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

// -[SCLensSubPickerControllerV2 initWithBottomViewContainer:lensLogger:imageProvider:externalImageComponent:pickerFeature:resultFeatures:mediaAssetManager:videoEditingEnabled:batchSize:hideArrow:lensOptionSourceType:selectionLimit:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64B72Q76B84q88Q96
// Implementation: 0x1091be8f0

// -[SCLensSubPickerControllerV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091beb88

// -[SCLensSubPickerControllerV2 setUpViews:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091bec34

// -[SCLensSubPickerControllerV2 showAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091bef14

// -[SCLensSubPickerControllerV2 showAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091bef1c

// -[SCLensSubPickerControllerV2 hideAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091bf034

// -[SCLensSubPickerControllerV2 pointInside:view:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1091bf204

// -[SCLensSubPickerControllerV2 setOptionIdToRestore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bf20c

// -[SCLensSubPickerControllerV2 pickerContentView]
// Type encoding: @16@0:8
// Implementation: 0x1091bf270

// -[SCLensSubPickerControllerV2 setPickerViewFillColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bf2b4

// -[SCLensSubPickerControllerV2 selectedOptionIndex]
// Type encoding: q16@0:8
// Implementation: 0x1091bf33c

// -[SCLensSubPickerControllerV2 selectOptionAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bf344

// -[SCLensSubPickerControllerV2 innerSelectOptionAtIndexPath:cellToSelect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091bf7b8

// -[SCLensSubPickerControllerV2 deselectOptionAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bf830

// -[SCLensSubPickerControllerV2 loadNextBatch]
// Type encoding: v16@0:8
// Implementation: 0x1091bfab8

// -[SCLensSubPickerControllerV2 showNoImagesWarningIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091bfac0

// -[SCLensSubPickerControllerV2 hideNoImagesWarning]
// Type encoding: v16@0:8
// Implementation: 0x1091bfac4

// -[SCLensSubPickerControllerV2 restoreOptionSelectionIfNeededWithCanProcessMoreFlag:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091bfac8

// -[SCLensSubPickerControllerV2 videoEditingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091bfc20

// -[SCLensSubPickerControllerV2 currentMediaTypes]
// Type encoding: Q16@0:8
// Implementation: 0x1091bfc28

// -[SCLensSubPickerControllerV2 imageCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x1091bfc30

// -[SCLensSubPickerControllerV2 activeFeatures]
// Type encoding: @16@0:8
// Implementation: 0x1091bfc38

// -[SCLensSubPickerControllerV2 isCollectionInSync]
// Type encoding: B16@0:8
// Implementation: 0x1091bfc50

// -[SCLensSubPickerControllerV2 notifyUnselectedMediaForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bfd5c

// -[SCLensSubPickerControllerV2 _isIndexPathSelected:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091bfe04

// -[SCLensSubPickerControllerV2 _isSelectionLimitReached]
// Type encoding: B16@0:8
// Implementation: 0x1091bfe68

// -[SCLensSubPickerControllerV2 numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1091bfeb0

// -[SCLensSubPickerControllerV2 collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1091bfeb8

// -[SCLensSubPickerControllerV2 collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091bff40

// -[SCLensSubPickerControllerV2 collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091c0064

// -[SCLensSubPickerControllerV2 collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091c04a8

// -[SCLensSubPickerControllerV2 collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c0614

// -[SCLensSubPickerControllerV2 collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x1091c061c

// -[SCLensSubPickerControllerV2 collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x1091c06a4

// -[SCLensSubPickerControllerV2 collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091c06c8

// -[SCLensSubPickerControllerV2 scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c0818

// -[SCLensSubPickerControllerV2 scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c081c

// -[SCLensSubPickerControllerV2 scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c0820

// -[SCLensSubPickerControllerV2 lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1091c0824

// -[SCLensSubPickerControllerV2 _loadNextBatchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091c0de4

// -[SCLensSubPickerControllerV2 _loadNextBatch]
// Type encoding: v16@0:8
// Implementation: 0x1091c0eac

// -[SCLensSubPickerControllerV2 layoutCollectionViewIfNeededWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c0f1c

// -[SCLensSubPickerControllerV2 _configureCellSelectionState:atIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c10b8

// -[SCLensSubPickerControllerV2 _refreshVisibleItems]
// Type encoding: v16@0:8
// Implementation: 0x1091c115c

// -[SCLensSubPickerControllerV2 _refreshVisibleItemsIfSelectionLimitReached]
// Type encoding: v16@0:8
// Implementation: 0x1091c12fc

// -[SCLensSubPickerControllerV2 _configureHeaderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c133c

// -[SCLensSubPickerControllerV2 _headerViewTapped]
// Type encoding: v16@0:8
// Implementation: 0x1091c13a8

// -[SCLensSubPickerControllerV2 videoCellDidTapEditButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c13b4

// -[SCLensSubPickerControllerV2 selectedIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x1091c13b8

// -[SCLensSubPickerControllerV2 setSelectedIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c13c0

// -[SCLensSubPickerControllerV2 resultFeatures]
// Type encoding: @16@0:8
// Implementation: 0x1091c13f0

// -[SCLensSubPickerControllerV2 setResultFeatures:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c13f8

// -[SCLensSubPickerControllerV2 delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091c1428

// -[SCLensSubPickerControllerV2 setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c1440

// -[SCLensSubPickerControllerV2 selectedItemBorderColor]
// Type encoding: @16@0:8
// Implementation: 0x1091c144c

// -[SCLensSubPickerControllerV2 setSelectedItemBorderColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c1454

// -[SCLensSubPickerControllerV2 pickerViewFillColor]
// Type encoding: @16@0:8
// Implementation: 0x1091c1484

// -[SCLensSubPickerControllerV2 selectedItemTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x1091c148c

// -[SCLensSubPickerControllerV2 setSelectedItemTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x1091c14a4

// -[SCLensSubPickerControllerV2 lensLogger]
// Type encoding: @16@0:8
// Implementation: 0x1091c14bc

// -[SCLensSubPickerControllerV2 imageProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091c14c4

// -[SCLensSubPickerControllerV2 setImageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c14cc

// -[SCLensSubPickerControllerV2 externalImageComponent]
// Type encoding: @16@0:8
// Implementation: 0x1091c14fc

// -[SCLensSubPickerControllerV2 setExternalImageComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c1504

// -[SCLensSubPickerControllerV2 mediaAssetManager]
// Type encoding: @16@0:8
// Implementation: 0x1091c1534

// -[SCLensSubPickerControllerV2 setMediaAssetManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c153c

// -[SCLensSubPickerControllerV2 parentView]
// Type encoding: @16@0:8
// Implementation: 0x1091c156c

// -[SCLensSubPickerControllerV2 setParentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c1584

// -[SCLensSubPickerControllerV2 lensContainer]
// Type encoding: @16@0:8
// Implementation: 0x1091c1590

// -[SCLensSubPickerControllerV2 setLensContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c15a8

// -[SCLensSubPickerControllerV2 subPickerView]
// Type encoding: @16@0:8
// Implementation: 0x1091c15b4

// -[SCLensSubPickerControllerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091c15bc

@end
