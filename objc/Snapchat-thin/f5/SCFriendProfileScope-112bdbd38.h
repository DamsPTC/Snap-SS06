// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendProfileScope
// Superclass: NSObject
// Address: 0x112bdbd38

@interface SCFriendProfileScope

// Property: friendProfileScopeOptions; attributes: T@"SCFriendProfileScopeOptionsClass",R,N,V_friendProfileScopeOptions
// Property: isOverlayPresentation; attributes: TB,R,N,V_isOverlayPresentation
// Property: isNavigationStyleVerticalForSnapProProfile; attributes: TB,R,N,V_isNavigationStyleVerticalForSnapProProfile
// Property: pageEntryType; attributes: Tq,R,N,V_pageEntryType
// Property: sourceSessionId; attributes: T@"NSString",R,C,N,V_sourceSessionId
// Property: suppressSnapProProfileOpen; attributes: TB,R,N,V_suppressSnapProProfileOpen
// Property: expandBitmojiHeader; attributes: TB,R,N,V_expandBitmojiHeader
// Property: launchBehavior; attributes: TQ,R,N,V_launchBehavior
// Property: flashbackId; attributes: T@"NSString",R,C,N,V_flashbackId
// Property: actionmojiId; attributes: T@"NSString",R,C,N,V_actionmojiId
// Property: configuration; attributes: T@"SCUnifiedPublicProfileScopeConfiguration",R,N,V_configuration
// Property: unifiedPublicProfileScopeDelegate; attributes: T@"<SCUnifiedPublicProfileScopeDelegate>",R,W,N,V_unifiedPublicProfileScopeDelegate
// Property: uiContainer; attributes: T@"<SCUIContainer>",R,N,V_uiContainer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: subject; attributes: T@"SCFriendProfileSubject",R,C,N,V_subject
// Property: sourcePage; attributes: Tq,R,N,V_sourcePage
// Property: hideRecursiveOptions; attributes: TB,R,N,V_hideRecursiveOptions
// Property: nonFriendAddSourceType; attributes: Tq,R,N,V_nonFriendAddSourceType
// Property: nonFriendAddPlacementType; attributes: Tq,R,N,V_nonFriendAddPlacementType
// Property: delegate; attributes: T@"<SCFriendProfileScopeDelegate>",R,W,N,V_delegate

// -[SCFriendProfileScope initFromOptions:]
// Type encoding: @96@0:8{SCFriendProfileScopeOptions=qBqqqBQ@@i}16
// Implementation: 0x108f7d52c

// -[SCFriendProfileScope initWithFriendProfileScopeOptions:uiContainer:userId:delegate:]
// Type encoding: @120@0:8{SCFriendProfileScopeOptions=qBqqqBQ@@i}16@96@104@112
// Implementation: 0x108f7d6bc

// -[SCFriendProfileScope initWithFriendProfileScopeOptions:uiContainer:snapchatter:delegate:]
// Type encoding: @120@0:8{SCFriendProfileScopeOptions=qBqqqBQ@@i}16@96@104@112
// Implementation: 0x108f7d8e0

// -[SCFriendProfileScope initWithPageEntryTypeOptions:uiContainer:snapchatter:delegate:]
// Type encoding: @136@0:8{SCFriendProfilePageEntryTypeOptions={SCFriendProfileScopeOptions=qBqqqBQ@@i}@B}16@112@120@128
// Implementation: 0x108f7daac

// -[SCFriendProfileScope initWithNavigationStyleVerticalOptions:uiContainer:snapchatter:delegate:]
// Type encoding: @128@0:8{SCFriendProfileIsNavigationStyleVerticalOptions={SCFriendProfileScopeOptions=qBqqqBQ@@i}B}16@104@112@120
// Implementation: 0x108f7dcfc

// -[SCFriendProfileScope initWithOptionsClass:uiContainer:userId:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108f7df40

// -[SCFriendProfileScope initWithConfiguration:options:uiContainer:userId:snapchatter:delegate:unifiedPublicProfileScopeDelegate:]
// Type encoding: @144@0:8@16{SCFriendProfileScopeOptions=qBqqqBQ@@i}24@104@112@120@128@136
// Implementation: 0x108f7e168

// -[SCFriendProfileScope hideRecursiveOptions]
// Type encoding: B16@0:8
// Implementation: 0x108f7e450

// -[SCFriendProfileScope nonFriendAddPlacementType]
// Type encoding: q16@0:8
// Implementation: 0x108f7e458

// -[SCFriendProfileScope delegate]
// Type encoding: @16@0:8
// Implementation: 0x108f7e460

// -[SCFriendProfileScope nonFriendAddSourceType]
// Type encoding: q16@0:8
// Implementation: 0x108f7e478

// -[SCFriendProfileScope subject]
// Type encoding: @16@0:8
// Implementation: 0x108f7e480

// -[SCFriendProfileScope uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x108f7e488

// -[SCFriendProfileScope sourcePage]
// Type encoding: q16@0:8
// Implementation: 0x108f7e490

// -[SCFriendProfileScope userId]
// Type encoding: @16@0:8
// Implementation: 0x108f7e498

// -[SCFriendProfileScope suppressSnapProProfileOpen]
// Type encoding: B16@0:8
// Implementation: 0x108f7e4a0

// -[SCFriendProfileScope expandBitmojiHeader]
// Type encoding: B16@0:8
// Implementation: 0x108f7e4a8

// -[SCFriendProfileScope pageEntryType]
// Type encoding: q16@0:8
// Implementation: 0x108f7e4b0

// -[SCFriendProfileScope sourceSessionId]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4b8

// -[SCFriendProfileScope friendProfileScopeOptions]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4c0

// -[SCFriendProfileScope isOverlayPresentation]
// Type encoding: B16@0:8
// Implementation: 0x108f7e4c8

// -[SCFriendProfileScope isNavigationStyleVerticalForSnapProProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f7e4d0

// -[SCFriendProfileScope launchBehavior]
// Type encoding: Q16@0:8
// Implementation: 0x108f7e4d8

// -[SCFriendProfileScope flashbackId]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4e0

// -[SCFriendProfileScope actionmojiId]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4e8

// -[SCFriendProfileScope configuration]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4f0

// -[SCFriendProfileScope unifiedPublicProfileScopeDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108f7e4f8

// -[SCFriendProfileScope .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f7e510

@end
