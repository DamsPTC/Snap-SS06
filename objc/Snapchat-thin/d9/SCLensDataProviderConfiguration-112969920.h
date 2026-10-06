// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderConfiguration
// Superclass: NSObject
// Address: 0x112969920

@interface SCLensDataProviderConfiguration

// Property: filteringPredicate; attributes: T@"NSPredicate",N,R,VfilteringPredicate
// Property: applicableContext; attributes: T@"NSString",N,R
// Property: originalLens; attributes: T@"SCLens",N,R,VoriginalLens
// Property: providerType; attributes: TQ,N,R,VproviderType
// Property: lensPlacement; attributes: Tq,N,R,VlensPlacement
// Property: explorerLensDisabled; attributes: TB,N,R,VexplorerLensDisabled
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCLensDataProviderConfiguration filteringPredicate]
// Type encoding: @16@0:8
// Implementation: 0x103f5673c

// -[SCLensDataProviderConfiguration applicableContext]
// Type encoding: @16@0:8
// Implementation: 0x100c3e154

// -[SCLensDataProviderConfiguration originalLens]
// Type encoding: @16@0:8
// Implementation: 0x103f5674c

// -[SCLensDataProviderConfiguration providerType]
// Type encoding: Q16@0:8
// Implementation: 0x103f5675c

// -[SCLensDataProviderConfiguration lensPlacement]
// Type encoding: q16@0:8
// Implementation: 0x100802ed4

// -[SCLensDataProviderConfiguration explorerLensDisabled]
// Type encoding: B16@0:8
// Implementation: 0x103f5676c

// -[SCLensDataProviderConfiguration initWithFilteringPredicate:applicableContext:originalLens:providerType:lensPlacement:explorerLensDisabled:]
// Type encoding: @60@0:8@16@24@32Q40q48B56
// Implementation: 0x103f56838

// -[SCLensDataProviderConfiguration hash]
// Type encoding: q16@0:8
// Implementation: 0x103f56a70

// -[SCLensDataProviderConfiguration isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103f56d98

// -[SCLensDataProviderConfiguration copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103f56e18

// -[SCLensDataProviderConfiguration description]
// Type encoding: @16@0:8
// Implementation: 0x103f56e1c

// -[SCLensDataProviderConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x103f56e50

// -[SCLensDataProviderConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f57050

// +[SCLensDataProviderConfiguration configurationForLiveCameraWithBundledLensMetadataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007ff768

// +[SCLensDataProviderConfiguration defaultFeatureConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1091debec

// +[SCLensDataProviderConfiguration configurationForLensesInPreviewWithApplicableContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dec4c

// +[SCLensDataProviderConfiguration configurationForWorldLensesInPreview]
// Type encoding: @16@0:8
// Implementation: 0x1091dedb0

// +[SCLensDataProviderConfiguration configurationForVideoChatWithBundledLensMetadataProvider:filterConnectedVideoLenses:filter3DBitmojiLenses:excludeExclusiveLenses:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x1091def18

// +[SCLensDataProviderConfiguration configurationForReplyCameraWithBundledLensMetadataProvider:bitmojiLinked:friendBitmojiLinked:explorerLensDisabled:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x1091df0fc

// +[SCLensDataProviderConfiguration configurationForReplyOnStoryWithBundledLensMetadataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091df264

// +[SCLensDataProviderConfiguration configurationForSceneIntelligenceWithBundledLensMetadataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091df41c

// +[SCLensDataProviderConfiguration configurationForLiveLensPreview]
// Type encoding: @16@0:8
// Implementation: 0x1091df4d8

// +[SCLensDataProviderConfiguration configurationForLensCollection]
// Type encoding: @16@0:8
// Implementation: 0x1091df538

// +[SCLensDataProviderConfiguration configurationForInfoCardSimilarLenses]
// Type encoding: @16@0:8
// Implementation: 0x1091df598

// +[SCLensDataProviderConfiguration configurationForLensReplyCameraWithBundledLensMetadataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091df5f8

// +[SCLensDataProviderConfiguration configurationForDirectorModeWithBundledLensMetadataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091df6b4

// +[SCLensDataProviderConfiguration configurationForCameraRollCamera]
// Type encoding: @16@0:8
// Implementation: 0x1091df774

// +[SCLensDataProviderConfiguration configurationForARBar]
// Type encoding: @16@0:8
// Implementation: 0x1091df7d4

// +[SCLensDataProviderConfiguration excludeMainCameraExclusiveLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091df834

// +[SCLensDataProviderConfiguration excludeExclusiveLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091df8b4

// +[SCLensDataProviderConfiguration excludeDemoLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091df928

// +[SCLensDataProviderConfiguration excludeLiveCameraLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091df99c

// +[SCLensDataProviderConfiguration excludeStudioLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfa3c

// +[SCLensDataProviderConfiguration excludeBitmojiPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfab0

// +[SCLensDataProviderConfiguration excludeFriendmojiPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfb24

// +[SCLensDataProviderConfiguration excludeConnectedLensPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfb98

// +[SCLensDataProviderConfiguration exclude3DBitmojiLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfc0c

// +[SCLensDataProviderConfiguration only3DBitmojiLensesForVideoChatPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfc80

// +[SCLensDataProviderConfiguration excludePreviewWorldLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfd08

// +[SCLensDataProviderConfiguration onlyPreviewWorldLensesPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dfd7c

// +[SCLensDataProviderConfiguration onlyLensesSuitableForMemories]
// Type encoding: @16@0:8
// Implementation: 0x1091dfdf0

// +[SCLensDataProviderConfiguration excludeBloopsPredicate]
// Type encoding: @16@0:8
// Implementation: 0x1091dff30

@end
