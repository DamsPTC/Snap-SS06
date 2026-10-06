// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultLastLoginInfoRepository
// Superclass: NSObject
// Address: 0x112a5c458

@interface SCDefaultLastLoginInfoRepository


// -[SCDefaultLastLoginInfoRepository initWithApplicationPreferences:circumstanceEngine:graphene:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1003df594

// -[SCDefaultLastLoginInfoRepository lastLoginUsernameOrEmail]
// Type encoding: @16@0:8
// Implementation: 0x1056faf90

// -[SCDefaultLastLoginInfoRepository lastLoginPhoneNumber]
// Type encoding: @16@0:8
// Implementation: 0x1056fb14c

// -[SCDefaultLastLoginInfoRepository hasLoggedInBefore]
// Type encoding: B16@0:8
// Implementation: 0x1056fb3b8

// -[SCDefaultLastLoginInfoRepository updateCachedHasLoggedInBefore]
// Type encoding: v16@0:8
// Implementation: 0x1003df748

// -[SCDefaultLastLoginInfoRepository updateWithUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056fb418

// -[SCDefaultLastLoginInfoRepository updateWithUsername:email:countryCode:fullPhoneNumber:verified:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1056fb50c

// -[SCDefaultLastLoginInfoRepository _getHasLoggedInBeforeFromPreferences]
// Type encoding: B16@0:8
// Implementation: 0x1003df7b8

// -[SCDefaultLastLoginInfoRepository _updateLastLoginPhoneNumberWithCountryCode:fullPhoneNumber:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056fb638

// -[SCDefaultLastLoginInfoRepository _getLegacyLastLoggedInUsernameOrEmail]
// Type encoding: @16@0:8
// Implementation: 0x1056fb7a8

// -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoEnabled:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056fb7fc

// -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoReadEnabled:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056fb810

// -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoCofConfigEnabled:source:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1056fb820

// -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoCofConfigEnabled:source:manual:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x1056fb828

// -[SCDefaultLastLoginInfoRepository _updateKeychainLastLoginInfoWithUsername:email:countryCode:fullPhoneNumber:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1056fb95c

// -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfo]
// Type encoding: @16@0:8
// Implementation: 0x1056fbad0

// -[SCDefaultLastLoginInfoRepository _lastLoginInfoExpired:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056fbbb4

// -[SCDefaultLastLoginInfoRepository _incrementKeychainLastLoginInfoEnabledSyncedMetric:checkSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056fbc5c

// -[SCDefaultLastLoginInfoRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056fbcd4

@end
