// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHermosaNetworkRequest
// Superclass: NSObject
// Address: 0x112b4bf08

@interface SCSpectaclesHermosaNetworkRequest

// Property: hermosaRequests; attributes: T@"NSArray",R,C,N,V_hermosaRequests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHermosaNetworkRequest initWithHermosaRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f805bc

// -[SCSpectaclesHermosaNetworkRequest hermosaRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f80fe4

// -[SCSpectaclesHermosaNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f80fec

// +[SCSpectaclesHermosaNetworkRequest requestByBatchingRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f80634

// +[SCSpectaclesHermosaNetworkRequest mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f807bc

// +[SCSpectaclesHermosaNetworkRequest readRequestWithFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f808a0

// +[SCSpectaclesHermosaNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:]
// Type encoding: @52@0:8@16{_NSRange=QQ}24Q40B48
// Implementation: 0x106f80a00

// +[SCSpectaclesHermosaNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:]
// Type encoding: @48@0:8@16{_NSRange=QQ}24Q40
// Implementation: 0x106f80be0

// +[SCSpectaclesHermosaNetworkRequest markTransferredRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f80d6c

// +[SCSpectaclesHermosaNetworkRequest deletionRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f80e78

// +[SCSpectaclesHermosaNetworkRequest startAsNeededDeletionRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80f84

// +[SCSpectaclesHermosaNetworkRequest crashLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80f8c

// +[SCSpectaclesHermosaNetworkRequest crashLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f80f94

// +[SCSpectaclesHermosaNetworkRequest firmwareWriteRequest:start:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f80f9c

// +[SCSpectaclesHermosaNetworkRequest gpsWriteRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f80fa4

// +[SCSpectaclesHermosaNetworkRequest shareWifiCredentialsRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80fac

// +[SCSpectaclesHermosaNetworkRequest shareWifiCredentialsStatusRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80fb4

// +[SCSpectaclesHermosaNetworkRequest analyticsFilesListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80fbc

// +[SCSpectaclesHermosaNetworkRequest analyticsFilesGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f80fc4

// +[SCSpectaclesHermosaNetworkRequest analyticsFilesDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80fcc

// +[SCSpectaclesHermosaNetworkRequest stereoCalibrationDataRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f80fd4

// +[SCSpectaclesHermosaNetworkRequest lagunaPairingRequestWithAmbaRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f80fdc

@end
