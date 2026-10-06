// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationRegisterTokenClient
// Superclass: NSObject
// Address: 0x112b24ea8

@interface SCNotificationRegisterTokenClient


// -[SCNotificationRegisterTokenClient initWithEndpointAddress:unifiedGRPCFactory:userId:asyncQueue:appId:]
// Type encoding: @52@0:8@16@24@32@40i48
// Implementation: 0x106c3e104

// -[SCNotificationRegisterTokenClient initUserId:pndrService:asyncQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c3e348

// -[SCNotificationRegisterTokenClient _createServiceWithEndpointAddress:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c3e414

// -[SCNotificationRegisterTokenClient registerApnsToken:encryptionKey:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c3e504

// -[SCNotificationRegisterTokenClient registerVoipToken:encryptionKey:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c3e51c

// -[SCNotificationRegisterTokenClient registerLPSEToken:encryptionKey:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c3e52c

// -[SCNotificationRegisterTokenClient _registerToken:tokenType:encryptionKey:onComplete:]
// Type encoding: v44@0:8@16i24@28@?36
// Implementation: 0x106c3e53c

// -[SCNotificationRegisterTokenClient _registerToken:tokenType:encryptionKey:uploadDeviceId:enableBundleIdLogging:onComplete:]
// Type encoding: v52@0:8@16i24@28B36B40@?44
// Implementation: 0x106c3e54c

// -[SCNotificationRegisterTokenClient _registerTokenRemotely:callOptionsBuilder:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c3e9f4

// -[SCNotificationRegisterTokenClient _updateDeviceTokensRemotely:callOptionsBuilder:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c3eb84

// -[SCNotificationRegisterTokenClient _getUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c3ed14

// -[SCNotificationRegisterTokenClient _formatTokenTypeToString:]
// Type encoding: @20@0:8i16
// Implementation: 0x106c3eddc

// -[SCNotificationRegisterTokenClient _getReleaseType:]
// Type encoding: i24@0:8@16
// Implementation: 0x106c3ee04

// -[SCNotificationRegisterTokenClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c3eea4

@end
