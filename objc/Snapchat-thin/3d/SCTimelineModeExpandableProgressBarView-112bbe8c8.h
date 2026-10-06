// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineModeExpandableProgressBarView
// Superclass: UIView
// Address: 0x112bbe8c8

@interface SCTimelineModeExpandableProgressBarView

// Property: delegate; attributes: T@"<SCTimelineExpandableProgressBarViewDelegate>",W,N,V_delegate
// Property: isDirectorModeUI; attributes: TB,N,V_isDirectorModeUI
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineModeExpandableProgressBarView initWithDefaultMaxIntervalsWithMinFinalSegmentDuration:]
// Type encoding: @24@0:8d16
// Implementation: 0x108cd7aec

// -[SCTimelineModeExpandableProgressBarView initWithProgressBarMaxIntervals:minFinalSegmentDuration:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108cd7b4c

// -[SCTimelineModeExpandableProgressBarView startAnimationWithSpeedMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cd7d3c

// -[SCTimelineModeExpandableProgressBarView _oldFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cd7f94

// -[SCTimelineModeExpandableProgressBarView _animationDidCompleteWithSpeedMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cd8018

// -[SCTimelineModeExpandableProgressBarView setIsDirectorModeUI:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cd8154

// -[SCTimelineModeExpandableProgressBarView stopAnimationAndSaveState:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cd82c0

// -[SCTimelineModeExpandableProgressBarView progress]
// Type encoding: d16@0:8
// Implementation: 0x108cd844c

// -[SCTimelineModeExpandableProgressBarView setProgressSegmentEndTimesArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd845c

// -[SCTimelineModeExpandableProgressBarView addSegmentWithDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cd871c

// -[SCTimelineModeExpandableProgressBarView _progressDidChange]
// Type encoding: v16@0:8
// Implementation: 0x108cd8948

// -[SCTimelineModeExpandableProgressBarView updateLastSegmentDurationWithinOriginalLimits:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cd89d8

// -[SCTimelineModeExpandableProgressBarView deleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cd8b40

// -[SCTimelineModeExpandableProgressBarView _currentMaxIntervalValue]
// Type encoding: d16@0:8
// Implementation: 0x108cd8fe8

// -[SCTimelineModeExpandableProgressBarView reset]
// Type encoding: v16@0:8
// Implementation: 0x108cd9044

// -[SCTimelineModeExpandableProgressBarView _maxAvailableWidth]
// Type encoding: d16@0:8
// Implementation: 0x108cd9178

// -[SCTimelineModeExpandableProgressBarView _maxAvailableHeight]
// Type encoding: d16@0:8
// Implementation: 0x108cd9194

// -[SCTimelineModeExpandableProgressBarView _indexForSmallestMaxIntervalForEndTime:]
// Type encoding: q24@0:8d16
// Implementation: 0x108cd91b0

// -[SCTimelineModeExpandableProgressBarView _transitionForRecordingToScaleFactor:speedMultiplier:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x108cd9268

// -[SCTimelineModeExpandableProgressBarView _transitionToScaleFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cd9638

// -[SCTimelineModeExpandableProgressBarView _frameWithStartProgress:endProgress:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8d16d24
// Implementation: 0x108cd975c

// -[SCTimelineModeExpandableProgressBarView _stopExpandingAnimation]
// Type encoding: v16@0:8
// Implementation: 0x108cd9804

// -[SCTimelineModeExpandableProgressBarView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108cd9848

// -[SCTimelineModeExpandableProgressBarView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cd9868

// -[SCTimelineModeExpandableProgressBarView isDirectorModeUI]
// Type encoding: B16@0:8
// Implementation: 0x108cd987c

// -[SCTimelineModeExpandableProgressBarView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cd988c

// +[SCTimelineModeExpandableProgressBarView defaultMaxIntervals]
// Type encoding: @16@0:8
// Implementation: 0x108cd925c

@end
