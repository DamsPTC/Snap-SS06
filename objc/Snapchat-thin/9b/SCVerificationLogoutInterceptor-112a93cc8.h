// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVerificationLogoutInterceptor
// Superclass: NSObject
// Address: 0x112a93cc8

@interface SCVerificationLogoutInterceptor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVerificationLogoutInterceptor initWithFeatureSettingsService:logger:alert:preferences:coolDownService:exposeScopeHandler:removeScopeHandler:]
// Type encoding: @72@0:8@16@24@?32@40@48@?56@?64
// Implementation: 0x105c57b78

// -[SCVerificationLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x105c57d2c

// -[SCVerificationLogoutInterceptor _showAlertInContainer:confirmCallback:declineCallback:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105c57e2c

// -[SCVerificationLogoutInterceptor _verificationAlertDeclinedWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c57ea4

// -[SCVerificationLogoutInterceptor _verificationAlertConfirmedWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c57f0c

// -[SCVerificationLogoutInterceptor _exposeVerificationScopeHelper]
// Type encoding: v16@0:8
// Implementation: 0x105c57ffc

// -[SCVerificationLogoutInterceptor _promptWithCompletionBlock:uiContainer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105c58018

// -[SCVerificationLogoutInterceptor _logVerificationAtLogoutPageView]
// Type encoding: v16@0:8
// Implementation: 0x105c582bc

// -[SCVerificationLogoutInterceptor emailSettingsDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x105c582f0

// -[SCVerificationLogoutInterceptor mobileSettingsDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x105c58378

// -[SCVerificationLogoutInterceptor dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c58400

// -[SCVerificationLogoutInterceptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c58470

@end
