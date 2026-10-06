// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesNetworkRequest
// Superclass: NSObject
// Address: 0x112b4b968

@interface SCSpectaclesNetworkRequest

// Property: expectedResponseCount; attributes: TQ,N,V_expectedResponseCount
// Property: providerBlock; attributes: T@?,C,N,V_providerBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesNetworkRequest initWithProviderBlock:expectedResponseCount:]
// Type encoding: @32@0:8@?16Q24
// Implementation: 0x106f74048

// -[SCSpectaclesNetworkRequest lagunaRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f740d0

// -[SCSpectaclesNetworkRequest malibuRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f7414c

// -[SCSpectaclesNetworkRequest hermosaRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f741c8

// -[SCSpectaclesNetworkRequest cheeriosRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f74244

// -[SCSpectaclesNetworkRequest expectedResponseCount]
// Type encoding: Q16@0:8
// Implementation: 0x106f74d9c

// -[SCSpectaclesNetworkRequest setExpectedResponseCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f74da4

// -[SCSpectaclesNetworkRequest providerBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f74dac

// -[SCSpectaclesNetworkRequest setProviderBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f74db4

// -[SCSpectaclesNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f74dbc

// +[SCSpectaclesNetworkRequest requestByBatchingRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f742c0

// +[SCSpectaclesNetworkRequest mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f744dc

// +[SCSpectaclesNetworkRequest readRequestWithFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f74508

// +[SCSpectaclesNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:]
// Type encoding: @52@0:8@16{_NSRange=QQ}24Q40B48
// Implementation: 0x106f745b0

// +[SCSpectaclesNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:]
// Type encoding: @48@0:8@16{_NSRange=QQ}24Q40
// Implementation: 0x106f74694

// +[SCSpectaclesNetworkRequest markTransferredRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f7476c

// +[SCSpectaclesNetworkRequest deletionRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f74828

// +[SCSpectaclesNetworkRequest startAsNeededDeletionRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f748e4

// +[SCSpectaclesNetworkRequest crashLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74910

// +[SCSpectaclesNetworkRequest crashLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f7493c

// +[SCSpectaclesNetworkRequest firmwareWriteRequest:start:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f749fc

// +[SCSpectaclesNetworkRequest gpsWriteRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f74ab0

// +[SCSpectaclesNetworkRequest shareWifiCredentialsRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74b58

// +[SCSpectaclesNetworkRequest shareWifiCredentialsStatusRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74b84

// +[SCSpectaclesNetworkRequest analyticsFilesListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74bb0

// +[SCSpectaclesNetworkRequest analyticsFilesGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f74bdc

// +[SCSpectaclesNetworkRequest analyticsFilesDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74c9c

// +[SCSpectaclesNetworkRequest stereoCalibrationDataRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f74cc8

// +[SCSpectaclesNetworkRequest lagunaPairingRequestWithAmbaRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f74cf4

@end
