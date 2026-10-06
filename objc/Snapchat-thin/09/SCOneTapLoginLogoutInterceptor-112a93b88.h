// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginLogoutInterceptor
// Superclass: NSObject
// Address: 0x112a93b88

@interface SCOneTapLoginLogoutInterceptor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOneTapLoginLogoutInterceptor initWithUserId:username:oneTapLoginRegistryLogger:oneTapLoginRegistry:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105c55b1c

// -[SCOneTapLoginLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x105c55d00

// -[SCOneTapLoginLogoutInterceptor _oneTapLoginOptInAlertConfirmed:uiContainer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105c560ec

// -[SCOneTapLoginLogoutInterceptor _oneTapLoginOptInAlertDeclined]
// Type encoding: v16@0:8
// Implementation: 0x105c564fc

// -[SCOneTapLoginLogoutInterceptor _oneTapLoginMaxAccountAlertConfirmed]
// Type encoding: v16@0:8
// Implementation: 0x105c5655c

// -[SCOneTapLoginLogoutInterceptor _oneTapLoginMaxAccountAlertDeclined]
// Type encoding: v16@0:8
// Implementation: 0x105c565ec

// -[SCOneTapLoginLogoutInterceptor dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c56624

// -[SCOneTapLoginLogoutInterceptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c56708

@end
