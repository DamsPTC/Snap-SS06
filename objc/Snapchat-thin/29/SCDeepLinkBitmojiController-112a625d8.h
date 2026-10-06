// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkBitmojiController
// Superclass: NSObject
// Address: 0x112a625d8

@interface SCDeepLinkBitmojiController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeepLinkBitmojiController initWithAvatarProvider:bitmojiLogger:bitmojiSettingsScopeExposer:bitmojiSettingsScopeServices:avatarBuilderScopeExposer:editAvatarBuilderScopeExposer:editAvatarBuilderScopeServices:username:uiContainer:bitmoji3DStickerFetcher:circumstanceEngine:fashionTrayPresentingServices:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x1057842f8

// -[SCDeepLinkBitmojiController presentDeepLinkURL:sourceApplication:flowCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057845cc

// -[SCDeepLinkBitmojiController _handleTryOnDeepLinkURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105784f90

// -[SCDeepLinkBitmojiController _base64URLDecode:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057854c8

// -[SCDeepLinkBitmojiController _launchAvatarBuilderWithFlowMode:oAuthClientId:source:fashionDropId:category:sectionId:bitmojiAvatarBuilderReferrer:]
// Type encoding: v72@0:8Q16@24q32@40Q48@56@64
// Implementation: 0x1057855a0

// -[SCDeepLinkBitmojiController _launchCreateAvatarBuilderWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105785688

// -[SCDeepLinkBitmojiController _launchEditAvatarBuilderWithFlowMode:oAuthClientId:source:fashionDropId:category:sectionId:bitmojiAvatarBuilderReferrer:]
// Type encoding: v72@0:8Q16@24q32@40Q48@56@64
// Implementation: 0x10578570c

// -[SCDeepLinkBitmojiController _launchAvatarBuilderTryOnWithEncodedOutfit:trackingId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105785894

// -[SCDeepLinkBitmojiController _flowModeFromAvatarBuilderFlowMode:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1057859e8

// -[SCDeepLinkBitmojiController _launchSettingsWithStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x105785a8c

// -[SCDeepLinkBitmojiController bitmojiSettingsScopeDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x105785b14

// -[SCDeepLinkBitmojiController bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105785b34

// -[SCDeepLinkBitmojiController bitmojiAvatarBuilderCancelled]
// Type encoding: v16@0:8
// Implementation: 0x105785b7c

// -[SCDeepLinkBitmojiController bitmojiAvatarBuilderCompleted]
// Type encoding: v16@0:8
// Implementation: 0x105785b80

// -[SCDeepLinkBitmojiController bitmojiAvatarBuilderFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105785b84

// -[SCDeepLinkBitmojiController _closeEditAvatarBuilder]
// Type encoding: v16@0:8
// Implementation: 0x105785bd4

// -[SCDeepLinkBitmojiController _fetchImageForAvatarId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105785c38

// -[SCDeepLinkBitmojiController _presentAlertDialogWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105785ccc

// -[SCDeepLinkBitmojiController _dismissAlertDialog]
// Type encoding: v16@0:8
// Implementation: 0x105785f38

// -[SCDeepLinkBitmojiController _resizeImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105785f44

// -[SCDeepLinkBitmojiController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105786024

// +[SCDeepLinkBitmojiController _getAvatarBuilderFlowMode:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105785a00

@end
