// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareUpdateRPCClient
// Superclass: NSObject
// Address: 0x112a858f8

@interface SCSpectaclesFirmwareUpdateRPCClient

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: firmwareUpdateEventObservable; attributes: T@"SCObservable",R,N,V_firmwareUpdateEventObservable

// -[SCSpectaclesFirmwareUpdateRPCClient initWithConnectionHub:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a61884

// -[SCSpectaclesFirmwareUpdateRPCClient applyPatch]
// Type encoding: v16@0:8
// Implementation: 0x105a6192c

// -[SCSpectaclesFirmwareUpdateRPCClient applyFullUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a61970

// -[SCSpectaclesFirmwareUpdateRPCClient getChecksum]
// Type encoding: v16@0:8
// Implementation: 0x105a619b4

// -[SCSpectaclesFirmwareUpdateRPCClient rebootAndSwitchParition]
// Type encoding: v16@0:8
// Implementation: 0x105a619f8

// -[SCSpectaclesFirmwareUpdateRPCClient getScheduledUpdateStatus]
// Type encoding: v16@0:8
// Implementation: 0x105a61a3c

// -[SCSpectaclesFirmwareUpdateRPCClient scheduleUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a61a80

// -[SCSpectaclesFirmwareUpdateRPCClient cancelScheduledUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a61b6c

// -[SCSpectaclesFirmwareUpdateRPCClient disableFlightForRequiredUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a61bb0

// -[SCSpectaclesFirmwareUpdateRPCClient handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a61bf4

// -[SCSpectaclesFirmwareUpdateRPCClient responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a61cb4

// -[SCSpectaclesFirmwareUpdateRPCClient firmwareUpdateEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a61cbc

// -[SCSpectaclesFirmwareUpdateRPCClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a61cc4

@end
