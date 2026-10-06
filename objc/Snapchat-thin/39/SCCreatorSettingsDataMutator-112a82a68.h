// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreatorSettingsDataMutator
// Superclass: NSObject
// Address: 0x112a82a68

@interface SCCreatorSettingsDataMutator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreatorSettingsDataMutator initWithDocObjectContext:creatorSettingsDataTracker:requestManager:snapTokenProvider:snapchattersDataFetcher:userId:snapchatterDataMutator:snapchatterDataTracker:creatorsSettingsRequestMananger:circumstanceEngine:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100c67cd0

// -[SCCreatorSettingsDataMutator performUserAction:creatorIdentifier:creatorType:fromSource:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v80@0:8Q16@24Q32@40@?48@56@?64@72
// Implementation: 0x105a015e4

// -[SCCreatorSettingsDataMutator performUserAction:creatorIdentifier:creatorType:fromSource:placementInfo:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v88@0:8Q16@24Q32@40@48@?56@64@?72@80
// Implementation: 0x105a01618

// -[SCCreatorSettingsDataMutator updateCreatorSettings:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a01788

// -[SCCreatorSettingsDataMutator performUserActionOnDummySnapchatter:userId:snapProId:username:displayName:isPopular:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v92@0:8Q16@24@32@40@48B56@?60@68@?76@84
// Implementation: 0x105a01880

// -[SCCreatorSettingsDataMutator performUserActionOnDummySnapchatter:userId:snapProId:username:displayName:isPopular:placementInfo:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v100@0:8Q16@24@32@40@48B56@60@?68@76@?84@92
// Implementation: 0x105a018b0

// -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForPublisher:isSubscribing:action:source:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v76@0:8@16B24Q28@36@?44@52@?60@68
// Implementation: 0x105a01a34

// -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForSnapchatter:isSubscribing:action:source:placementInfo:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v84@0:8@16B24Q28@36@44@?52@60@?68@76
// Implementation: 0x105a01ef4

// -[SCCreatorSettingsDataMutator _updateSubscriptionStatusForCreator:creatorType:action:source:placementInfo:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v88@0:8@16Q24Q32@40@48@?56@64@?72@80
// Implementation: 0x105a02420

// -[SCCreatorSettingsDataMutator _updateOptedInNotificationStatusForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v80@0:8@16Q24Q32@40@?48@56@?64@72
// Implementation: 0x105a027cc

// -[SCCreatorSettingsDataMutator _successfulUpdatedOptedInNotificationForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:isOptingInNotification:]
// Type encoding: v84@0:8@16Q24Q32@40@?48@56@?64@72B80
// Implementation: 0x105a02c04

// -[SCCreatorSettingsDataMutator _failedUpdatingOptedInNotificationForCreator:creatorType:action:source:failureHandler:failureQueue:]
// Type encoding: v64@0:8@16Q24Q32@40@?48@56
// Implementation: 0x105a02d44

// -[SCCreatorSettingsDataMutator _updateHideStatusForCreator:creatorType:action:source:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v80@0:8@16Q24Q32@40@?48@56@?64@72
// Implementation: 0x105a02f54

// -[SCCreatorSettingsDataMutator _updateHideStatusForCreator:creatorType:action:source:accessToken:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v88@0:8@16Q24Q32@40@48@?56@64@?72@80
// Implementation: 0x105a03210

// -[SCCreatorSettingsDataMutator _updateCreatorSettingsToDataStore:fromAction:fromSource:creatorType:successHandler:successQueue:failureHandler:failureQueue:]
// Type encoding: v80@0:8@16Q24@32Q40@?48@56@?64@72
// Implementation: 0x105a03b64

// -[SCCreatorSettingsDataMutator _notifyCreatorSettingsDidUpdate:fromAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a04114

// -[SCCreatorSettingsDataMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a04244

@end
