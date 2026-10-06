// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiLoggerImpl
// Superclass: NSObject
// Address: 0x112a4e088

@interface SCLensRemoteApiLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiLoggerImpl initWithBlizzardLogger:userId:lensCarouselLogger:remoteApiGrapheneReporter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1055ddad4

// -[SCLensRemoteApiLoggerImpl blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x1055ddbd4

// -[SCLensRemoteApiLoggerImpl lensCarouselLogger]
// Type encoding: @16@0:8
// Implementation: 0x1055ddbdc

// -[SCLensRemoteApiLoggerImpl remoteApiGrapheneReporter]
// Type encoding: @16@0:8
// Implementation: 0x1055ddbe4

// -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowFailedWithSpecId:lensId:authFlowFailureReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1055ddbec

// -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowStartedWithSpecId:lensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055ddcd4

// -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowSucceededWithSpecId:lensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055ddda4

// -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenErrorWithSpecId:lensId:tokenErrorSource:tokenExchangeError:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x1055dde74

// -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenFoundWithSpecId:lensId:refreshed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1055ddf78

// -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenNotAvailableWithSpecId:lensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055de058

// -[SCLensRemoteApiLoggerImpl remoteApiRequestSentWithEndpointId:apiSpecSetId:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055de128

// -[SCLensRemoteApiLoggerImpl remoteApiLocalOnlySpecDroppedWithEndpointId:apiSpecSetId:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055de21c

// -[SCLensRemoteApiLoggerImpl remoteApiResponseSuccessWithEndpointId:apiSpecSetId:lensId:responseCode:latencyInMs:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x1055de2a4

// -[SCLensRemoteApiLoggerImpl remoteApiResponseFailedWithEndpointId:apiSpecSetId:lensId:responseCode:latencyInMs:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x1055de3c4

// -[SCLensRemoteApiLoggerImpl _fillLensBaseEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055de4e4

// -[SCLensRemoteApiLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055de5c0

@end
