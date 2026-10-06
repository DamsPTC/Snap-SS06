// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendsOpenMiniProfileActionHandler
// Superclass: NSObject
// Address: 0x112b090b8

@interface SCAddFriendsOpenMiniProfileActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: addFriendsActionEventObservable; attributes: T@"SCObservable",&,N,V_addFriendsActionEventSubject
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069a15b8

// -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:preferPublicProfileViewState:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1069a15c0

// -[SCAddFriendsOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:preferPublicProfileViewState:actionSource:deckContainerFactory:]
// Type encoding: @44@0:8@16B24q28@36
// Implementation: 0x1069a15cc

// -[SCAddFriendsOpenMiniProfileActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1069a1688

// -[SCAddFriendsOpenMiniProfileActionHandler _exposeFriendProfileScopeWithSnapchatter:sourcePage:hideRecursiveOptions:nonFriendAddSourcetype:]
// Type encoding: v44@0:8@16q24B32q36
// Implementation: 0x1069a1864

// -[SCAddFriendsOpenMiniProfileActionHandler friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a19f8

// -[SCAddFriendsOpenMiniProfileActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1069a1a18

// -[SCAddFriendsOpenMiniProfileActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a1a30

// -[SCAddFriendsOpenMiniProfileActionHandler addFriendsActionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069a1a3c

// -[SCAddFriendsOpenMiniProfileActionHandler setAddFriendsActionEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a1a44

// -[SCAddFriendsOpenMiniProfileActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069a1a74

@end
