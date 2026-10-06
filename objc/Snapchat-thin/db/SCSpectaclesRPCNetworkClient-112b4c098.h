// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesRPCNetworkClient
// Superclass: NSObject
// Address: 0x112b4c098

@interface SCSpectaclesRPCNetworkClient

// Property: connectivityDelegate; attributes: T@"<SCSpectaclesCommunicationClientConnectivityDelegate>",W,N,V_connectivityDelegate
// Property: messagingDelegate; attributes: T@"<SCSpectaclesCommunicationClientMessagingDelegate>",W,N,V_messagingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesRPCNetworkClient initWithSession:connectivityDelegate:messagingDelegate:rpcMessageFactory:packetEncryptorBuilder:enableEncryption:encryptionKey:]
// Type encoding: @68@0:8@16@24@32@40@48B56@60
// Implementation: 0x106f86904

// -[SCSpectaclesRPCNetworkClient start]
// Type encoding: v16@0:8
// Implementation: 0x106f86b24

// -[SCSpectaclesRPCNetworkClient suspend]
// Type encoding: v16@0:8
// Implementation: 0x106f86b2c

// -[SCSpectaclesRPCNetworkClient halt]
// Type encoding: v16@0:8
// Implementation: 0x106f86b38

// -[SCSpectaclesRPCNetworkClient isActive]
// Type encoding: B16@0:8
// Implementation: 0x106f86b8c

// -[SCSpectaclesRPCNetworkClient isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106f86b94

// -[SCSpectaclesRPCNetworkClient sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f86ba4

// -[SCSpectaclesRPCNetworkClient cancelOutstandingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106f86e18

// -[SCSpectaclesRPCNetworkClient _fireRequest:encryptMessage:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106f86e1c

// -[SCSpectaclesRPCNetworkClient _handleDataTaskComplete:rpcRequest:response:data:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106f8737c

// -[SCSpectaclesRPCNetworkClient _resumeAllTasks]
// Type encoding: v16@0:8
// Implementation: 0x106f87630

// -[SCSpectaclesRPCNetworkClient _suspendAllTasks]
// Type encoding: v16@0:8
// Implementation: 0x106f877e0

// -[SCSpectaclesRPCNetworkClient _cancelAllTasks]
// Type encoding: v16@0:8
// Implementation: 0x106f87990

// -[SCSpectaclesRPCNetworkClient _markURLTaskComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f87b40

// -[SCSpectaclesRPCNetworkClient _URLrequestWithRPCRequest:encryptMessage:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f87b48

// -[SCSpectaclesRPCNetworkClient _decorateURLRequest:encryptedMessage:contentLength:]
// Type encoding: @36@0:8@16B24Q28
// Implementation: 0x106f87d2c

// -[SCSpectaclesRPCNetworkClient _setupEncryption]
// Type encoding: v16@0:8
// Implementation: 0x106f87f98

// -[SCSpectaclesRPCNetworkClient _handleEncryptionSetupResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f880bc

// -[SCSpectaclesRPCNetworkClient connectivityDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f880e4

// -[SCSpectaclesRPCNetworkClient setConnectivityDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f880fc

// -[SCSpectaclesRPCNetworkClient messagingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f88108

// -[SCSpectaclesRPCNetworkClient setMessagingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f88120

// -[SCSpectaclesRPCNetworkClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f8812c

@end
