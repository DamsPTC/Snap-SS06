// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListAdapter
// Superclass: NSObject
// Address: 0x112b892b8

@interface IGListAdapter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: legacyIsInDataUpdateBlock; attributes: TB,N,V_legacyIsInDataUpdateBlock
// Property: updater; attributes: T@"<IGListUpdatingDelegate>",&,N,V_updater
// Property: sectionMap; attributes: T@"IGListSectionMap",R,N,V_sectionMap
// Property: displayHandler; attributes: T@"IGListDisplayHandler",R,N,V_displayHandler
// Property: workingRangeHandler; attributes: T@"IGListWorkingRangeHandler",R,N,V_workingRangeHandler
// Property: delegateProxy; attributes: T@"IGListAdapterProxy",&,N,V_delegateProxy
// Property: emptyBackgroundView; attributes: T@"UIView",&,N,V_emptyBackgroundView
// Property: isLastInteractiveMoveToLastSectionIndex; attributes: TB,N,V_isLastInteractiveMoveToLastSectionIndex
// Property: isInObjectUpdateTransaction; attributes: TB,N,V_isInObjectUpdateTransaction
// Property: isInDataUpdateBlock; attributes: TB,R,N
// Property: previousSectionMap; attributes: T@"IGListSectionMap",&,N,V_previousSectionMap
// Property: registeredCellIdentifiers; attributes: T@"NSMutableSet",&,N,V_registeredCellIdentifiers
// Property: registeredNibNames; attributes: T@"NSMutableSet",&,N,V_registeredNibNames
// Property: registeredSupplementaryViewIdentifiers; attributes: T@"NSMutableSet",&,N,V_registeredSupplementaryViewIdentifiers
// Property: registeredSupplementaryViewNibNames; attributes: T@"NSMutableSet",&,N,V_registeredSupplementaryViewNibNames
// Property: viewController; attributes: T@"UIViewController",W,N,V_viewController
// Property: collectionView; attributes: T@"UICollectionView",W,N
// Property: dataSource; attributes: T@"<IGListAdapterDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<IGListAdapterDelegate>",W,N,V_delegate
// Property: collectionViewDelegate; attributes: T@"<UICollectionViewDelegate>",W,N,V_collectionViewDelegate
// Property: scrollViewDelegate; attributes: T@"<UIScrollViewDelegate>",W,N,V_scrollViewDelegate
// Property: moveDelegate; attributes: T@"<IGListAdapterMoveDelegate>",W,N,V_moveDelegate
// Property: performanceDelegate; attributes: T@"<IGListAdapterPerformanceDelegate>",W,N,V_performanceDelegate
// Property: experiments; attributes: Tq,N,V_experiments
// Property: containerSize; attributes: T{CGSize=dd},R,N
// Property: containerInset; attributes: T{UIEdgeInsets=dddd},R,N
// Property: adjustedContainerInset; attributes: T{UIEdgeInsets=dddd},R,N
// Property: insetContainerSize; attributes: T{CGSize=dd},R,N
// Property: containerContentOffset; attributes: T{CGPoint=dd},R,N
// Property: scrollingTraits; attributes: T{IGListCollectionScrollingTraits=BBB},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[IGListAdapter numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e9c4a0

// -[IGListAdapter collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107e9c508

// -[IGListAdapter collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e9c558

// -[IGListAdapter collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107e9c648

// -[IGListAdapter collectionView:canMoveItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e9c724

// -[IGListAdapter collectionView:moveItemAtIndexPath:toIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e9c7a4

// -[IGListAdapter collectionView:shouldSelectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e9c8f0

// -[IGListAdapter collectionView:shouldDeselectItemAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e9c970

// -[IGListAdapter collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9c9f0

// -[IGListAdapter collectionView:didDeselectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9cab0

// -[IGListAdapter collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e9cb70

// -[IGListAdapter collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e9cd98

// -[IGListAdapter collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107e9cf38

// -[IGListAdapter collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107e9d100

// -[IGListAdapter collectionView:didHighlightItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9d24c

// -[IGListAdapter collectionView:didUnhighlightItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9d30c

// -[IGListAdapter collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x107e9d3cc

