// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScrollableSectionCollectionViewLayout
// Superclass: UICollectionViewLayout
// Address: 0x112bdec18

@interface SCScrollableSectionCollectionViewLayout

// Property: contentSize; attributes: T{CGSize=dd},N,V_contentSize
// Property: sections; attributes: T@"NSArray",&,N,V_sections
// Property: offsetCache; attributes: T@"NSMutableDictionary",&,N,V_offsetCache
// Property: decorationViewCache; attributes: T@"NSMutableDictionary",&,N,V_decorationViewCache
// Property: delegate; attributes: T@"<UICollectionViewDelegateFlowLayout>",W,N,V_delegate
// Property: minimumInteritemSpacing; attributes: Td,N,V_minimumInteritemSpacing
// Property: minimumInterSectionSpacing; attributes: Td,N,V_minimumInterSectionSpacing
// Property: itemSize; attributes: T{CGSize=dd},N,V_itemSize
// Property: headerReferenceSize; attributes: T{CGSize=dd},N,V_headerReferenceSize
// Property: footerReferenceSize; attributes: T{CGSize=dd},N,V_footerReferenceSize
// Property: estimatedItemSize; attributes: T{CGSize=dd},N,V_estimatedItemSize
// Property: sectionInset; attributes: T{UIEdgeInsets=dddd},N,V_sectionInset
// Property: virtualSectionDelegate; attributes: T@"<SCCollectionViewLayoutVirtualSectionDelegate>",W,N,V_virtualSectionDelegate
// Property: defaultScrollViewConfiguration; attributes: T@"SCDecorationScrollViewConfiguration",&,N,V_defaultScrollViewConfiguration
// Property: showsSectionBackgrounds; attributes: TB,N,V_showsSectionBackgrounds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScrollableSectionCollectionViewLayout init]
// Type encoding: @16@0:8
// Implementation: 0x108fdca9c

// -[SCScrollableSectionCollectionViewLayout initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fdcaec

// -[SCScrollableSectionCollectionViewLayout configure]
// Type encoding: v16@0:8
// Implementation: 0x108fdcb3c

// -[SCScrollableSectionCollectionViewLayout setShowsHorizontalScrollIndicators:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fdcbe4

// -[SCScrollableSectionCollectionViewLayout flipsHorizontallyInOppositeLayoutDirection]
// Type encoding: B16@0:8
// Implementation: 0x108fdcc28

// -[SCScrollableSectionCollectionViewLayout scrollViewForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x108fdcc30

// -[SCScrollableSectionCollectionViewLayout prepareLayout]
// Type encoding: v16@0:8
// Implementation: 0x108fdccc4

// -[SCScrollableSectionCollectionViewLayout layoutSectionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108fdce80

// -[SCScrollableSectionCollectionViewLayout _sanitizeOffsetCacheForSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdd270

// -[SCScrollableSectionCollectionViewLayout invalidateLayoutWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdd3e8

// -[SCScrollableSectionCollectionViewLayout collectionViewContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdd7c8

// -[SCScrollableSectionCollectionViewLayout layoutAttributesForItemAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fdd7cc

// -[SCScrollableSectionCollectionViewLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fdd8b4

// -[SCScrollableSectionCollectionViewLayout layoutAttributesForDecorationViewOfKind:atIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fdd9fc

// -[SCScrollableSectionCollectionViewLayout layoutAttributesForElementsInRect:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108fddac4

// -[SCScrollableSectionCollectionViewLayout shouldInvalidateLayoutForBoundsChange:]
// Type encoding: B48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108fddc94

// -[SCScrollableSectionCollectionViewLayout invalidationContextForBoundsChange:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108fddcbc

// -[SCScrollableSectionCollectionViewLayout shouldUseFlowLayoutInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108fddd10

// -[SCScrollableSectionCollectionViewLayout scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdde58

// -[SCScrollableSectionCollectionViewLayout scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fde118

// -[SCScrollableSectionCollectionViewLayout scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x108fde268

// -[SCScrollableSectionCollectionViewLayout scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fde3d8

// -[SCScrollableSectionCollectionViewLayout scrollViewWillBeginDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fde538

// -[SCScrollableSectionCollectionViewLayout scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fde688

// -[SCScrollableSectionCollectionViewLayout interItemSpacingForSection:]
// Type encoding: d24@0:8Q16
// Implementation: 0x108fde7d8

// -[SCScrollableSectionCollectionViewLayout sectionInsetsForSection:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8Q16
// Implementation: 0x108fde89c

// -[SCScrollableSectionCollectionViewLayout headerSizeForSection:]
// Type encoding: {CGSize=dd}24@0:8Q16
// Implementation: 0x108fde98c

