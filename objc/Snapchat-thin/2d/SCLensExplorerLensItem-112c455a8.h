// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerLensItem
// Superclass: NSObject
// Address: 0x112c455a8

@interface SCLensExplorerLensItem

// Property: identifier; attributes: T@"<NSObject><NSCopying>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unlockableId; attributes: T@"NSString",R,C,N,V_unlockableId
// Property: lensName; attributes: T@"NSString",R,C,N,V_lensName
// Property: deeplinkURL; attributes: T@"NSURL",R,C,N,V_deeplinkURL
// Property: iconURL; attributes: T@"NSURL",R,C,N,V_iconURL
// Property: thumbnailMediaURL; attributes: T@"NSURL",R,C,N,V_thumbnailMediaURL
// Property: creator; attributes: T@"SCLensExplorerLensItemCreator",R,C,N,V_creator
// Property: animation; attributes: T@"SCLensExplorerLensItemAnimation",R,C,N,V_animation
// Property: loggingInfo; attributes: T@"SCLensExplorerLensItemLoggingInfo",R,C,N,V_loggingInfo
// Property: lensAttribution; attributes: TQ,R,N,V_lensAttribution
// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: viewCount; attributes: T@"NSNumber",R,C,N,V_viewCount
// Property: badgeData; attributes: T@"SCLensBadgeData",R,C,N,V_badgeData
// Property: isScpExclusive; attributes: TB,R,N,V_isScpExclusive
// Property: hasNewContent; attributes: T@"NSNumber",R,C,N,V_hasNewContent
// Property: consecutiveDaysPlayed; attributes: T@"NSNumber",R,C,N,V_consecutiveDaysPlayed
// Property: gamesMetadata; attributes: T@"SCLensExplorerLensItemGamesMetadata",R,C,N,V_gamesMetadata

// -[SCLensExplorerLensItem identifier]
// Type encoding: @16@0:8
// Implementation: 0x1066c2c6c

// -[SCLensExplorerLensItem mapToLensWithCategoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c196c

// -[SCLensExplorerLensItem mapToLensWithCategoryId:pickedLensSource:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1066c1974

// -[SCLensExplorerLensItem withLoggingInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c08d4

// -[SCLensExplorerLensItem initWithUnlockableId:lensName:deeplinkURL:iconURL:thumbnailMediaURL:creator:animation:loggingInfo:lensAttribution:isSponsored:viewCount:badgeData:isScpExclusive:hasNewContent:consecutiveDaysPlayed:gamesMetadata:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72Q80B88@92@100B108@112@120@128
// Implementation: 0x10afd47a8

// -[SCLensExplorerLensItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afd4aa0

// -[SCLensExplorerLensItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10afd4ac4

// -[SCLensExplorerLensItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10afd4bcc

// -[SCLensExplorerLensItem unlockableId]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dac

// -[SCLensExplorerLensItem lensName]
// Type encoding: @16@0:8
// Implementation: 0x10afd4db4

// -[SCLensExplorerLensItem deeplinkURL]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dbc

// -[SCLensExplorerLensItem iconURL]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dc4

// -[SCLensExplorerLensItem thumbnailMediaURL]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dcc

// -[SCLensExplorerLensItem creator]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dd4

// -[SCLensExplorerLensItem animation]
// Type encoding: @16@0:8
// Implementation: 0x10afd4ddc

// -[SCLensExplorerLensItem loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10afd4de4

// -[SCLensExplorerLensItem lensAttribution]
// Type encoding: Q16@0:8
// Implementation: 0x10afd4dec

// -[SCLensExplorerLensItem isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x10afd4df4

// -[SCLensExplorerLensItem viewCount]
// Type encoding: @16@0:8
// Implementation: 0x10afd4dfc

// -[SCLensExplorerLensItem badgeData]
// Type encoding: @16@0:8
// Implementation: 0x10afd4e04

// -[SCLensExplorerLensItem isScpExclusive]
// Type encoding: B16@0:8
// Implementation: 0x10afd4e0c

// -[SCLensExplorerLensItem hasNewContent]
// Type encoding: @16@0:8
// Implementation: 0x10afd4e14

// -[SCLensExplorerLensItem consecutiveDaysPlayed]
// Type encoding: @16@0:8
// Implementation: 0x10afd4e1c

// -[SCLensExplorerLensItem gamesMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10afd4e24

// -[SCLensExplorerLensItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10afd4e2c

// +[SCLensExplorerLensItem lensExplorerItemWithLensTile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c0b18

// +[SCLensExplorerLensItem lensExplorerItemWithLensTile:containerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066c1030

// +[SCLensExplorerLensItem lensExplorerItemWithLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c1120

// +[SCLensExplorerLensItem _imageURLsFromPattern:numberOfItems:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1066c1868

// +[SCLensExplorerLensItem _lensAttributionFromData:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1066c1954

@end
