// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingPlaybackWorkflow
// Superclass: NSObject
// Address: 0x112a0c5e8

@interface SCMessagingPlaybackWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingPlaybackWorkflow initWithPlaybackScope:userId:operaSessionScopeExposer:operaSessionScopeServices:safetyReportScopeExposer:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:delegate:parentViewController:contentDelivery:contextOperaPluginProvider:musicContentRestrictionServices:conversationActionHandler:notificationPool:playbackGrapheneLogger:remixOperaPluginProvider:snapCountDownManager:circumstanceEngine:messagingExperimentService:cachedSummaryInfoProvider:imageDownloader:contextOperaChromeLayerPluginProvider:featureSettingsService:logger:deckTransitionEventObservable:lensPrefetchingFactory:snapProIdValidity:scwUserBlocker:]
// Type encoding: @240@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232
// Implementation: 0x104f86cc4

// -[SCMessagingPlaybackWorkflow beginWorkflowWithConversationId:isLockedConversation:messageType:participants:featurePlugin:baseView:useCircularTransitions:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:snapTapLatencyBuilder:]
// Type encoding: v112@0:8@16B24q28@36@44@52B60q64q72q80q88q96@104
// Implementation: 0x104f87244

// -[SCMessagingPlaybackWorkflow _beginSnapWorkflowWithConversationId:isLockedConversation:launchCandidates:baseView:transitionMode:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:snapTapLatencyBuilder:]
// Type encoding: v100@0:8@16B24@28@36q44q52q60q68q76q84@92
// Implementation: 0x104f87574

// -[SCMessagingPlaybackWorkflow _beginChatMediaWorkflowWithConversationId:messageType:isLockedConversation:launchCandidates:baseView:transitionMode:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:]
// Type encoding: v100@0:8@16q24B32@36@44q52q60q68q76q84q92
// Implementation: 0x104f87bdc

// -[SCMessagingPlaybackWorkflow reportSnapWithParams:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104f881e8

// -[SCMessagingPlaybackWorkflow blockAndReportSnapWithParams:reportedUserId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104f88330

// -[SCMessagingPlaybackWorkflow reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f884a8

// -[SCMessagingPlaybackWorkflow operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f884f0

// -[SCMessagingPlaybackWorkflow operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f88558

// -[SCMessagingPlaybackWorkflow operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f8858c

// -[SCMessagingPlaybackWorkflow operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f886cc

// -[SCMessagingPlaybackWorkflow operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f88700

// -[SCMessagingPlaybackWorkflow operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f88704

// -[SCMessagingPlaybackWorkflow operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f8873c

// -[SCMessagingPlaybackWorkflow operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f88770

// -[SCMessagingPlaybackWorkflow operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f887a4

// -[SCMessagingPlaybackWorkflow operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f887a8

// -[SCMessagingPlaybackWorkflow _dismissPlaybackWhenExitingFriendsFeedWithDeckEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f887ac

// -[SCMessagingPlaybackWorkflow _dismissOpera]
// Type encoding: v16@0:8
// Implementation: 0x104f889d0

// -[SCMessagingPlaybackWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f88a2c

@end
