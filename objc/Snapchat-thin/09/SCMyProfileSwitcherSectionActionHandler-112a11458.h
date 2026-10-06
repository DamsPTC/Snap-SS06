// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyProfileSwitcherSectionActionHandler
// Superclass: NSObject
// Address: 0x112a11458

@interface SCMyProfileSwitcherSectionActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCMyProfileSwitcherSectionActionHandler initWithPublicProfileId:profilesProvider:PublicProfileManagementScopeExposer:transitionToViewStateSubject:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10500c428

// -[SCMyProfileSwitcherSectionActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10500c524

// -[SCMyProfileSwitcherSectionActionHandler _fetchDataIfNecessaryAndLaunchPublicProfile]
// Type encoding: v16@0:8
// Implementation: 0x10500c590

// -[SCMyProfileSwitcherSectionActionHandler _launchPublicProfileAndSetHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10500c6d8

// -[SCMyProfileSwitcherSectionActionHandler _launchPublicProfile]
// Type encoding: v16@0:8
// Implementation: 0x10500c710

// -[SCMyProfileSwitcherSectionActionHandler impalaProfileDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10500ca5c

// -[SCMyProfileSwitcherSectionActionHandler impalaProfileNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x10500caa4

// -[SCMyProfileSwitcherSectionActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10500cb80

// -[SCMyProfileSwitcherSectionActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10500cb98

// -[SCMyProfileSwitcherSectionActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10500cba4

@end
