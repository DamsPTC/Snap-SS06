// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureVideoStrategyEvent
// Superclass: NSObject
// Address: 0x112c02c08

@interface SCCaptureVideoStrategyEvent


// -[SCCaptureVideoStrategyEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aefcd70

// -[SCCaptureVideoStrategyEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aefcd94

// -[SCCaptureVideoStrategyEvent internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10aefcff8

// -[SCCaptureVideoStrategyEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aefd03c

// -[SCCaptureVideoStrategyEvent matchDidScheduleRecordRequest:didCancelRecordRequest:willRequestStartRecord:didRequestStartRecord:willRequestStopRecord:didRequestStopRecord:didRequestAbortRecord:capturerWillBeginRecording:capturerDidBeginRecording:capturerWillFinishRecording:capturerDidFinishRecording:capturerDidCancelRecording:didCaptureVideo:didReceiveError:]
// Type encoding: v128@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96@?104@?112@?120
// Implementation: 0x10aefd470

// -[SCCaptureVideoStrategyEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aefd750

// +[SCCaptureVideoStrategyEvent capturerDidBeginRecordingWithConfiguration:currentCapturerState:session:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aefc340

// +[SCCaptureVideoStrategyEvent capturerDidCancelRecordingWithConfiguration:currentCapturerState:session:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aefc40c

// +[SCCaptureVideoStrategyEvent capturerDidFinishRecordingWithConfiguration:currentCapturerState:session:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aefc4d8

// +[SCCaptureVideoStrategyEvent capturerWillBeginRecordingWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefc5a4

// +[SCCaptureVideoStrategyEvent capturerWillFinishRecordingWithConfiguration:currentCapturerState:session:recordedVideoFuture:videoSize:placeholderImage:]
// Type encoding: @72@0:8@16@24@32@40{CGSize=dd}48@64
// Implementation: 0x10aefc63c

// +[SCCaptureVideoStrategyEvent didCancelRecordRequestWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefc77c

// +[SCCaptureVideoStrategyEvent didCaptureVideoWithConfiguration:currentCapturerState:video:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aefc814

// +[SCCaptureVideoStrategyEvent didReceiveErrorWithConfiguration:currentCapturerState:error:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aefc8e0

// +[SCCaptureVideoStrategyEvent didRequestAbortRecordWithConfiguration:didCancelCapturerRecording:cancelReason:callsite:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x10aefc9ac

// +[SCCaptureVideoStrategyEvent didRequestStartRecordWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefca80

// +[SCCaptureVideoStrategyEvent didRequestStopRecordWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefcb18

// +[SCCaptureVideoStrategyEvent didScheduleRecordRequestWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefcbb0

// +[SCCaptureVideoStrategyEvent willRequestStartRecordWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefcc40

// +[SCCaptureVideoStrategyEvent willRequestStopRecordWithConfiguration:currentCapturerState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aefccd8

@end
