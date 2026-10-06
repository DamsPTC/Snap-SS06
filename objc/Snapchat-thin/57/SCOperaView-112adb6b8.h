// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaView
// Superclass: UIView
// Address: 0x112adb6b8

@interface SCOperaView

// Property: scrollView; attributes: T@"UIView<SCOperaScrollViewing>",R,N,V_scrollView
// Property: scrollContentView; attributes: T@"SCOperaScrollContentView",R,N,V_scrollContentView
// Property: delegate; attributes: T@"<SCOperaViewDelegate>",W,N,V_delegate
// Property: actionBarView; attributes: T@"UIView",&,N,V_actionBarView
// Property: noClipViewHitTestEnabled; attributes: TB,N,V_noClipViewHitTestEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaView initWithConfiguration:operaSafeAreaInsets:configProvider:internalConfigProvider:scrollTransitionResolver:debugServices:]
// Type encoding: @88@0:8@16{UIEdgeInsets=dddd}24@56@64@72@80
// Implementation: 0x106320c04

// -[SCOperaView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106320dac

// -[SCOperaView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106320e8c

// -[SCOperaView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x106320ec0

// -[SCOperaView showBlurOverlayOnViews:blurBounds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106320f20

// -[SCOperaView hideBlurOverlays]
// Type encoding: v16@0:8
// Implementation: 0x1063210e4

// -[SCOperaView setActionBarView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632111c

// -[SCOperaView setNoClipViewHitTestEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632118c

// -[SCOperaView _performInitialSetup:internalConfigProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106321200

// -[SCOperaView _didLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063213c8

// -[SCOperaView _createScrollViewContainer:internalConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10632146c

// -[SCOperaView scrollContentViewDidRefreshDisplay:]
// Type encoding: v24@0:8@16
// Implementation: 0x106321618

// -[SCOperaView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106321650

// -[SCOperaView scrollView]
// Type encoding: @16@0:8
// Implementation: 0x106321668

// -[SCOperaView scrollContentView]
// Type encoding: @16@0:8
// Implementation: 0x106321678

// -[SCOperaView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106321688

// -[SCOperaView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063216a8

// -[SCOperaView actionBarView]
// Type encoding: @16@0:8
// Implementation: 0x1063216bc

// -[SCOperaView noClipViewHitTestEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063216cc

// -[SCOperaView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063216dc

@end
