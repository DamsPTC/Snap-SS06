// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesOTAUpdatePageController
// Superclass: NSObject
// Address: 0x112a88af8

@interface SCSpectaclesOTAUpdatePageController

// Property: delegate; attributes: T@"<SCSpectaclesOTAUpdatePageControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesOTAUpdatePageController initWithDevice:spectaclesAppStatusProvider:firmwareManager:otaManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105a95648

// -[SCSpectaclesOTAUpdatePageController _canDeviceUpdateSettings]
// Type encoding: B16@0:8
// Implementation: 0x105a9576c

// -[SCSpectaclesOTAUpdatePageController _shouldShowAutoUpdateSettings]
// Type encoding: B16@0:8
// Implementation: 0x105a957ac

// -[SCSpectaclesOTAUpdatePageController _updateAutomaticallySectionViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105a957e4

// -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105a9592c

// -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionTitle]
// Type encoding: @16@0:8
// Implementation: 0x105a95a1c

// -[SCSpectaclesOTAUpdatePageController _updateAvailableSectionSubtitle]
// Type encoding: @16@0:8
// Implementation: 0x105a95ad8

// -[SCSpectaclesOTAUpdatePageController _formattedAvailableVersion]
// Type encoding: @16@0:8
// Implementation: 0x105a95b60

// -[SCSpectaclesOTAUpdatePageController _newFooterViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105a95bf0

// -[SCSpectaclesOTAUpdatePageController _downloadProgressText]
// Type encoding: @16@0:8
// Implementation: 0x105a95e34

// -[SCSpectaclesOTAUpdatePageController _uploadProgressText]
// Type encoding: @16@0:8
// Implementation: 0x105a95fd4

// -[SCSpectaclesOTAUpdatePageController _installProgressText]
// Type encoding: @16@0:8
// Implementation: 0x105a9616c

// -[SCSpectaclesOTAUpdatePageController _setupOTAStateObservableIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105a96334

// -[SCSpectaclesOTAUpdatePageController _setupOTAAutoUpdateSettingsObervableIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105a964a8

// -[SCSpectaclesOTAUpdatePageController fetchViewModels]
// Type encoding: v16@0:8
// Implementation: 0x105a96644

// -[SCSpectaclesOTAUpdatePageController updateOTA]
// Type encoding: v16@0:8
// Implementation: 0x105a966bc

// -[SCSpectaclesOTAUpdatePageController setOTAAutoUpdateEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a96708

// -[SCSpectaclesOTAUpdatePageController retrieveActionSheetCellViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105a96744

// -[SCSpectaclesOTAUpdatePageController cancelOTAUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a968a8

// -[SCSpectaclesOTAUpdatePageController currentBatteryLevel]
// Type encoding: @16@0:8
// Implementation: 0x105a968e8

// -[SCSpectaclesOTAUpdatePageController _delayAndUpdateViewModels]
// Type encoding: v16@0:8
// Implementation: 0x105a96930

// -[SCSpectaclesOTAUpdatePageController _cancelViewModelUpdateBlock]
// Type encoding: v16@0:8
// Implementation: 0x105a96a10

// -[SCSpectaclesOTAUpdatePageController _updateViewModels]
// Type encoding: v16@0:8
// Implementation: 0x105a96a4c

// -[SCSpectaclesOTAUpdatePageController statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a96b70

// -[SCSpectaclesOTAUpdatePageController _updateOTAUpdateAppState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a96b84

// -[SCSpectaclesOTAUpdatePageController _updateOTAAutoUpdateSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a96c30

// -[SCSpectaclesOTAUpdatePageController _handleOTAUpdateErrorIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a96cc0

// -[SCSpectaclesOTAUpdatePageController _OTAUpdatePageErrorTypeFromOTAErrorType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a96e54

// -[SCSpectaclesOTAUpdatePageController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105a96e74

// -[SCSpectaclesOTAUpdatePageController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a96e8c

// -[SCSpectaclesOTAUpdatePageController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a96e98

@end
