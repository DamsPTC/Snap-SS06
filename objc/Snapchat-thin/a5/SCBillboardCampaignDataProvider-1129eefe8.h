// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardCampaignDataProvider
// Superclass: NSObject
// Address: 0x1129eefe8

@interface SCBillboardCampaignDataProvider

// Property: signalProviders; attributes: T@"NSDictionary",&,V_signalProviders

// -[SCBillboardCampaignDataProvider initWithCircumstanceEngine:protoCOFReader:featureSettingsService:grapheneRegistry:performer:localStorage:grpcRankingService:emailInfoProvider:phoneNumberProvider:contactPermissionInfoProvider:contactPermissionManager:snapchattersDataFetcher:bitmojiAvatarProvider:appLifecycleManager:authorizationStatusRetriever:signalProvidersFuture:billboardGrpcService:cooldownCapManager:holdoutDataProvider:rankingStrategyCalculator:passkeyStore:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176
// Implementation: 0x104c7f8f4

// -[SCBillboardCampaignDataProvider getChannelGlobalCooldownCapRules:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c7fe38

// -[SCBillboardCampaignDataProvider campaignDataSourceObservable]
// Type encoding: @16@0:8
// Implementation: 0x104c7ff9c

// -[SCBillboardCampaignDataProvider getCampaignsPriorityForChannel:rankingCOFName:readOnlyBillboardSignals:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x104c7ffc4

// -[SCBillboardCampaignDataProvider getHeuristicCampaignsPriorityForChannel:rankingCOFName:rankingStrategyCOFName:readOnlyBillboardSignals:]
// Type encoding: @44@0:8i16@20@28@36
// Implementation: 0x104c801b8

// -[SCBillboardCampaignDataProvider getServerRankingForChannel:rankingCOFName:readOnlyBillboardSignals:completion:]
// Type encoding: v44@0:8i16@20@28@?36
// Implementation: 0x104c80278

// -[SCBillboardCampaignDataProvider getPrefetchedServerRankingForChannel:rankingCOFName:readOnlyBillboardSignals:completion:]
// Type encoding: v44@0:8i16@20@28@?36
// Implementation: 0x104c80768

// -[SCBillboardCampaignDataProvider logRankingFetchLatencyWithStartTime:channel:source:]
// Type encoding: v36@0:8d16i24@28
// Implementation: 0x104c80bd8

// -[SCBillboardCampaignDataProvider readServerMetadataForChannel:campaignName:]
// Type encoding: @28@0:8i16@20
// Implementation: 0x104c80c68

// -[SCBillboardCampaignDataProvider readContextualRankOverrideForChannel:campaignName:evaluationContext:]
// Type encoding: @32@0:8i16@20i28
// Implementation: 0x104c80e3c

// -[SCBillboardCampaignDataProvider _logFetchRankingForChannel:source:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x104c80fbc

// -[SCBillboardCampaignDataProvider _logEmptyRankingListForChannel:source:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x104c8103c

// -[SCBillboardCampaignDataProvider _logNilOrErrorRankingListForChannel:source:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x104c810bc

// -[SCBillboardCampaignDataProvider getCampaignWithServerCampaignConfigPromise:snapshot:isChannelWithinDefaultCooldown:categoryInfoCOFName:readOnlyBillboardSignals:holdoutCOFName:rankingCategoryOverride:requestor:]
// Type encoding: v76@0:8@16@24B32@36@44@52@60q68
// Implementation: 0x104c8113c

// -[SCBillboardCampaignDataProvider _timeoutSecsForSignalProviderRequest]
// Type encoding: d16@0:8
// Implementation: 0x104c81934

// -[SCBillboardCampaignDataProvider _setupPrecheckTimerToCompletePromiseWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104c8196c

// -[SCBillboardCampaignDataProvider _completeSignalProviderTimeoutPromise:isPrecheckTimeout:eligible:snapshot:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x104c81a14

