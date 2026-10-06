// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOCKSProxy
// Superclass: NSObject
// Address: 0x112b44708

@interface SOCKSProxy

// Property: listeningSocket; attributes: T@"GCDAsyncSocket",&,N,V_listeningSocket
// Property: listeningQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_listeningQueue
// Property: activeSockets; attributes: T@"NSMutableSet",&,V_activeSockets
// Property: totalBytesWritten; attributes: TQ,N,V_totalBytesWritten
// Property: totalBytesRead; attributes: TQ,N,V_totalBytesRead
// Property: authorizedUsers; attributes: T@"NSMutableDictionary",&,N,V_authorizedUsers
// Property: listeningPort; attributes: TS,R,N,V_listeningPort
// Property: delegate; attributes: T@"<SOCKSProxyDelegate>",W,N,V_delegate
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_callbackQueue
// Property: connectionCount; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOCKSProxy dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106eccaa0

// -[SOCKSProxy init]
// Type encoding: @16@0:8
// Implementation: 0x106eccae4

// -[SOCKSProxy startProxy]
// Type encoding: B16@0:8
// Implementation: 0x106eccb90

// -[SOCKSProxy startProxyOnPort:]
// Type encoding: B20@0:8S16
// Implementation: 0x106eccb98

// -[SOCKSProxy startProxyOnPort:error:]
// Type encoding: B28@0:8S16^@20
// Implementation: 0x106eccba0

// -[SOCKSProxy addAuthorizedUser:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eccc8c

// -[SOCKSProxy removeAuthorizedUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecccfc

// -[SOCKSProxy removeAllAuthorizedUsers]
// Type encoding: v16@0:8
// Implementation: 0x106eccd4c

// -[SOCKSProxy checkAuthorizationForUser:password:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106eccd7c

// -[SOCKSProxy socket:didAcceptNewSocket:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecce84

// -[SOCKSProxy connectionCount]
// Type encoding: Q16@0:8
// Implementation: 0x106ecd0cc

// -[SOCKSProxy disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106ecd108

// -[SOCKSProxy proxySocketDidDisconnect:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecd228

// -[SOCKSProxy proxySocket:didReadDataOfLength:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ecd3f8

// -[SOCKSProxy proxySocket:didWriteDataOfLength:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ecd424

// -[SOCKSProxy proxySocket:checkAuthorizationForUser:password:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106ecd450

// -[SOCKSProxy resetNetworkStatistics]
// Type encoding: v16@0:8
// Implementation: 0x106ecd45c

// -[SOCKSProxy listeningPort]
// Type encoding: S16@0:8
// Implementation: 0x106ecd488

// -[SOCKSProxy delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ecd490

// -[SOCKSProxy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd4a8

// -[SOCKSProxy callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ecd4b4

// -[SOCKSProxy setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd4bc

// -[SOCKSProxy totalBytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x106ecd4ec

// -[SOCKSProxy setTotalBytesWritten:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ecd4f4

// -[SOCKSProxy totalBytesRead]
// Type encoding: Q16@0:8
// Implementation: 0x106ecd4fc

// -[SOCKSProxy setTotalBytesRead:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ecd504

// -[SOCKSProxy listeningSocket]
// Type encoding: @16@0:8
// Implementation: 0x106ecd50c

// -[SOCKSProxy setListeningSocket:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd514

// -[SOCKSProxy listeningQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ecd544

// -[SOCKSProxy setListeningQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd54c

// -[SOCKSProxy activeSockets]
// Type encoding: @16@0:8
// Implementation: 0x106ecd57c

// -[SOCKSProxy setActiveSockets:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd588

// -[SOCKSProxy authorizedUsers]
// Type encoding: @16@0:8
// Implementation: 0x106ecd590

// -[SOCKSProxy setAuthorizedUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecd598

// -[SOCKSProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ecd5c8

@end
