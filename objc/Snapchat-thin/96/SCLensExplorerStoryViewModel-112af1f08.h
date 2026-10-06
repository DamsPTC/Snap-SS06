// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerStoryViewModel
// Superclass: NSObject
// Address: 0x112af1f08

@interface SCLensExplorerStoryViewModel

// Property: diffIdentifier; attributes: T@"NSString",R,N
// Property: loggingIdentifier; attributes: T@"NSString",R,N
// Property: loggingInfo; attributes: T@"SCLensExplorerLensItemLoggingInfo",R,N
// Property: storyItem; attributes: T@"SCLensExplorerStoryItem",R,C,N,V_storyItem
// Property: viewingCountText; attributes: T@"NSString",R,C,N,V_viewingCountText
// Property: fullCellSize; attributes: T{CGSize=dd},R,N,V_fullCellSize
// Property: previewImage; attributes: T@"UIImage",R,C,N,V_previewImage
// Property: cellType; attributes: TQ,R,N,V_cellType

// -[SCLensExplorerStoryViewModel loggingIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066a4a58

// -[SCLensExplorerStoryViewModel loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x1066a4a9c

// -[SCLensExplorerStoryViewModel diffIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066a4a14

// -[SCLensExplorerStoryViewModel initWithStoryItem:viewingCountText:fullCellSize:previewImage:cellType:]
// Type encoding: @64@0:8@16@24{CGSize=dd}32@48Q56
// Implementation: 0x106710af0

// -[SCLensExplorerStoryViewModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106710bec

// -[SCLensExplorerStoryViewModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x106710c10

// -[SCLensExplorerStoryViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106710cd8

// -[SCLensExplorerStoryViewModel storyItem]
// Type encoding: @16@0:8
// Implementation: 0x106710dcc

// -[SCLensExplorerStoryViewModel viewingCountText]
// Type encoding: @16@0:8
// Implementation: 0x106710dd4

// -[SCLensExplorerStoryViewModel fullCellSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106710ddc

// -[SCLensExplorerStoryViewModel previewImage]
// Type encoding: @16@0:8
// Implementation: 0x106710de4

// -[SCLensExplorerStoryViewModel cellType]
// Type encoding: Q16@0:8
// Implementation: 0x106710dec

// -[SCLensExplorerStoryViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106710df4

// +[SCLensExplorerStoryViewModel cellViewModelWithStoryItem:index:sectionIndex:isTextRightToLeftDirection:]
// Type encoding: @44@0:8@16Q24Q32B40
// Implementation: 0x1066a45c8

// +[SCLensExplorerStoryViewModel cellViewModelWithViewModel:previewImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066a46d8

// +[SCLensExplorerStoryViewModel _updatedLoggingIndexForStoryItem:index:sectionIndex:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1066a475c

// +[SCLensExplorerStoryViewModel _cellTypeForStoryItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1066a4878

// +[SCLensExplorerStoryViewModel _preferredSizeForCellType:]
// Type encoding: {CGSize=dd}24@0:8Q16
// Implementation: 0x1066a4994

@end
