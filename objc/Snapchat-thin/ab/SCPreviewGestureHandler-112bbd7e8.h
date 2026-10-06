// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewGestureHandler
// Superclass: NSObject
// Address: 0x112bbd7e8

@interface SCPreviewGestureHandler

// Property: disabledOptions; attributes: TQ,N,V_disabledOptions
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_tapGestureRecognizer
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",R,N,V_longPressGestureRecognizer
// Property: delegate; attributes: T@"<SCSCPreviewGestureHandlerDelegate>",R,W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewGestureHandler initWithPreviewView:configuration:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108cb6350

// -[SCPreviewGestureHandler toggleGestureOptions:enabled:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x108cb65d4

// -[SCPreviewGestureHandler _handleTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cb6600

// -[SCPreviewGestureHandler _handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cb6750

// -[SCPreviewGestureHandler gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cb68a0

// -[SCPreviewGestureHandler tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x108cb6908

// -[SCPreviewGestureHandler longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x108cb6910

// -[SCPreviewGestureHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x108cb6918

// -[SCPreviewGestureHandler disabledOptions]
// Type encoding: Q16@0:8
// Implementation: 0x108cb6930

// -[SCPreviewGestureHandler setDisabledOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108cb6938

// -[SCPreviewGestureHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cb6940

@end
