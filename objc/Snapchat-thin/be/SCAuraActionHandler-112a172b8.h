// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraActionHandler
// Superclass: NSObject
// Address: 0x112a172b8

@interface SCAuraActionHandler

// Property: displayContentOverProfileDelegate; attributes: T@"<SCUnifiedProfileDisplayContentOverProfileDelegate>",W,N,V_displayContentOverProfileDelegate
// Property: isPresentingOpera; attributes: TB,R,N,V_isPresentingOpera
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCAuraActionHandler initWithAuraMyProfileScopeExposer:auraFriendProfileScopeExposer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050e9df8

// -[SCAuraActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1050e9e9c

// -[SCAuraActionHandler _launchMyProfileWorkflowWithSourceView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ea110

// -[SCAuraActionHandler _launchFriendProfileWorkflowWithFriend:fromSourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050ea214

// -[SCAuraActionHandler auraMyProfileWorkflowDidFinish]
// Type encoding: v16@0:8
// Implementation: 0x1050ea304

// -[SCAuraActionHandler auraMyProfileWorkflowWillBeginPresentingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea350

// -[SCAuraActionHandler auraMyProfileWorkflowWillBeginDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea384

// -[SCAuraActionHandler auraMyProfileWorkflowDidCancelDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea3b4

// -[SCAuraActionHandler auraFriendProfileWorkflowDidFinish]
// Type encoding: v16@0:8
// Implementation: 0x1050ea3e8

// -[SCAuraActionHandler auraFriendProfileWorkflowWillBeginPresentingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea434

// -[SCAuraActionHandler auraFriendProfileWorkflowWillBeginDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea468

// -[SCAuraActionHandler auraFriendProfileWorkflowDidCancelDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050ea498

// -[SCAuraActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1050ea4cc

// -[SCAuraActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ea4e4

// -[SCAuraActionHandler displayContentOverProfileDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1050ea4f0

// -[SCAuraActionHandler setDisplayContentOverProfileDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ea508

// -[SCAuraActionHandler isPresentingOpera]
// Type encoding: B16@0:8
// Implementation: 0x1050ea514

// -[SCAuraActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050ea51c

@end
