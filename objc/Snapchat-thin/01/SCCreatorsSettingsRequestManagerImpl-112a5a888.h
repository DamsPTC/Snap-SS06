// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreatorsSettingsRequestManagerImpl
// Superclass: NSObject
// Address: 0x112a5a888

@interface SCCreatorsSettingsRequestManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreatorsSettingsRequestManagerImpl initWithRequestMetadataService:requestModifier:snapTokenProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1056dea68

// -[SCCreatorsSettingsRequestManagerImpl _fetchSnapTokenWithAcessType:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1056dec14

// -[SCCreatorsSettingsRequestManagerImpl _sendRequest:successQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1056ded1c

// -[SCCreatorsSettingsRequestManagerImpl _constructRequestToEndpoint:withData:apiAccessToken:snapTokenWithAcessType:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x1056deebc

// -[SCCreatorsSettingsRequestManagerImpl sendRequestToEndpoint:withData:snapTokenWithAcessType:successQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24Q32@40@?48@?56
// Implementation: 0x1056df100

// -[SCCreatorsSettingsRequestManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056df31c

@end
