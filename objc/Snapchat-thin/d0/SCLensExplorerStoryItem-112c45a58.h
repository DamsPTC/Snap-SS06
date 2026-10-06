// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerStoryItem
// Superclass: NSObject
// Address: 0x112c45a58

@interface SCLensExplorerStoryItem

// Property: identifier; attributes: T@"<NSObject><NSCopying>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: itemId; attributes: T@"NSString",R,C,N,V_itemId
// Property: previewUrl; attributes: T@"NSURL",R,C,N,V_previewUrl
// Property: previewKey; attributes: T@"NSString",R,C,N,V_previewKey
// Property: previewIv; attributes: T@"NSString",R,C,N,V_previewIv
// Property: viewCount; attributes: Tq,R,N,V_viewCount
// Property: attachment; attributes: T@"SCLensExplorerStoryItemAttachment",R,C,N,V_attachment
// Property: loggingInfo; attributes: T@"SCLensExplorerLensItemLoggingInfo",R,C,N,V_loggingInfo

// -[SCLensExplorerStoryItem identifier]
// Type encoding: @16@0:8
// Implementation: 0x1066c2c70

// -[SCLensExplorerStoryItem initWithItemId:previewUrl:previewKey:previewIv:viewCount:attachment:loggingInfo:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x10afd87f0

// -[SCLensExplorerStoryItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afd8964

// -[SCLensExplorerStoryItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10afd8988

// -[SCLensExplorerStoryItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10afd8a38

// -[SCLensExplorerStoryItem itemId]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b50

// -[SCLensExplorerStoryItem previewUrl]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b58

// -[SCLensExplorerStoryItem previewKey]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b60

// -[SCLensExplorerStoryItem previewIv]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b68

// -[SCLensExplorerStoryItem viewCount]
// Type encoding: q16@0:8
// Implementation: 0x10afd8b70

// -[SCLensExplorerStoryItem attachment]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b78

// -[SCLensExplorerStoryItem loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10afd8b80

// -[SCLensExplorerStoryItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10afd8b88

// +[SCLensExplorerStoryItem lensExplorerItemWithTopicTile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c218c

// +[SCLensExplorerStoryItem lensExplorerItemWithTopicTile:containerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066c23e0

// +[SCLensExplorerStoryItem lensExplorerItemWithStoryTile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c2504

// +[SCLensExplorerStoryItem lensExplorerItemWithStoryTile:containerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066c26ac

@end
