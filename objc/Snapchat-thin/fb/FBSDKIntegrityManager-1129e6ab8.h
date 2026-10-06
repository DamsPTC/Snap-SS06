// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKIntegrityManager
// Superclass: NSObject
// Address: 0x1129e6ab8

@interface FBSDKIntegrityManager

// Property: gateKeeperManager; attributes: T#,&,N,V_gateKeeperManager
// Property: integrityProcessor; attributes: T@"<FBSDKIntegrityProcessing>",W,N,V_integrityProcessor
// Property: isIntegrityEnabled; attributes: TB,N,V_isIntegrityEnabled
// Property: isSampleEnabled; attributes: TB,N,V_isSampleEnabled

// -[FBSDKIntegrityManager initWithGateKeeperManager:integrityProcessor:]
// Type encoding: @32@0:8#16@24
// Implementation: 0x10496bd30

// -[FBSDKIntegrityManager enable]
// Type encoding: v16@0:8
// Implementation: 0x10496bdb4

// -[FBSDKIntegrityManager processParameters:eventName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10496bdf8

// -[FBSDKIntegrityManager gateKeeperManager]
// Type encoding: #16@0:8
// Implementation: 0x10496c0ec

// -[FBSDKIntegrityManager setGateKeeperManager:]
// Type encoding: v24@0:8#16
// Implementation: 0x10496c0f4

// -[FBSDKIntegrityManager integrityProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10496c100

// -[FBSDKIntegrityManager setIntegrityProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496c118

// -[FBSDKIntegrityManager isIntegrityEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10496c124

// -[FBSDKIntegrityManager setIsIntegrityEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10496c12c

// -[FBSDKIntegrityManager isSampleEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10496c134

// -[FBSDKIntegrityManager setIsSampleEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10496c13c

// -[FBSDKIntegrityManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10496c144

@end
