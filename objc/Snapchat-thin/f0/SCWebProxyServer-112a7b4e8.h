// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebProxyServer
// Superclass: NSObject
// Address: 0x112a7b4e8

@interface SCWebProxyServer

// Property: requestHandler; attributes: T@"<SCWebProxyRequestHandling>",R,W,N,V_requestHandler
// Property: running; attributes: TB,R,N,GisRunning
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebProxyServer initWithRequestHandler:applicationLifecycleEvents:useLastWebServerPortOnAppBackground:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1059079d4

// -[SCWebProxyServer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105907f6c

// -[SCWebProxyServer start]
// Type encoding: @16@0:8
// Implementation: 0x105907fb8

// -[SCWebProxyServer stop]
// Type encoding: v16@0:8
// Implementation: 0x1059081f0

// -[SCWebProxyServer forceRestart]
// Type encoding: @16@0:8
// Implementation: 0x105908270

// -[SCWebProxyServer isRunning]
// Type encoding: B16@0:8
// Implementation: 0x1059082dc

// -[SCWebProxyServer isProxiedURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x105908338

// -[SCWebProxyServer proxiedURLForRequestInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10590840c

// -[SCWebProxyServer _initWebServerObservers]
// Type encoding: v16@0:8
// Implementation: 0x1059084b0

// -[SCWebProxyServer _initWebServerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1059086e0

// -[SCWebProxyServer _handleWebServerRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059088e8

// -[SCWebProxyServer _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105908ed4

// -[SCWebProxyServer _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105908f58

// -[SCWebProxyServer _startupComplete]
// Type encoding: v16@0:8
// Implementation: 0x105908fa8

// -[SCWebProxyServer proxyURLProvider:baseURLForRequestInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105909060

// -[SCWebProxyServer _debugIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1059091bc

// -[SCWebProxyServer _serverState]
// Type encoding: @16@0:8
// Implementation: 0x105909200

// -[SCWebProxyServer requestHandler]
// Type encoding: @16@0:8
// Implementation: 0x1059092bc

// -[SCWebProxyServer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059092d4

@end
