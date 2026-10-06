// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationUserNotTrackedLogger
// Superclass: NSObject
// Address: 0x112a2c168

@interface SCRegistrationUserNotTrackedLogger


// -[SCRegistrationUserNotTrackedLogger initWithUserNotTrackedLogger:authenticationFlowLogger:circumstanceEngine:installServices:deviceInfoProvider:grapheneRegistry:registrationFlowUUIDService:authenticationSessionInfoProvider:loginInfoRepository:registrationLastPageService:registrationSourceService:cdnCofDownloader:countryProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105353c90

// -[SCRegistrationUserNotTrackedLogger logRegistrationFlowEvent:pageType:unverifiedUserId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105353f88

// -[SCRegistrationUserNotTrackedLogger buildInstallSessionMetadata]
// Type encoding: @16@0:8
// Implementation: 0x105354048

// -[SCRegistrationUserNotTrackedLogger logPageView:unverifiedUserId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105354054

// -[SCRegistrationUserNotTrackedLogger logRegistrationNetworkRequestWithEndpoint:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053541cc

// -[SCRegistrationUserNotTrackedLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:]
// Type encoding: v60@0:8@16@24B32q36q44q52
// Implementation: 0x105354250

// -[SCRegistrationUserNotTrackedLogger logResponseSuggestUsername:success:isAvailable:suggestions:]
// Type encoding: v40@0:8q16B24B28@32
// Implementation: 0x105354324

// -[SCRegistrationUserNotTrackedLogger logRegistrationUserExitPromptWithContext:page:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105354418

// -[SCRegistrationUserNotTrackedLogger logRegistrationUserInitialInputWithPage:field:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105354534

// -[SCRegistrationUserNotTrackedLogger logRegistrationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105354594

// -[SCRegistrationUserNotTrackedLogger logGrapheneWithMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535480c

// -[SCRegistrationUserNotTrackedLogger _newDeviceDimensionValue]
// Type encoding: @16@0:8
// Implementation: 0x10535497c

// -[SCRegistrationUserNotTrackedLogger _updateLastPage:]
// Type encoding: q24@0:8q16
// Implementation: 0x1053549d8

// -[SCRegistrationUserNotTrackedLogger getLongClientId]
// Type encoding: @16@0:8
// Implementation: 0x105354a4c

// -[SCRegistrationUserNotTrackedLogger _setHasLoggedInBeforeOnEvent:withValue:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105354a94

// -[SCRegistrationUserNotTrackedLogger _setAppAppearanceOnEvent:withValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105354b60

// -[SCRegistrationUserNotTrackedLogger _setRegistrationSourceOnEvent:withValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105354c2c

// -[SCRegistrationUserNotTrackedLogger _setSystemAppearanceOnEvent:withValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105354cf8

// -[SCRegistrationUserNotTrackedLogger _updateUserSignatureForVerificationEvent:unverifiedUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105354dc4

// -[SCRegistrationUserNotTrackedLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105354e18

@end
