// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockablesNetworkFactory
// Superclass: NSObject
// Address: 0x112a4e768

@interface SCUnlockablesNetworkFactory

// Property: gtqRequestManager; attributes: T@"SCLazy",&,N,V_gtqRequestManager
// Property: requestInfoProvider; attributes: T@"SCLazy",&,N,V_requestInfoProvider
// Property: networkLogging; attributes: T@"<SCUnlockableNetworkLogging>",&,N,V_networkLogging
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: lensCoreVersionProvider; attributes: T@"<SCConfigVersionProviding>",&,N,V_lensCoreVersionProvider
// Property: lensSnapchatMapper; attributes: T@"SCLazy",&,N,V_lensSnapchatMapper
// Property: unlockableRemotePinner; attributes: T@"<SCUnlockableRemotePinning>",R,N
// Property: unlockableRemoteFetcher; attributes: T@"<SCUnlockLensRemoteFetching>",R,N
// Property: unlockManager; attributes: T@"<SCUnlockableUnlocking>",R,N
// Property: unlockableRemover; attributes: T@"<SCUnlockableRemoteRemoving>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockablesNetworkFactory initWithGtqRequestManager:requestInfoProvider:grapheneRegistry:circumstanceEngine:lensSnapchatMapper:lensCoreVersionProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100bc9dc8

// -[SCUnlockablesNetworkFactory unlockableRemotePinner]
// Type encoding: @16@0:8
// Implementation: 0x1055e7cf4

// -[SCUnlockablesNetworkFactory unlockableRemoteFetcher]
// Type encoding: @16@0:8
// Implementation: 0x1055e7cf8

// -[SCUnlockablesNetworkFactory unlockManager]
// Type encoding: @16@0:8
// Implementation: 0x1055e7d7c

// -[SCUnlockablesNetworkFactory unlockableRemover]
// Type encoding: @16@0:8
// Implementation: 0x1055e7dc8

// -[SCUnlockablesNetworkFactory unlockableNetworkManagerForNamespace:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100bc9fa0

// -[SCUnlockablesNetworkFactory _createGTQUnlockNetworkManager]
// Type encoding: @16@0:8
// Implementation: 0x1055e7e4c

// -[SCUnlockablesNetworkFactory _createGTQUnlockableNetworkManagerWithUnlocksNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x100bca0dc

// -[SCUnlockablesNetworkFactory _unlocksNamespaceFromUnlockableNetworkNamespace:]
// Type encoding: i24@0:8Q16
// Implementation: 0x100bca0cc

// -[SCUnlockablesNetworkFactory gtqRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x1055e7e84

// -[SCUnlockablesNetworkFactory setGtqRequestManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7e8c

// -[SCUnlockablesNetworkFactory requestInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x1055e7ebc

// -[SCUnlockablesNetworkFactory setRequestInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7ec4

// -[SCUnlockablesNetworkFactory networkLogging]
// Type encoding: @16@0:8
// Implementation: 0x1055e7ef4

// -[SCUnlockablesNetworkFactory setNetworkLogging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7efc

// -[SCUnlockablesNetworkFactory circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x1055e7f2c

// -[SCUnlockablesNetworkFactory setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7f34

// -[SCUnlockablesNetworkFactory lensCoreVersionProvider]
// Type encoding: @16@0:8
// Implementation: 0x1055e7f64

// -[SCUnlockablesNetworkFactory setLensCoreVersionProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7f6c

// -[SCUnlockablesNetworkFactory lensSnapchatMapper]
// Type encoding: @16@0:8
// Implementation: 0x1055e7f9c

// -[SCUnlockablesNetworkFactory setLensSnapchatMapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7fa4

// -[SCUnlockablesNetworkFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055e7fd4

@end
