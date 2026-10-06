// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesServerMetadataFetcher
// Superclass: NSObject
// Address: 0x112a81fc8

@interface SCSpectaclesServerMetadataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesServerMetadataFetcher initWithHttpMetadataService:httpRequestModifier:grpcService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059e1568

// -[SCSpectaclesServerMetadataFetcher requestAllDeviceList:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059e1634

// -[SCSpectaclesServerMetadataFetcher updateDeviceDisplayName:device:timestamp:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1059e1960

// -[SCSpectaclesServerMetadataFetcher updateDeviceInfo:timestamp:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1059e1aac

// -[SCSpectaclesServerMetadataFetcher updateFirmwareVersion:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e1be0

// -[SCSpectaclesServerMetadataFetcher forgetDevice:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e1d0c

// -[SCSpectaclesServerMetadataFetcher _updateDevice:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e1e38

// -[SCSpectaclesServerMetadataFetcher acceptTermsOfUse:accessTokenHeader:queue:completionHandler:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x1059e2354

// -[SCSpectaclesServerMetadataFetcher fetchNewTokensWithParameters:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059e2460

// -[SCSpectaclesServerMetadataFetcher fetchRefreshTokenWithParameters:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059e26fc

// -[SCSpectaclesServerMetadataFetcher fetchAuthorizationCodeWithParameters:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059e2960

// -[SCSpectaclesServerMetadataFetcher fetchPushMessagePatternWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059e2b6c

// -[SCSpectaclesServerMetadataFetcher fetchURL:parameters:queue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1059e2d34

// -[SCSpectaclesServerMetadataFetcher fetchURL:parameters:shouldParseResponse:queue:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x1059e2d44

// -[SCSpectaclesServerMetadataFetcher fetchWithRequest:context:shouldParseResponse:queue:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x1059e2f68

// -[SCSpectaclesServerMetadataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e3244

// +[SCSpectaclesServerMetadataFetcher _deviceListInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059e2190

@end
