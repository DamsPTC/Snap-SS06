// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeMessagingSessionManager
// Superclass: NSObject
// Address: 0x112a43fe8

@interface SCNativeMessagingSessionManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeMessagingSessionManager initWithUserSession:keyProvider:reEncryptionDelegate:friendsFeedReadyLogger:ghostToFeedLogger:graphene:friendsFeedGrapheneV2:snapTokenProvider:attestationProvider:contentDelegate:uploadDelegate:sendDelegate:initializeContextInfoDelegate:blizzardLoggerDelegate:conversationAdsManagerDelegate:nativeDispatchPerformer:docObjectContext:friendsFeedEntryStore:friendsFeedLoadingStatusStream:backgroundTaskWrapper:crashLogger:launchTrigger:sponsoredSnapFeedLifecycleEventObservable:sponsoredSnapFeedActiveBannerObservable:conversationDataUpdateAnnouncer:storyDataUpdateAnnouncer:notificationCenterUpdateAnnouncer:identityDelegate:dataWiped:circumstanceEngine:duplexClient:messagingNotificationExtensionsUserDefaults:notificationPool:messagingExperimentService:networkConnectivityObservable:flipperServices:groupsManagerDelegate:nativePostSnapInteractionEvents:bufferedContentFetcher:userPropertyDelegate:mediaPrefetchDelegate:complianceEngine:applicationLifecycleEvents:]
// Type encoding: @360@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352
// Implementation: 0x10041bfa8

// -[SCNativeMessagingSessionManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105527a9c

// -[SCNativeMessagingSessionManager getFeedManager]
// Type encoding: @16@0:8
// Implementation: 0x100608a9c

// -[SCNativeMessagingSessionManager getCommunityGroupsFeedManager]
// Type encoding: @16@0:8
// Implementation: 0x105527ad0

// -[SCNativeMessagingSessionManager getSnapManager]
// Type encoding: @16@0:8
// Implementation: 0x105527af8

// -[SCNativeMessagingSessionManager getConversationAdsManager]
// Type encoding: @16@0:8
// Implementation: 0x105527b20

// -[SCNativeMessagingSessionManager getMessageWindowManager]
// Type encoding: @16@0:8
// Implementation: 0x105527b48

// -[SCNativeMessagingSessionManager _createSession]
// Type encoding: v16@0:8
// Implementation: 0x1004576a4

// -[SCNativeMessagingSessionManager endSession]
// Type encoding: v16@0:8
// Implementation: 0x105527b70

// -[SCNativeMessagingSessionManager dispose]
// Type encoding: v16@0:8
// Implementation: 0x105527bc4

// -[SCNativeMessagingSessionManager getNativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x100623e80

// -[SCNativeMessagingSessionManager getNativeConversationManagerOrNilIfDisposed]
// Type encoding: @16@0:8
// Implementation: 0x100c569ac

// -[SCNativeMessagingSessionManager getNativeStorySendManager]
// Type encoding: @16@0:8
// Implementation: 0x105527c10

// -[SCNativeMessagingSessionManager getNotificationCenterManager]
// Type encoding: @16@0:8
// Implementation: 0x105527c18

// -[SCNativeMessagingSessionManager onConnectionStateChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x1006b3bec

// -[SCNativeMessagingSessionManager getAuthContextDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10055d004

// -[SCNativeMessagingSessionManager onDataWipe:dataWipeParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105527c20

// -[SCNativeMessagingSessionManager networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1006082ac

// -[SCNativeMessagingSessionManager _createDeltaSyncDbDirectory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10042f26c

// -[SCNativeMessagingSessionManager _nativeBulkLoadCofMarshallersForMessagingExperimentService:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004303fc

// -[SCNativeMessagingSessionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105527c30

// +[SCNativeMessagingSessionManager _mapSchedulerPriorityCOFValueToNativePriorityString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10044a11c

@end
