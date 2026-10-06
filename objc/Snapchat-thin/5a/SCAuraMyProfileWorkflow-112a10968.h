// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraMyProfileWorkflow
// Superclass: NSObject
// Address: 0x112a10968

@interface SCAuraMyProfileWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuraMyProfileWorkflow initWithRouter:birthInfoDataManager:auraDataManager:auraLogger:delegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105002c60

// -[SCAuraMyProfileWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105002db0

// -[SCAuraMyProfileWorkflow _presentMyPersonalityProfile]
// Type encoding: v16@0:8
// Implementation: 0x1050031cc

// -[SCAuraMyProfileWorkflow _presentDiviningPage]
// Type encoding: v16@0:8
// Implementation: 0x1050032dc

// -[SCAuraMyProfileWorkflow _presentBirthInfoPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105003418

// -[SCAuraMyProfileWorkflow _presentAlertMessageThenFinishWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105003594

// -[SCAuraMyProfileWorkflow dismissedWithBirthInfoUpdated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105003600

// -[SCAuraMyProfileWorkflow diviningPageUpdateAuraDataCompletionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10500369c

// -[SCAuraMyProfileWorkflow diviningPageDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10500374c

// -[SCAuraMyProfileWorkflow diviningPageDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x10500392c

// -[SCAuraMyProfileWorkflow diviningPageDidFail]
// Type encoding: v16@0:8
// Implementation: 0x105003980

// -[SCAuraMyProfileWorkflow dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105003984

// -[SCAuraMyProfileWorkflow introCardDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x1050039d8

// -[SCAuraMyProfileWorkflow introCardDidContinue]
// Type encoding: v16@0:8
// Implementation: 0x105003a2c

// -[SCAuraMyProfileWorkflow willBeginPresentingOpera]
// Type encoding: v16@0:8
// Implementation: 0x105003a34

// -[SCAuraMyProfileWorkflow willBeginDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x105003ac8

// -[SCAuraMyProfileWorkflow didCancelDismissingOpera]
// Type encoding: v16@0:8
// Implementation: 0x105003b38

// -[SCAuraMyProfileWorkflow didTearDownOpera]
// Type encoding: v16@0:8
// Implementation: 0x105003ba8

// -[SCAuraMyProfileWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105003bfc

@end
