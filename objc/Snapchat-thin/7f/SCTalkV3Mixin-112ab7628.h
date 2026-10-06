// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkV3Mixin
// Superclass: NSObject
// Address: 0x112ab7628

@interface SCTalkV3Mixin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTalkV3Mixin initWithUserId:talkUIScope:talkManager:callStateProvider:modularCallLauncher:bitmoji3DContentFetcher:identityServices:applicationLifecycleEvents:chatPeekEvents:petImageFetcher:configProvider:messagingExperimentService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x105fe1c2c

// -[SCTalkV3Mixin _setActiveTalkSessionWithConversationId:conversationMetadata:presenceEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105fe2984

// -[SCTalkV3Mixin _createTalkSessionForConversationId:conversationMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fe2f2c

// -[SCTalkV3Mixin _createSessionCompletionHandler:forConvoId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fe3164

// -[SCTalkV3Mixin _chatMediaWillEnterFullscreen]
// Type encoding: v16@0:8
// Implementation: 0x105fe3214

// -[SCTalkV3Mixin _chatMediaDidCloseFullscreen]
// Type encoding: v16@0:8
// Implementation: 0x105fe321c

// -[SCTalkV3Mixin _startOrScheduleCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe3224

// -[SCTalkV3Mixin _startCall:isHangout:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x105fe32a0

// -[SCTalkV3Mixin _viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x105fe3360

// -[SCTalkV3Mixin _viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x105fe3368

// -[SCTalkV3Mixin _viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x105fe3390

// -[SCTalkV3Mixin _viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105fe3404

// -[SCTalkV3Mixin _viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x105fe342c

// -[SCTalkV3Mixin _viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105fe3434

// -[SCTalkV3Mixin _applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105fe343c

// -[SCTalkV3Mixin _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105fe3444

// -[SCTalkV3Mixin avatarServices]
// Type encoding: @16@0:8
// Implementation: 0x105fe344c

// -[SCTalkV3Mixin chatServices]
// Type encoding: @16@0:8
// Implementation: 0x105fe34e0

// -[SCTalkV3Mixin modularCallLauncher]
// Type encoding: @16@0:8
// Implementation: 0x105fe3508

// -[SCTalkV3Mixin talkChatSession:didUpdateRemoteUsersPresentOnWeb:remoteUsersPresentOnMobile:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fe3520

// -[SCTalkV3Mixin _inputModeDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe3598

// -[SCTalkV3Mixin _setActiveTalkSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe3638

// -[SCTalkV3Mixin _resetActiveTalkSession]
// Type encoding: v16@0:8
// Implementation: 0x105fe3668

// -[SCTalkV3Mixin _activateOrBackgroundTalkSession]
// Type encoding: v16@0:8
// Implementation: 0x105fe36b8

// -[SCTalkV3Mixin _destroyTalkSession]
// Type encoding: v16@0:8
// Implementation: 0x105fe3700

// -[SCTalkV3Mixin _updateUserInChat:]
// Type encoding: v20@0:8B16
// Implementation: 0x105fe373c

// -[SCTalkV3Mixin _updateFullscreenChatMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x105fe37a0

// -[SCTalkV3Mixin _updateAppBackgroundState:]
// Type encoding: v20@0:8B16
// Implementation: 0x105fe3804

// -[SCTalkV3Mixin _updateChatVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105fe3868

// -[SCTalkV3Mixin _runBlockAndUpdateChatVisiblityIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fe386c

// -[SCTalkV3Mixin _isChatVisibleToUser]
// Type encoding: B16@0:8
// Implementation: 0x105fe38e0

// -[SCTalkV3Mixin _isMonologueConversation:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fe390c

// -[SCTalkV3Mixin _observeRemoteParticipantChangesForConversationId:conversationMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fe398c

// -[SCTalkV3Mixin _handleChangesToRemoteParticipants:forConversationId:conversationMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fe3b84

// -[SCTalkV3Mixin _handleChatPeekEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fe3c00

// -[SCTalkV3Mixin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fe3c68

@end
