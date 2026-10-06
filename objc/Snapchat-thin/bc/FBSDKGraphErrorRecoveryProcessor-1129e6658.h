// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGraphErrorRecoveryProcessor
// Superclass: NSObject
// Address: 0x1129e6658

@interface FBSDKGraphErrorRecoveryProcessor

// Property: accessToken; attributes: T@"NSString",R,N,V_accessToken
// Property: delegate; attributes: T@"<FBSDKGraphErrorRecoveryProcessorDelegate>",R,W,N,V_delegate
// Property: recoveryAttempter; attributes: T@"FBSDKErrorRecoveryAttempter",&,N,V_recoveryAttempter
// Property: _error; attributes: T@"NSError",&,N,V__error

// -[FBSDKGraphErrorRecoveryProcessor init]
// Type encoding: @16@0:8
// Implementation: 0x104961228

// -[FBSDKGraphErrorRecoveryProcessor initWithAccessTokenString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104961298

// -[FBSDKGraphErrorRecoveryProcessor processError:request:delegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104961310

// -[FBSDKGraphErrorRecoveryProcessor accessToken]
// Type encoding: @16@0:8
// Implementation: 0x1049615ac

// -[FBSDKGraphErrorRecoveryProcessor delegate]
// Type encoding: @16@0:8
// Implementation: 0x1049615b4

// -[FBSDKGraphErrorRecoveryProcessor recoveryAttempter]
// Type encoding: @16@0:8
// Implementation: 0x1049615cc

// -[FBSDKGraphErrorRecoveryProcessor setRecoveryAttempter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049615d4

// -[FBSDKGraphErrorRecoveryProcessor _error]
// Type encoding: @16@0:8
// Implementation: 0x1049615e0

// -[FBSDKGraphErrorRecoveryProcessor set_error:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049615e8

// -[FBSDKGraphErrorRecoveryProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049615f4

// +[FBSDKGraphErrorRecoveryProcessor new]
// Type encoding: @16@0:8
// Implementation: 0x10496120c

@end
