// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextActionBarDataFetcher
// Superclass: NSObject
// Address: 0x112adffd8

@interface SCContextActionBarDataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextActionBarDataFetcher initWithUserSession:circumstanceEngine:userInfoServices:httpMetadataService:httpRequestModifier:bloopsOnboardingStateProvider:userInfoRequestProvider:contextMentionExperiments:contextExperimentService:aifTopLevelCardsExperimentsService:conversationIdResolver:snapchattersDataFetcher:delegate:lensPromptDataProvider:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1064623c0

// -[SCContextActionBarDataFetcher observeContextDataWithSessionParams:isUCC:contextSessionId:navigationStyle:performer:viewLogger:isFromSendSide:verticalNavigationCanSwipeLeft:viewDidLoadSignal:]
// Type encoding: @76@0:8@16B24@28q36@44@52B60B64@68
// Implementation: 0x106462728

// -[SCContextActionBarDataFetcher _addPromptDataIfNeeded:sessionParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10646322c

// -[SCContextActionBarDataFetcher _createPromptLensActionWithSessionParams:cci:isCurrentUsersTurn:promptCreatorUserId:promptReceiverUserId:completion:]
// Type encoding: v60@0:8@16@24B32@36@44@?52
// Implementation: 0x106463c78

// -[SCContextActionBarDataFetcher _conversationIdForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106463f2c

// -[SCContextActionBarDataFetcher _fromNetwork:snapContextInfo:snapIdentity:contextSessionId:isShareable:navigationStyle:verticalNavigationCanSwipeLeft:performer:completion:]
// Type encoding: v80@0:8@16@24@32@40B48q52B60@64@?72
// Implementation: 0x1064641d4

// -[SCContextActionBarDataFetcher _fromCache:snapIdentity:navigationStyle:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x106464a44

// -[SCContextActionBarDataFetcher _makeRequest:sessionParams:snapIdentity:contextSessionId:navigationStyle:performer:completion:]
// Type encoding: v72@0:8@16@24@32@40q48@56@?64
// Implementation: 0x106464b7c

// -[SCContextActionBarDataFetcher sendRequest:metadata:performer:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106464f44

// -[SCContextActionBarDataFetcher _handleResponse:error:sessionParams:snapIdentity:contextSessionId:navigationStyle:completion:]
// Type encoding: v72@0:8@16@24@32@40@48q56@?64
// Implementation: 0x106465304

// -[SCContextActionBarDataFetcher _creatorInfoForUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1064654b0

// -[SCContextActionBarDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106465758

@end
