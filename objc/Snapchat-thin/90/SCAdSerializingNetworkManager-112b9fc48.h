// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSerializingNetworkManager
// Superclass: NSObject
// Address: 0x112b9fc48

@interface SCAdSerializingNetworkManager

// Property: networkAdapter; attributes: T@"<SCAdNetworkAdapter>",&,N,V_networkAdapter
// Property: pendingRequests; attributes: T@"NSMutableArray",&,N,V_pendingRequests
// Property: activeRequest; attributes: T@"PendingNetworkRequest",&,N,V_activeRequest

// -[SCAdSerializingNetworkManager initWithNetworkAdapter:grapheneRegistryLazy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100b8f6b8

// -[SCAdSerializingNetworkManager submit:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x108489b14

// -[SCAdSerializingNetworkManager submit:useMainThread:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x108489b24

// -[SCAdSerializingNetworkManager onUserLogout]
// Type encoding: v16@0:8
// Implementation: 0x108489d80

// -[SCAdSerializingNetworkManager emitNextRequest]
// Type encoding: v16@0:8
// Implementation: 0x108489d88

// -[SCAdSerializingNetworkManager _onActiveRequestSuccess:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10848a06c

// -[SCAdSerializingNetworkManager _onActiveRequestFailure:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10848a120

// -[SCAdSerializingNetworkManager _logRequest:isScheduled:isEmitted:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10848a1d4

// -[SCAdSerializingNetworkManager networkAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10848a590

// -[SCAdSerializingNetworkManager setNetworkAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848a598

// -[SCAdSerializingNetworkManager pendingRequests]
// Type encoding: @16@0:8
// Implementation: 0x10848a5c8

// -[SCAdSerializingNetworkManager setPendingRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848a5d0

// -[SCAdSerializingNetworkManager activeRequest]
// Type encoding: @16@0:8
// Implementation: 0x10848a600

// -[SCAdSerializingNetworkManager setActiveRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848a608

// -[SCAdSerializingNetworkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10848a638

@end