// -[SCBillboardCampaignDataProvider _logSignalProviderLatencyWithStartTime:snapshot:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x104c81bf8

// -[SCBillboardCampaignDataProvider _logPrecheckResult:campaignCOFName:preCheckSource:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x104c81cb8

// -[SCBillboardCampaignDataProvider _getCampaignByCampaignCOFName:isChannelWithinDefaultCooldown:categoryInfoCOFName:readOnlyBillboardSignals:holdoutCOFName:preCheckSource:rankingCategoryOverride:serverCampaignConfigPromise:]
// Type encoding: v72@0:8@16B24@28@36@44i52@56@64
// Implementation: 0x104c81d58

// -[SCBillboardCampaignDataProvider _isChannelWithinCooldownWithCampaignCooldownCapConfig:isChannelWithinDefaultCooldown:readOnlyBillboardSignals:campaignCOFName:categoryInfo:]
// Type encoding: B52@0:8@16B24@28@36@44
// Implementation: 0x104c82464

// -[SCBillboardCampaignDataProvider _isCampaignWithinCooldownWithCampaignCooldownCapConfig:campaign:readOnlyBillboardSignals:campaignCOFName:categoryInfo:]
// Type encoding: B56@0:8@16@24@32@40@48
// Implementation: 0x104c825b8

// -[SCBillboardCampaignDataProvider _resetStorageIfNewCampaignVersion:supStorageId:campaignCOFName:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x104c827b0

// -[SCBillboardCampaignDataProvider _getCategoryInfoWithCategoryName:surfaceCategoryInfoCOFName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104c8299c

// -[SCBillboardCampaignDataProvider _getCampaignCategoriesFromCOF:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c82aa8

// -[SCBillboardCampaignDataProvider updateImpressionPropertiesWithCampaignCofName:supProperties:supStorageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c82c70

// -[SCBillboardCampaignDataProvider updateClickPropertiesWithCampaignCofName:supProperties:supStorageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c83148

// -[SCBillboardCampaignDataProvider updateDismissPropertiesWithCampaignCofName:supProperties:supStorageIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c834c8

// -[SCBillboardCampaignDataProvider _featureSetingsIncrementCountWithItemId:campaignCofName:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104c83848

// -[SCBillboardCampaignDataProvider _featureSettingsUpdateMillisWithItemId:overwriteExistingValue:campaignCofName:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x104c839b0

// -[SCBillboardCampaignDataProvider _featureSettingsUpdateSecsWithItemId:overwriteExistingValue:campaignCofName:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x104c839b8

// -[SCBillboardCampaignDataProvider _featureSettingsUpdateTimeWithItemId:overwriteExistingValue:campaignCofName:timeMultiplier:]
// Type encoding: v40@0:8Q16B24@28i36
// Implementation: 0x104c839c0

// -[SCBillboardCampaignDataProvider basicBillboardSignals]
// Type encoding: @16@0:8
// Implementation: 0x104c83b5c

// -[SCBillboardCampaignDataProvider _populateLocalStorageCooldownCapPropertiesWithCampaignCOFName:modifiableBillboardSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104c83edc

// -[SCBillboardCampaignDataProvider _lookUpMutualFriendBirthdaysAfterStartup]
// Type encoding: v16@0:8
// Implementation: 0x104c841a0

// -[SCBillboardCampaignDataProvider _getMutualFriendsWithBirthdaysCount]
// Type encoding: v16@0:8
// Implementation: 0x104c8435c

// -[SCBillboardCampaignDataProvider waitForSignalProvidersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104c845d8

// -[SCBillboardCampaignDataProvider waitForSignalProvidersWithCompletion:performer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x104c845e0

// -[SCBillboardCampaignDataProvider _setupSignalProviderMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c84684

// -[SCBillboardCampaignDataProvider signalProviders]
// Type encoding: @16@0:8
// Implementation: 0x104c84a64

// -[SCBillboardCampaignDataProvider setSignalProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c84a70

// -[SCBillboardCampaignDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c84a78

@end
