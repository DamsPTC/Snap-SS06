// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationSharingServiceV2
// Superclass: NSObject
// Address: 0x112aab558

@interface SCLocationSharingServiceV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationSharingServiceV2 initWithUserInfoProvider:locationAuthorizationProvider:userLocationPermissionsManager:locationProvider:locationSharingPreferencesProvider:audioSession:locationOperationsUpdateObservable:appStartExperimentReader:locationRPCManager:applicationLifecycleEvents:featureSettingsService:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x10058a664

// -[SCLocationSharingServiceV2 _logAppStateChangeGrapheneMetrics:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c78ed0

// -[SCLocationSharingServiceV2 _publishDeviceDataAfterDelayIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x100c798e8

// -[SCLocationSharingServiceV2 _setIsLocationAuthorized:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c73c18

// -[SCLocationSharingServiceV2 _updatePollingState]
// Type encoding: v16@0:8
// Implementation: 0x100c79944

// -[SCLocationSharingServiceV2 _updatePollingStateWithoutStreaming]
// Type encoding: v16@0:8
// Implementation: 0x100c7a1f8

// -[SCLocationSharingServiceV2 _updatePollingStateWithStreaming]
// Type encoding: v16@0:8
// Implementation: 0x105f0c5d4

// -[SCLocationSharingServiceV2 _turnOffNonStreamingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105f0c770

// -[SCLocationSharingServiceV2 _turnOffStreamingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100c7a154

// -[SCLocationSharingServiceV2 _handleStreamActiveChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f0c79c

// -[SCLocationSharingServiceV2 _resetNextLocationUploadTimeAfterStreaming]
// Type encoding: v16@0:8
// Implementation: 0x105f0c84c

// -[SCLocationSharingServiceV2 _checkIfNeedsToFlushLocations]
// Type encoding: v16@0:8
// Implementation: 0x105f0c884

// -[SCLocationSharingServiceV2 _sendLocationUpdatesToServerAsSoonAsPossible]
// Type encoding: v16@0:8
// Implementation: 0x105f0c8dc

// -[SCLocationSharingServiceV2 _requestDeviceLocationWithDistanceFilter:caller:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105f0c978

// -[SCLocationSharingServiceV2 _requestDeviceLocation]
// Type encoding: v16@0:8
// Implementation: 0x105f0ca58

// -[SCLocationSharingServiceV2 _removeRequestForDeviceLocation]
// Type encoding: v16@0:8
// Implementation: 0x100c7a1bc

// -[SCLocationSharingServiceV2 _actuallyUploadPendingLocationsToServer]
// Type encoding: v16@0:8
// Implementation: 0x105f0cab0

// -[SCLocationSharingServiceV2 _handleLocationsUploadCompletedWithError:nextRequestInterval:locationUpdatesInFlight:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x105f0cc7c

// -[SCLocationSharingServiceV2 _truncatePendingLocationUpdatesToMaximumIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f0ce00

// -[SCLocationSharingServiceV2 _uploadDeviceDataWithAppState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f0ce4c

// -[SCLocationSharingServiceV2 _uploadLocationUpdates:isBackgroundUpdate:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105f0d0bc

// -[SCLocationSharingServiceV2 _createLocationUpdateRequestWithDeviceData:locationUpdates:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f0d354

// -[SCLocationSharingServiceV2 _isExplicitlyInGhostModeOrSimilar]
// Type encoding: B16@0:8
// Implementation: 0x10058d594

// -[SCLocationSharingServiceV2 _isUserConsideredToBeGhostMode]
// Type encoding: B16@0:8
// Implementation: 0x105f0d7b8

// -[SCLocationSharingServiceV2 _sendClientUpdates:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f0d80c

// -[SCLocationSharingServiceV2 _onApplicationStateChange]
// Type encoding: v16@0:8
// Implementation: 0x100c786ac

// -[SCLocationSharingServiceV2 _resetStreamingLocationUpdateTimerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f0da54

// -[SCLocationSharingServiceV2 _setupStreamingDeviceDataUpdateTimer]
// Type encoding: v16@0:8
// Implementation: 0x105f0db24

// -[SCLocationSharingServiceV2 _startStreamingUpdateTimer]
// Type encoding: v16@0:8
// Implementation: 0x105f0dc20

// -[SCLocationSharingServiceV2 _streamDeviceData]
// Type encoding: v16@0:8
// Implementation: 0x105f0dd24

// -[SCLocationSharingServiceV2 _streamDeviceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0de68

// -[SCLocationSharingServiceV2 _attemptToStreamLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0e008

// -[SCLocationSharingServiceV2 _streamLocation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f0e214

// -[SCLocationSharingServiceV2 locationProviderDidUpdateLocation]
// Type encoding: v16@0:8
// Implementation: 0x105f0e548

// -[SCLocationSharingServiceV2 locationProviderDidUpdateAuthorization:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c73c14

// -[SCLocationSharingServiceV2 locationSharingPreferencesSynced:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0e744

// -[SCLocationSharingServiceV2 locationProviderDidPublishVisit:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0e850

// -[SCLocationSharingServiceV2 _gpsDidReset]
// Type encoding: v16@0:8
// Implementation: 0x105f0eb0c

// -[SCLocationSharingServiceV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f0eb74

@end
