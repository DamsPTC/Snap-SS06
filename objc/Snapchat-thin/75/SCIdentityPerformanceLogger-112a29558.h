// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIdentityPerformanceLogger
// Superclass: NSObject
// Address: 0x112a29558

@interface SCIdentityPerformanceLogger

// Property: authenticationSessionInfoProvider; attributes: T@"SCLazy",R,N,V_authenticationSessionInfoProvider
// Property: lastLoginInfoRepository; attributes: T@"SCLazy",R,N,V_lastLoginInfoRepository
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCIdentityPerformanceLogger addPathFrom:to:inGraph:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105304204

// -[SCIdentityPerformanceLogger addPathFrom:toSCAPageType:inGraph:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105304284

// -[SCIdentityPerformanceLogger initWithGrapheneRegistry:userNotTrackedLogger:lastLoginInfoRepository:authenticationSessionInfoProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105304304

// -[SCIdentityPerformanceLogger logState:triggeredBy:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10530451c

// -[SCIdentityPerformanceLogger logState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105304588

// -[SCIdentityPerformanceLogger resetTransitionVisits]
// Type encoding: v16@0:8
// Implementation: 0x105304590

// -[SCIdentityPerformanceLogger _resetTransitionVisitsOnPerformer]
// Type encoding: v16@0:8
// Implementation: 0x105304664

// -[SCIdentityPerformanceLogger logUserTrackedState:triggeredBy:userId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10530466c

// -[SCIdentityPerformanceLogger logStateFromString:triggeredBy:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053046f4

// -[SCIdentityPerformanceLogger logStateFromString:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053046f8

// -[SCIdentityPerformanceLogger buildGraph]
// Type encoding: @16@0:8
// Implementation: 0x105304700

// -[SCIdentityPerformanceLogger newEvent]
// Type encoding: @16@0:8
// Implementation: 0x10530471c

// -[SCIdentityPerformanceLogger logTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x105304728

// -[SCIdentityPerformanceLogger logUserTrackedTransition:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105304730

// -[SCIdentityPerformanceLogger _logGrapheneEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105304734

// -[SCIdentityPerformanceLogger _logStateFromString:triggeredBy:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105304b18

// -[SCIdentityPerformanceLogger _logUserTrackedStateFromString:triggeredBy:userId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105304c50

// -[SCIdentityPerformanceLogger _doLogStateFromString:triggeredBy:userId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105304db8

// -[SCIdentityPerformanceLogger _doLogSingleState:triggeredBy:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105304e40

// -[SCIdentityPerformanceLogger _logTransition:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105304f44

// -[SCIdentityPerformanceLogger stringWithBool:]
// Type encoding: @20@0:8B16
// Implementation: 0x10530503c

// -[SCIdentityPerformanceLogger _hasLoggedInBefore]
// Type encoding: B16@0:8
// Implementation: 0x105305078

// -[SCIdentityPerformanceLogger _setHasLoggedInBeforeOnEvent:withValue:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053050b8

// -[SCIdentityPerformanceLogger authenticationSessionInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x105305184

// -[SCIdentityPerformanceLogger lastLoginInfoRepository]
// Type encoding: @16@0:8
// Implementation: 0x10530518c

// -[SCIdentityPerformanceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105305194

@end
