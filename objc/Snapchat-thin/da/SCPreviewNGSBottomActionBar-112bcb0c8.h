// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewNGSBottomActionBar
// Superclass: SCTransparentParentView
// Address: 0x112bcb0c8

@interface SCPreviewNGSBottomActionBar

// Property: buttonConfig; attributes: TQ,N,V_buttonConfig
// Property: spotlightStyle; attributes: T{SCPreviewNGSSpotlightButtonStyle=BB},N,V_spotlightStyle
// Property: saveButton; attributes: T@"SCPreviewNGSSaveButton",&,N,V_saveButton
// Property: shareButton; attributes: T@"SCGrowingButton",&,N,V_shareButton
// Property: storyButton; attributes: T@"SCGrowingButton",&,N,V_storyButton
// Property: spotlightButton; attributes: T@"SCGrowingButton",&,N,V_spotlightButton
// Property: sendButton; attributes: T@"SCPreviewNGSSendButton",&,N,V_sendButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewNGSBottomActionBar initWithFrame:config:buttonStyle:shouldShowHintLabel:isDirectorMode:isLargeIconEnabled:isFromMemories:bitmojiSelfieFetcher:bitmojiSelfieRequest:publicProfileImageURL:resourceDownloader:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:performer:previewABProvider:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:shareButtonEnabled:grapheneRegistry:]
// Type encoding: @188@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48Q56B64B68B72B76@80@88@96@104@112@120@128@136@144@152@160@168B176@180
// Implementation: 0x108ed479c

// -[SCPreviewNGSBottomActionBar initWithFrame:config:buttonStyle:shouldShowHintLabel:isDirectorMode:isLargeIconEnabled:isFromMemories:bitmojiSelfieFetcher:bitmojiSelfieRequest:publicProfileImageURL:resourceDownloader:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:performer:previewABProvider:circumstanceEngine:extraHorizontalInset:sendToExperimentConfiguration:sendToUIConfiguration:shareButtonEnabled:grapheneRegistry:spotlightStyle:storiesTrayDefaultsToPublic:]
// Type encoding: @202@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48Q56B64B68B72B76@80@88@96@104@112@120@128@136@144@152d160@168@176B184@188{SCPreviewNGSSpotlightButtonStyle=BB}196B198
// Implementation: 0x108ed47f4

// -[SCPreviewNGSBottomActionBar layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108ed4c5c

// -[SCPreviewNGSBottomActionBar setButtonConfig:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ed4e34

// -[SCPreviewNGSBottomActionBar addAdditionalButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed4e54

// -[SCPreviewNGSBottomActionBar contentEdgeInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108ed4eb4

// -[SCPreviewNGSBottomActionBar saveButton]
// Type encoding: @16@0:8
// Implementation: 0x108ed4ee8

// -[SCPreviewNGSBottomActionBar shareButton]
// Type encoding: @16@0:8
// Implementation: 0x108ed4ff4

// -[SCPreviewNGSBottomActionBar storyButton]
// Type encoding: @16@0:8
// Implementation: 0x108ed5190

// -[SCPreviewNGSBottomActionBar spotlightButton]
// Type encoding: @16@0:8
// Implementation: 0x108ed53a0

// -[SCPreviewNGSBottomActionBar sendButton]
// Type encoding: @16@0:8
// Implementation: 0x108ed551c

// -[SCPreviewNGSBottomActionBar pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x108ed561c

// -[SCPreviewNGSBottomActionBar _useLighterColorForButtons]
// Type encoding: B16@0:8
// Implementation: 0x108ed5654

// -[SCPreviewNGSBottomActionBar _useTallerButtons]
// Type encoding: B16@0:8
// Implementation: 0x108ed566c

// -[SCPreviewNGSBottomActionBar _unifiedStyleEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ed56c0

// -[SCPreviewNGSBottomActionBar _hSizeClassPrioritizedFeatureFlagWithBoolean:]
// Type encoding: B20@0:8B16
// Implementation: 0x108ed56c8

// -[SCPreviewNGSBottomActionBar resetButtonsLayout]
// Type encoding: v16@0:8
// Implementation: 0x108ed5714

// -[SCPreviewNGSBottomActionBar _itemHSpace]
// Type encoding: d16@0:8
// Implementation: 0x108ed5718

// -[SCPreviewNGSBottomActionBar _layoutButtons]
// Type encoding: v16@0:8
// Implementation: 0x108ed5720

// -[SCPreviewNGSBottomActionBar _rebuildButtonLayout]
// Type encoding: v16@0:8
// Implementation: 0x108ed574c

// -[SCPreviewNGSBottomActionBar _createConstraintsForLabeledButton:withLeadingAnchor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ed680c

// -[SCPreviewNGSBottomActionBar _setupLabeledButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed6a58

// -[SCPreviewNGSBottomActionBar _sizeForLabeledButton:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x108ed6ac0

// -[SCPreviewNGSBottomActionBar _saveAndSharebuttonLayoutStyle]
// Type encoding: q16@0:8
// Implementation: 0x108ed6b28

// -[SCPreviewNGSBottomActionBar _storyButtonStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x108ed6b88

// -[SCPreviewNGSBottomActionBar _fetchCustomStoriesWithObserver:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ed6ca4

// -[SCPreviewNGSBottomActionBar _fetchMostRecentlyPostedStoryWithCustomStories:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ed6e3c

// -[SCPreviewNGSBottomActionBar _changeQuickPostTextWithRecentlyPostedMyStory:recentlyPostedPublicStory:recentlyPostedCustomStory:observer:]
// Type encoding: v36@0:8B16B20B24@28
// Implementation: 0x108ed6fbc

// -[SCPreviewNGSBottomActionBar preferredHeight]
// Type encoding: d16@0:8
// Implementation: 0x108ed70d4

// -[SCPreviewNGSBottomActionBar componentView]
// Type encoding: @16@0:8
// Implementation: 0x108ed70ec

// -[SCPreviewNGSBottomActionBar buttonConfig]
// Type encoding: Q16@0:8
// Implementation: 0x108ed70f0

// -[SCPreviewNGSBottomActionBar spotlightStyle]
// Type encoding: {SCPreviewNGSSpotlightButtonStyle=BB}16@0:8
// Implementation: 0x108ed7100

// -[SCPreviewNGSBottomActionBar setSpotlightStyle:]
// Type encoding: v18@0:8{SCPreviewNGSSpotlightButtonStyle=BB}16
// Implementation: 0x108ed7110

// -[SCPreviewNGSBottomActionBar setSaveButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed7120

// -[SCPreviewNGSBottomActionBar setShareButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed7160

// -[SCPreviewNGSBottomActionBar setStoryButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed71a0

// -[SCPreviewNGSBottomActionBar setSpotlightButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed71e0

// -[SCPreviewNGSBottomActionBar setSendButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ed7220

// -[SCPreviewNGSBottomActionBar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ed7260

@end
