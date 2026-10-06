// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPowerStateManager
// Superclass: NSObject
// Address: 0x112a86578

@interface SCSpectaclesPowerStateManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentPowerState; attributes: T@"SCSpectaclesPowerState",R,N,V_currentPowerState
// Property: currentPowerStateObservable; attributes: T@"SCObservable",R,N,V_currentPowerStateObservable
// Property: bootCompleteObservable; attributes: T@"SCObservable",R,N,V_bootCompleteObservable

// -[SCSpectaclesPowerStateManager initWithCurrentDevice:connectionHub:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a69b30

// -[SCSpectaclesPowerStateManager _handleConnectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a69ddc

// -[SCSpectaclesPowerStateManager _handleNewQCOMState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a69e40

// -[SCSpectaclesPowerStateManager _handleBootCompleteEvent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a69ec4

// -[SCSpectaclesPowerStateManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a69f14

// -[SCSpectaclesPowerStateManager _handlePushMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6a07c

// -[SCSpectaclesPowerStateManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a6a194

// -[SCSpectaclesPowerStateManager requestCurrentPowerState]
// Type encoding: v16@0:8
// Implementation: 0x105a6a19c

// -[SCSpectaclesPowerStateManager turnOnDevice]
// Type encoding: v16@0:8
// Implementation: 0x105a6a1f4

// -[SCSpectaclesPowerStateManager turnOffDevice]
// Type encoding: v16@0:8
// Implementation: 0x105a6a258

// -[SCSpectaclesPowerStateManager currentPowerState]
// Type encoding: @16@0:8
// Implementation: 0x105a6a2bc

// -[SCSpectaclesPowerStateManager currentPowerStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a6a2c4

// -[SCSpectaclesPowerStateManager bootCompleteObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a6a2cc

// -[SCSpectaclesPowerStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a6a2d4

@end
