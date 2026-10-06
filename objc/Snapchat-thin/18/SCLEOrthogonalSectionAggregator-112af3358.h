// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLEOrthogonalSectionAggregator
// Superclass: NSObject
// Address: 0x112af3358

@interface SCLEOrthogonalSectionAggregator

// Property: parentCollectionView; attributes: T@"UICollectionView",R,W,N,V_parentCollectionView
// Property: visibleOrthogonalSections; attributes: T@"NSArray",R,N
// Property: delegate; attributes: T@"<SCLEOrthogonalSectionAggregatorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLEOrthogonalSectionAggregator initWithColletionView:nestedCollectionViewClass:]
// Type encoding: @32@0:8@16#24
// Implementation: 0x10672f660

// -[SCLEOrthogonalSectionAggregator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10672f728

// -[SCLEOrthogonalSectionAggregator invalidateSections]
// Type encoding: v16@0:8
// Implementation: 0x10672f76c

// -[SCLEOrthogonalSectionAggregator addSection:index:frame:]
// Type encoding: v64@0:8@16q24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x10672f914

// -[SCLEOrthogonalSectionAggregator showSectionsForBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10672fa98

// -[SCLEOrthogonalSectionAggregator visibleOrthogonalSections]
// Type encoding: @16@0:8
// Implementation: 0x10672fd38

// -[SCLEOrthogonalSectionAggregator orthogonalSectionController:didChangePreferredItemAttributes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10672feec

// -[SCLEOrthogonalSectionAggregator controllers]
// Type encoding: @16@0:8
// Implementation: 0x106730080

// -[SCLEOrthogonalSectionAggregator visibleControllers]
// Type encoding: @16@0:8
// Implementation: 0x1067300a8

// -[SCLEOrthogonalSectionAggregator _sectionShouldBeAdded:bounds:]
// Type encoding: B56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x106730294

// -[SCLEOrthogonalSectionAggregator _sectionShouldBeRemoved:bounds:]
// Type encoding: B56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x1067303a0

// -[SCLEOrthogonalSectionAggregator _showOrthogonalSection:parent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067304ac

// -[SCLEOrthogonalSectionAggregator _removeOrthogonalSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673054c

// -[SCLEOrthogonalSectionAggregator parentCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x1067305c4

// -[SCLEOrthogonalSectionAggregator delegate]
// Type encoding: @16@0:8
// Implementation: 0x1067305dc

// -[SCLEOrthogonalSectionAggregator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067305f4

// -[SCLEOrthogonalSectionAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106730600

@end
