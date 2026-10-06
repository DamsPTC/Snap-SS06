// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCApplicationLogger
// Superclass: NSObject
// Address: 0x112ae8cc8

@interface SCApplicationLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCApplicationLogger initWithTimeProvider:appStartExperimentReader:grapheneRegistry:deviceInfoProvider:deepLinkInfoService:legacyBlizzardLogger:application:circumstanceEngineLazy:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1009675e8

// -[SCApplicationLogger setActiveUserSession:withContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10096788c

// -[SCApplicationLogger setUserSession:withContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1009c7188

// -[SCApplicationLogger beginObservingSessionContext]
// Type encoding: v16@0:8
// Implementation: 0x100967934

// -[SCApplicationLogger maybeLogAAOFromResumed]
// Type encoding: v16@0:8
// Implementation: 0x100967a98

// -[SCApplicationLogger isUserOutOfAaoGatingSession]
// Type encoding: B16@0:8
// Implementation: 0x1065e3ef4

// -[SCApplicationLogger shouldShortCircuitAAO]
// Type encoding: B16@0:8
// Implementation: 0x100c7489c

// -[SCApplicationLogger logApplicationResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1065e3f04

// -[SCApplicationLogger logApplicationClose]
// Type encoding: v16@0:8
// Implementation: 0x1065e3fb4

// -[SCApplicationLogger logApplicationOpenWithTriggerTs:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c747f8

// -[SCApplicationLogger logApplicationOpenWithType:triggerTs:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100c748bc

// -[SCApplicationLogger logApplicationOpenForLogin]
// Type encoding: v16@0:8
// Implementation: 0x1065e4014

// -[SCApplicationLogger logApplicationLogout:username:userId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065e40c0

// -[SCApplicationLogger logApplicationOpenWithNotificationId:pushTypeName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065e42b4

// -[SCApplicationLogger logNotificationWhileBackgroundedWithPushTypeName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065e43ac

// -[SCApplicationLogger didAppOpenForDeepLinkFeature:linkId:referrer:deepLinkURL:shortLinkURL:shareId:]
// Type encoding: v64@0:8Q16@24@32@40@48@56
// Implementation: 0x1065e4450

// -[SCApplicationLogger logApplicationDeepLinkForURL:linkId:referrer:deepLinkSource:sourceContext:sourceType:appState:shortLinkURL:handlingResolution:handlingResolutionDetails:handlingLatencyMS:handlingId:handlingStage:shareId:referrerURL:]
// Type encoding: v136@0:8@16@24@32q40q48q56q64@72q80@88Q96q104q112@120@128
// Implementation: 0x1065e45a8

// -[SCApplicationLogger logAppLoginKitLoginSuccess]
// Type encoding: v16@0:8
// Implementation: 0x1065e47c8

// -[SCApplicationLogger logAppLoginKitLoginAttempt]
// Type encoding: v16@0:8
// Implementation: 0x1065e4828

// -[SCApplicationLogger logAppLoginKitLoginFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065e4888

// -[SCApplicationLogger setNotificationId:pushTypeName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065e48ec

// -[SCApplicationLogger _logResignActiveWithApplicationState:username:userId:isLoggingOut:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x1065e4950

// -[SCApplicationLogger _logApplicationClose]
// Type encoding: v16@0:8
// Implementation: 0x1065e4ac0

// -[SCApplicationLogger _logApplicationOpenWithType:applicationState:triggerTs:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x100c74bc4

// -[SCApplicationLogger _logApplicationOpenWithType:applicationState:isFromLogin:triggerTs:]
// Type encoding: v44@0:8q16q24B32@36
// Implementation: 0x100c74bd0

// -[SCApplicationLogger _logApplicationOpenWithApplicationState:notificationId:pushTypeName:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1065e4c0c

// -[SCApplicationLogger _logAppOpenMetadataEvent]
// Type encoding: v16@0:8
// Implementation: 0x1065e4ddc

// -[SCApplicationLogger _logApplicationReceivedPushTypeName:appState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065e4ff0

// -[SCApplicationLogger _logApplicationDeepLinkForURL:linkId:referrer:deepLinkSource:sourceContext:sourceType:appState:shortLinkURL:handlingResolution:handlingResolutionDetails:handlingLatencyMS:handlingId:handlingStage:shareId:referrerURL:]
// Type encoding: v136@0:8@16@24@32q40q48q56q64@72q80@88Q96q104q112@120@128
// Implementation: 0x1065e50ec

// -[SCApplicationLogger _didAppOpenForDeepLinkFeature:linkId:referrer:deepLinkURL:shortLinkURL:shareId:]
// Type encoding: v64@0:8Q16@24@32@40@48@56
// Implementation: 0x1065e532c

// -[SCApplicationLogger _logAppLoginKitLoginSuccess]
// Type encoding: v16@0:8
// Implementation: 0x1065e5408

// -[SCApplicationLogger _logAppLoginKitLoginAttempt]
// Type encoding: v16@0:8
// Implementation: 0x1065e54d0

// -[SCApplicationLogger _logAppLoginKitLoginFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065e5598

// -[SCApplicationLogger _getLongClientId]
// Type encoding: @16@0:8
// Implementation: 0x100c76444

// -[SCApplicationLogger _sourceTypeFromDeepLinkReferrer:]
// Type encoding: q24@0:8@16
// Implementation: 0x1065e5678

// -[SCApplicationLogger _isBitmojiAppInstalled]
// Type encoding: B16@0:8
// Implementation: 0x1065e5770

// -[SCApplicationLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065e57c8

@end
