// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAppLocationCoordinator
// Superclass: NSObject
// Address: 0x112a845e8

@interface SCSpectaclesAppLocationCoordinator

// Property: hasSetCountryCode; attributes: TB,N,V_hasSetCountryCode
// Property: downloadingGPSAlmanac; attributes: TB,N,GisDownloadingGPSAlmanac,V_downloadingGPSAlmanac
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAppLocationCoordinator initWithServerMetadataFetcher:onDemandResourceFetcher:spectaclesManager:userPreferences:locationProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105a3cbfc

// -[SCSpectaclesAppLocationCoordinator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105a3cdec

// -[SCSpectaclesAppLocationCoordinator spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3ce34

// -[SCSpectaclesAppLocationCoordinator spectaclesDeviceDidPair:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3cea4

// -[SCSpectaclesAppLocationCoordinator spectaclesOnDeviceForgotten:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3cf54

// -[SCSpectaclesAppLocationCoordinator spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a3cfa8

// -[SCSpectaclesAppLocationCoordinator _postInitSetup]
// Type encoding: v16@0:8
// Implementation: 0x105a3d048

// -[SCSpectaclesAppLocationCoordinator _subscribeLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105a3d084

// -[SCSpectaclesAppLocationCoordinator _unsubscribeLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105a3d37c

// -[SCSpectaclesAppLocationCoordinator _setCountryCodeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105a3d3b4

// -[SCSpectaclesAppLocationCoordinator _updateGPSAlmanacIfNeededForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3d7a4

// -[SCSpectaclesAppLocationCoordinator _downloadGPSAlmanacWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a3d9b8

// -[SCSpectaclesAppLocationCoordinator _gpsAlmanacData]
// Type encoding: @16@0:8
// Implementation: 0x105a3dbd8

// -[SCSpectaclesAppLocationCoordinator hasSetCountryCode]
// Type encoding: B16@0:8
// Implementation: 0x105a3dbe8

// -[SCSpectaclesAppLocationCoordinator setHasSetCountryCode:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a3dbf0

// -[SCSpectaclesAppLocationCoordinator isDownloadingGPSAlmanac]
// Type encoding: B16@0:8
// Implementation: 0x105a3dbf8

// -[SCSpectaclesAppLocationCoordinator setDownloadingGPSAlmanac:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a3dc00

// -[SCSpectaclesAppLocationCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a3dc08

@end
