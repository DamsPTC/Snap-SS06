// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAppStatusCoordinator
// Superclass: NSObject
// Address: 0x112a84638

@interface SCSpectaclesAppStatusCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: announcer; attributes: T@"SCSpectaclesAppStatusListenerAnnouncer",&,N,V_announcer
// Property: needToDisplayBluetoothErrorAlert; attributes: TB,N,V_needToDisplayBluetoothErrorAlert
// Property: deviceProductType; attributes: Tq,N,V_deviceProductType
// Property: hasSeenBluetoothErrorAlert; attributes: TB,N,V_hasSeenBluetoothErrorAlert
// Property: hasSeenFirmwareUpdateRequiredAlert; attributes: TB,N,V_hasSeenFirmwareUpdateRequiredAlert
// Property: needToDisplayUnpairedAlert; attributes: TB,N,V_needToDisplayUnpairedAlert
// Property: deviceStates; attributes: T@"NSMutableDictionary",&,N,V_deviceStates
// Property: deviceContentManifests; attributes: T@"NSMutableDictionary",&,N,V_deviceContentManifests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAppStatusCoordinator mockDeviceGotUnpaired]
// Type encoding: v16@0:8
// Implementation: 0x105a45748

// -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateLowBattery]
// Type encoding: v16@0:8
// Implementation: 0x105a4578c

// -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateLowTemp]
// Type encoding: v16@0:8
// Implementation: 0x105a457d0

// -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateHighTemp]
// Type encoding: v16@0:8
// Implementation: 0x105a45814

// -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateStorageFull]
// Type encoding: v16@0:8
// Implementation: 0x105a45858

// -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateFirmwareCrash]
// Type encoding: v16@0:8
// Implementation: 0x105a4589c

// -[SCSpectaclesAppStatusCoordinator initWithUserPreferences:spectaclesManager:firmwareManager:spectaclesAppLogger:appInsightsMetadataStorage:featureSettingsService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a3dc74

// -[SCSpectaclesAppStatusCoordinator _statusForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3dfc0

// -[SCSpectaclesAppStatusCoordinator appStatusStateForDevice:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a3e05c

// -[SCSpectaclesAppStatusCoordinator deviceAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a3e108

// -[SCSpectaclesAppStatusCoordinator pairedDeviceAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a3e194

// -[SCSpectaclesAppStatusCoordinator connectedDeviceAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a3e1f8

// -[SCSpectaclesAppStatusCoordinator indexOfDevice:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a3e25c

// -[SCSpectaclesAppStatusCoordinator numberOfDevices]
// Type encoding: q16@0:8
// Implementation: 0x105a3e2e8

// -[SCSpectaclesAppStatusCoordinator numberOfPairedDevices]
// Type encoding: q16@0:8
// Implementation: 0x105a3e348

// -[SCSpectaclesAppStatusCoordinator numberOfConnectedDevices]
// Type encoding: q16@0:8
// Implementation: 0x105a3e384

// -[SCSpectaclesAppStatusCoordinator _numberOfUntransferredContentsFromConnectedDevice]
// Type encoding: q16@0:8
// Implementation: 0x105a3e3c0

// -[SCSpectaclesAppStatusCoordinator _pairingCompleteMessageForConnectedDevice]
// Type encoding: @16@0:8
// Implementation: 0x105a3e450

// -[SCSpectaclesAppStatusCoordinator crashContext]
// Type encoding: @16@0:8
// Implementation: 0x105a3e510

// -[SCSpectaclesAppStatusCoordinator isBluetoothOn]
// Type encoding: B16@0:8
// Implementation: 0x105a3e538

// -[SCSpectaclesAppStatusCoordinator isBluetoothAuthorized]
// Type encoding: B16@0:8
// Implementation: 0x105a3e57c

// -[SCSpectaclesAppStatusCoordinator isUserTriggeredStateForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a3e5c0

// -[SCSpectaclesAppStatusCoordinator isDeviceTransferring:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a3e67c

// -[SCSpectaclesAppStatusCoordinator isDeviceUpdating:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a3e6fc

// -[SCSpectaclesAppStatusCoordinator setSpectaclesMemoriesOnScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a3e7ec

// -[SCSpectaclesAppStatusCoordinator setSpectaclesSettingsOnScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a3e854

// -[SCSpectaclesAppStatusCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3e894

// -[SCSpectaclesAppStatusCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3e89c

// -[SCSpectaclesAppStatusCoordinator expandedStatusDescriptionForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3e8a4

// -[SCSpectaclesAppStatusCoordinator firmwareUpdateProgressForDevice:]
// Type encoding: f24@0:8@16
// Implementation: 0x105a3ebf0

