// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceStore
// Superclass: NSObject
// Address: 0x112b43498

@interface SCSpectaclesDeviceStore

// Property: announcer; attributes: T@"SCSpectaclesEventListenerAnnouncer",&,N,V_announcer
// Property: crashLogger; attributes: T@"<SCSpectaclesCrashLogger>",&,N,V_crashLogger
// Property: cache; attributes: T@"SCSpectaclesCache",&,N,V_cache
// Property: archivePerformer; attributes: T@"<SCPerforming>",&,N,V_archivePerformer
// Property: archivingBlock; attributes: T@?,C,N,V_archivingBlock
// Property: restoredFromDisk; attributes: TB,N,V_restoredFromDisk
// Property: lastDeviceForgottenTimestamp; attributes: Tq,N,V_lastDeviceForgottenTimestamp
// Property: analyticsLogger; attributes: T@"<SCSpectaclesLibraryLogger>",W,N,V_analyticsLogger
// Property: internalDevices; attributes: T@"NSDictionary",C,N,V_internalDevices
// Property: devices; attributes: T@"NSArray",&,V_devices
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: backgroundTaskWrapper; attributes: T@"SCLazy",R,N,V_backgroundTaskWrapper
// Property: minimumRequiredFirmwareVersions; attributes: T@"NSMutableDictionary",&,N,V_minimumRequiredFirmwareVersions
// Property: delegate; attributes: T@"<SCSpectaclesDeviceStoreDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lagunaId; attributes: T@"NSString",R,N,V_lagunaId

// -[SCSpectaclesDeviceStore initWithAnnouncer:cache:analyticsLogger:crashLogger:lagunaId:deviceFeatureScopeExposer:deviceFeatureScopeServices:backgroundTaskWrapper:clientControllerScopeExposer:clientControllerScopeServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100c5a6b4

// -[SCSpectaclesDeviceStore dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ea2080

// -[SCSpectaclesDeviceStore _archiveDevicesToCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea20b4

// -[SCSpectaclesDeviceStore _clearDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ea2154

// -[SCSpectaclesDeviceStore _updateRequiredFirmwareStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea21a4

// -[SCSpectaclesDeviceStore setInternalDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea22bc

// -[SCSpectaclesDeviceStore _archiveDevicesForced:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ea22f4

// -[SCSpectaclesDeviceStore archiveDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ea25b0

// -[SCSpectaclesDeviceStore retrieveArchivedDevicesWithCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea25b8

// -[SCSpectaclesDeviceStore _readArchivedDevices]
// Type encoding: @16@0:8
// Implementation: 0x106ea26fc

// -[SCSpectaclesDeviceStore _setupInternalDevicesWithUnarchivedDevices:centralManager:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea28cc

// -[SCSpectaclesDeviceStore _retrieveArchivedDevicesWithCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea2cac

// -[SCSpectaclesDeviceStore deviceForSerialNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ea2e04

// -[SCSpectaclesDeviceStore _updateSortedDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ea2e70

// -[SCSpectaclesDeviceStore _addToInternalDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea2fb8

// -[SCSpectaclesDeviceStore pairingManagerDidReceiveCrashReport:babyDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea3064

// -[SCSpectaclesDeviceStore pairingManagerDidPairBabyDevice:centralManager:onSuccess:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106ea3358

// -[SCSpectaclesDeviceStore pairingManagerUnpairAllDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ea381c

// -[SCSpectaclesDeviceStore removeDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea3ae8

// -[SCSpectaclesDeviceStore reconcileDevicesFromServer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea3cf4

// -[SCSpectaclesDeviceStore setMinimumRequiredFirmwareVersion:forHardwareWithMajorNumber:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea437c

// -[SCSpectaclesDeviceStore nextAvailableDeviceNumberForProductType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106ea4658

// -[SCSpectaclesDeviceStore deviceDidRequestArchiving:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4764

// -[SCSpectaclesDeviceStore deviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4768

