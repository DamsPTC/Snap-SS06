// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileFlatlandMyProfileBitmojiService
// Superclass: NSObject
// Address: 0x112a5d0d8

@interface SCProfileFlatlandMyProfileBitmojiService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileFlatlandMyProfileBitmojiService initWithAvatarIdProvider:bitmojiFlatlandInfoProvider:bitmojiFlatlandConfigProvider:bitmojiFlatlandUserUpdater:bitmojiCtaPromoManager:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:notificationPool:uiContainer:actionHandler:notificationCenter:generativeBackgroundsFeatureStatusProviding:posePickerScopeExposer:selfieIdProvider:bitmojiAvatarBuilderScopeExposer:plusFeatureBadging:mapCustomizationTrayFactoryServices:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x10570da5c

// -[SCProfileFlatlandMyProfileBitmojiService getMyAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x10570de18

// -[SCProfileFlatlandMyProfileBitmojiService getMySceneId]
// Type encoding: @16@0:8
// Implementation: 0x10570df20

// -[SCProfileFlatlandMyProfileBitmojiService getMyBackground]
// Type encoding: @16@0:8
// Implementation: 0x10570e11c

// -[SCProfileFlatlandMyProfileBitmojiService _flatlandBackgroundFromUserBitmojiFlatlandInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10570e2b8

// -[SCProfileFlatlandMyProfileBitmojiService _defaultProfileFlatlandBackground]
// Type encoding: @16@0:8
// Implementation: 0x10570e4f8

// -[SCProfileFlatlandMyProfileBitmojiService getAvailableSceneIds]
// Type encoding: @16@0:8
// Implementation: 0x10570e774

// -[SCProfileFlatlandMyProfileBitmojiService _profileFlatlandBitmojiSceneIds:badgingEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10570ecf8

// -[SCProfileFlatlandMyProfileBitmojiService getAvailableBackgroundIds]
// Type encoding: @16@0:8
// Implementation: 0x10570ee08

// -[SCProfileFlatlandMyProfileBitmojiService _profileFlatlandBitmojiBackgroundIds:badgingEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10570f38c

// -[SCProfileFlatlandMyProfileBitmojiService updateSceneAndBackgroundWithSceneId:background:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10570f4b8

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiOutfitPageWithActionSource:source:promo:encodedOutfit:avatarStateHistoryJson:]
// Type encoding: v52@0:8i16@20@28@36@44
// Implementation: 0x10570f898

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiEditPageWithActionSource:source:promo:avatarStateHistoryJson:]
// Type encoding: v44@0:8i16@20@28@36
// Implementation: 0x10570fb54

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiSelfiePage]
// Type encoding: v16@0:8
// Implementation: 0x10570fdc0

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePageFromWithActionSource:]
// Type encoding: v20@0:8i16
// Implementation: 0x10570fdd0

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePage]
// Type encoding: @16@0:8
// Implementation: 0x10570fe08

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePageFromSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x10570fe10

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiShareOutfitPageWithPetImageUrl:avatarId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10570ffc8

// -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiLensCarouselPageWithPetImageUrl:skipToLensFeed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105710078

// -[SCProfileFlatlandMyProfileBitmojiService handleUserDidEnterPoseSelectionView]
// Type encoding: v16@0:8
// Implementation: 0x105710100

// -[SCProfileFlatlandMyProfileBitmojiService handleUserDidExitPoseSelectionView]
// Type encoding: v16@0:8
// Implementation: 0x105710260

// -[SCProfileFlatlandMyProfileBitmojiService getPetsBadgedFeature]
// Type encoding: @16@0:8
// Implementation: 0x10571028c

// -[SCProfileFlatlandMyProfileBitmojiService displayPetsTrayWithOnClose:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10571033c

// -[SCProfileFlatlandMyProfileBitmojiService _sendActionIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105710404

// -[SCProfileFlatlandMyProfileBitmojiService _sendActionIdentifier:actionDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10571040c

// -[SCProfileFlatlandMyProfileBitmojiService getPlusExclusiveBackgroundFeatureGatingState]
// Type encoding: @16@0:8
// Implementation: 0x1057104ec

// -[SCProfileFlatlandMyProfileBitmojiService displayPlusExclusiveBackgroundUpsellPage]
// Type encoding: v16@0:8
// Implementation: 0x1057105d4

// -[SCProfileFlatlandMyProfileBitmojiService clearNewBackgroundIds]
// Type encoding: @16@0:8
// Implementation: 0x105710664

// -[SCProfileFlatlandMyProfileBitmojiService clearNewSceneIds]
// Type encoding: @16@0:8
// Implementation: 0x1057106cc

// -[SCProfileFlatlandMyProfileBitmojiService triggerBatchRenderWithSceneIds:scale:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x105710734

// -[SCProfileFlatlandMyProfileBitmojiService isUniversalAvatarEnabled]
// Type encoding: @16@0:8
// Implementation: 0x105710aa4

// -[SCProfileFlatlandMyProfileBitmojiService getMySelfieId]
// Type encoding: @16@0:8
// Implementation: 0x105710af8

// -[SCProfileFlatlandMyProfileBitmojiService presentOutfitChangeNotificationWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105710c00

// -[SCProfileFlatlandMyProfileBitmojiService writeOutfitChangeTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x105710c14

// -[SCProfileFlatlandMyProfileBitmojiService pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105710c28

// -[SCProfileFlatlandMyProfileBitmojiService plusSubscribeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105710c34

// -[SCProfileFlatlandMyProfileBitmojiService _backgroundTypeForProfileBackgroundURLType:]
// Type encoding: i20@0:8i16
// Implementation: 0x105710c7c

// -[SCProfileFlatlandMyProfileBitmojiService _showUpdateErrorNotification]
// Type encoding: v16@0:8
// Implementation: 0x105710c88

// -[SCProfileFlatlandMyProfileBitmojiService _titleForGranularSourceType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105710d1c

// -[SCProfileFlatlandMyProfileBitmojiService _presentCreateFlowFromSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105710d40

// -[SCProfileFlatlandMyProfileBitmojiService bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105710dc4

// -[SCProfileFlatlandMyProfileBitmojiService trayScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105710e84

// -[SCProfileFlatlandMyProfileBitmojiService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105710ec4

@end
