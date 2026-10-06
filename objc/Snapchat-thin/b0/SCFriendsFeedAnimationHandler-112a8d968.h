// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedAnimationHandler
// Superclass: NSObject
// Address: 0x112a8d968

@interface SCFriendsFeedAnimationHandler

// Property: observers; attributes: T@"NSMutableDictionary",&,N,V_observers
// Property: delegate; attributes: T@"<SCFriendsFeedAnimationHandlerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedAnimationHandler initWithSubstituteAnimationStateProvider:snapReplayAnimationStateProvider:peekAPeekAnimationStateProvider:snapCountDownManager:actionHandler:messagingExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105b4a578

// -[SCFriendsFeedAnimationHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105b4a7d8

// -[SCFriendsFeedAnimationHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105b4a80c

// -[SCFriendsFeedAnimationHandler handleActionWithSender:actionModel:fromSourceViews:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105b4af7c

// -[SCFriendsFeedAnimationHandler _substituteTextForView:parentView:animationData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b4b5a0

// -[SCFriendsFeedAnimationHandler _substituteTextBackForLabel:parentView:originalLabelString:animationData:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105b4b9a8

// -[SCFriendsFeedAnimationHandler _didFinishSubstitueTextAnimationForAnimationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4bc6c

// -[SCFriendsFeedAnimationHandler _replaySnapForFeedIconView:parentView:animationData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b4bcac

// -[SCFriendsFeedAnimationHandler _didReplaySnapForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4c0bc

// -[SCFriendsFeedAnimationHandler _peekAPeekForFeedIconView:animationData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b4c0c4

// -[SCFriendsFeedAnimationHandler _countdownSnapForFeedIconView:parentView:animationData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b4c104

// -[SCFriendsFeedAnimationHandler _subscribeToSnapCountdownUpdates:layer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b4c440

// -[SCFriendsFeedAnimationHandler _removeObserverForSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4c6e0

// -[SCFriendsFeedAnimationHandler _pauseLayerAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4c74c

// -[SCFriendsFeedAnimationHandler _resumeLayerAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4c7a8

// -[SCFriendsFeedAnimationHandler _didCountdownSnapForAnimationData:view:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b4c824

// -[SCFriendsFeedAnimationHandler _postViewForFeedIconView:parentView:animationData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b4ca1c

// -[SCFriendsFeedAnimationHandler _pulsingTextForView:animationData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b4cd1c

// -[SCFriendsFeedAnimationHandler _translationAnimationForView:animationData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105b4ce4c

// -[SCFriendsFeedAnimationHandler _animateView:duration:animations:completion:]
// Type encoding: v48@0:8@16d24@?32@?40
// Implementation: 0x105b4d0cc

// -[SCFriendsFeedAnimationHandler _animateRadialWipeAnimationForView:parentView:outerLayerColor:duration:remainingTime:clockwise:completion:]
// Type encoding: @68@0:8@16@24@32d40d48B56@?60
// Implementation: 0x105b4d1ac

// -[SCFriendsFeedAnimationHandler _removeAnimatingSublayerIfNecessaryForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4d67c

// -[SCFriendsFeedAnimationHandler _scaleFeedComponentForView:animationData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b4d800

// -[SCFriendsFeedAnimationHandler _animatePostViewEmoji:feedId:view:parentView:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105b4db44

// -[SCFriendsFeedAnimationHandler _animateSenderPostViewEmoji:feedId:view:parentView:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105b4df6c

// -[SCFriendsFeedAnimationHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b4e314

// -[SCFriendsFeedAnimationHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4e32c

// -[SCFriendsFeedAnimationHandler observers]
// Type encoding: @16@0:8
// Implementation: 0x105b4e338

// -[SCFriendsFeedAnimationHandler setObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b4e340

// -[SCFriendsFeedAnimationHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b4e370

@end