// -[SCSpectaclesAppStatusCoordinator _buildGroupsForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3ec34

// -[SCSpectaclesAppStatusCoordinator contentManifestForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3efcc

// -[SCSpectaclesAppStatusCoordinator _calculateContentManifestForDevice:transferSession:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a3efd0

// -[SCSpectaclesAppStatusCoordinator initiateTransferFromStartSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a3f3f8

// -[SCSpectaclesAppStatusCoordinator _initiateTransferForDevice:contentIds:startSource:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105a3f5e4

// -[SCSpectaclesAppStatusCoordinator _observeOTAStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3f8c8

// -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3fad4

// -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidPair:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3faf8

// -[SCSpectaclesAppStatusCoordinator spectaclesOnDeviceForgotten:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3fba0

// -[SCSpectaclesAppStatusCoordinator spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a3fbc8

// -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidUpdateContentList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3fc74

// -[SCSpectaclesAppStatusCoordinator spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a3fc7c

// -[SCSpectaclesAppStatusCoordinator spectaclesDevice:onDeviceLogsUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a40024

// -[SCSpectaclesAppStatusCoordinator spectaclesDevice:didUnpairWithReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a400b4

// -[SCSpectaclesAppStatusCoordinator spectaclesDevice:onAlertNotification:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a401d0

// -[SCSpectaclesAppStatusCoordinator spectaclesOnBluetoothStateUpdate:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a402a8

// -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateForDevice:changedState:progress:]
// Type encoding: v36@0:8@16Q24f32
// Implementation: 0x105a403ec

// -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateForDevice:failedFromState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a40484

// -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateEvent:device:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105a40500

// -[SCSpectaclesAppStatusCoordinator spectaclesOnNewFirmwareVersionFetched]
// Type encoding: v16@0:8
// Implementation: 0x105a40598

// -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidSetUpFeatureCatalog:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a406fc

// -[SCSpectaclesAppStatusCoordinator applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a40700

// -[SCSpectaclesAppStatusCoordinator applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a40728

// -[SCSpectaclesAppStatusCoordinator _postInitSetup]
// Type encoding: v16@0:8
// Implementation: 0x105a4075c

// -[SCSpectaclesAppStatusCoordinator _updateCrashContext]
// Type encoding: v16@0:8
// Implementation: 0x105a40940

// -[SCSpectaclesAppStatusCoordinator _updateCrashContextWithTransferSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a40948

// -[SCSpectaclesAppStatusCoordinator _updateOTAUpdateAppState:device:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a40ad0

// -[SCSpectaclesAppStatusCoordinator _refreshStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4125c

// -[SCSpectaclesAppStatusCoordinator _shouldDismissAlertForDeviceStateUpdate:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a412e4

// -[SCSpectaclesAppStatusCoordinator _transitionToIdleStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a413d4

// -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a41458

// -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:transferSession:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a41464

// -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:transferSession:alertStateTimedOut:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105a4146c

// -[SCSpectaclesAppStatusCoordinator _initializeStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a41734

// -[SCSpectaclesAppStatusCoordinator _clearAlertStateForAllDevices]
// Type encoding: v16@0:8
// Implementation: 0x105a417b0

// -[SCSpectaclesAppStatusCoordinator _clearAlertStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a418c8

// -[SCSpectaclesAppStatusCoordinator _checkIfStateNeedsToDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105a41950

// -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayBluetoothErrorAlert]
// Type encoding: v16@0:8
// Implementation: 0x105a41c74

// -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayFirmwareUpdateRequiredAlert]
// Type encoding: v16@0:8
// Implementation: 0x105a41d14

// -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayUnpairedAlert]
// Type encoding: v16@0:8
// Implementation: 0x105a41e7c

// -[SCSpectaclesAppStatusCoordinator pairedDevices]
// Type encoding: @16@0:8
// Implementation: 0x105a41f08

// -[SCSpectaclesAppStatusCoordinator connectedDevices]
// Type encoding: @16@0:8
// Implementation: 0x105a42054

// -[SCSpectaclesAppStatusCoordinator _setNewDeviceState:forDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a4221c

// -[SCSpectaclesAppStatusCoordinator _deviceStateForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a422ac

// -[SCSpectaclesAppStatusCoordinator _updateNewDeviceContentManifestsForDevice:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a42330

// -[SCSpectaclesAppStatusCoordinator _deviceContentManifestsForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a423d4

// -[SCSpectaclesAppStatusCoordinator _idleStateForDevice:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a42458

