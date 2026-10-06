// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardFHPCampaignDataProviderImpl
// Superclass: NSObject
// Address: 0x1129eed18

@interface SCBillboardFHPCampaignDataProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardFHPCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:billboardLogger:stringFetcher:userSessionContext:friendsFeedDataCoordinator:friendsFeedActiveSignalProvider:featureSettingsService:grapheneRegistry:fhpUIConfigScopeExposer:fhpUIConfigFactoryServices:performer:billboardUserJourneyLogger:cooldownCapManager:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x104c708cc

// -[SCBillboardFHPCampaignDataProviderImpl campaignDataSourceObservable]
// Type encoding: @16@0:8
// Implementation: 0x104c71108

// -[SCBillboardFHPCampaignDataProviderImpl getFeedHeaderPromptCampaignInfoForRequestor:]
// Type encoding: @24@0:8q16
// Implementation: 0x104c71110

// -[SCBillboardFHPCampaignDataProviderImpl _startCampaignInfoRequestWithPromise:requestor:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104c71248

// -[SCBillboardFHPCampaignDataProviderImpl _getCampaignInfoWithCampaignInfoPromise:requestor:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104c71434

// -[SCBillboardFHPCampaignDataProviderImpl _calculateFirstEligibleCampaignWithRanking:campaignInfoPromise:readOnlyBillboardSignals:requestor:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x104c715c4

// -[SCBillboardFHPCampaignDataProviderImpl isDisplayingFHPCampaign]
// Type encoding: @16@0:8
// Implementation: 0x104c71724

// -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsRemoved]
// Type encoding: v16@0:8
// Implementation: 0x104c7172c

// -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsDisplayedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c7173c

// -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsTappedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c718fc

// -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsDismissedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c71a28

// -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptExtraButtonAsTappedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c71bec

// -[SCBillboardFHPCampaignDataProviderImpl fhpCampaignEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x104c71d64

// -[SCBillboardFHPCampaignDataProviderImpl _rankingCategoryOverrideForFhpCampaignCOFName:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c71d8c

// -[SCBillboardFHPCampaignDataProviderImpl _emitCampaignActionUpdate:action:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c71e74

// -[SCBillboardFHPCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:snapshots:index:ineligibleList:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:]
// Type encoding: v76@0:8@16@24Q32@40@48B56@60q68
// Implementation: 0x104c71fac

// -[SCBillboardFHPCampaignDataProviderImpl _continueCampaignEvaluationWithClientUIConfig:cofUiConfig:campaign:campaignCOFName:campaignInfoPromise:snapshots:index:ineligibleList:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:]
// Type encoding: v108@0:8@16@24@32@40@48@56Q64@72@80B88@92q100
// Implementation: 0x104c72b74

// -[SCBillboardFHPCampaignDataProviderImpl _completeCampaignInfoFromServerMetadataWithPromise:campaignName:fhpUxConfig:cooldownConfig:defaultChannelGlobalRules:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104c72e90

// -[SCBillboardFHPCampaignDataProviderImpl _completeCampaignInfoFromClientConfigWithPromise:campaignCOFName:campaignCOFConfig:cofUiConfig:clientUiConfig:defaultChannelGlobalRules:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x104c734fc

// -[SCBillboardFHPCampaignDataProviderImpl _ineligibleCampaignFromDataProviderError:campaignCOFName:rankingIndex:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x104c74118

// -[SCBillboardFHPCampaignDataProviderImpl _eligibleCampaign:rankingIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x104c741ec

// -[SCBillboardFHPCampaignDataProviderImpl _ineligibleCampaign:rankingIndex:ineligibleReason:]
// Type encoding: @40@0:8@16Q24q32
// Implementation: 0x104c74250

// -[SCBillboardFHPCampaignDataProviderImpl _postClickNoOpEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104c742c4

// -[SCBillboardFHPCampaignDataProviderImpl suicidePreventionCampaignCOFName]
// Type encoding: @16@0:8
// Implementation: 0x104c742dc

// -[SCBillboardFHPCampaignDataProviderImpl _fhpChannelFullSignals]
// Type encoding: @16@0:8
// Implementation: 0x104c74334

// -[SCBillboardFHPCampaignDataProviderImpl _updateHasConversationWithNonTeamSnapchat:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c74370

// -[SCBillboardFHPCampaignDataProviderImpl _updateHasUnreadTeamSnapchatConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c74510

// -[SCBillboardFHPCampaignDataProviderImpl _shouldBlockCampaignFetchbyUnreadTeamSnapchatConversation:]
// Type encoding: B24@0:8@16
// Implementation: 0x104c74740

// -[SCBillboardFHPCampaignDataProviderImpl _isBlockedCategoryForCampaign:]
// Type encoding: B24@0:8@16
// Implementation: 0x104c747b4

// -[SCBillboardFHPCampaignDataProviderImpl _logSuppressionWithCampaignName:timing:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c748a8

// -[SCBillboardFHPCampaignDataProviderImpl _resetFeatureSettingInfo]
// Type encoding: v16@0:8
// Implementation: 0x104c748bc

// -[SCBillboardFHPCampaignDataProviderImpl _resetLastImpressionTime]
// Type encoding: v16@0:8
// Implementation: 0x104c749a0

// -[SCBillboardFHPCampaignDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c749e0

@end
