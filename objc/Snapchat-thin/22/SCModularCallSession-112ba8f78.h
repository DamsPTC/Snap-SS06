// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModularCallSession
// Superclass: NSObject
// Address: 0x112ba8f78

@interface SCModularCallSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: callingController; attributes: T@"<SCTCallingController>",R,N
// Property: callInfoObservable; attributes: T@"SCObservable",R,N
// Property: hasLocalVideoPublishIntent; attributes: TB,R,N
// Property: lensToRestore; attributes: T@"SCCallLensInfo",&,N
// Property: cameraType; attributes: TQ,N

// -[SCModularCallSession initWithSessionWrapper:audioManager:identityServices:callKitServices:talkManager:selectedLensInfoObservable:delegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1085b488c

// -[SCModularCallSession lensToRestore]
// Type encoding: @16@0:8
// Implementation: 0x1085b4b6c

// -[SCModularCallSession setLensToRestore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b4bac

// -[SCModularCallSession cameraType]
// Type encoding: Q16@0:8
// Implementation: 0x1085b4bf4

// -[SCModularCallSession setCameraType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085b4c2c

// -[SCModularCallSession callingController]
// Type encoding: @16@0:8
// Implementation: 0x1085b4c60

// -[SCModularCallSession stopScreenCapture]
// Type encoding: v16@0:8
// Implementation: 0x1085b4c64

// -[SCModularCallSession callInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085b4c90

// -[SCModularCallSession hasLocalVideoPublishIntent]
// Type encoding: B16@0:8
// Implementation: 0x1085b51d8

// -[SCModularCallSession activate]
// Type encoding: v16@0:8
// Implementation: 0x1085b5258

// -[SCModularCallSession activateWithAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085b5310

// -[SCModularCallSession background]
// Type encoding: v16@0:8
// Implementation: 0x1085b5444

// -[SCModularCallSession dispose]
// Type encoding: v16@0:8
// Implementation: 0x1085b5490

// -[SCModularCallSession selectAudioDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b54e0

// -[SCModularCallSession createVideoFrameProvider]
// Type encoding: @16@0:8
// Implementation: 0x1085b5528

// -[SCModularCallSession onLensStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b557c

// -[SCModularCallSession onLensStopped]
// Type encoding: v16@0:8
// Implementation: 0x1085b55c4

// -[SCModularCallSession notifyScreenShotTaken]
// Type encoding: v16@0:8
// Implementation: 0x1085b55f0

// -[SCModularCallSession notifyScreenRecorded]
// Type encoding: v16@0:8
// Implementation: 0x1085b561c

// -[SCModularCallSession reportCallingAddedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b5648

// -[SCModularCallSession setNativeAudioSelectorOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085b5690

// -[SCModularCallSession sponsoredLensAttachmentPresentationUpdated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085b56cc

// -[SCModularCallSession notifyScreenShareWillStart:]
// Type encoding: B20@0:8B16
// Implementation: 0x1085b5710

// -[SCModularCallSession updatePublishedMedia:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1085b5750

// -[SCModularCallSession updatePublishedMedia:audioMuted:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x1085b575c

// -[SCModularCallSession dismissCall]
// Type encoding: v16@0:8
// Implementation: 0x1085b5948

// -[SCModularCallSession createVideoViewWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1085b5974

// -[SCModularCallSession sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085b59d8

// -[SCModularCallSession sessionWrapper:updatedUsersTalking:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085b59e4

// -[SCModularCallSession _audioRouteChanged]
// Type encoding: v16@0:8
// Implementation: 0x1085b59f0

// -[SCModularCallSession _refreshConversationName]
// Type encoding: v16@0:8
// Implementation: 0x1085b5a48

// -[SCModularCallSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085b5c54

@end
