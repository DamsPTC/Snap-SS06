// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActivityCenterDynamicFHPCampaignDataProviderImpl
// Superclass: NSObject
// Address: 0x112a33828

@interface SCActivityCenterDynamicFHPCampaignDataProviderImpl

// Property: activeConfigs; attributes: T@"NSArray",&,V_activeConfigs
// Property: allCampaignIDs; attributes: T@"NSSet",&,V_allCampaignIDs
// Property: delegate; attributes: T@"<SCActivityCenterDynamicFHPCampaignDataProviderDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl initWithCampaignsObservableFuture:performerProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053e8b6c

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl startObservingIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1053e8cb0

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _startObservingCampaignData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e8dc8

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _campaignsDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e8ff4

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _completeObservationPromiseWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053e92ec

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _completeObservationPromiseWithSuccessHelper:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053e93d8

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _campaignToUIConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e943c

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _parseAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e9770

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _parseIcon:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e97d4

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl allCampaignIDs]
// Type encoding: @16@0:8
// Implementation: 0x1053e9998

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setAllCampaignIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e99a4

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl activeConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1053e99ac

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setActiveConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e99b8

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1053e99c0

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e99d8

// -[SCActivityCenterDynamicFHPCampaignDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e99e4

@end
