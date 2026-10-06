// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationFeatureLogger
// Superclass: NSObject
// Address: 0x112a2c848

@interface SCRegistrationFeatureLogger


// -[SCRegistrationFeatureLogger initWithRegistrationUserNotTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10535d0f4

// -[SCRegistrationFeatureLogger logRegistrationUserDisplayNamePageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535d168

// -[SCRegistrationFeatureLogger logRegistrationUserDisplayNameSubmit]
// Type encoding: v16@0:8
// Implementation: 0x10535d1d0

// -[SCRegistrationFeatureLogger logRegistrationUserSuggestedUsernamePageview:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535d224

// -[SCRegistrationFeatureLogger logRegistrationSuggestedUsernameSwitchToUserInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535d2b8

// -[SCRegistrationFeatureLogger logRegistrationUserUsernamePageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535d370

// -[SCRegistrationFeatureLogger logRegistrationUsernameAccept:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535d3d8

// -[SCRegistrationFeatureLogger logFeatureUsernameSuggestionRefreshUse]
// Type encoding: v16@0:8
// Implementation: 0x10535d490

// -[SCRegistrationFeatureLogger logResponseSuggestUsername:success:isAvailable:suggestions:]
// Type encoding: v40@0:8q16B24B28@32
// Implementation: 0x10535d4e4

// -[SCRegistrationFeatureLogger logRegistrationUserPasswordPageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535d55c

// -[SCRegistrationFeatureLogger logFeaturePasswordShowHideToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x10535d5c4

// -[SCRegistrationFeatureLogger logResponseRegister:success:errorSource:]
// Type encoding: v36@0:8q16B24q28
// Implementation: 0x10535d62c

// -[SCRegistrationFeatureLogger logUserCreateAccount]
// Type encoding: v16@0:8
// Implementation: 0x10535d6bc

// -[SCRegistrationFeatureLogger logRegistrationUserInitialInfoSuccessWithUsername:userId:editBirthdayYear:editBirthdayMonth:editBirthdayDay:attemptCount:withVersion:preferredVerificationMethod:]
// Type encoding: v64@0:8@16@24B32B36B40Q44q52i60
// Implementation: 0x10535d760

// -[SCRegistrationFeatureLogger logRegistrationUserInitialInfoFail:attemptCount:withVersion:]
// Type encoding: v40@0:8q16Q24q32
// Implementation: 0x10535d890

// -[SCRegistrationFeatureLogger logPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535d920

// -[SCRegistrationFeatureLogger logFeatureFieldAutofill:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535d960

// -[SCRegistrationFeatureLogger logRegistrationFlowEvent:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10535d9c8

// -[SCRegistrationFeatureLogger logRegistrationCreateAccountWithUnverifiedNGOSignUp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535da18

// -[SCRegistrationFeatureLogger logRegistrationNetworkRequestWithEndpoint:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10535db10

// -[SCRegistrationFeatureLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:]
// Type encoding: v60@0:8@16@24B32q36q44q52
// Implementation: 0x10535db80

// -[SCRegistrationFeatureLogger logRegistrationUserEmailSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535dc20

// -[SCRegistrationFeatureLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10535dc9c

@end
