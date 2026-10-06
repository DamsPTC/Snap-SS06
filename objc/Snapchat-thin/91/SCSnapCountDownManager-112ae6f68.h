// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapCountDownManager
// Superclass: NSObject
// Address: 0x112ae6f68

@interface SCSnapCountDownManager


// -[SCSnapCountDownManager init]
// Type encoding: @16@0:8
// Implementation: 0x1065a1fe8

// -[SCSnapCountDownManager initWithTimeProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065a2030

// -[SCSnapCountDownManager registerCountDownTimerWithStartCountDownTime:duration:isInfinite:snapId:conversationId:]
// Type encoding: v52@0:8@16d24B32@36@44
// Implementation: 0x1065a2140

// -[SCSnapCountDownManager removeCountDownTimerForSnap:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a2328

// -[SCSnapCountDownManager setCountDownTimerPaused:snapId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1065a245c

// -[SCSnapCountDownManager secondsPlayedForSnap:]
// Type encoding: d24@0:8@16
// Implementation: 0x1065a2674

// -[SCSnapCountDownManager secondsLeftForSnap:]
// Type encoding: d24@0:8@16
// Implementation: 0x1065a2728

// -[SCSnapCountDownManager durationForSnap:]
// Type encoding: d24@0:8@16
// Implementation: 0x1065a27d4

// -[SCSnapCountDownManager hasCountDownUnitForSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065a2880

// -[SCSnapCountDownManager countDownDataForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065a290c

// -[SCSnapCountDownManager activeCountdownsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1065a2990

// -[SCSnapCountDownManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a29b8

@end
