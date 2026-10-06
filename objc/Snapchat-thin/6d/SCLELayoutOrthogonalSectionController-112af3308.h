// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLELayoutOrthogonalSectionController
// Superclass: NSObject
// Address: 0x112af3308

@interface SCLELayoutOrthogonalSectionController

// Property: section; attributes: T@"SCLELayoutSection",R,C,N,V_section
// Property: sectionIndex; attributes: Tq,R,N,V_sectionIndex
// Property: sectionFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_sectionFrame
// Property: collectionView; attributes: T@"SCLazy",R,N,V_collectionView
// Property: parentCollectionView; attributes: T@"UICollectionView",R,W,N,V_parentCollectionView
// Property: delegate; attributes: T@"<SCLELayoutOrthogonalSectionControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLELayoutOrthogonalSectionController initWithSection:sectionIndex:sectionFrame:preferredItemSize:parentCollectionView:collectionViewClass:]
// Type encoding: @96@0:8@16q24{CGRect={CGPoint=dd}{CGSize=dd}}32{CGSize=dd}64@80#88
// Implementation: 0x10672e8f0

// -[SCLELayoutOrthogonalSectionController didAddToLayout]
// Type encoding: v16@0:8
// Implementation: 0x10672eaf8

// -[SCLELayoutOrthogonalSectionController didRemoveFromLayout]
// Type encoding: v16@0:8
// Implementation: 0x10672ec94

// -[SCLELayoutOrthogonalSectionController _createCollectionViewWithSection:preferredItemSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10672ee34

// -[SCLELayoutOrthogonalSectionController _createCollectionViewLayoutWithSection:preferredItemSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10672f1c4

// -[SCLELayoutOrthogonalSectionController _createCollectionViewWithFrame:collectionViewLayout:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x10672f260

// -[SCLELayoutOrthogonalSectionController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10672f340

// -[SCLELayoutOrthogonalSectionController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10672f34c

// -[SCLELayoutOrthogonalSectionController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10672f3dc

// -[SCLELayoutOrthogonalSectionController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10672f478

// -[SCLELayoutOrthogonalSectionController orthogonalSectionFlowLayout:didChangePreferredItemAttributes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10672f52c

// -[SCLELayoutOrthogonalSectionController section]
// Type encoding: @16@0:8
// Implementation: 0x10672f5b4

// -[SCLELayoutOrthogonalSectionController sectionIndex]
// Type encoding: q16@0:8
// Implementation: 0x10672f5bc

// -[SCLELayoutOrthogonalSectionController sectionFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10672f5c4

// -[SCLELayoutOrthogonalSectionController setSectionFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10672f5d0

// -[SCLELayoutOrthogonalSectionController collectionView]
// Type encoding: @16@0:8
// Implementation: 0x10672f5dc

// -[SCLELayoutOrthogonalSectionController parentCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x10672f5e4

// -[SCLELayoutOrthogonalSectionController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10672f5fc

// -[SCLELayoutOrthogonalSectionController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10672f614

// -[SCLELayoutOrthogonalSectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10672f620

@end
