// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLagunaNetworkRequest
// Superclass: NSObject
// Address: 0x112b4c1d8

@interface SCSpectaclesLagunaNetworkRequest

// Property: lagunaRequests; attributes: T@"NSArray",R,N,V_lagunaRequests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLagunaNetworkRequest initWithLagunaRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8a81c

// -[SCSpectaclesLagunaNetworkRequest lagunaRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f8b800

// -[SCSpectaclesLagunaNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f8b808

// +[SCSpectaclesLagunaNetworkRequest requestByBatchingRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8a890

// +[SCSpectaclesLagunaNetworkRequest mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8a9f4

// +[SCSpectaclesLagunaNetworkRequest readRequestWithFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8aad0

// +[SCSpectaclesLagunaNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:]
// Type encoding: @52@0:8@16{_NSRange=QQ}24Q40B48
// Implementation: 0x106f8ac08

// +[SCSpectaclesLagunaNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:]
// Type encoding: @48@0:8@16{_NSRange=QQ}24Q40
// Implementation: 0x106f8ae40

// +[SCSpectaclesLagunaNetworkRequest markTransferredRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f8ae48

// +[SCSpectaclesLagunaNetworkRequest deletionRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f8afc0

// +[SCSpectaclesLagunaNetworkRequest startAsNeededDeletionRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b138

// +[SCSpectaclesLagunaNetworkRequest crashLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b214

// +[SCSpectaclesLagunaNetworkRequest crashLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f8b2f0

// +[SCSpectaclesLagunaNetworkRequest firmwareWriteRequest:start:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f8b4e0

// +[SCSpectaclesLagunaNetworkRequest gpsWriteRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8b654

// +[SCSpectaclesLagunaNetworkRequest shareWifiCredentialsRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b65c

// +[SCSpectaclesLagunaNetworkRequest shareWifiCredentialsStatusRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b720

// +[SCSpectaclesLagunaNetworkRequest analyticsFilesListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b728

// +[SCSpectaclesLagunaNetworkRequest analyticsFilesGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f8b730

// +[SCSpectaclesLagunaNetworkRequest analyticsFilesDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b738

// +[SCSpectaclesLagunaNetworkRequest stereoCalibrationDataRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f8b740

// +[SCSpectaclesLagunaNetworkRequest lagunaPairingRequestWithAmbaRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f8b748

@end
