// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSnapshot
// Superclass: UIView
// Address: 0x112aaed48

@interface SCMapSnapshot


// -[SCMapSnapshot initWithFrame:userSession:locationProvider:embeddedStaticMapGenerator:mapStatusFetcher:mapPersonLocationsProvider:preferencesProvider:avatarProvider:networkConnectivityMonitor:userLocationPermissionsManager:snapchatterDataFetcher:friendmojiRegistry:mapSnapshotViewScope:userTrackedLogger:]
// Type encoding: @152@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x105f54c2c

// -[SCMapSnapshot attachView]
// Type encoding: v16@0:8
// Implementation: 0x105f55628

// -[SCMapSnapshot _listenForPersonLocationUpdatesForCurrentUser]
// Type encoding: v16@0:8
// Implementation: 0x105f55674

// -[SCMapSnapshot _retrieveFriendmojiAndSetupWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f55814

// -[SCMapSnapshot _retrieveFriendmojiWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f559e4

// -[SCMapSnapshot layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105f55b60

// -[SCMapSnapshot traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f55bd0

// -[SCMapSnapshot setMapViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f55c68

// -[SCMapSnapshot _setupEmbeddedMapView]
// Type encoding: v16@0:8
// Implementation: 0x105f55d30

// -[SCMapSnapshot _shouldShowMapErrorView:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f56194

// -[SCMapSnapshot _onStaticMapDownloadedWithScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f56240

// -[SCMapSnapshot _loadStaticMapWithPersonLocation:cluster:isCurrentUser:loggingSession:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105f564e0

// -[SCMapSnapshot _maybeSetupModel]
// Type encoding: v16@0:8
// Implementation: 0x105f56800

// -[SCMapSnapshot _locationSharingPreferencesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f568f8

// -[SCMapSnapshot onLocationPermissionStatusChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f56a50

// -[SCMapSnapshot _networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f56b14

// -[SCMapSnapshot .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f56bd4

@end
