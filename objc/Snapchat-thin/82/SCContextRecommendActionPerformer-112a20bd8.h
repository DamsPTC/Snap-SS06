// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextRecommendActionPerformer
// Superclass: NSObject
// Address: 0x112a20bd8

@interface SCContextRecommendActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextRecommendActionPerformer initWithNotificationPool:lazyBoostCoordinator:featureSettingsService:storiesConfigProvider:spotlightToStoriesPoster:snapProUserProfileIdProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1051c9998

// -[SCContextRecommendActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051c9b54

// -[SCContextRecommendActionPerformer _deleteRepostedSpotlightWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ca3b0

// -[SCContextRecommendActionPerformer _repostToMyStoryWithParams:showUndoToast:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1051ca504

// -[SCContextRecommendActionPerformer _isRepostableSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x1051ca7bc

// -[SCContextRecommendActionPerformer _showRecommendNotification]
// Type encoding: B16@0:8
// Implementation: 0x1051ca80c

// -[SCContextRecommendActionPerformer _showRecommendToStoryNotification]
// Type encoding: B16@0:8
// Implementation: 0x1051caa20

// -[SCContextRecommendActionPerformer _didTapRecommendWithIsRecommended:storyId:itemId:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x1051cabec

// -[SCContextRecommendActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051cae2c

@end
