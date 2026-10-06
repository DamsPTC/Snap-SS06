// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112a5d5d8

@interface SCBitmojiSettingsViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiSettingsViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105715e7c

// -[SCBitmojiSettingsViewController initWithDelegate:bitmojiAvatarProvider:bitmojiLogger:page:bitmojiAvatarBuilderScopeExposer:bitmojiImageFetcher:bitmojiSelfiePickerScopeExposer:bitmojiSelfiePickerScopeServices:bitmojiSelfiePackProvider:bitmojiSelfieFetcher:bitmojiUserLinkingServices:configProvider:currentPageTracker:status:resourceDownloader:bitmojiAppEventsEmitter:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:bitmojiSelfieProvider:]
// Type encoding: @168@0:8@16@24@32q40@48@56@64@72@80@88@96@104@112q120@128@136@144@152@160
// Implementation: 0x105715edc

// -[SCBitmojiSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105716300

// -[SCBitmojiSettingsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10571662c

// -[SCBitmojiSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057169ac

// -[SCBitmojiSettingsViewController setNeedsStatusBarAppearanceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1057169f4

// -[SCBitmojiSettingsViewController _appDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105716aa0

// -[SCBitmojiSettingsViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105716b1c

// -[SCBitmojiSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x105716b90

// -[SCBitmojiSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x105716ba0

// -[SCBitmojiSettingsViewController _handleAppEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105716c54

// -[SCBitmojiSettingsViewController _refreshView]
// Type encoding: v16@0:8
// Implementation: 0x105716d60

// -[SCBitmojiSettingsViewController _updateSettingsViewToConfirmLink]
// Type encoding: v16@0:8
// Implementation: 0x105716dfc

// -[SCBitmojiSettingsViewController _updateSettingsViewIfBitmojiJustLinkedWithAvatarId:scale:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105716f78

// -[SCBitmojiSettingsViewController _setBackupLinkingSucceededViewImage]
// Type encoding: v16@0:8
// Implementation: 0x105717254

// -[SCBitmojiSettingsViewController _updateSettingsViewToChangeAvatar]
// Type encoding: v16@0:8
// Implementation: 0x1057174a4

// -[SCBitmojiSettingsViewController _updateSettingsViewIfBitmojiLinked]
// Type encoding: v16@0:8
// Implementation: 0x105717618

// -[SCBitmojiSettingsViewController didPressLinkButton:linkingView:settingsView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105717698

// -[SCBitmojiSettingsViewController didPressUnlinkBitmojiForUnlinkingView:settingsView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105717714

// -[SCBitmojiSettingsViewController _displaySIGUnlinkingModalWithEditOptionForUnlinkingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105717730

// -[SCBitmojiSettingsViewController _performUnlinkAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105717ab4

// -[SCBitmojiSettingsViewController didPressChangeOutfitCell:unlinkingView:settingsView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105717c2c

// -[SCBitmojiSettingsViewController didPressEditBitmojiCell:unlinkingView:settingsView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105717c5c

// -[SCBitmojiSettingsViewController _launchAvatarBuilderWithFlowMode:cell:unlinkingView:logAvatarSaveFromUnlinkFlow:]
// Type encoding: v44@0:8Q16@24@32B40
// Implementation: 0x105717c8c

// -[SCBitmojiSettingsViewController _presentAvatarBuilder]
// Type encoding: v16@0:8
// Implementation: 0x105717dd0

// -[SCBitmojiSettingsViewController _presentEditAvatarBuilderWithContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x105717ea8

// -[SCBitmojiSettingsViewController _uiContainerForAvatarBuilderScope]
// Type encoding: @16@0:8
// Implementation: 0x105717fa4

// -[SCBitmojiSettingsViewController _handleAvatarBuilderPresented]
// Type encoding: v16@0:8
// Implementation: 0x105717fd8

// -[SCBitmojiSettingsViewController didPressChangeSelfieCell:unlinkingView:settingsView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105718068

// -[SCBitmojiSettingsViewController _selfiePackDidChangeWithCell:unlinkingView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105718084

// -[SCBitmojiSettingsViewController leftSwipeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x10571815c

// -[SCBitmojiSettingsViewController bitmojiSelfiePickerComplete]
// Type encoding: v16@0:8
// Implementation: 0x105718190

// -[SCBitmojiSettingsViewController _changeSelfieWithCell:unlinkingView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057181e8

// -[SCBitmojiSettingsViewController bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105718758

// -[SCBitmojiSettingsViewController bitmojiAvatarBuilderCancelled]
// Type encoding: v16@0:8
// Implementation: 0x105718780

// -[SCBitmojiSettingsViewController bitmojiAvatarBuilderCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1057187e4

// -[SCBitmojiSettingsViewController bitmojiAvatarBuilderFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105718874

// -[SCBitmojiSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10571890c

@end
