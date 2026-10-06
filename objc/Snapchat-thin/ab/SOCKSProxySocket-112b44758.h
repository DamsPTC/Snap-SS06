// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOCKSProxySocket
// Superclass: NSObject
// Address: 0x112b44758

@interface SOCKSProxySocket

// Property: proxySocket; attributes: T@"GCDAsyncSocket",&,N,V_proxySocket
// Property: outgoingSocket; attributes: T@"GCDAsyncSocket",&,N,V_outgoingSocket
// Property: delegateQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_delegateQueue
// Property: totalBytesWritten; attributes: TQ,N,V_totalBytesWritten
// Property: totalBytesRead; attributes: TQ,N,V_totalBytesRead
// Property: username; attributes: T@"NSString",&,N,V_username
// Property: destinationPort; attributes: TS,R,N,V_destinationPort
// Property: destinationHost; attributes: T@"NSString",R,N,V_destinationHost
// Property: delegate; attributes: T@"<SOCKSProxySocketDelegate>",W,N,V_delegate
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_callbackQueue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOCKSProxySocket dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ecd624

// -[SOCKSProxySocket initWithSocket:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ecd668

// -[SOCKSProxySocket disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106ecd814

// -[SOCKSProxySocket socket:didReadData:withTag:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106ecd880

// -[SOCKSProxySocket socksOpen]
// Type encoding: v16@0:8
// Implementation: 0x106ece128

// -[SOCKSProxySocket socketDidDisconnect:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ece164

// -[SOCKSProxySocket socket:didConnectToHost:port:]
// Type encoding: v36@0:8@16@24S32
// Implementation: 0x106ece2a4

// -[SOCKSProxySocket destinationPort]
// Type encoding: S16@0:8
// Implementation: 0x106ece3c4

// -[SOCKSProxySocket destinationHost]
// Type encoding: @16@0:8
// Implementation: 0x106ece3cc

// -[SOCKSProxySocket delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ece3d4

// -[SOCKSProxySocket setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece3ec

// -[SOCKSProxySocket callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ece3f8

// -[SOCKSProxySocket setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece400

// -[SOCKSProxySocket totalBytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x106ece430

// -[SOCKSProxySocket setTotalBytesWritten:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ece438

// -[SOCKSProxySocket totalBytesRead]
// Type encoding: Q16@0:8
// Implementation: 0x106ece440

// -[SOCKSProxySocket setTotalBytesRead:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ece448

// -[SOCKSProxySocket proxySocket]
// Type encoding: @16@0:8
// Implementation: 0x106ece450

// -[SOCKSProxySocket setProxySocket:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece458

// -[SOCKSProxySocket outgoingSocket]
// Type encoding: @16@0:8
// Implementation: 0x106ece488

// -[SOCKSProxySocket setOutgoingSocket:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece490

// -[SOCKSProxySocket delegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ece4c0

// -[SOCKSProxySocket setDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece4c8

// -[SOCKSProxySocket username]
// Type encoding: @16@0:8
// Implementation: 0x106ece4f8

// -[SOCKSProxySocket setUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ece500

// -[SOCKSProxySocket .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ece530

@end
