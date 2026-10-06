// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCContactSyncSettingsContextInteractor
// Superclass: NSObject
// Address: 0x112a95168

@interface SCCContactSyncSettingsContextInteractor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCContactSyncSettingsContextInteractor initWinitWithAlertPresenter:urlActionHandler:friendingConfigsProvider:friendingConfigsMutator:contactPermissionEventsLogger:contactPermissionInfoProvider:contactPermissionManager:applicationLifecycleEvents:snapchattersDataMutator:contactsSyncSettingsInteractorDelegate:circumstanceEngine:shouldRemoveUserLevelPermission:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72@80@88@96B104
// Implementation: 0x105c61280

// -[SCCContactSyncSettingsContextInteractor contactSyncSettingsContext]
// Type encoding: @16@0:8
// Implementation: 0x105c616c8

// -[SCCContactSyncSettingsContextInteractor dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c616d0

// -[SCCContactSyncSettingsContextInteractor _createLazyContext]
// Type encoding: @16@0:8
// Implementation: 0x105c616d4

// -[SCCContactSyncSettingsContextInteractor _createContactSyncSettingsContext]
// Type encoding: @16@0:8
// Implementation: 0x105c617cc

// -[SCCContactSyncSettingsContextInteractor _dismiss]
// Type encoding: v16@0:8
// Implementation: 0x105c61b70

// -[SCCContactSyncSettingsContextInteractor _resetContactSyncToggle]
// Type encoding: v16@0:8
// Implementation: 0x105c61b9c

// -[SCCContactSyncSettingsContextInteractor _isContactSyncEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105c61bec

// -[SCCContactSyncSettingsContextInteractor _isContactPermissionGranted]
// Type encoding: B16@0:8
// Implementation: 0x105c61c90

// -[SCCContactSyncSettingsContextInteractor _changeContactSyncEnabledTo:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c61d08

// -[SCCContactSyncSettingsContextInteractor _enableContactSync]
// Type encoding: v16@0:8
// Implementation: 0x105c61d14

// -[SCCContactSyncSettingsContextInteractor _disableContactSync]
// Type encoding: v16@0:8
// Implementation: 0x105c61e18

// -[SCCContactSyncSettingsContextInteractor _tryToPromptGotoOSSettings]
// Type encoding: v16@0:8
// Implementation: 0x105c61e28

// -[SCCContactSyncSettingsContextInteractor _updateContactBookSyncEnabled:completionQueue:completionHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x105c61e2c

// -[SCCContactSyncSettingsContextInteractor _updateContactBookSyncEnabledSucceed:completionHandler:error:]
// Type encoding: v36@0:8B16@?20@28
// Implementation: 0x105c61fa8

// -[SCCContactSyncSettingsContextInteractor _showAllContacts]
// Type encoding: v16@0:8
// Implementation: 0x105c62074

// -[SCCContactSyncSettingsContextInteractor _deleteAllContacts]
// Type encoding: v16@0:8
// Implementation: 0x105c620a0

// -[SCCContactSyncSettingsContextInteractor _enableInteractiveContactSyncToggle]
// Type encoding: v16@0:8
// Implementation: 0x105c622c4

// -[SCCContactSyncSettingsContextInteractor _grantUserLevelContactPermissionAndLog]
// Type encoding: v16@0:8
// Implementation: 0x105c62364

// -[SCCContactSyncSettingsContextInteractor _handleEnabledIsContactSyncEnabled]
// Type encoding: v16@0:8
// Implementation: 0x105c623f0

// -[SCCContactSyncSettingsContextInteractor _handleEnabledIsContactSyncEnabledWhenDeviceLevelContactPermissionNeverPrompt]
// Type encoding: v16@0:8
// Implementation: 0x105c62500

// -[SCCContactSyncSettingsContextInteractor _requestDeviceLevelContactPermissionCompletedAndResetContactSyncToggleWithPermissionStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c62600

// -[SCCContactSyncSettingsContextInteractor _requestDeviceLevelContactPermissionCompletedWithPermissionStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c62624

// -[SCCContactSyncSettingsContextInteractor _isContactSyncImmediatelyEnabledAfterToggleOn]
// Type encoding: B16@0:8
// Implementation: 0x105c6263c

// -[SCCContactSyncSettingsContextInteractor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c62654

@end
