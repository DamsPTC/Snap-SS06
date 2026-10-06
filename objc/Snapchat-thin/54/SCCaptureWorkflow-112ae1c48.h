// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureWorkflow
// Superclass: NSObject
// Address: 0x112ae1c48

@interface SCCaptureWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptureWorkflow initWithDelegate:captureWorkflowResultDelegate:captureWorkflowPageRouter:applicationLifecycleEvents:captureScope:cameraUIScope:cameraHardwareServices:hardwareStartRunningConfig:timeProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1064b1da8

// -[SCCaptureWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1064b1f6c

// -[SCCaptureWorkflow _endWorkflowWithDidSendSnap:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1064b20a0

// -[SCCaptureWorkflow endWorkflowWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1064b2270

// -[SCCaptureWorkflow _observeApplicationLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x1064b227c

// -[SCCaptureWorkflow leftCameraBackButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x1064b26b4

// -[SCCaptureWorkflow cameraDismissRequested:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1064b26c0

// -[SCCaptureWorkflow didBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x1064b26cc

// -[SCCaptureWorkflow toggleButtonVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064b26d0

// -[SCCaptureWorkflow toggleSearchBarAndBitmojiVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064b26d4

// -[SCCaptureWorkflow toggleTimerMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064b26d8

// -[SCCaptureWorkflow activate]
// Type encoding: v16@0:8
// Implementation: 0x1064b26dc

// -[SCCaptureWorkflow didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b26e0

// -[SCCaptureWorkflow didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1064b2754

// -[SCCaptureWorkflow didSendChatMessage]
// Type encoding: v16@0:8
// Implementation: 0x1064b2760

// -[SCCaptureWorkflow didSendToGallery]
// Type encoding: v16@0:8
// Implementation: 0x1064b276c

// -[SCCaptureWorkflow didPostStoryWithStoryTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b2778

// -[SCCaptureWorkflow didSaveSnapWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b2784

// -[SCCaptureWorkflow _startCameraRunningWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b27f4

// -[SCCaptureWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064b28ec

@end
