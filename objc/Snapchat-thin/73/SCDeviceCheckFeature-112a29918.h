// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceCheckFeature
// Superclass: NSObject
// Address: 0x112a29918

@interface SCDeviceCheckFeature

// Property: currentDevice; attributes: T@"DCDevice",&,N,V_currentDevice

// -[SCDeviceCheckFeature initWithPreferences:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105308330

// -[SCDeviceCheckFeature generateDeviceTokenWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105308408

// -[SCDeviceCheckFeature fetchDeviceTokenWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10530851c

// -[SCDeviceCheckFeature fetchDeviceTokenUsingCache:completionHandler:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x105308528

// -[SCDeviceCheckFeature _fetchDeviceTokenUsingCache:completionHandler:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x105308640

// -[SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053087b8

// -[SCDeviceCheckFeature _saveDeviceToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105308930

// -[SCDeviceCheckFeature _clearDeviceToken]
// Type encoding: v16@0:8
// Implementation: 0x105308a2c

// -[SCDeviceCheckFeature _getDeviceToken]
// Type encoding: @16@0:8
// Implementation: 0x105308a64

// -[SCDeviceCheckFeature _generateDeviceTokenBlockWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105308b80

// -[SCDeviceCheckFeature _logTokenType:]
// Type encoding: v24@0:8@16
// Implementation: 0x105308cc0

// -[SCDeviceCheckFeature currentDevice]
// Type encoding: @16@0:8
// Implementation: 0x105308df4

// -[SCDeviceCheckFeature setCurrentDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105308dfc

// -[SCDeviceCheckFeature .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105308e2c

@end
