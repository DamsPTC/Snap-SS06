// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputTextObserverPlugin
// Superclass: NSObject
// Address: 0x112b0c678

@interface SCChatInputTextObserverPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInputTextObserverPlugin initWithTextSender:storyReplySender:storyShareSender:groupFetcher:groupTracker:mentionBarScopeExposer:chatCommandMenuScopeExposer:circumstanceEngine:messagingExperimentService:activeConversationInformation:replyAllGroupId:chatDraftMutator:chatThreatsScanner:snapchatterObservableRepository:blizzardLogger:sendObservabilityLogger:grapheneRegistry:valdiRuntimeProvider:aiStoryReplyLoggingHelper:lifecycleEvent:spotlightShareSender:chatMediaPreviewDataManager:teamSnapchatSendGateWorkflow:]
// Type encoding: @200@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x106a2f87c

// -[SCChatInputTextObserverPlugin registerWithInputContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a2fd54

// -[SCChatInputTextObserverPlugin _chatThreatsWorkflow]
// Type encoding: @16@0:8
// Implementation: 0x106a2febc

// -[SCChatInputTextObserverPlugin _setupMentionBar]
// Type encoding: v16@0:8
// Implementation: 0x106a2ff88

// -[SCChatInputTextObserverPlugin _setupChatCommandMenu]
// Type encoding: v16@0:8
// Implementation: 0x106a30148

// -[SCChatInputTextObserverPlugin _subscribeToResignBackgroundForChatDrafts]
// Type encoding: v16@0:8
// Implementation: 0x106a30224

// -[SCChatInputTextObserverPlugin _subscribeToActiveConversationForChatDrafts]
// Type encoding: v16@0:8
// Implementation: 0x106a304ec

// -[SCChatInputTextObserverPlugin _subscribeToChatIdentifier]
// Type encoding: v16@0:8
// Implementation: 0x106a30a00

// -[SCChatInputTextObserverPlugin _subscribeToTextEvents]
// Type encoding: v16@0:8
// Implementation: 0x106a30c18

// -[SCChatInputTextObserverPlugin _subscribeToMessageEdit]
// Type encoding: v16@0:8
// Implementation: 0x106a313c0

// -[SCChatInputTextObserverPlugin _handleMessageEdit:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a31670

// -[SCChatInputTextObserverPlugin _getNonParticipantObservableCallback]
// Type encoding: @?16@0:8
// Implementation: 0x106a31880

// -[SCChatInputTextObserverPlugin _getNonParticipantObservable]
// Type encoding: @16@0:8
// Implementation: 0x106a31948

// -[SCChatInputTextObserverPlugin _getNonParticipantObservableForOneOnOneConversationWithoutRecipient:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a31c50

// -[SCChatInputTextObserverPlugin _mentionsPersonDataSource]
// Type encoding: @16@0:8
// Implementation: 0x106a31f20

// -[SCChatInputTextObserverPlugin _handleActiveChatIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a32bfc

// -[SCChatInputTextObserverPlugin _handleTextEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a32d60

// -[SCChatInputTextObserverPlugin _handleDidReturnWithText:forEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a32e78

// -[SCChatInputTextObserverPlugin _continueHandleReturn:forEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a3312c

// -[SCChatInputTextObserverPlugin _scanForPasswordInText:forEvent:teamSnapchatDisclosureAccepted:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106a33388

// -[SCChatInputTextObserverPlugin _handleScanCompletionWithDidContinue:attributedText:event:passwordDetectedRange:teamSnapchatDisclosureAccepted:]
// Type encoding: v56@0:8B16@20@28{_NSRange=QQ}36B52
// Implementation: 0x106a3351c

// -[SCChatInputTextObserverPlugin _proceedWithReturnHandlingWithText:forEvent:teamSnapchatDisclosureAccepted:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106a33574

// -[SCChatInputTextObserverPlugin _handleChatDraftEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a345b4

// -[SCChatInputTextObserverPlugin _fetchAndRestoreChatDraftForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a34694

// -[SCChatInputTextObserverPlugin _restoreChatDraft:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a347d8

// -[SCChatInputTextObserverPlugin _isTeamSnapchatOneOnOneChatIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a34af8

// -[SCChatInputTextObserverPlugin _chatCommandsEligibleForChatIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a34bf8

// -[SCChatInputTextObserverPlugin _chatCommandsForAttributedText:chatIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a34d38

// -[SCChatInputTextObserverPlugin _restoreAttributedString:mentions:coloredRanges:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a34f14

// -[SCChatInputTextObserverPlugin _updateChatDraftForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a34fa4

// -[SCChatInputTextObserverPlugin _platformAnalyticsForConversationInformation:replyAllGroupId:attributedText:userActionId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a3521c

// -[SCChatInputTextObserverPlugin mentionBarWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x106a358dc

// -[SCChatInputTextObserverPlugin mentionBarDidStopPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a35908

// -[SCChatInputTextObserverPlugin chatCommandMenuWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x106a35934

// -[SCChatInputTextObserverPlugin chatCommandMenuDidStopPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a35960

// -[SCChatInputTextObserverPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a3598c

@end
