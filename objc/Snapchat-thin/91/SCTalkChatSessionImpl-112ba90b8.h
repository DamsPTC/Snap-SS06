// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkChatSessionImpl
// Superclass: NSObject
// Address: 0x112ba90b8

@interface SCTalkChatSessionImpl

// Property: presenceSession; attributes: T@"<SCPresenceSession>",&,V_presenceSession
// Property: convoId; attributes: T@"NSString",R,V_convoId
// Property: disposed; attributes: TB,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTalkChatSessionImpl initWithConvoId:talkCoreDispatcher:delegate:dependencies:identityServices:valdiRuntimeProvider:friendsFeedGraphene:presenceRenderGrapheneLogger:circumstanceEngine:plusFeatureGating:plusFeatureLogging:platformPresenceServiceProvider:currentPageTracker:applicationLifecycleEvents:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1085b8a18

// -[SCTalkChatSessionImpl _subscribeToPresenceVisibilityEvent]
// Type encoding: v16@0:8
// Implementation: 0x1085b8ef0

// -[SCTalkChatSessionImpl setPresenceSessionOnce:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b9138

// -[SCTalkChatSessionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085b913c

// -[SCTalkChatSessionImpl dispose]
// Type encoding: v16@0:8
// Implementation: 0x1085b9170

// -[SCTalkChatSessionImpl disposed]
// Type encoding: B16@0:8
// Implementation: 0x1085b9244

// -[SCTalkChatSessionImpl startPeeking]
// Type encoding: v16@0:8
// Implementation: 0x1085b9278

// -[SCTalkChatSessionImpl processTypingActivity:typingActivityType:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1085b92e8

// -[SCTalkChatSessionImpl setupUI]
// Type encoding: v16@0:8
// Implementation: 0x1085b9344

// -[SCTalkChatSessionImpl subscribeToSessionPresenceVisibilityEvents]
// Type encoding: v16@0:8
// Implementation: 0x1085b9470

// -[SCTalkChatSessionImpl onPlatformPresenceSessionStateChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b9474

// -[SCTalkChatSessionImpl getPresenceSessionState]
// Type encoding: @16@0:8
// Implementation: 0x1085b9578

// -[SCTalkChatSessionImpl talkUIController:didUpdateRemoteUsersPresentOnWeb:remoteUsersPresentOnMobile:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085b95a0

// -[SCTalkChatSessionImpl _composerCallButtonsOnStartCallMedia:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085b960c

// -[SCTalkChatSessionImpl _launchModularCallScreenWithStartCallMedia:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085b9620

// -[SCTalkChatSessionImpl _composerCallButtonsOnResumeCallWithMedia:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085b968c

// -[SCTalkChatSessionImpl _composerCallButtonsOnJoinCallWithMedia:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085b96f0

// -[SCTalkChatSessionImpl _runOnTalkCoreThreadWithPresenceSession:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085b9758

// -[SCTalkChatSessionImpl _handleStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b982c

// -[SCTalkChatSessionImpl _attachPresenceBarPaneIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1085b9884

// -[SCTalkChatSessionImpl _createPresenceControllerWithParticipantStates:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b98f8

// -[SCTalkChatSessionImpl _createRemoteParticipantStatesWithSessionState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085b9ab4

// -[SCTalkChatSessionImpl _isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x1085ba128

// -[SCTalkChatSessionImpl _refreshRemoteParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ba184

// -[SCTalkChatSessionImpl _setupPresenceBarIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085ba3e4

// -[SCTalkChatSessionImpl _setupPresenceBarWithRemoteParticipantStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ba77c

// -[SCTalkChatSessionImpl _launchModularCallScreenWithAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ba8f8

// -[SCTalkChatSessionImpl _setupCallButtonsPaneIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085baa64

// -[SCTalkChatSessionImpl convoId]
// Type encoding: @16@0:8
// Implementation: 0x1085badfc

// -[SCTalkChatSessionImpl presenceSession]
// Type encoding: @16@0:8
// Implementation: 0x1085bae08

// -[SCTalkChatSessionImpl setPresenceSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085bae14

// -[SCTalkChatSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085bae1c

@end
