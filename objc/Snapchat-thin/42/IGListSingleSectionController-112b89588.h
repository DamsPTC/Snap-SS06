// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListSingleSectionController
// Superclass: IGListSectionController
// Address: 0x112b89588

@interface IGListSingleSectionController

// Property: nibName; attributes: T@"NSString",R,N,V_nibName
// Property: bundle; attributes: T@"NSBundle",R,N,V_bundle
// Property: identifier; attributes: T@"NSString",R,N,V_identifier
// Property: cellClass; attributes: T#,R,N,V_cellClass
// Property: configureBlock; attributes: T@?,R,N,V_configureBlock
// Property: sizeBlock; attributes: T@?,R,N,V_sizeBlock
// Property: item; attributes: T@,&,N,V_item
// Property: selectionDelegate; attributes: T@"<IGListSingleSectionControllerDelegate>",W,N,V_selectionDelegate

// -[IGListSingleSectionController initWithCellClass:configureBlock:sizeBlock:]
// Type encoding: @40@0:8#16@?24@?32
// Implementation: 0x107e9baa8

// -[IGListSingleSectionController initWithNibName:bundle:configureBlock:sizeBlock:]
// Type encoding: @48@0:8@16@24@?32@?40
// Implementation: 0x107e9bb88

// -[IGListSingleSectionController initWithStoryboardCellIdentifier:configureBlock:sizeBlock:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x107e9bcb0

// -[IGListSingleSectionController numberOfItems]
// Type encoding: q16@0:8
// Implementation: 0x107e9bda4

// -[IGListSingleSectionController sizeForItemAtIndex:]
// Type encoding: {CGSize=dd}24@0:8q16
// Implementation: 0x107e9bdac

// -[IGListSingleSectionController cellForItemAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107e9be4c

// -[IGListSingleSectionController didUpdateToObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9bfec

// -[IGListSingleSectionController didSelectItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9bff0

// -[IGListSingleSectionController didDeselectItemAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e9c054

// -[IGListSingleSectionController selectionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107e9c0f8

// -[IGListSingleSectionController setSelectionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9c118

// -[IGListSingleSectionController nibName]
// Type encoding: @16@0:8
// Implementation: 0x107e9c12c

// -[IGListSingleSectionController bundle]
// Type encoding: @16@0:8
// Implementation: 0x107e9c13c

// -[IGListSingleSectionController identifier]
// Type encoding: @16@0:8
// Implementation: 0x107e9c14c

// -[IGListSingleSectionController cellClass]
// Type encoding: #16@0:8
// Implementation: 0x107e9c15c

// -[IGListSingleSectionController configureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107e9c16c

// -[IGListSingleSectionController sizeBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107e9c17c

// -[IGListSingleSectionController item]
// Type encoding: @16@0:8
// Implementation: 0x107e9c18c

// -[IGListSingleSectionController setItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9c19c

// -[IGListSingleSectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e9c1dc

@end
