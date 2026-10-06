// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardPACCampaignDataProviderImpl
// Superclass: NSObject
// Address: 0x1129eef48

@interface SCBillboardPACCampaignDataProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardPACCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:billboardLogger:stringFetcher:featureSettingsService:grapheneRegistry:userId:audioSession:cooldownCapManager:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104c7d094

// -[SCBillboardPACCampaignDataProviderImpl getProfileActivityCardCampaignInfoList]
// Type encoding: @16@0:8
// Implementation: 0x104c7d318

// -[SCBillboardPACCampaignDataProviderImpl _getCampaignInfoWithCampaignInfoPromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c7d444

// -[SCBillboardPACCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:campaignSnapshotEnumerator:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x104c7d5c8

// -[SCBillboardPACCampaignDataProviderImpl _completeCampaignInfoWithCampaignInfoPromise:campaignCOFName:campaignCOFConfig:serverUiConfig:defaultChannelGlobalRules:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104c7dd6c

// -[SCBillboardPACCampaignDataProviderImpl _completeCampaignInfoFromServerMetadataWithPromise:campaignName:pacUxConfig:cooldownConfig:defaultChannelGlobalRules:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104c7e568

// -[SCBillboardPACCampaignDataProviderImpl markCampaignAsDisplayedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c7e934

// -[SCBillboardPACCampaignDataProviderImpl markCampaignAsTappedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c7ea4c

// -[SCBillboardPACCampaignDataProviderImpl markCampaignAsDismissedWithCampaign:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c7eb48

// -[SCBillboardPACCampaignDataProviderImpl _pacChannelFullSignals]
// Type encoding: @16@0:8
// Implementation: 0x104c7ec44

// -[SCBillboardPACCampaignDataProviderImpl _populateAudioSignalsWhenNecessaryWithCampaignCOFName:readOnlyBillboardSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104c7ec4c

// -[SCBillboardPACCampaignDataProviderImpl _processRankingAndGetCampaign:campaignPromise:billboardSignals:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c7ecf4

// -[SCBillboardPACCampaignDataProviderImpl _resetFeatureSettingInfo]
// Type encoding: v16@0:8
// Implementation: 0x104c7ee10

// -[SCBillboardPACCampaignDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c7ee14

@end
