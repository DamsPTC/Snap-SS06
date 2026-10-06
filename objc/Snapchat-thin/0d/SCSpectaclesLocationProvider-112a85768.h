// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLocationProvider
// Superclass: NSObject
// Address: 0x112a85768

@interface SCSpectaclesLocationProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLocationProvider initWithConnectionHub:userLocationServices:systemScope:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a5c528

// -[SCSpectaclesLocationProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105a5c618

// -[SCSpectaclesLocationProvider handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5c660

// -[SCSpectaclesLocationProvider responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a5c794

// -[SCSpectaclesLocationProvider onLocationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5c79c

// -[SCSpectaclesLocationProvider onLocationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5c828

// -[SCSpectaclesLocationProvider _handleLocationRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5c878

// -[SCSpectaclesLocationProvider _validateAuthorization]
// Type encoding: v16@0:8
// Implementation: 0x105a5c9ec

// -[SCSpectaclesLocationProvider _handleAuthorizationStatusAvailable:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a5cb7c

// -[SCSpectaclesLocationProvider _handleAuthorizedStatus]
// Type encoding: v16@0:8
// Implementation: 0x105a5cbec

// -[SCSpectaclesLocationProvider _handleNeedsDevicePermissionPrompt]
// Type encoding: v16@0:8
// Implementation: 0x105a5cc60

// -[SCSpectaclesLocationProvider _handlePermissionRefused]
// Type encoding: v16@0:8
// Implementation: 0x105a5ce38

// -[SCSpectaclesLocationProvider _subscribeAuthorizationStatus]
// Type encoding: v16@0:8
// Implementation: 0x105a5ce44

// -[SCSpectaclesLocationProvider _subscribeLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105a5d078

// -[SCSpectaclesLocationProvider _unsubscribeLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105a5d460

// -[SCSpectaclesLocationProvider _replyWithLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5d498

// -[SCSpectaclesLocationProvider _replyWithErrorStatus:debugMessage:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105a5d4fc

// -[SCSpectaclesLocationProvider _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x105a5d5d8

// -[SCSpectaclesLocationProvider permissionsManagerWantsToPresentPermissionsPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5d600

// -[SCSpectaclesLocationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a5d604

@end
