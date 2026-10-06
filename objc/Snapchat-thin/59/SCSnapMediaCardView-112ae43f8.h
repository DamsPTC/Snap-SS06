// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapMediaCardView
// Superclass: SCBaseMediaCardView
// Address: 0x112ae43f8

@interface SCSnapMediaCardView

// Property: replayDelegate; attributes: T@"<SCSnapReplayViewCellDelegate>",W,N,V_replayDelegate
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_tapGestureRecognizer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCSnapMediaCardView initWithParentVC:delegate:snapCountDownManager:postSnapProvider:actionHandler:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106518a3c

// -[SCSnapMediaCardView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106518bc0

// -[SCSnapMediaCardView prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106518c38

// -[SCSnapMediaCardView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106518c70

// -[SCSnapMediaCardView renderPayload]
// Type encoding: v16@0:8
// Implementation: 0x106518ed0

// -[SCSnapMediaCardView renderPostSnapButtons]
// Type encoding: v16@0:8
// Implementation: 0x106518ed4

// -[SCSnapMediaCardView createPostSnapButtonsViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1065190c0

// -[SCSnapMediaCardView _startSnapTimerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1065193b0

// -[SCSnapMediaCardView _pauseSnapCountdownTimer]
// Type encoding: v16@0:8
// Implementation: 0x1065194dc

// -[SCSnapMediaCardView _resumeSnapCountdownTimer]
// Type encoding: v16@0:8
// Implementation: 0x1065194ec

// -[SCSnapMediaCardView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x1065194fc

// -[SCSnapMediaCardView _initGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x106519500

// -[SCSnapMediaCardView onTap]
// Type encoding: v16@0:8
// Implementation: 0x1065195b8

// -[SCSnapMediaCardView onLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x106519688

// -[SCSnapMediaCardView gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1065196c4

// -[SCSnapMediaCardView gestureRecognizer:shouldReceivePress:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106519784

// -[SCSnapMediaCardView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1065197e0

// -[SCSnapMediaCardView getSnapIconViewRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1065198c0

// -[SCSnapMediaCardView height]
// Type encoding: d16@0:8
// Implementation: 0x1065199d4

// -[SCSnapMediaCardView rerenderWithBoundingSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1065199e0

// -[SCSnapMediaCardView resetWithOriginalSettings]
// Type encoding: v16@0:8
// Implementation: 0x106519a6c

// -[SCSnapMediaCardView attemptToReplaySnap]
// Type encoding: v16@0:8
// Implementation: 0x106519b94

// -[SCSnapMediaCardView thumbnailViewForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106519c3c

// -[SCSnapMediaCardView setReplayDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106519d0c

// -[SCSnapMediaCardView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106519d1c

// -[SCSnapMediaCardView actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x10651a078

// -[SCSnapMediaCardView setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10651a088

// -[SCSnapMediaCardView replayDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10651a0c8

// -[SCSnapMediaCardView tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10651a0e8

// -[SCSnapMediaCardView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10651a0f8

@end
