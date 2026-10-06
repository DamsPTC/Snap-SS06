// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingManager
// Superclass: NSObject
// Address: 0x112b44b68

@interface SCSpectaclesPairingManager

// Property: centralManager; attributes: T@"SCSpectaclesCBCentralManager",&,N,V_centralManager
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: listener; attributes: T@"<SCSpectaclesEventListener>",W,N,V_listener
// Property: state; attributes: TQ,N,V_state
// Property: deviceStore; attributes: T@"<SCSpectaclesDeviceStore>",&,N,V_deviceStore
// Property: userDisplayName; attributes: T@"NSString",C,N,V_userDisplayName
// Property: advertisementCode; attributes: T@"NSData",&,N,V_advertisementCode
// Property: babyDevice; attributes: T@"SCSpectaclesBabyDevice",&,N,V_babyDevice
// Property: pairingSessionId; attributes: T@"NSUUID",C,N,V_pairingSessionId
// Property: stateTransitionTimeout; attributes: T@"SCWeakTimer",&,N,V_stateTransitionTimeout
// Property: watchdogTimer; attributes: T@"SCWeakTimer",&,N,V_watchdogTimer
// Property: scanner; attributes: T@"SCSpectaclesPairingScanner",&,N,V_scanner
// Property: bleAuthenticator; attributes: T@"<SCSpectaclesPairingBLEAuthenticator>",&,N,V_bleAuthenticator
// Property: btConnector; attributes: T@"SCSpectaclesPairingBTConnector",&,N,V_btConnector
// Property: btAuthenticator; attributes: T@"SCSpectaclesPairingLagunaBTAuthenticator",&,N,V_btAuthenticator
// Property: userAssociator; attributes: T@"<SCSpectaclesPairingUserAssociating>",&,N,V_userAssociator
// Property: authProviders; attributes: T@"NSMutableSet",&,N,V_authProviders
// Property: pairingUpdate; attributes: T@"SCObservable",R,N,V_pairingUpdate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingManager initWithDeviceStore:listener:centralManager:spectaclesProfile:authorizationProvider:fideliusKeyProvider:usernameProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106ee9a5c

// -[SCSpectaclesPairingManager scanForDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ee9c90

// -[SCSpectaclesPairingManager openCommunicationStream]
// Type encoding: v16@0:8
// Implementation: 0x106ee9d14

// -[SCSpectaclesPairingManager authenticatePeripheral]
// Type encoding: v16@0:8
// Implementation: 0x106ee9dd8

// -[SCSpectaclesPairingManager validatePairing]
// Type encoding: v16@0:8
// Implementation: 0x106eea130

// -[SCSpectaclesPairingManager requestBasicDeviceInformation]
// Type encoding: v16@0:8
// Implementation: 0x106eea324

// -[SCSpectaclesPairingManager unpairOtherDevicesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106eea4fc

// -[SCSpectaclesPairingManager nameDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eea618

// -[SCSpectaclesPairingManager requestLocationPermission]
// Type encoding: v16@0:8
// Implementation: 0x106eea9dc

// -[SCSpectaclesPairingManager connectAccessory]
// Type encoding: v16@0:8
// Implementation: 0x106eeaae8

// -[SCSpectaclesPairingManager sendPairingSessionIdRequest]
// Type encoding: v16@0:8
// Implementation: 0x106eeadc4

// -[SCSpectaclesPairingManager authenticateAccessory]
// Type encoding: v16@0:8
// Implementation: 0x106eeae60

// -[SCSpectaclesPairingManager associateUser]
// Type encoding: v16@0:8
// Implementation: 0x106eeb2a4

// -[SCSpectaclesPairingManager completePairingFlow]
// Type encoding: v16@0:8
// Implementation: 0x106eeb338

// -[SCSpectaclesPairingManager cancelPairingFlow]
// Type encoding: v16@0:8
// Implementation: 0x106eeb514

// -[SCSpectaclesPairingManager resetStateMachine]
// Type encoding: v16@0:8
// Implementation: 0x106eeb554

// -[SCSpectaclesPairingManager _handlePairingSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x106eeb67c

// -[SCSpectaclesPairingManager _mapStateToEvent:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106eeb6a4

// -[SCSpectaclesPairingManager _nameForEvent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106eeb6c8

// -[SCSpectaclesPairingManager _transitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106eeb6e8

// -[SCSpectaclesPairingManager _deviceStoreHasOtherPairedDevices]
// Type encoding: B16@0:8
// Implementation: 0x106eeb74c

