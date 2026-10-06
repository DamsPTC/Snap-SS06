// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiScrollView
// Superclass: SCValdiView
// Address: 0x112cf42d8

@interface SCValdiScrollView

// Property: innerScrollView; attributes: T@"UIScrollView",R,N
// Property: transform; attributes: T{CGAffineTransform=dddddd},N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: innerScrollView; attributes: T@"UIScrollView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiScrollView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b969794

// -[SCValdiScrollView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b9698f4

// -[SCValdiScrollView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b969954

// -[SCValdiScrollView _layoutScrollView]
// Type encoding: v16@0:8
// Implementation: 0x10b96999c

// -[SCValdiScrollView observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x10b969af0

// -[SCValdiScrollView scrollSpecsDidChangeWithContentOffset:contentSize:animated:]
// Type encoding: v52@0:8{CGPoint=dd}16{CGSize=dd}32B48
// Implementation: 0x10b969b30

// -[SCValdiScrollView setContentOffset:animated:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x10b969c14

// -[SCValdiScrollView setContentSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10b969c24

// -[SCValdiScrollView _layoutContentSize]
// Type encoding: v16@0:8
// Implementation: 0x10b969c38

// -[SCValdiScrollView setClipsToBounds:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b969cc4

// -[SCValdiScrollView clipsToBoundsByDefault]
// Type encoding: B16@0:8
// Implementation: 0x10b969d04

// -[SCValdiScrollView setValdiContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b969d08

// -[SCValdiScrollView setValdiViewNode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b969d50

// -[SCValdiScrollView contentViewForInsertingValdiChildren]
// Type encoding: @16@0:8
// Implementation: 0x10b969d98

// -[SCValdiScrollView didMoveToValdiContext:viewNode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b969db4

// -[SCValdiScrollView willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x10b969e10

// -[SCValdiScrollView innerScrollView]
// Type encoding: @16@0:8
// Implementation: 0x10b969e64

// -[SCValdiScrollView valdi_setBounces:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969e80

// -[SCValdiScrollView valdi_setBouncesFromDragAtStart:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969e9c

// -[SCValdiScrollView valdi_setBouncesFromDragAtEnd:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969eb8

// -[SCValdiScrollView valdi_setBouncesVerticalWithSmallContent:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969ed4

// -[SCValdiScrollView valdi_setBouncesHorizontalWithSmallContent:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969ef0

// -[SCValdiScrollView _updateKeyboardMode]
// Type encoding: v16@0:8
// Implementation: 0x10b969f0c

// -[SCValdiScrollView valdi_setDismissKeyboardOnDrag:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b969fc0

// -[SCValdiScrollView valdi_setDismissKeyboardOnDragMode:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b969fe4

// -[SCValdiScrollView valdi_setTranslatesForKeyboard:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a050

// -[SCValdiScrollView valdi_setPagingEnabled:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a088

// -[SCValdiScrollView valdi_setShowsHorizontalScrollIndicator:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a0a4

// -[SCValdiScrollView valdi_setShowsVerticalScrollIndicator:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a0c0

// -[SCValdiScrollView valdi_setCancelsTouchesOnScroll:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a0dc

// -[SCValdiScrollView valdi_setStopScrollingOnTouch:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a114

// -[SCValdiScrollView valdi_setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b96a130

// -[SCValdiScrollView valdi_setScrollPerfLoggerBridge:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96a140

// -[SCValdiScrollView valdi_setDecelerationRate:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b96a1dc

// -[SCValdiScrollView valdi_setFadingEdgeLength:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b96a24c

// -[SCValdiScrollView valdi_setFadingEdgeStart:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a4cc

// -[SCValdiScrollView valdi_setFadingEdgeEnd:]
// Type encoding: B20@0:8B16
// Implementation: 0x10b96a4f0

// -[SCValdiScrollView _updateFadingEdgeDirection]
// Type encoding: v16@0:8
// Implementation: 0x10b96a514

// -[SCValdiScrollView _updateFadingEdgeDirectionAndInvalidateLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b96a51c

// -[SCValdiScrollView _updateFadingEdge]
// Type encoding: v16@0:8
// Implementation: 0x10b96a5a0

// -[SCValdiScrollView _fadeStrengthForOffset:maxOffset:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x10b96a7b8

// -[SCValdiScrollView _easeInOut:]
// Type encoding: d24@0:8d16
// Implementation: 0x10b96a7e4

// -[SCValdiScrollView _scrollViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b96ac84

// -[SCValdiScrollView _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96ad20

// -[SCValdiScrollView _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96b044

// -[SCValdiScrollView handleScrollPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96b1c4

// -[SCValdiScrollView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b96b2dc

// +[SCValdiScrollView bindAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96a810

@end
