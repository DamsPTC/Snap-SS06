// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceConnectionHub
// Superclass: NSObject
// Address: 0x112b43308

@interface SCSpectaclesDeviceConnectionHub

// Property: peripheral; attributes: T@"<SCSpectaclesPeripheral>",&,N,V_peripheral
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDeviceConnectionHub init]
// Type encoding: @16@0:8
// Implementation: 0x106e99b64

// -[SCSpectaclesDeviceConnectionHub peripheral]
// Type encoding: @16@0:8
// Implementation: 0x106e99c44

// -[SCSpectaclesDeviceConnectionHub setPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99c8c

// -[SCSpectaclesDeviceConnectionHub sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99cdc

// -[SCSpectaclesDeviceConnectionHub sendRequest:responseBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106e99cec

// -[SCSpectaclesDeviceConnectionHub addResponseMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99e58

// -[SCSpectaclesDeviceConnectionHub removeResponseMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99e90

// -[SCSpectaclesDeviceConnectionHub addPushMessageMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99e98

// -[SCSpectaclesDeviceConnectionHub removePushMessageMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99f40

// -[SCSpectaclesDeviceConnectionHub sendStartBTRequestWithBluetoothDisplayName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e99fc8

// -[SCSpectaclesDeviceConnectionHub sendStopBTRequest]
// Type encoding: v16@0:8
// Implementation: 0x106e9a050

// -[SCSpectaclesDeviceConnectionHub sendDeviceInfoRequestWithSupportsHevc:enableLocation:forceBoot:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x106e9a094

// -[SCSpectaclesDeviceConnectionHub ambaWatchdogKick]
// Type encoding: v16@0:8
// Implementation: 0x106e9a148

// -[SCSpectaclesDeviceConnectionHub clearCrashReport]
// Type encoding: v16@0:8
// Implementation: 0x106e9a18c

// -[SCSpectaclesDeviceConnectionHub cancelBackupForIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9a1d0

// -[SCSpectaclesDeviceConnectionHub resumeBackup]
// Type encoding: v16@0:8
// Implementation: 0x106e9a214

// -[SCSpectaclesDeviceConnectionHub shareWifiCredentialsWithSSID:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9a258

// -[SCSpectaclesDeviceConnectionHub requestClientId]
// Type encoding: v16@0:8
// Implementation: 0x106e9a29c

// -[SCSpectaclesDeviceConnectionHub sendAuthzCode:codeVerifier:redirectUri:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e9a2e0

// -[SCSpectaclesDeviceConnectionHub sendAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: v88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106e9a324

// -[SCSpectaclesDeviceConnectionHub requestWifiAPList]
// Type encoding: v16@0:8
// Implementation: 0x106e9a380

// -[SCSpectaclesDeviceConnectionHub requestLastCloudUploadTime]
// Type encoding: v16@0:8
// Implementation: 0x106e9a3c4

// -[SCSpectaclesDeviceConnectionHub registerForEvents]
// Type encoding: v16@0:8
// Implementation: 0x106e9a408

// -[SCSpectaclesDeviceConnectionHub unregisterForEvents]
// Type encoding: v16@0:8
// Implementation: 0x106e9a44c

// -[SCSpectaclesDeviceConnectionHub handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9a490

// -[SCSpectaclesDeviceConnectionHub responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106e9a578

// -[SCSpectaclesDeviceConnectionHub _myUUID]
// Type encoding: @16@0:8
// Implementation: 0x106e9a580

// -[SCSpectaclesDeviceConnectionHub _findAndDequeuePendingRequestMessageForResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e9a5cc

// -[SCSpectaclesDeviceConnectionHub _cleanupStalePendingRequests]
// Type encoding: v16@0:8
// Implementation: 0x106e9a6d8

// -[SCSpectaclesDeviceConnectionHub _handlePushMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9aadc

// -[SCSpectaclesDeviceConnectionHub .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e9ac34

@end
