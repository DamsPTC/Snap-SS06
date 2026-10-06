// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLagunaNetworkClient
// Superclass: NSObject
// Address: 0x112b4c188

@interface SCSpectaclesLagunaNetworkClient

// Property: connectivityDelegate; attributes: T@"<SCSpectaclesCommunicationClientConnectivityDelegate>",W,N,V_connectivityDelegate
// Property: messagingDelegate; attributes: T@"<SCSpectaclesCommunicationClientMessagingDelegate>",W,N,V_messagingDelegate
// Property: stream; attributes: T@"<SCSpectaclesCommunicationChannel>",&,N,V_stream
// Property: messageBuffer; attributes: T@"SCSpectaclesMessageBuffer",&,N,V_messageBuffer
// Property: encryptor; attributes: T@"SCSpectaclesAEADPacketEncryptor",&,N,V_encryptor
// Property: activityTimer; attributes: T@"SCWeakTimer",&,N,V_activityTimer
// Property: networkTimeout; attributes: Td,N,V_networkTimeout
// Property: active; attributes: TB,N,GisActive,V_active
// Property: suspended; attributes: TB,N,V_suspended
// Property: hasProcessedData; attributes: TB,N,V_hasProcessedData
// Property: outstandingResponses; attributes: TQ,N,V_outstandingResponses
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLagunaNetworkClient initWithStream:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:]
// Type encoding: @56@0:8@16@24d32@40@48
// Implementation: 0x106f892d4

// -[SCSpectaclesLagunaNetworkClient dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106f89460

// -[SCSpectaclesLagunaNetworkClient start]
// Type encoding: v16@0:8
// Implementation: 0x106f894f4

// -[SCSpectaclesLagunaNetworkClient suspend]
// Type encoding: v16@0:8
// Implementation: 0x106f89574

// -[SCSpectaclesLagunaNetworkClient halt]
// Type encoding: v16@0:8
// Implementation: 0x106f895a8

// -[SCSpectaclesLagunaNetworkClient isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106f895f0

// -[SCSpectaclesLagunaNetworkClient sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f899c4

// -[SCSpectaclesLagunaNetworkClient cancelOutstandingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106f89c50

// -[SCSpectaclesLagunaNetworkClient _startActivityTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f89c54

// -[SCSpectaclesLagunaNetworkClient _stopActivityTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f89cbc

// -[SCSpectaclesLagunaNetworkClient _checkIfResponseTimedOut]
// Type encoding: v16@0:8
// Implementation: 0x106f89cfc

// -[SCSpectaclesLagunaNetworkClient _handleAmbaResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f89d54

// -[SCSpectaclesLagunaNetworkClient _handleAmbaDataMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f89eb0

// -[SCSpectaclesLagunaNetworkClient _handleReceivedResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f89f34

// -[SCSpectaclesLagunaNetworkClient _exchangeNonces]
// Type encoding: v16@0:8
// Implementation: 0x106f89fc8

// -[SCSpectaclesLagunaNetworkClient _sendEncryptionSetupRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a098

// -[SCSpectaclesLagunaNetworkClient _handleEncryptionSetupResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a1c0

// -[SCSpectaclesLagunaNetworkClient messageBufferReceivedData:messageType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106f8a3cc

// -[SCSpectaclesLagunaNetworkClient channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a51c

// -[SCSpectaclesLagunaNetworkClient channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f8a540

// -[SCSpectaclesLagunaNetworkClient channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f8a59c

// -[SCSpectaclesLagunaNetworkClient channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a5f8

// -[SCSpectaclesLagunaNetworkClient channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a600

// -[SCSpectaclesLagunaNetworkClient connectivityDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f8a640

// -[SCSpectaclesLagunaNetworkClient setConnectivityDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a658

// -[SCSpectaclesLagunaNetworkClient messagingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f8a664

// -[SCSpectaclesLagunaNetworkClient setMessagingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a67c

// -[SCSpectaclesLagunaNetworkClient stream]
// Type encoding: @16@0:8
// Implementation: 0x106f8a688

// -[SCSpectaclesLagunaNetworkClient setStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a690

// -[SCSpectaclesLagunaNetworkClient messageBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f8a6c0

// -[SCSpectaclesLagunaNetworkClient setMessageBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a6c8

// -[SCSpectaclesLagunaNetworkClient encryptor]
// Type encoding: @16@0:8
// Implementation: 0x106f8a6f8

// -[SCSpectaclesLagunaNetworkClient setEncryptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a700

// -[SCSpectaclesLagunaNetworkClient activityTimer]
// Type encoding: @16@0:8
// Implementation: 0x106f8a730

// -[SCSpectaclesLagunaNetworkClient setActivityTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8a738

// -[SCSpectaclesLagunaNetworkClient networkTimeout]
// Type encoding: d16@0:8
// Implementation: 0x106f8a768

// -[SCSpectaclesLagunaNetworkClient setNetworkTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106f8a770

// -[SCSpectaclesLagunaNetworkClient isActive]
// Type encoding: B16@0:8
// Implementation: 0x106f8a778

// -[SCSpectaclesLagunaNetworkClient setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f8a780

// -[SCSpectaclesLagunaNetworkClient suspended]
// Type encoding: B16@0:8
// Implementation: 0x106f8a788

// -[SCSpectaclesLagunaNetworkClient setSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f8a790

// -[SCSpectaclesLagunaNetworkClient hasProcessedData]
// Type encoding: B16@0:8
// Implementation: 0x106f8a798

// -[SCSpectaclesLagunaNetworkClient setHasProcessedData:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f8a7a0

// -[SCSpectaclesLagunaNetworkClient outstandingResponses]
// Type encoding: Q16@0:8
// Implementation: 0x106f8a7a8

// -[SCSpectaclesLagunaNetworkClient setOutstandingResponses:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f8a7b0

// -[SCSpectaclesLagunaNetworkClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f8a7b8

// +[SCSpectaclesLagunaNetworkClient _shortData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8962c

// +[SCSpectaclesLagunaNetworkClient _requestDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f896c8

// +[SCSpectaclesLagunaNetworkClient _responseDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f897f8

@end
