// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapHomeWorkWorkflow
// Superclass: NSObject
// Address: 0x112a065f8

@interface SCMapHomeWorkWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapHomeWorkWorkflow initWithScope:mapPeopleFriendsProvider:currentUserID:composerRuntime:nativeMapSDK:mapHomeWorkDataProvider:nativeMapSDKSession:featureSettingsService:blizzardLogger:mapSession:composerBlizzardLogger:configProvider:notificationPool:mapViewServices:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:locationProvider:basemapPersonalization:locationSearchTrayFactoryServices:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x104ec84e8

// -[SCMapHomeWorkWorkflow presentOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x104ec8960

// -[SCMapHomeWorkWorkflow presentSettingsWithHomeLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ec8a50

// -[SCMapHomeWorkWorkflow _presentSettingsWithHomeLocation:fallbackHomeLocation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ec8c50

// -[SCMapHomeWorkWorkflow _userDeniedPermissionsWithHomeLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ec8d10

// -[SCMapHomeWorkWorkflow _getNewOrDefaultHomeLocation:isHidden:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104ec8f54

// -[SCMapHomeWorkWorkflow onboardingDialogDidCompleteWithAccepted:homeLocation:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x104ec8fa4

// -[SCMapHomeWorkWorkflow _logModalLaunchedEvent]
// Type encoding: v16@0:8
// Implementation: 0x104ec91fc

// -[SCMapHomeWorkWorkflow _logTraySettingsAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ec9284

// -[SCMapHomeWorkWorkflow _getDefaultHomeLocationCoordinate:]
// Type encoding: {CLLocationCoordinate2D=dd}24@0:8@16
// Implementation: 0x104ec933c

// -[SCMapHomeWorkWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ec94c4

@end
