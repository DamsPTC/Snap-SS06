// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapCell
// Superclass: UICollectionViewCell
// Address: 0x112b3bdd8

@interface SCMemoriesSnapCell

// Property: selectMode; attributes: TB,R,N,V_selectMode
// Property: cellViewModel; attributes: T@"SCMemoriesSnapCellViewModel",R,N,V_cellViewModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableMode; attributes: TB,N
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N

// -[SCMemoriesSnapCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106e33820

// -[SCMemoriesSnapCell containsSnapId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e343a4

// -[SCMemoriesSnapCell setClusterTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e344f0

// -[SCMemoriesSnapCell getClusterTitle]
// Type encoding: @16@0:8
// Implementation: 0x106e34528

// -[SCMemoriesSnapCell dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e34558

// -[SCMemoriesSnapCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106e345d4

// -[SCMemoriesSnapCell configureWithSyncStatusGenerator:thumbnailGenerator:streamingContentPrefetcher:isRetryThumbnailLoadingEnabled:thumbnailRetryDelayInSeconds:maxThumbnailNilRetryCount:shouldAlwaysClearIdentifier:memoriesMonetizationEnabled:shouldShowQuotaThumbnailStates:]
// Type encoding: v72@0:8@16@24@32B40Q44Q52B60B64B68
// Implementation: 0x106e347e8

// -[SCMemoriesSnapCell setSelectMode:disableMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106e34928

// -[SCMemoriesSnapCell _requestThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x106e34954

// -[SCMemoriesSnapCell _configureSyncStatusGenerator]
// Type encoding: v16@0:8
// Implementation: 0x106e35354

// -[SCMemoriesSnapCell _startLoading]
// Type encoding: v16@0:8
// Implementation: 0x106e3550c

// -[SCMemoriesSnapCell _stopLoading]
// Type encoding: v16@0:8
// Implementation: 0x106e356e8

// -[SCMemoriesSnapCell _shouldShowLoadingIndicator:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e356f8

// -[SCMemoriesSnapCell _updateLoadingIndicator:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e3574c

// -[SCMemoriesSnapCell _cancelMiniThumbnailBlock]
// Type encoding: v16@0:8
// Implementation: 0x106e35884

// -[SCMemoriesSnapCell _updateAtRiskIconWithIconType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e358c8

// -[SCMemoriesSnapCell _createAtRiskIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e35958

// -[SCMemoriesSnapCell _createLockedIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e35bf4

// -[SCMemoriesSnapCell _createDaysLeftBadge]
// Type encoding: v16@0:8
// Implementation: 0x106e35eec

// -[SCMemoriesSnapCell _addIncompatibleIcon]
// Type encoding: v16@0:8
// Implementation: 0x106e363a8

// -[SCMemoriesSnapCell _addIconViewWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e36620

// -[SCMemoriesSnapCell bindViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e368f4

// -[SCMemoriesSnapCell transitioningPosterFrame]
// Type encoding: @16@0:8
// Implementation: 0x106e368f8

// -[SCMemoriesSnapCell transitioningImage]
// Type encoding: @16@0:8
// Implementation: 0x106e36908

// -[SCMemoriesSnapCell transitioningExpandingView]
// Type encoding: @16@0:8
// Implementation: 0x106e36918

// -[SCMemoriesSnapCell setTransitioningInitialImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e36948

// -[SCMemoriesSnapCell setSelected:selectOverlayImage:snapIds:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106e36958

// -[SCMemoriesSnapCell setSelectionOrderNumber:orderNumbersBySnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e36a20

// -[SCMemoriesSnapCell setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e36b28

// -[SCMemoriesSnapCell setDisableMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e36b8c

// -[SCMemoriesSnapCell disableMode]
// Type encoding: B16@0:8
// Implementation: 0x106e36bfc

// -[SCMemoriesSnapCell animateLongTapForTouchLocation:reverse:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x106e36c0c

// -[SCMemoriesSnapCell interactionMode]
// Type encoding: Q16@0:8
// Implementation: 0x106e36d48

// -[SCMemoriesSnapCell _resetRetryThumbnailLoadingIfNecessaryWorkItem]
// Type encoding: v16@0:8
// Implementation: 0x106e36dd8

// -[SCMemoriesSnapCell viewIsFullyVisibleOnScreen:inSelectMode:delayForStreamingPrefetchSec:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x106e36e1c

// -[SCMemoriesSnapCell prefetchStreamingContent]
// Type encoding: v16@0:8
// Implementation: 0x106e36fec

// -[SCMemoriesSnapCell _applyQuotaThumbnailOrLegacyStorageState]
// Type encoding: v16@0:8
// Implementation: 0x106e37204

// -[SCMemoriesSnapCell _applyQuotaThumbnailState:]
// Type encoding: v20@0:8i16
// Implementation: 0x106e37280

// -[SCMemoriesSnapCell _applyLegacyStorageAtRiskState]
// Type encoding: v16@0:8
// Implementation: 0x106e374c0

// -[SCMemoriesSnapCell setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e375f8

// -[SCMemoriesSnapCell syncStatusGenerator:didUpdateStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e37768

// -[SCMemoriesSnapCell viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106e377b8

// -[SCMemoriesSnapCell selectMode]
// Type encoding: B16@0:8
// Implementation: 0x106e377c8

// -[SCMemoriesSnapCell cellViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106e377d8

// -[SCMemoriesSnapCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e377e8

// +[SCMemoriesSnapCell sizeWithViewModel:constrainedToSize:]
// Type encoding: {CGSize=dd}40@0:8@16{CGSize=dd}24
// Implementation: 0x106e3713c

@end
