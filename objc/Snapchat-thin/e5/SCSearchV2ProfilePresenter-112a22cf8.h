// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchV2ProfilePresenter
// Superclass: NSObject
// Address: 0x112a22cf8

@interface SCSearchV2ProfilePresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchV2ProfilePresenter initWithFriendProfileScopeExposer:groupProfileScopeExposer:chatScopeExposer:chatScopeServices:groupSnapchatterRepository:callLauncher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105213f40

// -[SCSearchV2ProfilePresenter presentProfileForSnapchatter:addSourceType:sourceSessionId:onViewController:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105214094

// -[SCSearchV2ProfilePresenter friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214248

// -[SCSearchV2ProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105214290

// -[SCSearchV2ProfilePresenter friendProfileDidDismiss:withRequestedCallInChat:media:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x10521429c

// -[SCSearchV2ProfilePresenter presentProfileForGroup:onViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105214328

// -[SCSearchV2ProfilePresenter groupProfileDidDimiss:withRequestedFriendshipProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105214414

// -[SCSearchV2ProfilePresenter groupProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1052145e0

// -[SCSearchV2ProfilePresenter groupProfileDidDismiss:withRequestedCallInChat:media:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x1052145ec

// -[SCSearchV2ProfilePresenter groupProfileWillDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214678

// -[SCSearchV2ProfilePresenter presentChat:deeplinkType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1052146c0

// -[SCSearchV2ProfilePresenter chatScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052147bc

// -[SCSearchV2ProfilePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105214804

@end
