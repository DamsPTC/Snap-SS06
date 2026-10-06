// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProgressOverlayView
// Superclass: UIView
// Address: 0x112c74c68

@interface SCProgressOverlayView

// Property: delegate; attributes: T@"<SCProgressOverlayViewDelegate>",W,N,V_delegate
// Property: contentsHidden; attributes: TB,N
// Property: cancellable; attributes: TB,N,V_cancellable
// Property: attributedText; attributes: T@"NSAttributedString",C,N
// Property: progress; attributes: Tf,N

// -[SCProgressOverlayView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2c1ea8

// -[SCProgressOverlayView contentsHidden]
// Type encoding: B16@0:8
// Implementation: 0x10b2c2a60

// -[SCProgressOverlayView setContentsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c2a70

// -[SCProgressOverlayView setCancellable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c2a80

// -[SCProgressOverlayView attributedText]
// Type encoding: @16@0:8
// Implementation: 0x10b2c2c94

// -[SCProgressOverlayView setAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c2ca4

// -[SCProgressOverlayView progress]
// Type encoding: f16@0:8
// Implementation: 0x10b2c2cb4

// -[SCProgressOverlayView setProgress:]
// Type encoding: v20@0:8f16
// Implementation: 0x10b2c2cc4

// -[SCProgressOverlayView setProgress:animated:]
// Type encoding: v24@0:8f16B20
// Implementation: 0x10b2c2cd4

// -[SCProgressOverlayView _didPressCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x10b2c2ce4

// -[SCProgressOverlayView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2c2d20

// -[SCProgressOverlayView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c2d40

// -[SCProgressOverlayView cancellable]
// Type encoding: B16@0:8
// Implementation: 0x10b2c2d54

// -[SCProgressOverlayView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2c2d64

@end
