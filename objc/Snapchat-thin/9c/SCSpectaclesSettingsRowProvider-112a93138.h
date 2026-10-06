// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesSettingsRowProvider
// Superclass: NSObject
// Address: 0x112a93138

@interface SCSpectaclesSettingsRowProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sectionRow; attributes: T@"SCSettingsSectionRow",R,C,N,V_sectionRow
// Property: rowViewModel; attributes: T@"SCObservable",R,N,V_rowViewModel

// -[SCSpectaclesSettingsRowProvider initWithScopeExposer:interstitialScopeExposer:spectaclesManager:devicesProvider:accountRow:deviceProductType:titleText:accessibilityIdentifier:]
// Type encoding: @80@0:8@16@24@32@40q48q56@64@72
// Implementation: 0x105c48404

// -[SCSpectaclesSettingsRowProvider _updateViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105c485f4

// -[SCSpectaclesSettingsRowProvider _isBluetoothOn]
// Type encoding: B16@0:8
// Implementation: 0x105c48744

// -[SCSpectaclesSettingsRowProvider handleWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48788

// -[SCSpectaclesSettingsRowProvider _dismissInterstitial]
// Type encoding: v16@0:8
// Implementation: 0x105c489cc

// -[SCSpectaclesSettingsRowProvider _showSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c489ec

// -[SCSpectaclesSettingsRowProvider spectaclesSettingsScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48a6c

// -[SCSpectaclesSettingsRowProvider spectaclesDeviceDidUpdateDeviceName:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48ae0

// -[SCSpectaclesSettingsRowProvider statusCoordinatorBluetoothTurnedOff:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48ae4

// -[SCSpectaclesSettingsRowProvider statusCoordinatorBluetoothTurnedOn:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48ae8

// -[SCSpectaclesSettingsRowProvider statusCoordinatorNumberOfDevicesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c48aec

// -[SCSpectaclesSettingsRowProvider statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c48af0

// -[SCSpectaclesSettingsRowProvider sectionRow]
// Type encoding: @16@0:8
// Implementation: 0x105c48af4

// -[SCSpectaclesSettingsRowProvider rowViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105c48afc

// -[SCSpectaclesSettingsRowProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c48b04

@end
