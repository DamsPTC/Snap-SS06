// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardFSTCampaignDataProviderImpl
// Superclass: NSObject
// Address: 0x1129eedb8

@interface SCBillboardFSTCampaignDataProviderImpl

// Property: lastFetchFeatureProvidedSignals; attributes: T@"FeatureProvidedSignals",&,V_lastFetchFeatureProvidedSignals
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardFSTCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:protoCOFReader:stringFetcher:grapheneRegistry:localStorage:inAppWarningDataProvider:userSessionContext:logger:cooldownCapManager:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104c768c4

// -[SCBillboardFSTCampaignDataProviderImpl getCampaignInfoWithLauchTriggerType:appOpenFromPushType:requestor:]
// Type encoding: @40@0:8q16q24q32
// Implementation: 0x104c76b70

// -[SCBillboardFSTCampaignDataProviderImpl _getCampaignInfoWithLauchTriggerType:appOpenFromPushType:campaignInfoPromise:requestor:]
// Type encoding: v48@0:8q16q24@32q40
// Implementation: 0x104c76cc0

// -[SCBillboardFSTCampaignDataProviderImpl _processRankingAndGetCampaign:campaignPromise:billboardSignals:requestor:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x104c76ee8

// -[SCBillboardFSTCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:campaignSnapshotEnumerator:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:]
// Type encoding: v60@0:8@16@24@32B40@44q52
// Implementation: 0x104c7700c

// -[SCBillboardFSTCampaignDataProviderImpl _mergeSupStorageIdsWithDefaultChannelGlobalRules:campaignServerConfig:campaignName:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104c776a4

// -[SCBillboardFSTCampaignDataProviderImpl _createCampaignUXConfigWithFSTConfig:campaignCOFName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104c777d8

// -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsDisplayedWithCampaign:additionalData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c784f0

// -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsTappedWithCampaign:additionalData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c78644

// -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsDismissedWithCampaign:additionalData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c78798

// -[SCBillboardFSTCampaignDataProviderImpl getCampaignInfoWithCampaignCOFName:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c788ec

// -[SCBillboardFSTCampaignDataProviderImpl _isContextualCampaignWithinCooldown:campaignCOFName:readOnlyBillboardSignals:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104c78d58

// -[SCBillboardFSTCampaignDataProviderImpl logEmptyCampaignContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c78f30

// -[SCBillboardFSTCampaignDataProviderImpl _fstChannelFullSignalsWithLauchTriggerType:appOpenFromPushType:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x104c78f40

// -[SCBillboardFSTCampaignDataProviderImpl featureProvidedSignalsForLastFetch]
// Type encoding: @16@0:8
// Implementation: 0x104c79060

// -[SCBillboardFSTCampaignDataProviderImpl _campaignsPriorityWithlockScreenWidgetSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x104c79064

// -[SCBillboardFSTCampaignDataProviderImpl _campaignsPriorityWithRegistrationPathAllowedCampaigns]
// Type encoding: @16@0:8
// Implementation: 0x104c790ec

// -[SCBillboardFSTCampaignDataProviderImpl _lockScreenWidgetsSampleCampaign]
// Type encoding: @16@0:8
// Implementation: 0x104c791a0

// -[SCBillboardFSTCampaignDataProviderImpl _sampleCampaign]
// Type encoding: @16@0:8
// Implementation: 0x104c79330

// -[SCBillboardFSTCampaignDataProviderImpl lastFetchFeatureProvidedSignals]
// Type encoding: @16@0:8
// Implementation: 0x104c7957c

// -[SCBillboardFSTCampaignDataProviderImpl setLastFetchFeatureProvidedSignals:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c79588

// -[SCBillboardFSTCampaignDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c79590

@end
