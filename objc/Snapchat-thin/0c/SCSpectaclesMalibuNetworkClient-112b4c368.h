// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMalibuNetworkClient
// Superclass: NSObject
// Address: 0x112b4c368

@interface SCSpectaclesMalibuNetworkClient

// Property: connectivityDelegate; attributes: T@"<SCSpectaclesCommunicationClientConnectivityDelegate>",W,N,V_connectivityDelegate
// Property: messagingDelegate; attributes: T@"<SCSpectaclesCommunicationClientMessagingDelegate>",W,N,V_messagingDelegate
// Property: encryptor; attributes: T@"SCSpectaclesAEADPacketEncryptor",&,N,V_encryptor
// Property: stream; attributes: T@"<SCSpectaclesCommunicationChannel>",&,N,V_stream
// Property: messageBuffer; attributes: T@"SCSpectaclesMessageBuffer",&,N,V_messageBuffer
// Property: activityTimer; attributes: T@"SCWeakTimer",&,N,V_activityTimer
// Property: networkTimeout; attributes: Td,N,V_networkTimeout
// Property: hasProcessedData; attributes: TB,N,V_hasProcessedData
// Property: active; attributes: TB,N,GisActive,V_active
// Property: suspended; attributes: TB,N,V_suspended
// Property: lastCancellationRequestId; attributes: TQ,N,V_lastCancellationRequestId
// Property: lastReceivedResponseId; attributes: TQ,N,V_lastReceivedResponseId
// Property: nextFreeRequestId; attributes: TQ,N,V_nextFreeRequestId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesMalibuNetworkClient initWithStream:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:]
// Type encoding: @56@0:8@16@24d32@40@48
// Implementation: 0x106f9121c

// -[SCSpectaclesMalibuNetworkClient dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106f913bc

// -[SCSpectaclesMalibuNetworkClient start]
// Type encoding: v16@0:8
// Implementation: 0x106f91420

// -[SCSpectaclesMalibuNetworkClient suspend]
// Type encoding: v16@0:8
// Implementation: 0x106f914a0

// -[SCSpectaclesMalibuNetworkClient halt]
// Type encoding: v16@0:8
// Implementation: 0x106f914d4

// -[SCSpectaclesMalibuNetworkClient isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106f91528

// -[SCSpectaclesMalibuNetworkClient sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f91564

// -[SCSpectaclesMalibuNetworkClient cancelOutstandingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106f915cc

// -[SCSpectaclesMalibuNetworkClient _sendAmbaRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f916f4

// -[SCSpectaclesMalibuNetworkClient _startActivityTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f9187c

// -[SCSpectaclesMalibuNetworkClient _stopActivityTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f91904

// -[SCSpectaclesMalibuNetworkClient _checkIfResponseTimedOut]
// Type encoding: v16@0:8
// Implementation: 0x106f91944

// -[SCSpectaclesMalibuNetworkClient _handleAmbaResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f91ec4

// -[SCSpectaclesMalibuNetworkClient _exchangeNonces]
// Type encoding: v16@0:8
// Implementation: 0x106f91fec

// -[SCSpectaclesMalibuNetworkClient _sendEncryptionSetupRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f920e8

// -[SCSpectaclesMalibuNetworkClient _handleEncryptionSetupResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92210

// -[SCSpectaclesMalibuNetworkClient messageBufferReceivedData:messageType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106f92400

// -[SCSpectaclesMalibuNetworkClient channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92524

// -[SCSpectaclesMalibuNetworkClient channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f9256c

// -[SCSpectaclesMalibuNetworkClient channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f925c8

// -[SCSpectaclesMalibuNetworkClient channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92624

// -[SCSpectaclesMalibuNetworkClient channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9262c

// -[SCSpectaclesMalibuNetworkClient connectivityDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f92650

// -[SCSpectaclesMalibuNetworkClient setConnectivityDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92668

// -[SCSpectaclesMalibuNetworkClient messagingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f92674

// -[SCSpectaclesMalibuNetworkClient setMessagingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9268c

// -[SCSpectaclesMalibuNetworkClient encryptor]
// Type encoding: @16@0:8
// Implementation: 0x106f92698

// -[SCSpectaclesMalibuNetworkClient setEncryptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f926a0

// -[SCSpectaclesMalibuNetworkClient stream]
// Type encoding: @16@0:8
// Implementation: 0x106f926d0

// -[SCSpectaclesMalibuNetworkClient setStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f926d8

// -[SCSpectaclesMalibuNetworkClient messageBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f92708

// -[SCSpectaclesMalibuNetworkClient setMessageBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92710

// -[SCSpectaclesMalibuNetworkClient activityTimer]
// Type encoding: @16@0:8
// Implementation: 0x106f92740

// -[SCSpectaclesMalibuNetworkClient setActivityTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f92748

// -[SCSpectaclesMalibuNetworkClient networkTimeout]
// Type encoding: d16@0:8
// Implementation: 0x106f92778

// -[SCSpectaclesMalibuNetworkClient setNetworkTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106f92780

// -[SCSpectaclesMalibuNetworkClient hasProcessedData]
// Type encoding: B16@0:8
// Implementation: 0x106f92788

// -[SCSpectaclesMalibuNetworkClient setHasProcessedData:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f92790

// -[SCSpectaclesMalibuNetworkClient isActive]
// Type encoding: B16@0:8
// Implementation: 0x106f92798

// -[SCSpectaclesMalibuNetworkClient setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f927a0

// -[SCSpectaclesMalibuNetworkClient suspended]
// Type encoding: B16@0:8
// Implementation: 0x106f927a8

// -[SCSpectaclesMalibuNetworkClient setSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f927b0

// -[SCSpectaclesMalibuNetworkClient lastCancellationRequestId]
// Type encoding: Q16@0:8
// Implementation: 0x106f927b8

// -[SCSpectaclesMalibuNetworkClient setLastCancellationRequestId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f927c0

// -[SCSpectaclesMalibuNetworkClient lastReceivedResponseId]
// Type encoding: Q16@0:8
// Implementation: 0x106f927c8

// -[SCSpectaclesMalibuNetworkClient setLastReceivedResponseId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f927d0

// -[SCSpectaclesMalibuNetworkClient nextFreeRequestId]
// Type encoding: Q16@0:8
// Implementation: 0x106f927d8

// -[SCSpectaclesMalibuNetworkClient setNextFreeRequestId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f927e0

// -[SCSpectaclesMalibuNetworkClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f927e8

// +[SCSpectaclesMalibuNetworkClient _shortData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f9199c

// +[SCSpectaclesMalibuNetworkClient _requestDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f91a38

// +[SCSpectaclesMalibuNetworkClient _responseDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f91c04

@end
