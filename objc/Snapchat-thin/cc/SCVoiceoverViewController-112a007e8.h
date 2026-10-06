// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceoverViewController
// Superclass: UIViewController
// Address: 0x112a007e8

@interface SCVoiceoverViewController

// Property: delegate; attributes: T@"<SCVoiceoverViewControllerDelegate>",W,N,V_delegate
// Property: mediaPlaybackManager; attributes: T@"<SCVoiceoverMediaPlaybackManaging>",W,N,V_mediaPlaybackManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVoiceoverViewController initWithViewModel:audioSession:displayableArea:grapheneLogger:forceDisableAudioMixing:toolbarView:dismissalObservable:]
// Type encoding: @92@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32@64B72@76@84
// Implementation: 0x104e1fd84

// -[SCVoiceoverViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104e20784

// -[SCVoiceoverViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104e207d4

// -[SCVoiceoverViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104e20838

// -[SCVoiceoverViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e208a8

// -[SCVoiceoverViewController _setupPlaybackControls]
// Type encoding: v16@0:8
// Implementation: 0x104e208f0

// -[SCVoiceoverViewController _setupButtons]
// Type encoding: v16@0:8
// Implementation: 0x104e20ac8

// -[SCVoiceoverViewController _layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x104e20b10

// -[SCVoiceoverViewController _beginPresentAnimationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104e21c08

// -[SCVoiceoverViewController _beginDismissAnimationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104e21d18

// -[SCVoiceoverViewController _handleExitButton]
// Type encoding: v16@0:8
// Implementation: 0x104e21e24

// -[SCVoiceoverViewController _handleUndoButton]
// Type encoding: v16@0:8
// Implementation: 0x104e21e80

// -[SCVoiceoverViewController _handleSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x104e21f34

// -[SCVoiceoverViewController _handleAudioMixingSwitch:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e21f38

// -[SCVoiceoverViewController _bindPlaybackControlsToPlayback]
// Type encoding: v16@0:8
// Implementation: 0x104e21fdc

// -[SCVoiceoverViewController _playbackTimeChanged:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x104e22228

// -[SCVoiceoverViewController _bindPlaybackButtonToPlayback]
// Type encoding: v16@0:8
// Implementation: 0x104e22304

// -[SCVoiceoverViewController _handlePlaybackButtonPlay]
// Type encoding: v16@0:8
// Implementation: 0x104e22574

// -[SCVoiceoverViewController _handlePlaybackButtonPause]
// Type encoding: v16@0:8
// Implementation: 0x104e226e0

// -[SCVoiceoverViewController _handleSuccessfulPlaybackButtonPlayWithAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e22728

// -[SCVoiceoverViewController _handleFailedPlaybackButtonPlay]
// Type encoding: v16@0:8
// Implementation: 0x104e22864

// -[SCVoiceoverViewController _setupRecordingButtonEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e228b8

// -[SCVoiceoverViewController _bindToAudioSessionRecordingEvents]
// Type encoding: v16@0:8
// Implementation: 0x104e22b04

// -[SCVoiceoverViewController _handleRecordingButtonBegan]
// Type encoding: v16@0:8
// Implementation: 0x104e22da0

// -[SCVoiceoverViewController _handleRecordingButtonEnded]
// Type encoding: v16@0:8
// Implementation: 0x104e22df8

// -[SCVoiceoverViewController _recordingFailedToBegin]
// Type encoding: v16@0:8
// Implementation: 0x104e22e08

// -[SCVoiceoverViewController _recordingStarted]
// Type encoding: v16@0:8
// Implementation: 0x104e22e68

// -[SCVoiceoverViewController _recordingEndedWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e22eb0

// -[SCVoiceoverViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e22fd8

// -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x104e22fe0

// -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x104e22fe4

// -[SCVoiceoverViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x104e22fe8

// -[SCVoiceoverViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x104e23098

// -[SCVoiceoverViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e2309c

// -[SCVoiceoverViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e230a0

// -[SCVoiceoverViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e230a4

// -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x104e230ac

// -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x104e230b0

// -[SCVoiceoverViewController animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e230b4

// -[SCVoiceoverViewController animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104e230b8

// -[SCVoiceoverViewController transitionDuration:]
// Type encoding: d24@0:8@16
// Implementation: 0x104e230bc

// -[SCVoiceoverViewController animateTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e230c4

// -[SCVoiceoverViewController _createAnimators]
// Type encoding: v16@0:8
// Implementation: 0x104e23434

// -[SCVoiceoverViewController _requestRecordingPermissionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104e236b8

// -[SCVoiceoverViewController _updateAllButtonStates]
// Type encoding: v16@0:8
// Implementation: 0x104e23ab8

// -[SCVoiceoverViewController _updateSaveAndUndoButtons]
// Type encoding: v16@0:8
// Implementation: 0x104e23af4

// -[SCVoiceoverViewController _updateRecordingButtonState]
// Type encoding: v16@0:8
// Implementation: 0x104e23b9c

// -[SCVoiceoverViewController _updatePlaybackControls]
// Type encoding: v16@0:8
// Implementation: 0x104e23c78

// -[SCVoiceoverViewController _updatePlayheadInteraction]
// Type encoding: v16@0:8
// Implementation: 0x104e23c9c

// -[SCVoiceoverViewController _updatePlaybackButton]
// Type encoding: v16@0:8
// Implementation: 0x104e23cfc

// -[SCVoiceoverViewController _updateExitButton]
// Type encoding: v16@0:8
// Implementation: 0x104e23d6c

// -[SCVoiceoverViewController _updateAudioMixingSwitch]
// Type encoding: v16@0:8
// Implementation: 0x104e23dcc

// -[SCVoiceoverViewController _setAllButtonsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e23e58

// -[SCVoiceoverViewController _saveAndDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104e23f54

// -[SCVoiceoverViewController _showExitConfirmationDialog]
// Type encoding: v16@0:8
// Implementation: 0x104e240d0

// -[SCVoiceoverViewController _showFailureNotification]
// Type encoding: v16@0:8
// Implementation: 0x104e24414

// -[SCVoiceoverViewController _seekToEndOfAudio]
// Type encoding: v16@0:8
// Implementation: 0x104e244ac

// -[SCVoiceoverViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104e24594

// -[SCVoiceoverViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e245b4

// -[SCVoiceoverViewController mediaPlaybackManager]
// Type encoding: @16@0:8
// Implementation: 0x104e245c8

// -[SCVoiceoverViewController setMediaPlaybackManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e245e8

// -[SCVoiceoverViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e245fc

@end
