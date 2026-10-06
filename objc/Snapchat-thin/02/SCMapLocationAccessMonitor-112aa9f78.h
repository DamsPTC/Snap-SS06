// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLocationAccessMonitor
// Superclass: NSObject
// Address: 0x112aa9f78

@interface SCMapLocationAccessMonitor

// Property: monitoring; attributes: TB,N,V_monitoring
// Property: isShowingLocationAccessPrompt; attributes: TB,R,N
// Property: isShowingFullScreenPrompt; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLocationAccessMonitor initWithLocationSharingPrefsProvider:userLocationPermissionsManager:bitmojiLayerManager:presentationViewController:mapLoggerEventSender:mapUserPreferences:fullScreenUIShowsCloseButton:delegate:webBrowsingScopeExposer:deviceLocationPermissionsManager:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56B64@68@76@84@92
// Implementation: 0x105efbe80

// -[SCMapLocationAccessMonitor setMonitoring:]
// Type encoding: v20@0:8B16
// Implementation: 0x105efc0b0

// -[SCMapLocationAccessMonitor isShowingLocationAccessPrompt]
// Type encoding: B16@0:8
// Implementation: 0x105efc494

// -[SCMapLocationAccessMonitor isShowingFullScreenPrompt]
// Type encoding: B16@0:8
// Implementation: 0x105efc49c

// -[SCMapLocationAccessMonitor showLocationAccuracyPromptWithSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105efc4ac

// -[SCMapLocationAccessMonitor showLocationAccessPromptIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105efc54c

// -[SCMapLocationAccessMonitor showLocationAccessPromptWithSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105efc6d0

// -[SCMapLocationAccessMonitor _onLocationSharingPreferencesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105efc858

// -[SCMapLocationAccessMonitor _manageUIForAccuracy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105efc85c

// -[SCMapLocationAccessMonitor _handleLocationPromptCompleted:source:dialogType:]
// Type encoding: v36@0:8B16q20q28
// Implementation: 0x105efc9d4

// -[SCMapLocationAccessMonitor _setupLoadingViewIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105efca50

// -[SCMapLocationAccessMonitor locationProviderDidUpdateLocationAccuracy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105efcb3c

// -[SCMapLocationAccessMonitor locationProviderDidUpdateAuthorization:]
// Type encoding: v20@0:8B16
// Implementation: 0x105efcc08

// -[SCMapLocationAccessMonitor mapLoadingViewDidTapCloseButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105efcc0c

// -[SCMapLocationAccessMonitor webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105efcc40

// -[SCMapLocationAccessMonitor _topmostPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x105efcc88

// -[SCMapLocationAccessMonitor permissionsManagerWantsToPresentPermissionsPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x105efcd14

// -[SCMapLocationAccessMonitor permissionsManagerModalPresentationContainer]
// Type encoding: @16@0:8
// Implementation: 0x105efcd88

// -[SCMapLocationAccessMonitor monitoring]
// Type encoding: B16@0:8
// Implementation: 0x105efcdec

// -[SCMapLocationAccessMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105efcdf4

@end