// -[IGListAdapter collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x107e9d3d4

// -[IGListAdapter collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x107e9d43c

// -[IGListAdapter collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x107e9d484

// -[IGListAdapter collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x107e9d4cc

// -[IGListAdapter collectionView:layout:referenceSizeForFooterInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x107e9d540

// -[IGListAdapter collectionView:layout:customizedInitialLayoutAttributes:atIndexPath:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107e9d5b4

// -[IGListAdapter collectionView:layout:customizedFinalLayoutAttributes:atIndexPath:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107e9d6a4

// -[IGListAdapter debugDescription]
// Type encoding: @16@0:8
// Implementation: 0x107e9c3a4

// -[IGListAdapter debugDescriptionLines]
// Type encoding: @16@0:8
// Implementation: 0x107e9c484

// -[IGListAdapter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107e92210

// -[IGListAdapter initWithUpdater:viewController:workingRangeSize:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107e9226c

// -[IGListAdapter initWithUpdater:viewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e92444

// -[IGListAdapter collectionView]
// Type encoding: @16@0:8
// Implementation: 0x107e9244c

// -[IGListAdapter setCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e92464

// -[IGListAdapter setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9277c

// -[IGListAdapter setCollectionViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9289c

// -[IGListAdapter setScrollViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e928fc

// -[IGListAdapter _updateObjects]
// Type encoding: v16@0:8
// Implementation: 0x107e9295c

// -[IGListAdapter _createProxyAndUpdateCollectionViewDelegate]
// Type encoding: v16@0:8
// Implementation: 0x107e92ba4

// -[IGListAdapter _updateCollectionViewDelegate]
// Type encoding: v16@0:8
// Implementation: 0x107e92c4c

// -[IGListAdapter scrollToObject:supplementaryKinds:scrollDirection:scrollPosition:additionalOffset:animated:]
// Type encoding: v60@0:8@16@24q32Q40d48B56
// Implementation: 0x107e92ca8

// -[IGListAdapter indexPathForFirstVisibleItem]
// Type encoding: @16@0:8
// Implementation: 0x107e92f6c

// -[IGListAdapter offsetForFirstVisibleItemWithScrollDirection:]
// Type encoding: d24@0:8q16
// Implementation: 0x107e93024

// -[IGListAdapter _offsetRangeForIndexPath:supplementaryKinds:scrollDirection:]
// Type encoding: {OffsetRange=dd}40@0:8@16@24q32
// Implementation: 0x107e93128

// -[IGListAdapter performUpdatesAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107e9350c

// -[IGListAdapter reloadDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e9399c

// -[IGListAdapter reloadObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e93c98

// -[IGListAdapter addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e93e64

// -[IGListAdapter removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e93e6c

// -[IGListAdapter _notifyDidUpdate:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107e93e74

// -[IGListAdapter sectionControllerForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x107e93f84

// -[IGListAdapter sectionForSectionController:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e93fd0

// -[IGListAdapter sectionControllerForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e94034

// -[IGListAdapter objectForSectionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e940a0

// -[IGListAdapter objectAtSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x107e94134

// -[IGListAdapter sectionForObject:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e94180

// -[IGListAdapter objects]
// Type encoding: @16@0:8
// Implementation: 0x107e941e4

// -[IGListAdapter _supplementaryViewSourceAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e94228

// -[IGListAdapter visibleSectionControllers]
// Type encoding: @16@0:8
// Implementation: 0x107e94280

// -[IGListAdapter visibleObjects]
// Type encoding: @16@0:8
// Implementation: 0x107e942e4

// -[IGListAdapter visibleCellsForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e94600

// -[IGListAdapter sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x107e947a8

// -[IGListAdapter sizeForSupplementaryViewOfKind:atIndexPath:]
// Type encoding: {CGSize=dd}32@0:8@16@24
// Implementation: 0x107e9488c

// -[IGListAdapter _collectionViewBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107e94974

// -[IGListAdapter _generateTransitionDataWithObjects:dataSource:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e94a3c

// -[IGListAdapter _updateObjects:dataSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e94d0c

// -[IGListAdapter _updateWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e94d48

