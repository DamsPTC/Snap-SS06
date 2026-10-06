// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMalibuNetworkRequest
// Superclass: NSObject
// Address: 0x112b4c3b8

@interface SCSpectaclesMalibuNetworkRequest

// Property: malibuRequest; attributes: T@"MLBAmbaRequest",R,N,V_malibuRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesMalibuNetworkRequest initWithMalibuRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f92840

// -[SCSpectaclesMalibuNetworkRequest malibuRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93c80

// -[SCSpectaclesMalibuNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f93c88

// +[SCSpectaclesMalibuNetworkRequest requestByBatchingRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f928b4

// +[SCSpectaclesMalibuNetworkRequest mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f92da0

// +[SCSpectaclesMalibuNetworkRequest _mediaTypeFromFileType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x106f92e40

// +[SCSpectaclesMalibuNetworkRequest readRequestWithFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f92e60

// +[SCSpectaclesMalibuNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:]
// Type encoding: @52@0:8@16{_NSRange=QQ}24Q40B48
// Implementation: 0x106f92fb4

// +[SCSpectaclesMalibuNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:]
// Type encoding: @48@0:8@16{_NSRange=QQ}24Q40
// Implementation: 0x106f931bc

// +[SCSpectaclesMalibuNetworkRequest markTransferredRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f931c4

// +[SCSpectaclesMalibuNetworkRequest deletionRequestForContentNamed:includeHd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f932a8

// +[SCSpectaclesMalibuNetworkRequest startAsNeededDeletionRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f933b4

// +[SCSpectaclesMalibuNetworkRequest crashLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93454

// +[SCSpectaclesMalibuNetworkRequest crashLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f934f4

// +[SCSpectaclesMalibuNetworkRequest firmwareWriteRequest:start:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f93660

// +[SCSpectaclesMalibuNetworkRequest gpsWriteRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f93778

// +[SCSpectaclesMalibuNetworkRequest shareWifiCredentialsRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f938c0

// +[SCSpectaclesMalibuNetworkRequest shareWifiCredentialsStatusRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93920

// +[SCSpectaclesMalibuNetworkRequest analyticsFilesListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93974

// +[SCSpectaclesMalibuNetworkRequest analyticsFilesGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106f93a14

// +[SCSpectaclesMalibuNetworkRequest analyticsFilesDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93b58

// +[SCSpectaclesMalibuNetworkRequest stereoCalibrationDataRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f93bf8

// +[SCSpectaclesMalibuNetworkRequest lagunaPairingRequestWithAmbaRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f93c78

@end
