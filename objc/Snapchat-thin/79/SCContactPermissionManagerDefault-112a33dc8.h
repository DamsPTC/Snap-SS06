// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPermissionManagerDefault
// Superclass: NSObject
// Address: 0x112a33dc8

@interface SCContactPermissionManagerDefault

// Property: isContactPermissionRequestEnabled; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContactPermissionManagerDefault init]
// Type encoding: @16@0:8
// Implementation: 0x1053ec1c0

// -[SCContactPermissionManagerDefault initWithUserNotTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053ec228

// -[SCContactPermissionManagerDefault initWithUserTrackedLogger:lastLoginInfoRepository:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053ec280

// -[SCContactPermissionManagerDefault hasBeenPromptedForDeviceContactsAccess]
// Type encoding: B16@0:8
// Implementation: 0x1053ec308

// -[SCContactPermissionManagerDefault hasDeniedDeviceContactsAccess]
// Type encoding: B16@0:8
// Implementation: 0x1053ec330

// -[SCContactPermissionManagerDefault hasAuthorizedDeviceContactsAccess]
// Type encoding: B16@0:8
// Implementation: 0x1053ec358

// -[SCContactPermissionManagerDefault contactAuthorizationStatus]
// Type encoding: q16@0:8
// Implementation: 0x1053ec380

// -[SCContactPermissionManagerDefault isContactPermissionRequestEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1053ec390

// -[SCContactPermissionManagerDefault requestAddressBookAccessWithSource:completionHandler:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1053ec398

// -[SCContactPermissionManagerDefault _requestAddressBookAccessCompletedWithGranted:error:source:completionHandler:]
// Type encoding: v44@0:8B16@20q28@?36
// Implementation: 0x1053ec4fc

// -[SCContactPermissionManagerDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053ec698

@end
