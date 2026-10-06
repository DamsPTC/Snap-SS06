// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatConversationManager
// Superclass: NSObject
// Address: 0x112ae6d38

@interface SCChatConversationManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatConversationManager addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659dacc

// -[SCChatConversationManager removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659dad4

// -[SCChatConversationManager initWithUserSession:userInfoServices:lazyDocObjectContext:chatRequestManager:conversationIdResolver:groupsDataCreator:groupsDataFetcher:groupsDataMutator:groupsDataTracker:userInfoProvider:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchattersObservableRepository:friendStatusManagerCreator:snapchattersPublicInfoFetcher:storiesDataCoordinator:nativeSessionManager:nativeFeedManager:nativeSnapManager:bitmojiImageFetcher:userPreferences:loadMessageLogger:friendsFeedReadyLogger:ghostToFeedLogger:arroyoChatLogger:snapTokenProvider:statusMessageSender:contextPostSnapActionsDataProvider:arroyoGraphene:chatGraphene:pageLoadMetricsEmitter:friendsFeedGraphene:conversationDataUpdateAnnouncer:dataWiped:snapStateLifecycleEventsPublisher:conversationLifecycleEventPublisher:sendAttemptEventsPublisher:polaroidViewTransitionManager:reactionMetadataProvider:valdiRuntimeProvider:arroyoActionHandler:lastSnapConversationIdSubject:finishedViewingSnapConversationIdSubject:sentSnapConversationIdsSubject:sentMessageConversationIdsSubject:sendCompletedEventObservable:lastChatViewSubject:mediaExtensionCacheHandler:mediaReferenceManager:mediaStateManager:snapCountDownManager:arroyoDataCoordinator:windowingDataCoordinator:userSegmentsProvider:bitmojiAvatarProvider:chatDisplayReadyLogger:messagingExperimentService:friendStorySettingMutator:appInsightsMetadataStorage:sponsoredSnapAdResponseParser:performerProvider:]
// Type encoding: @512@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504
// Implementation: 0x10049749c

// -[SCChatConversationManager _handleSendCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659dddc

// -[SCChatConversationManager snapCountDownManager]
// Type encoding: @16@0:8
// Implementation: 0x10659e048

// -[SCChatConversationManager animationDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1004e9508

// -[SCChatConversationManager conversationUpdatePublisher]
// Type encoding: @16@0:8
// Implementation: 0x1004e9558

// -[SCChatConversationManager chatRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x10659e070

// -[SCChatConversationManager actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x100bab3e8

// -[SCChatConversationManager internalActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1004e94e0

// -[SCChatConversationManager mediaPrefetcher]
// Type encoding: @16@0:8
// Implementation: 0x1004e90ec

// -[SCChatConversationManager mediaStateManager]
// Type encoding: @16@0:8
// Implementation: 0x1004e9530

// -[SCChatConversationManager setActiveConversationById:conversationSource:configuration:metricsTracker:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10659e078

// -[SCChatConversationManager resumeActiveConversationById:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e130

// -[SCChatConversationManager suspendActiveConversationById:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e174

// -[SCChatConversationManager _setActiveConversationSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10659e1b8

// -[SCChatConversationManager activeConversationSource]
// Type encoding: q16@0:8
// Implementation: 0x10659e1c0

// -[SCChatConversationManager unsetActiveConversationById:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e1c8

// -[SCChatConversationManager setBloopsDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e248

// -[SCChatConversationManager didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e2a0

// -[SCChatConversationManager didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10659e2a4

// -[SCChatConversationManager _clearConversationForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10659e350

// -[SCChatConversationManager lastSnapConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x10659e5dc

// -[SCChatConversationManager finishedViewingSnapConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x10659e604

// -[SCChatConversationManager lastSentSnapConversationIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10659e62c

// -[SCChatConversationManager lastSentMessageConversationIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10659e654

// -[SCChatConversationManager lastChatViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x10659e67c

// -[SCChatConversationManager activeConversationDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x10659e6a4

// -[SCChatConversationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10659e6cc

// +[SCChatConversationManager dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10659dac0

@end
