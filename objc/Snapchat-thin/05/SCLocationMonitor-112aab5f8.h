// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationMonitor
// Superclass: NSObject
// Address: 0x112aab5f8

@interface SCLocationMonitor


// -[SCLocationMonitor initWithLocationSharingPrefsProvider:locationSharingPrefsMutator:mapUserPreferences:appPreferences:notificationPresenter:grapheneRegistry:deviceLocationPermissionsManager:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105f0ed58

// -[SCLocationMonitor _handleSimplifiedLocationSharingOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x105f0f25c

// -[SCLocationMonitor _handleCommonLocationAccuracyCheckEvent]
// Type encoding: v16@0:8
// Implementation: 0x105f0f2a4

// -[SCLocationMonitor _handleAuthStatusCheck]
// Type encoding: v16@0:8
// Implementation: 0x105f0f3a8

// -[SCLocationMonitor _checkLocationAccuracy]
// Type encoding: v16@0:8
// Implementation: 0x105f0f46c

// -[SCLocationMonitor _logAccuracyMetricWithPreviousAccuracy:currentAccuracy:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105f0f4e0

// -[SCLocationMonitor _checkPreferencesForLocationAccuracy]
// Type encoding: v16@0:8
// Implementation: 0x105f0f5d8

// -[SCLocationMonitor _handleGhostModeChangedDueToAccuracyChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f0f888

// -[SCLocationMonitor _displayPreciseLocationNotificationForLocationDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f0f890

// -[SCLocationMonitor _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0f8a8

// -[SCLocationMonitor locationProviderDidUpdateLocationAccuracy]
// Type encoding: v16@0:8
// Implementation: 0x105f0f8d4

// -[SCLocationMonitor locationProviderDidUpdateAuthorizationWithStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x105f0f8d8

// -[SCLocationMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f0f904

@end
