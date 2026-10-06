// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicEditorViewController
// Superclass: UIViewController
// Address: 0x112a0cbd8

@interface SCMusicEditorViewController

// Property: delegate; attributes: T@"<SCMusicEditorViewControllerDelegate>",W,N,V_delegate
// Property: pausePlaybackObservable; attributes: T@"SCObservable",&,N,V_pausePlaybackObservable
// Property: showBottomGradient; attributes: TB,N,V_showBottomGradient
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicEditorViewController initWithAudioServices:selection:runtime:experiments:temporaryFileWriterServices:valdiBlizzardLoggingServices:loggingInfo:musicGrpcService:isModularCamera:muteSnapToggleInitialValue:previewBottomBorderYOffset:trackAssetLoader:itemViewService:shouldAutoPlay:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108B116
// Implementation: 0x104f8ead0

// -[SCMusicEditorViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104f8edc8

// -[SCMusicEditorViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f8edf8

// -[SCMusicEditorViewController prepareWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104f8ef14

// -[SCMusicEditorViewController _loadContentViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104f8efc0

// -[SCMusicEditorViewController onMusicButtonClickedWithTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f8f5d0

// -[SCMusicEditorViewController onConfirmWithStartOffsetMs:selectedMusicStickerData:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x104f8f684

// -[SCMusicEditorViewController onCancel]
// Type encoding: v16@0:8
// Implementation: 0x104f8f9cc

// -[SCMusicEditorViewController onStartOffsetWillChange]
// Type encoding: v16@0:8
// Implementation: 0x104f8fa88

// -[SCMusicEditorViewController onStartOffsetChangedWithStartOffsetMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x104f8fb3c

// -[SCMusicEditorViewController observeExternalCurrentTimeMsWithCallback:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104f8fc14

// -[SCMusicEditorViewController onMuteSnapAudioToggleChangedWithMuteSnapAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f8ff20

// -[SCMusicEditorViewController onMusicPlaybackEventTriggeredWithTrackId:playbackEvent:offsetMs:wallClockTime:]
// Type encoding: v44@0:8@16i24d28d36
// Implementation: 0x104f8ff5c

// -[SCMusicEditorViewController shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x104f90010

// -[SCMusicEditorViewController pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104f90018

// -[SCMusicEditorViewController _itemInstanceViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x104f90024

// -[SCMusicEditorViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104f90154

// -[SCMusicEditorViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f90174

// -[SCMusicEditorViewController pausePlaybackObservable]
// Type encoding: @16@0:8
// Implementation: 0x104f90188

// -[SCMusicEditorViewController setPausePlaybackObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f90198

// -[SCMusicEditorViewController showBottomGradient]
// Type encoding: B16@0:8
// Implementation: 0x104f901d8

// -[SCMusicEditorViewController setShowBottomGradient:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f901e8

// -[SCMusicEditorViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f901f8

@end
