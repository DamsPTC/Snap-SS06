// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputAudioNoteController
// Superclass: NSObject
// Address: 0x112b0bfe8

@interface SCChatInputAudioNoteController

// Property: state; attributes: TQ,V_state
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: inputItem; attributes: T@"UIButton<SCChatInputItem>",W,N,V_inputItem
// Property: inputController; attributes: T@"UIViewController<SCChatInputContext>",W,N,V_inputController
// Property: style; attributes: TQ,N,V_style

// -[SCChatInputAudioNoteController initWithAudioNotePlayer:chatLogger:valdiRuntimeProvider:conversationEventObservable:messagingExperimentService:applicationStateProvider:inputScopeContext:]
// Type encoding: @72@0:8@16@24@32@40@48@56Q64
// Implementation: 0x106a1df20

// -[SCChatInputAudioNoteController audioNoteRecordEvents]
// Type encoding: @16@0:8
// Implementation: 0x106a1e238

// -[SCChatInputAudioNoteController audioNoteRecordSessionBeganEvents]
// Type encoding: @16@0:8
// Implementation: 0x106a1e260

// -[SCChatInputAudioNoteController audioNoteRecorder]
// Type encoding: @16@0:8
// Implementation: 0x106a1e288

// -[SCChatInputAudioNoteController _createSwiftRecorderV3]
// Type encoding: @16@0:8
// Implementation: 0x106a1e358

// -[SCChatInputAudioNoteController _createSwiftRecorderV4]
// Type encoding: @16@0:8
// Implementation: 0x106a1e454

// -[SCChatInputAudioNoteController trackAnimator]
// Type encoding: @16@0:8
// Implementation: 0x106a1e634

// -[SCChatInputAudioNoteController setInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1e698

// -[SCChatInputAudioNoteController setChatScrollHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1e6dc

// -[SCChatInputAudioNoteController _addAudioTrack]
// Type encoding: v16@0:8
// Implementation: 0x106a1e6e8

// -[SCChatInputAudioNoteController _addLongPressToItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1e950

// -[SCChatInputAudioNoteController _didLongPressItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1e9d8

// -[SCChatInputAudioNoteController _gestureDidBegin:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106a1eb54

// -[SCChatInputAudioNoteController _gestureDidChange:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106a1ebfc

// -[SCChatInputAudioNoteController _finishRecordingWithHaptic]
// Type encoding: v16@0:8
// Implementation: 0x106a1ee9c

// -[SCChatInputAudioNoteController _finishRecording]
// Type encoding: v16@0:8
// Implementation: 0x106a1ef14

// -[SCChatInputAudioNoteController _transitionViewToStarted]
// Type encoding: v16@0:8
// Implementation: 0x106a1f028

// -[SCChatInputAudioNoteController _transitionViewToHalfSlide]
// Type encoding: v16@0:8
// Implementation: 0x106a1f1bc

// -[SCChatInputAudioNoteController _transitionViewToHoveringCancelled]
// Type encoding: v16@0:8
// Implementation: 0x106a1f34c

// -[SCChatInputAudioNoteController _displayTrack]
// Type encoding: v16@0:8
// Implementation: 0x106a1f49c

// -[SCChatInputAudioNoteController _hideTrack]
// Type encoding: v16@0:8
// Implementation: 0x106a1f60c

// -[SCChatInputAudioNoteController _displayRecorderAndBegin:view:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x106a1f7c0

// -[SCChatInputAudioNoteController _onAudioNotePlayerResetWithTouchPoint:view:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x106a1f9b0

// -[SCChatInputAudioNoteController audioNoteTooltip]
// Type encoding: @16@0:8
// Implementation: 0x106a1facc

// -[SCChatInputAudioNoteController setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a1fccc

// -[SCChatInputAudioNoteController _backgroundColorForAudioPreview]
// Type encoding: @16@0:8
// Implementation: 0x106a1fcd8

// -[SCChatInputAudioNoteController didDeselectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1fd14

// -[SCChatInputAudioNoteController didSelectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1fd18

// -[SCChatInputAudioNoteController _startRecording]
// Type encoding: v16@0:8
// Implementation: 0x106a1fe84

// -[SCChatInputAudioNoteController didCollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1feb4

// -[SCChatInputAudioNoteController didUncollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a1feb8

// -[SCChatInputAudioNoteController inputViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106a1febc

// -[SCChatInputAudioNoteController inputViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106a1ff58

// -[SCChatInputAudioNoteController _discardHoldOnInputDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106a1ff60

// -[SCChatInputAudioNoteController _sentSessionOutcome]
// Type encoding: Q16@0:8
// Implementation: 0x106a20008

// -[SCChatInputAudioNoteController audioNoteRecorderWillStartSuccessfully:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a20058

// -[SCChatInputAudioNoteController audioNoteRecorder:didFinishWithData:duration:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106a20130

// -[SCChatInputAudioNoteController audioNoteRecorder:recorderIsReady:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a20724

// -[SCChatInputAudioNoteController _sendAudioNoteWithData:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106a20768

// -[SCChatInputAudioNoteController _sendFromTapToRecord:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106a20838

// -[SCChatInputAudioNoteController _subscribeForTapToRecord]
// Type encoding: v16@0:8
// Implementation: 0x106a20898

// -[SCChatInputAudioNoteController _subscribeToInputTypingEvents]
// Type encoding: v16@0:8
// Implementation: 0x106a20904

// -[SCChatInputAudioNoteController _handleTapToRecordKeyboardSendFromTypingFinished]
// Type encoding: v16@0:8
// Implementation: 0x106a20c40

// -[SCChatInputAudioNoteController _subscribeToConversationEvents]
// Type encoding: v16@0:8
// Implementation: 0x106a20ca4

// -[SCChatInputAudioNoteController _cancelTapToRecord]
// Type encoding: v16@0:8
// Implementation: 0x106a20f14

// -[SCChatInputAudioNoteController _presentRecordingView]
// Type encoding: v16@0:8
// Implementation: 0x106a20fac

// -[SCChatInputAudioNoteController _finishTapToRecordAndSend]
// Type encoding: v16@0:8
// Implementation: 0x106a21780

// -[SCChatInputAudioNoteController _dismissHoldUIAndPresentPreviewWithData:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106a217a8

// -[SCChatInputAudioNoteController _presentPreviewViewWithData:duration:recordType:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x106a21844

// -[SCChatInputAudioNoteController _onSendButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106a22384

// -[SCChatInputAudioNoteController _cleanUpTapToRecord]
// Type encoding: v16@0:8
// Implementation: 0x106a22424

// -[SCChatInputAudioNoteController inputItem]
// Type encoding: @16@0:8
// Implementation: 0x106a22658

// -[SCChatInputAudioNoteController style]
// Type encoding: Q16@0:8
// Implementation: 0x106a22670

// -[SCChatInputAudioNoteController inputController]
// Type encoding: @16@0:8
// Implementation: 0x106a22678

// -[SCChatInputAudioNoteController setInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a22690

// -[SCChatInputAudioNoteController state]
// Type encoding: Q16@0:8
// Implementation: 0x106a2269c

// -[SCChatInputAudioNoteController setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a226a4

// -[SCChatInputAudioNoteController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a226ac

@end
