// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraFriendProfileWorkflow
// Superclass: NSObject
// Address: 0x112a108c8

@interface SCAuraFriendProfileWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuraFriendProfileWorkflow initWithRouter:birthInfoDataManager:auraDataManager:snapchattersDataFetcher:auraLogger:friendUserId:delegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105000e04

// -[SCAuraFriendProfileWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105000fac

// -[SCAuraFriendProfileWorkflow _updateSnapchatterAndPresentActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x105001170

// -[SCAuraFriendProfileWorkflow didSelectedPersonalityProfile]
// Type encoding: v16@0:8
// Implementation: 0x1050012ac

// -[SCAuraFriendProfileWorkflow _presentPersonalityProfile]
// Type encoding: v16@0:8
// Implementation: 0x105001478

// -[SCAuraFriendProfileWorkflow _presentPersonalityDiviningPage]
// Type encoding: v16@0:8
// Implementation: 0x1050015c0

// -[SCAuraFriendProfileWorkflow didSelectedCompatibilityProfile]
// Type encoding: v16@0:8
// Implementation: 0x1050016fc

// -[SCAuraFriendProfileWorkflow _fetchCompatibilityProfile:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105001ba8

// -[SCAuraFriendProfileWorkflow _presentCompatibilityProfile]
// Type encoding: v16@0:8
// Implementation: 0x105001c30

// -[SCAuraFriendProfileWorkflow _presentCompatibilityDiviningPage]
// Type encoding: v16@0:8
// Implementation: 0x105001d78

// -[SCAuraFriendProfileWorkflow _presentBirthInfoPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105001eb8

// -[SCAuraFriendProfileWorkflow actionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105002034

// -[SCAuraFriendProfileWorkflow introCardDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x105002088

// -[SCAuraFriendProfileWorkflow introCardDidContinue]
// Type encoding: v16@0:8
// Implementation: 0x1050020dc

// -[SCAuraFriendProfileWorkflow dismissedWithBirthInfoUpdated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050020e4

// -[SCAuraFriendProfileWorkflow diviningPageUpdateAuraDataCompletionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105002180

// -[SCAuraFriendProfileWorkflow diviningPageDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x105002234

// -[SCAuraFriendProfileWorkflow diviningPageDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x105002414

// -[SCAuraFriendProfileWorkflow diviningPageDidFail]
// Type encoding: v16@0:8
// Implementation: 0x105002468

// -[SCAuraFriendProfileWorkflow dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105002470

// -[SCAuraFriendProfileWorkflow willBeginPresentingOpera]
// Type encoding: v16@0:8
// Implementation: 0x1050024ec

// -[SCAuraFriendProfileWorkflow willBeginDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x105002540

// -[SCAuraFriendProfileWorkflow didCancelDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x10500256c

// -[SCAuraFriendProfileWorkflow didTearDownOpera]
// Type encoding: v16@0:8
// Implementation: 0x105002598

// -[SCAuraFriendProfileWorkflow _presentAlertMessageThenFinishWorkflow:]
// Type encoding: v24@0:8q16
// Implementation: 0x1050025ec

// -[SCAuraFriendProfileWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105002664

@end