// -[SCSpectaclesPairingManager _previouslyPairedDevice]
// Type encoding: @16@0:8
// Implementation: 0x106eeb904

// -[SCSpectaclesPairingManager _startWatchdogTimer]
// Type encoding: v16@0:8
// Implementation: 0x106eeb990

// -[SCSpectaclesPairingManager _timerKick]
// Type encoding: v16@0:8
// Implementation: 0x106eeb9e8

// -[SCSpectaclesPairingManager startSearchForNewDevicesWithUserDisplayName:targetDeviceProductType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106eebb7c

// -[SCSpectaclesPairingManager _advertisementCodeWithTargetDeviceProductType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106eebd1c

// -[SCSpectaclesPairingManager cancelSearchForNewDevicesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106eebe9c

// -[SCSpectaclesPairingManager factoryResetNewDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eebfd8

// -[SCSpectaclesPairingManager addAuthenticationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eec050

// -[SCSpectaclesPairingManager confirmUnpairPreviousDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eec0a0

// -[SCSpectaclesPairingManager confirmKeepPreviousDevicePaired]
// Type encoding: v16@0:8
// Implementation: 0x106eec1c8

// -[SCSpectaclesPairingManager setPairingDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eec2d0

// -[SCSpectaclesPairingManager setPairingSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eec47c

// -[SCSpectaclesPairingManager setPairingDeviceLocationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106eec5bc

// -[SCSpectaclesPairingManager pairingMaxDeviceNameLimit]
// Type encoding: Q16@0:8
// Implementation: 0x106eec6f8

// -[SCSpectaclesPairingManager pairingDisplayNameWithoutEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eec77c

// -[SCSpectaclesPairingManager pairingDisplayNameWithEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eec85c

// -[SCSpectaclesPairingManager pairingEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eec8d0

// -[SCSpectaclesPairingManager _readyForNameChoosing]
// Type encoding: B16@0:8
// Implementation: 0x106eec988

// -[SCSpectaclesPairingManager pairingDeviceInfo]
// Type encoding: @16@0:8
// Implementation: 0x106eec9a8

// -[SCSpectaclesPairingManager pairingStateShortCode]
// Type encoding: @16@0:8
// Implementation: 0x106eec9ec

// -[SCSpectaclesPairingManager confirmKeepPairingAfterValidatingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106eeca18

// -[SCSpectaclesPairingManager pairingScannerDidUpdateState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eecb1c

// -[SCSpectaclesPairingManager pairingScannerDidConnectPeripheral:advertisementCode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eecb5c

// -[SCSpectaclesPairingManager pairingScannerDidDisconnectPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eecf78

// -[SCSpectaclesPairingManager pairingScannerDidFindBackupPairingWithAdvertisementCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eed010

// -[SCSpectaclesPairingManager pairingScannerDidUpdateCBManagerState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eed198

// -[SCSpectaclesPairingManager _isDeviceSupportedWithAdvertisementCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eed1bc

// -[SCSpectaclesPairingManager _isAppSupportedWithAdvertisementCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eed35c

// -[SCSpectaclesPairingManager sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eed3d0

// -[SCSpectaclesPairingManager sendEncryptionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eed440

// -[SCSpectaclesPairingManager _activeHandler]
// Type encoding: @16@0:8
// Implementation: 0x106eed4b0

// -[SCSpectaclesPairingManager _isActivePeripheral:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eed52c

// -[SCSpectaclesPairingManager peripheralRequiresEncryptionSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eed5c0

// -[SCSpectaclesPairingManager peripheralDidOpenStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eed704

// -[SCSpectaclesPairingManager peripheral:didReceiveResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eed848

// -[SCSpectaclesPairingManager peripheral:didReceiveEncryptionResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eedef4

// -[SCSpectaclesPairingManager peripheral:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eee0b8

// -[SCSpectaclesPairingManager pairingBLEAuthenticatorDidExchangeEncryptionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eee354

// -[SCSpectaclesPairingManager pairingBLEAuthenticatorDidFail]
// Type encoding: v16@0:8
// Implementation: 0x106eee40c

// -[SCSpectaclesPairingManager pairingBTConnectorDidConnectAccessory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eee4a4

// -[SCSpectaclesPairingManager pairingBTConnectorDidShowPicker]
// Type encoding: v16@0:8
// Implementation: 0x106eee54c

// -[SCSpectaclesPairingManager pairingBTConnectorDidFindAccessory]
// Type encoding: v16@0:8
// Implementation: 0x106eee5d8

// -[SCSpectaclesPairingManager pairingBTConnectorPickerDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x106eee664