// -[IGListAdapter _updateBackgroundViewShouldHide:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e95000

// -[IGListAdapter _itemCountIsZero]
// Type encoding: B16@0:8
// Implementation: 0x107e95134

// -[IGListAdapter _sectionMapUsingPreviousIfInUpdateBlock:]
// Type encoding: @20@0:8B16
// Implementation: 0x107e95234

// -[IGListAdapter indexPathsFromSectionController:indexes:usePreviousIfInUpdateBlock:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107e952b0

// -[IGListAdapter indexPathForSectionController:index:usePreviousIfInUpdateBlock:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x107e953f8

// -[IGListAdapter _layoutAttributesForItemAndSupplementaryViewAtIndexPath:supplementaryKinds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e9549c

// -[IGListAdapter _layoutAttributesForItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e95634

// -[IGListAdapter _layoutAttributesForSupplementaryViewOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e956a0

// -[IGListAdapter mapView:toSectionController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e95724

// -[IGListAdapter sectionControllerForView:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e95738

// -[IGListAdapter _sectionControllerForCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e95740

// -[IGListAdapter removeMapForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e95748

// -[IGListAdapter _deferBlockBetweenBatchUpdates:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e95750

// -[IGListAdapter _enterBatchUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e957a0

// -[IGListAdapter _exitBatchUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e957d4

// -[IGListAdapter isInDataUpdateBlock]
// Type encoding: B16@0:8
// Implementation: 0x107e958e8

// -[IGListAdapter scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e95930

// -[IGListAdapter scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e95adc

// -[IGListAdapter scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e95c54

// -[IGListAdapter scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e95dd8

// -[IGListAdapter containerSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107e95f6c

// -[IGListAdapter containerInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107e95fb8

// -[IGListAdapter adjustedContainerInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107e9601c

// -[IGListAdapter insetContainerSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107e96080

// -[IGListAdapter containerContentOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107e960e4

// -[IGListAdapter scrollingTraits]
// Type encoding: {IGListCollectionScrollingTraits=BBB}16@0:8
// Implementation: 0x107e96130

// -[IGListAdapter containerSizeForSectionController:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x107e961a8

// -[IGListAdapter indexForCell:sectionController:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107e96210

// -[IGListAdapter cellForItemAtIndex:sectionController:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x107e9629c

// -[IGListAdapter viewForSupplementaryElementOfKind:atIndex:sectionController:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x107e963e8

// -[IGListAdapter fullyVisibleCellsForSectionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e96554

// -[IGListAdapter visibleCellsForSectionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e96780

// -[IGListAdapter visibleIndexPathsForSectionController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e9690c

// -[IGListAdapter deselectItemAtIndex:sectionController:animated:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x107e96a78

// -[IGListAdapter selectItemAtIndex:sectionController:animated:scrollPosition:]
// Type encoding: v44@0:8q16@24B32Q36
// Implementation: 0x107e96aec

// -[IGListAdapter dequeueReusableCellOfClass:withReuseIdentifier:forSectionController:atIndex:]
// Type encoding: @48@0:8#16@24@32q40
// Implementation: 0x107e96b68

// -[IGListAdapter dequeueReusableCellOfClass:forSectionController:atIndex:]
// Type encoding: @40@0:8#16@24q32
// Implementation: 0x107e96d10

// -[IGListAdapter dequeueReusableCellFromStoryboardWithIdentifier:forSectionController:atIndex:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107e96d20

// -[IGListAdapter dequeueReusableCellWithNibName:bundle:forSectionController:atIndex:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x107e96ddc

// -[IGListAdapter dequeueReusableSupplementaryViewOfKind:forSectionController:class:atIndex:]
// Type encoding: @48@0:8@16@24#32q40
// Implementation: 0x107e96f3c

// -[IGListAdapter dequeueReusableSupplementaryViewFromStoryboardOfKind:withIdentifier:forSectionController:atIndex:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x107e970ec

// -[IGListAdapter dequeueReusableSupplementaryViewOfKind:forSectionController:nibName:bundle:atIndex:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x107e971c0

