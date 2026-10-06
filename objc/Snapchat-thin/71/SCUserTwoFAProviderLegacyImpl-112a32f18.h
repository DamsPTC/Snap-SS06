// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserTwoFAProviderLegacyImpl
// Superclass: NSObject
// Address: 0x112a32f18

@interface SCUserTwoFAProviderLegacyImpl

// Property: currentStatus; attributes: T@"SCUserTwoFAStatus",R,N
// Property: twoFAStatusUpdates; attributes: T@"SCObservable",R,N

// -[SCUserTwoFAProviderLegacyImpl initWithTwoFAManager:userNetworkServices:updatesPublisher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053e1880

// -[SCUserTwoFAProviderLegacyImpl currentStatus]
// Type encoding: @16@0:8
// Implementation: 0x1053e1994

// -[SCUserTwoFAProviderLegacyImpl fetchVerifiedDevicesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e19ec

// -[SCUserTwoFAProviderLegacyImpl twoFAStatusUpdates]
// Type encoding: @16@0:8
// Implementation: 0x1053e1b90

// -[SCUserTwoFAProviderLegacyImpl _errorWithErrorText:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e1b98

// -[SCUserTwoFAProviderLegacyImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e1c70

@end
