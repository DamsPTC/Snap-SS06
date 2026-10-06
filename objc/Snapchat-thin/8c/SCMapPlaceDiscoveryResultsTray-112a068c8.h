// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoveryResultsTray
// Superclass: NSObject
// Address: 0x112a068c8

@interface SCMapPlaceDiscoveryResultsTray

// Property: trayLifecycle; attributes: T@"<SCMapTrayLifecycle>",R,N,V_trayLifecycle
// Property: trayFeatureName; attributes: T@"NSString",R,N,V_trayFeatureName
// Property: viewportSessionData; attributes: T@"SCPlaceDiscoveryViewportSessionData",R,N
// Property: sessionIdsProvider; attributes: T@"SCMapPlaceDiscoverySessionIdsProvider",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceDiscoveryResultsTray initWithTrayConfiguration:chromeConfiguration:multiTrayServices:composerServices:controller:trayDelegate:placeDiscoveryContextCreator:searchStatusButton:halfTrayHeightRatio:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72d80
// Implementation: 0x104ed6fbc

// -[SCMapPlaceDiscoveryResultsTray presentTrayWithTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed71cc

// -[SCMapPlaceDiscoveryResultsTray dismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x104ed75b8

// -[SCMapPlaceDiscoveryResultsTray sessionIdsProvider]
// Type encoding: @16@0:8
// Implementation: 0x104ed75f0

// -[SCMapPlaceDiscoveryResultsTray viewportSessionData]
// Type encoding: @16@0:8
// Implementation: 0x104ed7618

// -[SCMapPlaceDiscoveryResultsTray logTapPlacePoiActionForPlaceID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed7704

// -[SCMapPlaceDiscoveryResultsTray logVisualTrayClose:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ed7888

// -[SCMapPlaceDiscoveryResultsTray _setupLoadStateObservable]
// Type encoding: v16@0:8
// Implementation: 0x104ed78b0

// -[SCMapPlaceDiscoveryResultsTray _onLoadStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed79ec

// -[SCMapPlaceDiscoveryResultsTray _setupStoriesLoadedObservable]
// Type encoding: v16@0:8
// Implementation: 0x104ed7b38

// -[SCMapPlaceDiscoveryResultsTray _onStoriesLoadedWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed7c74

// -[SCMapPlaceDiscoveryResultsTray _updateViewModelWithLoadState:places:trayDetails:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ed7cf0

// -[SCMapPlaceDiscoveryResultsTray _handleTrayEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed7de0

// -[SCMapPlaceDiscoveryResultsTray _cleanupTray]
// Type encoding: v16@0:8
// Implementation: 0x104ed7f80

// -[SCMapPlaceDiscoveryResultsTray _handleTrayWillChangeToPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104ed7fd8

// -[SCMapPlaceDiscoveryResultsTray _placeDiscoveryResultsTrayViewWithTrayDetails:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ed8074

// -[SCMapPlaceDiscoveryResultsTray _positionSearchStatusButton]
// Type encoding: v16@0:8
// Implementation: 0x104ed81d4

// -[SCMapPlaceDiscoveryResultsTray trayLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x104ed8264

// -[SCMapPlaceDiscoveryResultsTray trayFeatureName]
// Type encoding: @16@0:8
// Implementation: 0x104ed826c

// -[SCMapPlaceDiscoveryResultsTray .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ed8274

@end
