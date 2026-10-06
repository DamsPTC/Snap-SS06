// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebServer
// Superclass: NSObject
// Address: 0x112b83958

@interface SCWebServer

// Property: serverURL; attributes: T@"NSURL",R,N
// Property: handlers; attributes: T@"NSArray",R,N,V_handlers
// Property: serverName; attributes: T@"NSString",R,N,V_serverName
// Property: authenticationRealm; attributes: T@"NSString",R,N,V_authenticationRealm
// Property: authenticationBasicAccounts; attributes: T@"NSDictionary",R,N,V_authenticationBasicAccounts
// Property: authenticationDigestAccounts; attributes: T@"NSDictionary",R,N,V_authenticationDigestAccounts
// Property: shouldAutomaticallyMapHEADToGET; attributes: TB,R,N,V_shouldAutomaticallyMapHEADToGET
// Property: ioQueuePriority; attributes: TI,R,N,V_ioQueuePriority
// Property: running; attributes: TB,R,N,GisRunning
// Property: port; attributes: TQ,R,N,V_port
// Property: webServerErrors; attributes: T@"SCObservable",R,N,V_webServerErrorsSubject
// Property: webServerConnectionStatus; attributes: T@"SCObservable",R,N,V_webServerConnectionStatusSubject

// -[SCWebServer serverURL]
// Type encoding: @16@0:8
// Implementation: 0x107dec4d8

// -[SCWebServer init]
// Type encoding: @16@0:8
// Implementation: 0x107dead9c

// -[SCWebServer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107deaea0

// -[SCWebServer _handleSocketError:error:]
// Type encoding: v28@0:8i16^@20
// Implementation: 0x107deaed4

// -[SCWebServer _didConnect]
// Type encoding: v16@0:8
// Implementation: 0x107deb00c

// -[SCWebServer willStartConnection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107deb018

// -[SCWebServer _didDisconnect]
// Type encoding: v16@0:8
// Implementation: 0x107deb144

// -[SCWebServer didEndConnection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107deb14c

// -[SCWebServer didUpdateConnectionStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x107deb224

// -[SCWebServer addHandlerWithMatchBlock:asyncProcessBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x107deb2bc

// -[SCWebServer _createListeningSocket:localAddress:length:maxPendingConnections:error:]
// Type encoding: i48@0:8B16r^v20I28Q32^@40
// Implementation: 0x107deb33c

// -[SCWebServer _createDispatchSourceWithListeningSocket:IPv6:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x107deb42c

// -[SCWebServer _start:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107deb908

// -[SCWebServer _stopConnections]
// Type encoding: v16@0:8
// Implementation: 0x107debcb0

// -[SCWebServer _stop]
// Type encoding: v16@0:8
// Implementation: 0x107debdac

// -[SCWebServer _didEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x107debf40

// -[SCWebServer _willEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x107debf50

// -[SCWebServer startWithOptions:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x107debf64

// -[SCWebServer _isListeningSocketAlive]
// Type encoding: B16@0:8
// Implementation: 0x107dec1a8

// -[SCWebServer isRunning]
// Type encoding: B16@0:8
// Implementation: 0x107dec238

// -[SCWebServer stop]
// Type encoding: v16@0:8
// Implementation: 0x107dec2d4

// -[SCWebServer handlers]
// Type encoding: @16@0:8
// Implementation: 0x107dec3c8

// -[SCWebServer port]
// Type encoding: Q16@0:8
// Implementation: 0x107dec3d0

// -[SCWebServer serverName]
// Type encoding: @16@0:8
// Implementation: 0x107dec3d8

// -[SCWebServer webServerErrors]
// Type encoding: @16@0:8
// Implementation: 0x107dec3e0

// -[SCWebServer webServerConnectionStatus]
// Type encoding: @16@0:8
// Implementation: 0x107dec3e8

// -[SCWebServer authenticationRealm]
// Type encoding: @16@0:8
// Implementation: 0x107dec3f0

// -[SCWebServer authenticationBasicAccounts]
// Type encoding: @16@0:8
// Implementation: 0x107dec3f8

// -[SCWebServer authenticationDigestAccounts]
// Type encoding: @16@0:8
// Implementation: 0x107dec400

// -[SCWebServer shouldAutomaticallyMapHEADToGET]
// Type encoding: B16@0:8
// Implementation: 0x107dec408

// -[SCWebServer ioQueuePriority]
// Type encoding: I16@0:8
// Implementation: 0x107dec410

// -[SCWebServer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107dec418

// +[SCWebServer initialize]
// Type encoding: v16@0:8
// Implementation: 0x107dead98

@end