// -[SCSpectaclesPairingManager pairingBTConnectorPickerDidFailKeyMismatch]
// Type encoding: v16@0:8
// Implementation: 0x106eee6f0

// -[SCSpectaclesPairingManager pairingBTConnectorPickerDidFail]
// Type encoding: v16@0:8
// Implementation: 0x106eee77c

// -[SCSpectaclesPairingManager pairingBTConnectorDidDetectOverload]
// Type encoding: v16@0:8
// Implementation: 0x106eee808

// -[SCSpectaclesPairingManager pairingBTAuthenticatorDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106eee894

// -[SCSpectaclesPairingManager pairingBTAuthenticatorDidFailWithoutEaSession]
// Type encoding: v16@0:8
// Implementation: 0x106eee98c

// -[SCSpectaclesPairingManager pairingBTAuthenticatorDidFail]
// Type encoding: v16@0:8
// Implementation: 0x106eee994

// -[SCSpectaclesPairingManager _pairingBTAuthenticatorDidFailWithoutEaSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x106eee99c

// -[SCSpectaclesPairingManager pairingUserAssociatorDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106eeeb0c

// -[SCSpectaclesPairingManager pairingUserAssociatorDidFail:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106eeeb48

// -[SCSpectaclesPairingManager pairingUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106eeec60

// -[SCSpectaclesPairingManager centralManager]
// Type encoding: @16@0:8
// Implementation: 0x106eeec68

// -[SCSpectaclesPairingManager setCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeec70

// -[SCSpectaclesPairingManager performer]
// Type encoding: @16@0:8
// Implementation: 0x106eeeca0

// -[SCSpectaclesPairingManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeeca8

// -[SCSpectaclesPairingManager listener]
// Type encoding: @16@0:8
// Implementation: 0x106eeecd8

// -[SCSpectaclesPairingManager setListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeecf0

// -[SCSpectaclesPairingManager state]
// Type encoding: Q16@0:8
// Implementation: 0x106eeecfc

// -[SCSpectaclesPairingManager setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106eeed04

// -[SCSpectaclesPairingManager deviceStore]
// Type encoding: @16@0:8
// Implementation: 0x106eeed0c

// -[SCSpectaclesPairingManager setDeviceStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeed14

// -[SCSpectaclesPairingManager userDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106eeed44

// -[SCSpectaclesPairingManager setUserDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeed4c

// -[SCSpectaclesPairingManager advertisementCode]
// Type encoding: @16@0:8
// Implementation: 0x106eeed54

// -[SCSpectaclesPairingManager setAdvertisementCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeed5c

// -[SCSpectaclesPairingManager babyDevice]
// Type encoding: @16@0:8
// Implementation: 0x106eeed8c

// -[SCSpectaclesPairingManager setBabyDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeed94

// -[SCSpectaclesPairingManager pairingSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106eeedc4

// -[SCSpectaclesPairingManager stateTransitionTimeout]
// Type encoding: @16@0:8
// Implementation: 0x106eeedcc

// -[SCSpectaclesPairingManager setStateTransitionTimeout:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeedd4

// -[SCSpectaclesPairingManager watchdogTimer]
// Type encoding: @16@0:8
// Implementation: 0x106eeee04

// -[SCSpectaclesPairingManager setWatchdogTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeee0c

// -[SCSpectaclesPairingManager scanner]
// Type encoding: @16@0:8
// Implementation: 0x106eeee3c

// -[SCSpectaclesPairingManager setScanner:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeee44

// -[SCSpectaclesPairingManager bleAuthenticator]
// Type encoding: @16@0:8
// Implementation: 0x106eeee74

// -[SCSpectaclesPairingManager setBleAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeee7c

// -[SCSpectaclesPairingManager btConnector]
// Type encoding: @16@0:8
// Implementation: 0x106eeeeac

// -[SCSpectaclesPairingManager setBtConnector:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeeeb4

// -[SCSpectaclesPairingManager btAuthenticator]
// Type encoding: @16@0:8
// Implementation: 0x106eeeee4

// -[SCSpectaclesPairingManager setBtAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeeeec

// -[SCSpectaclesPairingManager userAssociator]
// Type encoding: @16@0:8
// Implementation: 0x106eeef1c

// -[SCSpectaclesPairingManager setUserAssociator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeef24

// -[SCSpectaclesPairingManager authProviders]
// Type encoding: @16@0:8
// Implementation: 0x106eeef54

// -[SCSpectaclesPairingManager setAuthProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eeef5c

// -[SCSpectaclesPairingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eeef8c

@end
