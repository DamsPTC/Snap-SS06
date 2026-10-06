// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCreatorCellViewModel
// Superclass: NSObject
// Address: 0x112af1d78

@interface SCLensExplorerCreatorCellViewModel

// Property: diffIdentifier; attributes: T@"NSString",R,N
// Property: loggingIdentifier; attributes: T@"NSString",R,N
// Property: loggingInfo; attributes: T@"SCLensExplorerLensItemLoggingInfo",R,N
// Property: creatorItem; attributes: T@"SCLensExplorerCreatorItem",R,C,N,V_creatorItem
// Property: creatorUserName; attributes: T@"NSAttributedString",R,C,N,V_creatorUserName
// Property: creatorUserId; attributes: T@"NSAttributedString",R,C,N,V_creatorUserId
// Property: lensPreviews; attributes: T@"NSArray",R,C,N,V_lensPreviews
// Property: previewIconSize; attributes: T{CGSize=dd},R,N,V_previewIconSize
// Property: previewContainerSize; attributes: T{CGSize=dd},R,N,V_previewContainerSize
// Property: fullCellSize; attributes: T{CGSize=dd},R,N,V_fullCellSize
// Property: avatarViewModel; attributes: T@"SCAvatarViewModel",R,C,N,V_avatarViewModel
// Property: hasStory; attributes: TB,R,N,V_hasStory

// -[SCLensExplorerCreatorCellViewModel loggingIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066a1f20

// -[SCLensExplorerCreatorCellViewModel loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x1066a1f64

// -[SCLensExplorerCreatorCellViewModel diffIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066a1edc

// -[SCLensExplorerCreatorCellViewModel isLoadingViewModel]
// Type encoding: B16@0:8
// Implementation: 0x1066a1d5c

// -[SCLensExplorerCreatorCellViewModel initWithCreatorItem:creatorUserName:creatorUserId:lensPreviews:previewIconSize:previewContainerSize:fullCellSize:avatarViewModel:hasStory:]
// Type encoding: @108@0:8@16@24@32@40{CGSize=dd}48{CGSize=dd}64{CGSize=dd}80@96B104
// Implementation: 0x10670f7d4

// -[SCLensExplorerCreatorCellViewModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10670f958

// -[SCLensExplorerCreatorCellViewModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x10670f97c

// -[SCLensExplorerCreatorCellViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10670fae0

// -[SCLensExplorerCreatorCellViewModel creatorItem]
// Type encoding: @16@0:8
// Implementation: 0x10670fc4c

// -[SCLensExplorerCreatorCellViewModel creatorUserName]
// Type encoding: @16@0:8
// Implementation: 0x10670fc54

// -[SCLensExplorerCreatorCellViewModel creatorUserId]
// Type encoding: @16@0:8
// Implementation: 0x10670fc5c

// -[SCLensExplorerCreatorCellViewModel lensPreviews]
// Type encoding: @16@0:8
// Implementation: 0x10670fc64

// -[SCLensExplorerCreatorCellViewModel previewIconSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10670fc6c

// -[SCLensExplorerCreatorCellViewModel previewContainerSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10670fc74

// -[SCLensExplorerCreatorCellViewModel fullCellSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10670fc7c

// -[SCLensExplorerCreatorCellViewModel avatarViewModel]
// Type encoding: @16@0:8
// Implementation: 0x10670fc84

// -[SCLensExplorerCreatorCellViewModel hasStory]
// Type encoding: B16@0:8
// Implementation: 0x10670fc8c

// -[SCLensExplorerCreatorCellViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10670fc94

// +[SCLensExplorerCreatorCellViewModel cellViewModelWithCreatoreItem:index:sectionIndex:isTextRightToLeftDirection:previewsLimit:previewContainerSize:fullCellSize:styleOverride:]
// Type encoding: @92@0:8@16Q24Q32B40q44{CGSize=dd}52{CGSize=dd}68Q84
// Implementation: 0x1066a1548

// +[SCLensExplorerCreatorCellViewModel cellViewModelWithViewModel:previewModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066a1a0c

// +[SCLensExplorerCreatorCellViewModel cellViewModelWithViewModel:avatarViewModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066a1bcc

// +[SCLensExplorerCreatorCellViewModel loadingCellViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1066a1c9c

// +[SCLensExplorerCreatorCellViewModel _updatedCreatorItem:index:sectionIndex:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1066a1dc0

@end
