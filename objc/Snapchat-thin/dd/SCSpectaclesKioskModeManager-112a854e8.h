// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesKioskModeManager
// Superclass: NSObject
// Address: 0x112a854e8

@interface SCSpectaclesKioskModeManager

// Property: getSettingsForCategoryRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_getSettingsForCategoryRequest
// Property: getAvailableLensRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_getAvailableLensRequest
// Property: setKioskModeEnabledRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_setKioskModeEnabledRequest
// Property: setActiveLensIdRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_setActiveLensIdRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: enabled; attributes: T@"SCObservable",R,N,V_enabled
// Property: activeLens; attributes: T@"SCObservable",R,N,V_activeLens
// Property: availableLens; attributes: T@"SCObservable",R,N,V_availableLens
// Property: errors; attributes: T@"SCObservable",R,N,V_errors
// Property: isLoadingSetting; attributes: T@"SCObservable",R,N,V_isLoadingSetting
// Property: isLoadingAvailableLens; attributes: T@"SCObservable",R,N,V_isLoadingAvailableLens
// Property: isUpdatingKioskModeEnabled; attributes: T@"SCObservable",R,N,V_isUpdatingKioskModeEnabled
// Property: isUpdatingKioskModeActiveLens; attributes: T@"SCObservable",R,N,V_isUpdatingKioskModeActiveLens
// Property: needsToRestartDevice; attributes: T@"SCObservable",R,N,V_needsToRestartDevice
// Property: updateEnabledResult; attributes: T@"SCObservable",R,N,V_updateEnabledResult
// Property: updateActiveLensResult; attributes: T@"SCObservable",R,N,V_updateActiveLensResult

// -[SCSpectaclesKioskModeManager setGetSettingsForCategoryRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a586bc

// -[SCSpectaclesKioskModeManager setGetAvailableLensRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a58744

// -[SCSpectaclesKioskModeManager setSetKioskModeEnabledRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a587cc

// -[SCSpectaclesKioskModeManager setSetActiveLensIdRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a58854

// -[SCSpectaclesKioskModeManager initWithConnectionHub:performer:lensInfoCardProvider:notificationPool:powerStateManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105a588dc

// -[SCSpectaclesKioskModeManager currentActiveLensId]
// Type encoding: @16@0:8
// Implementation: 0x105a58c34

// -[SCSpectaclesKioskModeManager requestKioskModeSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a58c5c

// -[SCSpectaclesKioskModeManager requestAvailableLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a58de4

// -[SCSpectaclesKioskModeManager setKioskModeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a58f78

// -[SCSpectaclesKioskModeManager setKioskModeActiveLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a59224

// -[SCSpectaclesKioskModeManager restartSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x105a594f8

// -[SCSpectaclesKioskModeManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a59604

// -[SCSpectaclesKioskModeManager _isKioskModeRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a59e24

// -[SCSpectaclesKioskModeManager _lensFromId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a59f14

// -[SCSpectaclesKioskModeManager _errorFromResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a5a068

// -[SCSpectaclesKioskModeManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a5a0e8

// -[SCSpectaclesKioskModeManager _fetchLensMetadata]
// Type encoding: v16@0:8
// Implementation: 0x105a5a0f0

// -[SCSpectaclesKioskModeManager _handleLensInfoCardData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5a368

// -[SCSpectaclesKioskModeManager _pushErrorNotification]
// Type encoding: v16@0:8
// Implementation: 0x105a5a7a0

// -[SCSpectaclesKioskModeManager enabled]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8ac

// -[SCSpectaclesKioskModeManager activeLens]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8b4

// -[SCSpectaclesKioskModeManager availableLens]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8bc

// -[SCSpectaclesKioskModeManager isLoadingSetting]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8c4

// -[SCSpectaclesKioskModeManager isUpdatingKioskModeEnabled]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8cc

// -[SCSpectaclesKioskModeManager isUpdatingKioskModeActiveLens]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8d4

// -[SCSpectaclesKioskModeManager isLoadingAvailableLens]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8dc

// -[SCSpectaclesKioskModeManager updateEnabledResult]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8e4

// -[SCSpectaclesKioskModeManager updateActiveLensResult]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8ec

// -[SCSpectaclesKioskModeManager needsToRestartDevice]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8f4

// -[SCSpectaclesKioskModeManager errors]
// Type encoding: @16@0:8
// Implementation: 0x105a5a8fc

// -[SCSpectaclesKioskModeManager getSettingsForCategoryRequest]
// Type encoding: @16@0:8
// Implementation: 0x105a5a904

// -[SCSpectaclesKioskModeManager getAvailableLensRequest]
// Type encoding: @16@0:8
// Implementation: 0x105a5a90c

// -[SCSpectaclesKioskModeManager setKioskModeEnabledRequest]
// Type encoding: @16@0:8
// Implementation: 0x105a5a914

// -[SCSpectaclesKioskModeManager setActiveLensIdRequest]
// Type encoding: @16@0:8
// Implementation: 0x105a5a91c

// -[SCSpectaclesKioskModeManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a5a924

@end