// -[SCScrollableSectionCollectionViewLayout footerSizeForSection:]
// Type encoding: {CGSize=dd}24@0:8Q16
// Implementation: 0x108fdea5c

// -[SCScrollableSectionCollectionViewLayout itemSizeForIndexPath:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x108fdeb2c

// -[SCScrollableSectionCollectionViewLayout scrollViewConfigurationForSection:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108fdec10

// -[SCScrollableSectionCollectionViewLayout delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fded98

// -[SCScrollableSectionCollectionViewLayout numSections]
// Type encoding: q16@0:8
// Implementation: 0x108fdee18

// -[SCScrollableSectionCollectionViewLayout numItemsInSection:]
// Type encoding: q24@0:8q16
// Implementation: 0x108fdeec0

// -[SCScrollableSectionCollectionViewLayout originalIndexPathForItemAtVirtualIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fdef74

// -[SCScrollableSectionCollectionViewLayout virtualIndexPathForItemAtOriginalIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fdf02c

// -[SCScrollableSectionCollectionViewLayout scrollToItemAtIndexPath:atScrollPosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108fdf0e4

// -[SCScrollableSectionCollectionViewLayout indexPathVisiblityRatio:]
// Type encoding: d24@0:8@16
// Implementation: 0x108fdf404

// -[SCScrollableSectionCollectionViewLayout resetAllSectionOffsets]
// Type encoding: v16@0:8
// Implementation: 0x108fdf620

// -[SCScrollableSectionCollectionViewLayout minimumInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fdf870

// -[SCScrollableSectionCollectionViewLayout setMinimumInteritemSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fdf880

// -[SCScrollableSectionCollectionViewLayout minimumInterSectionSpacing]
// Type encoding: d16@0:8
// Implementation: 0x108fdf890

// -[SCScrollableSectionCollectionViewLayout setMinimumInterSectionSpacing:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fdf8a0

// -[SCScrollableSectionCollectionViewLayout itemSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdf8b0

// -[SCScrollableSectionCollectionViewLayout setItemSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108fdf8c4

// -[SCScrollableSectionCollectionViewLayout headerReferenceSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdf8d8

// -[SCScrollableSectionCollectionViewLayout setHeaderReferenceSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108fdf8ec

// -[SCScrollableSectionCollectionViewLayout footerReferenceSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdf900

// -[SCScrollableSectionCollectionViewLayout setFooterReferenceSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108fdf914

// -[SCScrollableSectionCollectionViewLayout estimatedItemSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdf928

// -[SCScrollableSectionCollectionViewLayout setEstimatedItemSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108fdf93c

// -[SCScrollableSectionCollectionViewLayout sectionInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108fdf950

// -[SCScrollableSectionCollectionViewLayout setSectionInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x108fdf968

// -[SCScrollableSectionCollectionViewLayout virtualSectionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108fdf980

// -[SCScrollableSectionCollectionViewLayout setVirtualSectionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdf9a0

// -[SCScrollableSectionCollectionViewLayout defaultScrollViewConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108fdf9b4

// -[SCScrollableSectionCollectionViewLayout setDefaultScrollViewConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdf9c4

// -[SCScrollableSectionCollectionViewLayout showsSectionBackgrounds]
// Type encoding: B16@0:8
// Implementation: 0x108fdfa04

// -[SCScrollableSectionCollectionViewLayout setShowsSectionBackgrounds:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fdfa14

// -[SCScrollableSectionCollectionViewLayout contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108fdfa24

// -[SCScrollableSectionCollectionViewLayout setContentSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108fdfa38

// -[SCScrollableSectionCollectionViewLayout sections]
// Type encoding: @16@0:8
// Implementation: 0x108fdfa4c

// -[SCScrollableSectionCollectionViewLayout setSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdfa5c

// -[SCScrollableSectionCollectionViewLayout offsetCache]
// Type encoding: @16@0:8
// Implementation: 0x108fdfa9c

// -[SCScrollableSectionCollectionViewLayout setOffsetCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdfaac

// -[SCScrollableSectionCollectionViewLayout decorationViewCache]
// Type encoding: @16@0:8
// Implementation: 0x108fdfaec

// -[SCScrollableSectionCollectionViewLayout setDecorationViewCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdfafc

// -[SCScrollableSectionCollectionViewLayout setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fdfb3c

// -[SCScrollableSectionCollectionViewLayout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fdfb50

// +[SCScrollableSectionCollectionViewLayout invalidationContextClass]
// Type encoding: #16@0:8
// Implementation: 0x108fdcc1c

@end