// -[SCSpectaclesAppStatusCoordinator _delayTimeForState:]
// Type encoding: d24@0:8q16
// Implementation: 0x105a427d8

// -[SCSpectaclesAppStatusCoordinator setNeedToDisplayUnpairedAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a427f4

// -[SCSpectaclesAppStatusCoordinator setDevicePoductType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a42854

// -[SCSpectaclesAppStatusCoordinator _showLagunaRestartErrorAlertView]
// Type encoding: v16@0:8
// Implementation: 0x105a428b4

// -[SCSpectaclesAppStatusCoordinator _showLagunaUnpairedErrorAlertView]
// Type encoding: v16@0:8
// Implementation: 0x105a42ba4

// -[SCSpectaclesAppStatusCoordinator _updateMemoriesSideButtonTooltipVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a42eb4

// -[SCSpectaclesAppStatusCoordinator _logStringForLagunaState:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a430c0

// -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorBluetoothTurnedOn]
// Type encoding: v16@0:8
// Implementation: 0x105a430e8

// -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorBluetoothTurnedOff]
// Type encoding: v16@0:8
// Implementation: 0x105a43120

// -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorNumberOfDevicesUpdated]
// Type encoding: v16@0:8
// Implementation: 0x105a43180

// -[SCSpectaclesAppStatusCoordinator _announceNeedsToUpdateStateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a431b8

// -[SCSpectaclesAppStatusCoordinator _announcePressedLearnMoreForBluetoothOverloadError]
// Type encoding: v16@0:8
// Implementation: 0x105a43254

// -[SCSpectaclesAppStatusCoordinator announcer]
// Type encoding: @16@0:8
// Implementation: 0x105a4328c

// -[SCSpectaclesAppStatusCoordinator setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a43294

// -[SCSpectaclesAppStatusCoordinator needToDisplayBluetoothErrorAlert]
// Type encoding: B16@0:8
// Implementation: 0x105a432c4

// -[SCSpectaclesAppStatusCoordinator setNeedToDisplayBluetoothErrorAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a432cc

// -[SCSpectaclesAppStatusCoordinator deviceProductType]
// Type encoding: q16@0:8
// Implementation: 0x105a432d4

// -[SCSpectaclesAppStatusCoordinator setDeviceProductType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a432dc

// -[SCSpectaclesAppStatusCoordinator hasSeenBluetoothErrorAlert]
// Type encoding: B16@0:8
// Implementation: 0x105a432e4

// -[SCSpectaclesAppStatusCoordinator setHasSeenBluetoothErrorAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a432ec

// -[SCSpectaclesAppStatusCoordinator hasSeenFirmwareUpdateRequiredAlert]
// Type encoding: B16@0:8
// Implementation: 0x105a432f4

// -[SCSpectaclesAppStatusCoordinator setHasSeenFirmwareUpdateRequiredAlert:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a432fc

// -[SCSpectaclesAppStatusCoordinator needToDisplayUnpairedAlert]
// Type encoding: B16@0:8
// Implementation: 0x105a43304

// -[SCSpectaclesAppStatusCoordinator deviceStates]
// Type encoding: @16@0:8
// Implementation: 0x105a4330c

// -[SCSpectaclesAppStatusCoordinator setDeviceStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a43314

// -[SCSpectaclesAppStatusCoordinator deviceContentManifests]
// Type encoding: @16@0:8
// Implementation: 0x105a43344

// -[SCSpectaclesAppStatusCoordinator setDeviceContentManifests:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4334c

// -[SCSpectaclesAppStatusCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a4337c

// +[SCSpectaclesAppStatusCoordinator _isDeviceLowTemperature:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a40ebc

// +[SCSpectaclesAppStatusCoordinator _isDeviceHighTemperature:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a40f84

// +[SCSpectaclesAppStatusCoordinator _isDeviceLowStorageSpace:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a411b8

// +[SCSpectaclesAppStatusCoordinator _isItAnAlertState:]
// Type encoding: B24@0:8q16
// Implementation: 0x105a4303c

// +[SCSpectaclesAppStatusCoordinator _isTransferState:]
// Type encoding: B24@0:8q16
// Implementation: 0x105a43058

// +[SCSpectaclesAppStatusCoordinator _isWifiBootState:]
// Type encoding: B24@0:8q16
// Implementation: 0x105a43074

// +[SCSpectaclesAppStatusCoordinator _isFirmwareUpdateState:]
// Type encoding: B24@0:8q16
// Implementation: 0x105a4308c

// +[SCSpectaclesAppStatusCoordinator _isIdleState:]
// Type encoding: B24@0:8q16
// Implementation: 0x105a430a4

@end
