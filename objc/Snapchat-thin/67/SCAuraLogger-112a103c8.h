// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraLogger
// Superclass: NSObject
// Address: 0x112a103c8

@interface SCAuraLogger

// Property: missingBirthdayAlertDisplayed; attributes: TB,V_missingBirthdayAlertDisplayed
// Property: introCardDisplayed; attributes: TB,V_introCardDisplayed
// Property: birthInfoPageDisplayed; attributes: TB,V_birthInfoPageDisplayed
// Property: diviningPageDisplayed; attributes: TB,V_diviningPageDisplayed
// Property: birthdayPartyDisabledAlertDisplayed; attributes: TB,V_birthdayPartyDisabledAlertDisplayed
// Property: operaDisplayed; attributes: TB,V_operaDisplayed

// -[SCAuraLogger initWithUserTrackedLogger:grapheneRegistry:source:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x104ff7060

// -[SCAuraLogger logAuraSessionDisplayedTime]
// Type encoding: v16@0:8
// Implementation: 0x104ff7164

// -[SCAuraLogger logAuraBirthDisplayedTime]
// Type encoding: v16@0:8
// Implementation: 0x104ff71e4

// -[SCAuraLogger logAuraSessionProfileType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ff7264

// -[SCAuraLogger logBirthInfoActionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ff72c8

// -[SCAuraLogger logAuraBirthInfoActionWithIsCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff732c

// -[SCAuraLogger logAuraSessionEndWithExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ff73d8

// -[SCAuraLogger logOperaAction:isBottomSnap:isSummarySnap:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x104ff746c

// -[SCAuraLogger logOperaSessionWithSnapViews:uniqueSnapViews:bottomSnapViews:uniqueBottomSnapViews:timeSpentSec:furthestViewedSnapIndex:totalSnaps:]
// Type encoding: v72@0:8q16q24q32q40d48q56q64
// Implementation: 0x104ff74e0

// -[SCAuraLogger logOperaSnapWithSnapIndex:timeSpentSec:isSummarySnap:displayedBottomSnap:]
// Type encoding: v40@0:8q16d24B32B36
// Implementation: 0x104ff7564

// -[SCAuraLogger _emitAuraBirthInfoActionWithScreenTimeS:isCancelled:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x104ff75e0

// -[SCAuraLogger _emitOperaAction:isBottomSnap:isSummarySnap:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x104ff7774

// -[SCAuraLogger _emitOperaSessionWithSnapViews:uniqueSnapViews:bottomSnapViews:uniqueBottomSnapViews:timeSpentSec:furthestViewedSnapIndex:totalSnaps:]
// Type encoding: v72@0:8q16q24q32q40d48q56q64
// Implementation: 0x104ff790c

// -[SCAuraLogger _emitOperaSnapWithSnapIndex:timeSpentSec:isSummarySnap:displayedBottomSnap:]
// Type encoding: v40@0:8q16d24B32B36
// Implementation: 0x104ff7bec

// -[SCAuraLogger _emitAuraSessionWithExitType:timeSpentS:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x104ff7e70

// -[SCAuraLogger logPromptBirthInfoPage]
// Type encoding: v16@0:8
// Implementation: 0x104ff80d4

// -[SCAuraLogger missingBirthdayAlertDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff8194

// -[SCAuraLogger setMissingBirthdayAlertDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff81a0

// -[SCAuraLogger introCardDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff81a8

// -[SCAuraLogger setIntroCardDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff81b4

// -[SCAuraLogger birthInfoPageDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff81bc

// -[SCAuraLogger setBirthInfoPageDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff81c8

// -[SCAuraLogger diviningPageDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff81d0

// -[SCAuraLogger setDiviningPageDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff81dc

// -[SCAuraLogger birthdayPartyDisabledAlertDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff81e4

// -[SCAuraLogger setBirthdayPartyDisabledAlertDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff81f0

// -[SCAuraLogger operaDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x104ff81f8

// -[SCAuraLogger setOperaDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ff8204

// -[SCAuraLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ff820c

@end
