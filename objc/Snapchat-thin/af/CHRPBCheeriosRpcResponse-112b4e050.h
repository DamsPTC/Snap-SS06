// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CHRPBCheeriosRpcResponse
// Superclass: GPBMessage
// Address: 0x112b4e050

@interface CHRPBCheeriosRpcResponse

// Property: id_p; attributes: TI,D,N
// Property: hasId_p; attributes: TB,D,N
// Property: responseOneOfCase; attributes: Ti,R,D,N
// Property: error; attributes: Ti,D,N
// Property: echoResponse; attributes: T@"NSString",C,D,N
// Property: testResponse; attributes: T@"NSString",C,D,N
// Property: setSerialNumberResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getSerialNumberResponse; attributes: T@"NSString",C,D,N
// Property: gitResponse; attributes: T@"CHRPBGitResponse",&,D,N
// Property: getNameResponse; attributes: T@"CHRPBBleName",&,D,N
// Property: setNameResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: mediaCountsGetResponse; attributes: T@"CHRPBMediaCountsResponse",&,D,N
// Property: mediaResponse; attributes: T@"CHRPBMediaResponse",&,D,N
// Property: wifiStartResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: wifiStopResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: batteryStatusResponse; attributes: T@"CHRPBBatteryStatusResponse",&,D,N
// Property: chargerStateResponse; attributes: T@"CHRPBChargerStateResponse",&,D,N
// Property: logsZipResponse; attributes: T@"CHRPBLogsResponse",&,D,N
// Property: boardIdResponse; attributes: T@"CHRPBBoardIdResponse",&,D,N
// Property: locationResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getTemperatureResponse; attributes: T@"CHRPBTemperatureResponse",&,D,N
// Property: setPairingPublicKeyResponse; attributes: T@"CHRPBKeyExchangeMessage",&,D,N
// Property: setPeerVerificationResponse; attributes: T@"CHRPBPairingSignatureMessage",&,D,N
// Property: setChannelEncryptionNonceResponse; attributes: T@"CHRPBEncryptionNonceExchange",&,D,N
// Property: getEnableUsbImportResponse; attributes: TB,D,N
// Property: setEnableUsbImportResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: clearContentResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: haltResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: unpairDeviceResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: setTimeUtcResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: pairingWaitForUserResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: otaUpdateResponse; attributes: T@"CHRPBOTAUpdateResponse",&,D,N
// Property: firmwareUpdateUploadResponse; attributes: T@"CHRPBFirmwareUpdateUploadResponse",&,D,N
// Property: getDialPositionResponse; attributes: T@"CHRPBDialPosition",&,D,N
// Property: getFlightStatusResponse; attributes: T@"CHRPBCaptainInfo",&,D,N
// Property: abortFlightResponse; attributes: TB,D,N
// Property: getStorageCapacityResponse; attributes: T@"CHRPBStorageCapacity",&,D,N
// Property: setScheduledUpdateResponse; attributes: TB,D,N
// Property: getScheduledUpdateResponse; attributes: T@"CHRPBOTAScheduledUpdate",&,D,N
// Property: disableFlightResponse; attributes: T@"CHRPBDisableFlightResponse",&,D,N
// Property: validatePairingResponse; attributes: T@"CHRPBValidatePairingResponse",&,D,N
// Property: setCaptureDurationResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getCaptureDurationResponse; attributes: T@"CHRPBDurationParams",&,D,N
// Property: setVideoResolutionResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getVideoResolutionResponse; attributes: T@"CHRPBVideoResolutionParams",&,D,N
// Property: setFlightDistanceResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getFlightDistanceResponse; attributes: T@"CHRPBDistanceParams",&,D,N
// Property: setCaptureTypeResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getCaptureTypeResponse; attributes: T@"CHRPBCaptureTypeParams",&,D,N
// Property: setTrackingResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getTrackingResponse; attributes: T@"CHRPBTrackingParams",&,D,N
// Property: getRemainingFlightsInfoResponse; attributes: T@"CHRPBRemainingFlightInfo",&,D,N
// Property: setVideoFormatResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getVideoFormatResponse; attributes: T@"CHRPBVideoFormatParams",&,D,N
// Property: getFlightStatusErrorResponse; attributes: T@"CHRPBFlightStatusError",&,D,N
// Property: setCustomFlightModeResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getCustomFlightModeResponse; attributes: T@"CHRPBFlightModeConfig",&,D,N
// Property: getUsbConnectionResponse; attributes: T@"CHRPBUSBConnectionStatus",&,D,N
// Property: getEnableAdbResponse; attributes: TB,D,N
// Property: setEnableAdbResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: setPhotoResolutionResponse; attributes: T@"CHRPBEmpty",&,D,N
// Property: getPhotoResolutionResponse; attributes: T@"CHRPBPhotoResolutionParams",&,D,N
// Property: cancelScheduledUpdateResponse; attributes: T@"CHRPBOTACancelScheduledUpdateResponse",&,D,N
// Property: errorResponse; attributes: T@"CHRPBErrorResponse",&,D,N
// Property: logResponse; attributes: T@"CHRPBLogResponse",&,D,N
// Property: keepDeviceActiveResponse; attributes: T@"CHRPBKeepDeviceActiveResult",&,D,N
// Property: startImuCalibrationResponse; attributes: T@"CHRPBStartCalibrationResponse",&,D,N
// Property: stopImuCalibrationResponse; attributes: T@"CHRPBStopCalibrationResponse",&,D,N
// Property: activateLostModeResponse; attributes: T@"CHRPBActivateLostModeResponse",&,D,N
// Property: deactivateLostModeResponse; attributes: T@"CHRPBDeactivateLostModeResponse",&,D,N
// Property: getLostModeStateResponse; attributes: T@"CHRPBGetLostModeStateResponse",&,D,N
// Property: getAllFlightModesSettingsResponse; attributes: T@"CHRPBFlightSettings",&,D,N
// Property: getGenericAssetFileResponse; attributes: T@"CHRPBGetFileResponse",&,D,N

// +[CHRPBCheeriosRpcResponse descriptor]
// Type encoding: @16@0:8
// Implementation: 0x106fb60d4

@end