// -[IGListAdapter performBatchAnimated:updates:completion:]
// Type encoding: v36@0:8B16@?20@?28
// Implementation: 0x107e9733c

// -[IGListAdapter scrollToSectionController:atIndex:scrollPosition:animated:]
// Type encoding: v44@0:8@16q24Q32B40
// Implementation: 0x107e9760c

// -[IGListAdapter invalidateLayoutForSectionController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e9767c

// -[IGListAdapter _invalidateLayoutForSectionController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e977ac

// -[IGListAdapter reloadInSectionController:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e97984

// -[IGListAdapter insertInSectionController:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e97b08

// -[IGListAdapter deleteInSectionController:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e97be4

// -[IGListAdapter invalidateLayoutInSectionController:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e97cc0

// -[IGListAdapter moveInSectionController:fromIndex:toIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107e97da8

// -[IGListAdapter reloadSectionController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e97e8c

// -[IGListAdapter moveSectionControllerInteractive:fromIndex:toIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107e97f7c

// -[IGListAdapter moveInSectionControllerInteractive:fromIndex:toIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107e9814c

// -[IGListAdapter revertInvalidInteractiveMoveFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e9815c

// -[IGListAdapter viewController]
// Type encoding: @16@0:8
// Implementation: 0x107e981cc

// -[IGListAdapter setViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e981e4

// -[IGListAdapter dataSource]
// Type encoding: @16@0:8
// Implementation: 0x107e981f0

// -[IGListAdapter delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e98208

// -[IGListAdapter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e98220

// -[IGListAdapter collectionViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9822c

// -[IGListAdapter scrollViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e98244

// -[IGListAdapter moveDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9825c

// -[IGListAdapter setMoveDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e98274

// -[IGListAdapter performanceDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e98280

// -[IGListAdapter setPerformanceDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e98298

// -[IGListAdapter updater]
// Type encoding: @16@0:8
// Implementation: 0x107e982a4

// -[IGListAdapter setUpdater:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e982ac

// -[IGListAdapter experiments]
// Type encoding: q16@0:8
// Implementation: 0x107e982dc

// -[IGListAdapter setExperiments:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e982e4

// -[IGListAdapter legacyIsInDataUpdateBlock]
// Type encoding: B16@0:8
// Implementation: 0x107e982ec

// -[IGListAdapter setLegacyIsInDataUpdateBlock:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e982f4

// -[IGListAdapter sectionMap]
// Type encoding: @16@0:8
// Implementation: 0x107e982fc

// -[IGListAdapter displayHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e98304

// -[IGListAdapter workingRangeHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e9830c

// -[IGListAdapter delegateProxy]
// Type encoding: @16@0:8
// Implementation: 0x107e98314

// -[IGListAdapter setDelegateProxy:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9831c

// -[IGListAdapter emptyBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x107e9834c

// -[IGListAdapter setEmptyBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e98354

// -[IGListAdapter isLastInteractiveMoveToLastSectionIndex]
// Type encoding: B16@0:8
// Implementation: 0x107e98384

// -[IGListAdapter setIsLastInteractiveMoveToLastSectionIndex:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9838c

// -[IGListAdapter isInObjectUpdateTransaction]
// Type encoding: B16@0:8
// Implementation: 0x107e98394

// -[IGListAdapter setIsInObjectUpdateTransaction:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9839c

// -[IGListAdapter previousSectionMap]
// Type encoding: @16@0:8
// Implementation: 0x107e983a4

// -[IGListAdapter setPreviousSectionMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e983ac

// -[IGListAdapter registeredCellIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x107e983dc

// -[IGListAdapter setRegisteredCellIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e983e4

// -[IGListAdapter registeredNibNames]
// Type encoding: @16@0:8
// Implementation: 0x107e98414

// -[IGListAdapter setRegisteredNibNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9841c

// -[IGListAdapter registeredSupplementaryViewIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x107e9844c

// -[IGListAdapter setRegisteredSupplementaryViewIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e98454

// -[IGListAdapter registeredSupplementaryViewNibNames]
// Type encoding: @16@0:8
// Implementation: 0x107e98484

// -[IGListAdapter setRegisteredSupplementaryViewNibNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9848c

// -[IGListAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e984bc

@end
