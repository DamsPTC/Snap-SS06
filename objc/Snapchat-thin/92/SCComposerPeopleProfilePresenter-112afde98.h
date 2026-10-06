// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleProfilePresenter
// Superclass: NSObject
// Address: 0x112afde98

@interface SCComposerPeopleProfilePresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleProfilePresenter initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:friendProfileScopeExposer:chatPresenter:callLauncher:uiContainer:circumstanceEngine:composerDeckConverter:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1067ce318

// -[SCComposerPeopleProfilePresenter presentProfileForUser:userId:analyticsContext:expandBitmojiHeader:deckContainerFactory:shouldFetchPublicInfo:]
// Type encoding: v56@0:8@16@24@32B40@44B52
// Implementation: 0x1067ce4c0

// -[SCComposerPeopleProfilePresenter _presentProfileWithSnapchatter:user:analyticsContext:expandBitmojiHeader:uiContainer:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1067ce9b0

// -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067cebb4

// -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1067cebfc

// -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:withRequestedCallInChat:media:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x1067cec08

// -[SCComposerPeopleProfilePresenter presentChat:deeplinkType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1067ceca4

// -[SCComposerPeopleProfilePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067cee5c

@end
