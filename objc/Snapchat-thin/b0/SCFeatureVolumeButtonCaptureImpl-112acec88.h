// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureVolumeButtonCaptureImpl
// Superclass: SCFeature
// Address: 0x112acec88

@interface SCFeatureVolumeButtonCaptureImpl

// Property: audioSession; attributes: T@"<SCAudioSession>",R,N,V_audioSession
// Property: handler; attributes: T@"<SCCameraVolumeButtonHandling>",R,N
// Property: shouldAutomaticallyStartHandlingEvents; attributes: TB,N,V_shouldAutomaticallyStartHandlingEvents
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureVolumeButtonCaptureDelegate>",W,N,V_delegate
// Property: pressingVolumeButton; attributes: TB,R,N,V_pressingVolumeButton

// -[SCFeatureVolumeButtonCaptureImpl initWithAudioSession:cameraHardwareResource:customVolumeController:volumeButtonCaptureConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10087e1f4

// -[SCFeatureVolumeButtonCaptureImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106198690

// -[SCFeatureVolumeButtonCaptureImpl handler]
// Type encoding: @16@0:8
// Implementation: 0x10087e878

// -[SCFeatureVolumeButtonCaptureImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061986e4

// -[SCFeatureVolumeButtonCaptureImpl _observeCaptureState]
// Type encoding: v16@0:8
// Implementation: 0x106198750

// -[SCFeatureVolumeButtonCaptureImpl onLensesActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061989fc

// -[SCFeatureVolumeButtonCaptureImpl _stopListeningMuteSwitchUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106198bbc

// -[SCFeatureVolumeButtonCaptureImpl _startListeningMuteSwitchUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106198bfc

// -[SCFeatureVolumeButtonCaptureImpl startHandlingVolumeButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x106198c4c

// -[SCFeatureVolumeButtonCaptureImpl stopHandlingVolumeButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x10087e7fc

// -[SCFeatureVolumeButtonCaptureImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x106198d78

// -[SCFeatureVolumeButtonCaptureImpl volumeButtonHandlerDidBeginPressingVolumeButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198d88

// -[SCFeatureVolumeButtonCaptureImpl volumeButtonHandlerDidEndPressingVolumeButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198e10

// -[SCFeatureVolumeButtonCaptureImpl lensAudioDidStartPlaying]
// Type encoding: v16@0:8
// Implementation: 0x106198e88

// -[SCFeatureVolumeButtonCaptureImpl lensAudioDidStopPlaying]
// Type encoding: v16@0:8
// Implementation: 0x106198e9c

// -[SCFeatureVolumeButtonCaptureImpl audioSessionSilenceSecondaryAudioHintTypeDidChangeToStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198eac

// -[SCFeatureVolumeButtonCaptureImpl audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198f7c

// -[SCFeatureVolumeButtonCaptureImpl secretFeatureChecker:didCheckSecretFeatureMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106199080

// -[SCFeatureVolumeButtonCaptureImpl _onMuteSwitchEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1061991ac

// -[SCFeatureVolumeButtonCaptureImpl _onMuteSwitchDisabled]
// Type encoding: v16@0:8
// Implementation: 0x10619920c

// -[SCFeatureVolumeButtonCaptureImpl _allowCaptureDuringOtherAppPlay]
// Type encoding: B16@0:8
// Implementation: 0x106199288

// -[SCFeatureVolumeButtonCaptureImpl pressingVolumeButton]
// Type encoding: B16@0:8
// Implementation: 0x1061992d0

// -[SCFeatureVolumeButtonCaptureImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10087e8d8

// -[SCFeatureVolumeButtonCaptureImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087e7e8

// -[SCFeatureVolumeButtonCaptureImpl audioSession]
// Type encoding: @16@0:8
// Implementation: 0x1061992e0

// -[SCFeatureVolumeButtonCaptureImpl shouldAutomaticallyStartHandlingEvents]
// Type encoding: B16@0:8
// Implementation: 0x1061992f0

// -[SCFeatureVolumeButtonCaptureImpl setShouldAutomaticallyStartHandlingEvents:]
// Type encoding: v20@0:8B16
// Implementation: 0x106199300

// -[SCFeatureVolumeButtonCaptureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106199310

@end
