// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdNetworkResponseLoggerImpl
// Superclass: NSObject
// Address: 0x112a38f58

@interface SCAdNetworkResponseLoggerImpl

// Property: logTypeToLogInfoMapping; attributes: T@"NSMutableDictionary",R,N,V_logTypeToLogInfoMapping
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdNetworkResponseLoggerImpl init]
// Type encoding: @16@0:8
// Implementation: 0x10544c620

// -[SCAdNetworkResponseLoggerImpl logNetworkRequestInfo:adIdentifiers:logContextType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10544c6ec

// -[SCAdNetworkResponseLoggerImpl loadRequestData:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10544c86c

// -[SCAdNetworkResponseLoggerImpl _logNetworkRequestInfo:adIdentifiers:logContextType:timestamp:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10544c984

// -[SCAdNetworkResponseLoggerImpl _loadRequestData:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10544cbb4

// -[SCAdNetworkResponseLoggerImpl _formatAdIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x10544cef0

// -[SCAdNetworkResponseLoggerImpl logTypeToLogInfoMapping]
// Type encoding: @16@0:8
// Implementation: 0x10544cf94

// -[SCAdNetworkResponseLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10544cf9c

@end