// -[SCSpectaclesDeviceStore device:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea47c8

// -[SCSpectaclesDeviceStore device:onFirmwareUpdate:progress:]
// Type encoding: v36@0:8@16Q24f32
// Implementation: 0x106ea4850

// -[SCSpectaclesDeviceStore deviceDidFetchFirmwareDigest:digest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea48c0

// -[SCSpectaclesDeviceStore device:didCompletedScheduledUpdateWithUserInfo:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ea4930

// -[SCSpectaclesDeviceStore device:didUnpairWithReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea49b8

// -[SCSpectaclesDeviceStore device:didReceiveAlertNotification:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea4a18

// -[SCSpectaclesDeviceStore device:uploadToCloudEvent:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea4a78

// -[SCSpectaclesDeviceStore device:receivedClientId:requestAuthzCode:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106ea4ad8

// -[SCSpectaclesDeviceStore device:receivedWifiAPList:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea4b50

// -[SCSpectaclesDeviceStore device:receivedLastCloudUploadTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea4bc0

// -[SCSpectaclesDeviceStore deviceDidSetUpFeatureCatalog:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4c30

// -[SCSpectaclesDeviceStore devices]
// Type encoding: @16@0:8
// Implementation: 0x100c5bb34

// -[SCSpectaclesDeviceStore setDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4c80

// -[SCSpectaclesDeviceStore lagunaId]
// Type encoding: @16@0:8
// Implementation: 0x106ea4c88

// -[SCSpectaclesDeviceStore delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ea4c90

// -[SCSpectaclesDeviceStore setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5a96c

// -[SCSpectaclesDeviceStore announcer]
// Type encoding: @16@0:8
// Implementation: 0x106ea4ca8

// -[SCSpectaclesDeviceStore setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4cb0

// -[SCSpectaclesDeviceStore crashLogger]
// Type encoding: @16@0:8
// Implementation: 0x106ea4ce0

// -[SCSpectaclesDeviceStore setCrashLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4ce8

// -[SCSpectaclesDeviceStore cache]
// Type encoding: @16@0:8
// Implementation: 0x106ea4d18

// -[SCSpectaclesDeviceStore setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4d20

// -[SCSpectaclesDeviceStore archivePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106ea4d50

// -[SCSpectaclesDeviceStore setArchivePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4d58

// -[SCSpectaclesDeviceStore archivingBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106ea4d88

// -[SCSpectaclesDeviceStore setArchivingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ea4d90

// -[SCSpectaclesDeviceStore restoredFromDisk]
// Type encoding: B16@0:8
// Implementation: 0x106ea4d98

// -[SCSpectaclesDeviceStore setRestoredFromDisk:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ea4da0

// -[SCSpectaclesDeviceStore lastDeviceForgottenTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106ea4da8

// -[SCSpectaclesDeviceStore setLastDeviceForgottenTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ea4db0

// -[SCSpectaclesDeviceStore analyticsLogger]
// Type encoding: @16@0:8
// Implementation: 0x106ea4db8

// -[SCSpectaclesDeviceStore setAnalyticsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4dd0

// -[SCSpectaclesDeviceStore internalDevices]
// Type encoding: @16@0:8
// Implementation: 0x106ea4ddc

// -[SCSpectaclesDeviceStore performer]
// Type encoding: @16@0:8
// Implementation: 0x106ea4de4

// -[SCSpectaclesDeviceStore setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4dec

// -[SCSpectaclesDeviceStore backgroundTaskWrapper]
// Type encoding: @16@0:8
// Implementation: 0x106ea4e1c

// -[SCSpectaclesDeviceStore minimumRequiredFirmwareVersions]
// Type encoding: @16@0:8
// Implementation: 0x106ea4e24

// -[SCSpectaclesDeviceStore setMinimumRequiredFirmwareVersions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea4e2c

// -[SCSpectaclesDeviceStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ea4e5c

@end
