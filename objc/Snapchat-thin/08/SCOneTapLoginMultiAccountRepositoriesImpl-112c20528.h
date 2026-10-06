// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginMultiAccountRepositoriesImpl
// Superclass: NSObject
// Address: 0x112c20528

@interface SCOneTapLoginMultiAccountRepositoriesImpl

// Property: hasUnexpiredOneTapLogin; attributes: TB,R,N

// -[SCOneTapLoginMultiAccountRepositoriesImpl initWithPreferences:passwordHashRepository:userNotTrackedLogger:oneTapLoginRepositoryLogger:configMetric:deviceIdentifierProvider:applicationLifecycleEvents:authNotificationExtensionUserDefaults:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10af4a610

// -[SCOneTapLoginMultiAccountRepositoriesImpl hasUnexpiredOneTapLogin]
// Type encoding: B16@0:8
// Implementation: 0x10af4aa38

// -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10af4aa78

// -[SCOneTapLoginMultiAccountRepositoriesImpl unexpiredOneTapLoginUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10af4aac0

// -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginFullOptedInUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10af4ac48

// -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginRespositoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4ad30

// -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginUsernameForOldestAccount]
// Type encoding: @16@0:8
// Implementation: 0x10af4ae70

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeOldestOneTapLogin]
// Type encoding: v16@0:8
// Implementation: 0x10af4aeb4

// -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapLoginToKeychain:configResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af4aee4

// -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapControlGroupToKeychain:configResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af4b00c

// -[SCOneTapLoginMultiAccountRepositoriesImpl persistV3DryModeGroupToPreferencesAndKeychain:username:configResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10af4b0c8

// -[SCOneTapLoginMultiAccountRepositoriesImpl containsUserIdInKeychain:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af4b1e0

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeAllOneTapsInKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10af4b2c4

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeAllOneTapsInCloudKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10af4b2d8

// -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapLoginToCloudKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4b2ec

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginFromKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4b580

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4b6ac

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginWithUserIdWithoutOptOut:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4b6b0

// -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginTokenWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4b744

// -[SCOneTapLoginMultiAccountRepositoriesImpl _syncOneTapLoginToAuthNotificationExtensionUserDefaults]
// Type encoding: v16@0:8
// Implementation: 0x10af4b7c0

// -[SCOneTapLoginMultiAccountRepositoriesImpl _oneTapLoginRepositoryForOldestAccount]
// Type encoding: @16@0:8
// Implementation: 0x10af4b984

// -[SCOneTapLoginMultiAccountRepositoriesImpl _persistOneTapToKeychain:username:configResult:dict:hasToken:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10af4bbd4

// -[SCOneTapLoginMultiAccountRepositoriesImpl _isTokenValidWithToken:expiry:username:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x10af4bf30

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidTokens]
// Type encoding: v16@0:8
// Implementation: 0x10af4bfec

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidLocalTokens]
// Type encoding: v16@0:8
// Implementation: 0x10af4c018

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidKeychainV3Tokens]
// Type encoding: v16@0:8
// Implementation: 0x10af4c314

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidCloudKeychainTokens]
// Type encoding: v16@0:8
// Implementation: 0x10af4c31c

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidKeychainTokensIsCloud:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af4c324

// -[SCOneTapLoginMultiAccountRepositoriesImpl _copyV3TokenFromKeychainIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10af4c7a8

// -[SCOneTapLoginMultiAccountRepositoriesImpl _copyCloudTokenFromKeychainIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10af4cbfc

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeOneTapLoginTokenFromKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4cefc

// -[SCOneTapLoginMultiAccountRepositoriesImpl _removeOneTapLoginFromCloudKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4d080

// -[SCOneTapLoginMultiAccountRepositoriesImpl _logExposureForUserId:username:studyName:expId:hasToken:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10af4d1c0

// -[SCOneTapLoginMultiAccountRepositoriesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af4d318

@end
