// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapSegmentExpandedCell
// Superclass: SCSnapSegmentCell
// Address: 0x112bf6778

@interface SCSnapSegmentExpandedCell

// Property: contentTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_contentTimeRange
// Property: trimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_trimmedTimeRange
// Property: fixedSegmentDuration; attributes: T{?=qiIq},N,V_fixedSegmentDuration
// Property: minimumSegmentDuration; attributes: T{?=qiIq},N,V_minimumSegmentDuration
// Property: maximumSegmentDuration; attributes: T{?=qiIq},N,V_maximumSegmentDuration
// Property: thumbnailFutures; attributes: T@"NSArray",&,N,V_thumbnailFutures
// Property: thumbnailFuturesPreferSynchronous; attributes: TB,N,V_thumbnailFuturesPreferSynchronous
// Property: delegate; attributes: T@"<SCSnapSegmentExpandedCellDelegate>",W,N,V_delegate
// Property: reorderDelegate; attributes: T@"<SCSnapSegmentExpandedCellReorderDeleteDelegate>",W,N,V_reorderDelegate
// Property: selectedTimeSlice; attributes: T{?={?=qiIq}{?=qiIq}},N,V_selectedTimeSlice
// Property: timeSliceSelectionMode; attributes: TB,N,GisTimeSliceSelectionMode,V_timeSliceSelectionMode
// Property: isTrimming; attributes: TB,R,N
// Property: isFixedDurationTrimming; attributes: TB,R,N
// Property: clipsReorderingDeleteButton; attributes: T@"UIButton",&,N,V_clipsReorderingDeleteButton
// Property: perferredContentModeScaleAspectFill; attributes: TB,N,V_perferredContentModeScaleAspectFill
// Property: collapsed; attributes: TB,N,V_collapsed
// Property: isTrimmable; attributes: TB,N,V_isTrimmable
// Property: segmentSupplementView; attributes: T@"UIView",&,N,V_segmentSupplementView
// Property: splittingEnabled; attributes: TB,N,GisSplittingEnabled,V_splittingEnabled
// Property: editsInProgress; attributes: TB,R,N
// Property: cornerRadius; attributes: Td,N,V_cornerRadius
// Property: borderVisible; attributes: TB,N,V_borderVisible
// Property: durationInfoVisible; attributes: TB,N,V_durationInfoVisible
// Property: enableFixedThumbnailSize; attributes: TB,N,V_enableFixedThumbnailSize
// Property: thumbnailsSize; attributes: T{CGSize=dd},N,V_thumbnailsSize
// Property: touchToSeek; attributes: TB,N,V_touchToSeek
// Property: showTimingInfoLabel; attributes: TB,N,V_showTimingInfoLabel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapSegmentExpandedCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x109209054

// -[SCSnapSegmentExpandedCell layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x109209d90

// -[SCSnapSegmentExpandedCell clampedTrimmingTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x10920a318

// -[SCSnapSegmentExpandedCell isTrimming]
// Type encoding: B16@0:8
// Implementation: 0x10920a3e4

// -[SCSnapSegmentExpandedCell isFixedDurationTrimming]
// Type encoding: B16@0:8
// Implementation: 0x10920a400

// -[SCSnapSegmentExpandedCell setClipsReorderingDeleteButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920a418

// -[SCSnapSegmentExpandedCell setContentTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x10920a434

// -[SCSnapSegmentExpandedCell setTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x10920a4a8

// -[SCSnapSegmentExpandedCell setFixedSegmentDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10920a548

// -[SCSnapSegmentExpandedCell setMaximumSegmentDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10920a58c

// -[SCSnapSegmentExpandedCell setThumbnailFutures:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920a644

// -[SCSnapSegmentExpandedCell setBorderVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920a6b4

// -[SCSnapSegmentExpandedCell setDurationInfoVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920a75c

// -[SCSnapSegmentExpandedCell hidePlayhead]
// Type encoding: v16@0:8
// Implementation: 0x10920a7fc

// -[SCSnapSegmentExpandedCell setPlayheadHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10920a804

// -[SCSnapSegmentExpandedCell updatePlayheadWithTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10920a8f4

// -[SCSnapSegmentExpandedCell editsInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10920ad94

// -[SCSnapSegmentExpandedCell animateAddingNewThumbnail:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920adac

// -[SCSnapSegmentExpandedCell setCornerRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x10920b17c

// -[SCSnapSegmentExpandedCell updateUIWithDirectorModeStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x10920b308

// -[SCSnapSegmentExpandedCell gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10920b41c

// -[SCSnapSegmentExpandedCell trimPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920b530

// -[SCSnapSegmentExpandedCell _trimWithFixedDuration:]
// Type encoding: {?={?=qiIq}{?=qiIq}}40@0:8{?=qiIq}16
// Implementation: 0x10920bb0c

// -[SCSnapSegmentExpandedCell playheadPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920be28

// -[SCSnapSegmentExpandedCell selectedTimeSlicePress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920c1d8

// -[SCSnapSegmentExpandedCell pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10920c4a8

// -[SCSnapSegmentExpandedCell hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10920c648

// -[SCSnapSegmentExpandedCell dragStateDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x10920c814

// -[SCSnapSegmentExpandedCell deletePressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920c874

// -[SCSnapSegmentExpandedCell clipsReorderingDeletePressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920c8b0

// -[SCSnapSegmentExpandedCell setTimeSliceSelectionModeEnabled:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10920c8ec

// -[SCSnapSegmentExpandedCell setCollapsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920cc74

// -[SCSnapSegmentExpandedCell setIsTrimmable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920cd50

// -[SCSnapSegmentExpandedCell setSegmentSupplementView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10920cdf8

// -[SCSnapSegmentExpandedCell nonSeekablePlayheadLayer]
// Type encoding: @16@0:8
// Implementation: 0x10920cea4

// -[SCSnapSegmentExpandedCell supplementViewContainerView]
// Type encoding: @16@0:8
// Implementation: 0x10920cfd4

// -[SCSnapSegmentExpandedCell playbackProgressLayer]
// Type encoding: @16@0:8
// Implementation: 0x10920d0d4

// -[SCSnapSegmentExpandedCell timingInfoView]
// Type encoding: @16@0:8
// Implementation: 0x10920d1bc

// -[SCSnapSegmentExpandedCell playheadView]
// Type encoding: @16@0:8
// Implementation: 0x10920d6a8

// -[SCSnapSegmentExpandedCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x10920d760

// -[SCSnapSegmentExpandedCell _addLayoutContaintsForView:toMatchParentView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10920d810

// -[SCSnapSegmentExpandedCell _updateRightTrimHandlerPosition:animated:]
// Type encoding: B36@0:8{CGPoint=dd}16B32
// Implementation: 0x10920da64

// -[SCSnapSegmentExpandedCell _updateLeftTrimHandlerPosition:animated:]
// Type encoding: B36@0:8{CGPoint=dd}16B32
// Implementation: 0x10920de80

// -[SCSnapSegmentExpandedCell _trimmedSegmentTimeRangeUsingTrimmerLocations]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x10920e268

// -[SCSnapSegmentExpandedCell _correspondingXPositionForTime:]
// Type encoding: d40@0:8{?=qiIq}16
// Implementation: 0x10920e328

// -[SCSnapSegmentExpandedCell _correspondingTimeForXPosition:]
// Type encoding: {?=qiIq}24@0:8d16
// Implementation: 0x10920e400

// -[SCSnapSegmentExpandedCell _displayOriginalThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x10920e518

// -[SCSnapSegmentExpandedCell _setThumbnailView:withImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10920e8dc

// -[SCSnapSegmentExpandedCell _movePlayheadToOffset:disableImplicitAnimation:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10920ea2c

// -[SCSnapSegmentExpandedCell _shouldHandleTouchEvent]
// Type encoding: B16@0:8
// Implementation: 0x10920ebe8

// -[SCSnapSegmentExpandedCell _isTouchPointInPlayheadView:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10920ec48

// -[SCSnapSegmentExpandedCell _isTouchPointInSelectedTimeSlice:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10920ed04

// -[SCSnapSegmentExpandedCell _isTouchPointInTrimHandlers:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10920ed48

// -[SCSnapSegmentExpandedCell _isTouchPointInLeftTrimHandle:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10920edbc

// -[SCSnapSegmentExpandedCell _isTouchPointInRightTrimHandle:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10920ee30

// -[SCSnapSegmentExpandedCell _minimumSegmentDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x10920eea4

// -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithLeftX:rightX:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x10920eee0

// -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithOffsetX:]
// Type encoding: v24@0:8d16
// Implementation: 0x10920f018

// -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithOffsetX:tensionEnabled:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10920f020

// -[SCSnapSegmentExpandedCell _tensionValueForDistance:width:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x10920f114

// -[SCSnapSegmentExpandedCell _selectedTimeSliceViewWidth]
// Type encoding: d16@0:8
// Implementation: 0x10920f130

// -[SCSnapSegmentExpandedCell _isPlayheadHidden]
// Type encoding: B16@0:8
// Implementation: 0x10920f1b0

// -[SCSnapSegmentExpandedCell _setPlayheadHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10920f1dc

// -[SCSnapSegmentExpandedCell _updateDurationLabel]
// Type encoding: v16@0:8
// Implementation: 0x10920f264

// -[SCSnapSegmentExpandedCell formatStringWithTimeDuration:]
// Type encoding: @24@0:8d16
// Implementation: 0x10920f2f8

// -[SCSnapSegmentExpandedCell durationLabel]
// Type encoding: @16@0:8
// Implementation: 0x10920f3fc

// -[SCSnapSegmentExpandedCell durationLabelContainer]
// Type encoding: @16@0:8
// Implementation: 0x10920f660

// -[SCSnapSegmentExpandedCell overlayContainer]
// Type encoding: @16@0:8
// Implementation: 0x10920fab8

// -[SCSnapSegmentExpandedCell _updateTimingInfoLabelIfNeededWithTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10920fbf8

// -[SCSnapSegmentExpandedCell _hideTimingInfoLabelAnimated:withDelay:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10920fd68

// -[SCSnapSegmentExpandedCell _DMTrimHandleFromExistingTrimHandle:style:orientation:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10920fee4

// -[SCSnapSegmentExpandedCell contentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x10921001c

// -[SCSnapSegmentExpandedCell trimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x10921003c

// -[SCSnapSegmentExpandedCell fixedSegmentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10921005c

// -[SCSnapSegmentExpandedCell minimumSegmentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10921007c

// -[SCSnapSegmentExpandedCell setMinimumSegmentDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10921009c

// -[SCSnapSegmentExpandedCell maximumSegmentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1092100bc

// -[SCSnapSegmentExpandedCell thumbnailFutures]
// Type encoding: @16@0:8
// Implementation: 0x1092100dc

// -[SCSnapSegmentExpandedCell thumbnailFuturesPreferSynchronous]
// Type encoding: B16@0:8
// Implementation: 0x1092100ec

// -[SCSnapSegmentExpandedCell setThumbnailFuturesPreferSynchronous:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092100fc

// -[SCSnapSegmentExpandedCell delegate]
// Type encoding: @16@0:8
// Implementation: 0x10921010c

// -[SCSnapSegmentExpandedCell setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10921012c

// -[SCSnapSegmentExpandedCell reorderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x109210140

// -[SCSnapSegmentExpandedCell setReorderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x109210160

// -[SCSnapSegmentExpandedCell selectedTimeSlice]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x109210174

// -[SCSnapSegmentExpandedCell setSelectedTimeSlice:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109210194

// -[SCSnapSegmentExpandedCell isTimeSliceSelectionMode]
// Type encoding: B16@0:8
// Implementation: 0x1092101b4

// -[SCSnapSegmentExpandedCell setTimeSliceSelectionMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092101c4

// -[SCSnapSegmentExpandedCell clipsReorderingDeleteButton]
// Type encoding: @16@0:8
// Implementation: 0x1092101d4

// -[SCSnapSegmentExpandedCell setClipsReorderingDeleteButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092101e4

// -[SCSnapSegmentExpandedCell perferredContentModeScaleAspectFill]
// Type encoding: B16@0:8
// Implementation: 0x109210224

// -[SCSnapSegmentExpandedCell setPerferredContentModeScaleAspectFill:]
// Type encoding: v20@0:8B16
// Implementation: 0x109210234

// -[SCSnapSegmentExpandedCell collapsed]
// Type encoding: B16@0:8
// Implementation: 0x109210244

// -[SCSnapSegmentExpandedCell isTrimmable]
// Type encoding: B16@0:8
// Implementation: 0x109210254

// -[SCSnapSegmentExpandedCell segmentSupplementView]
// Type encoding: @16@0:8
// Implementation: 0x109210264

// -[SCSnapSegmentExpandedCell isSplittingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109210274

// -[SCSnapSegmentExpandedCell setSplittingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109210284

// -[SCSnapSegmentExpandedCell cornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x109210294

// -[SCSnapSegmentExpandedCell borderVisible]
// Type encoding: B16@0:8
// Implementation: 0x1092102a4

// -[SCSnapSegmentExpandedCell durationInfoVisible]
// Type encoding: B16@0:8
// Implementation: 0x1092102b4

// -[SCSnapSegmentExpandedCell enableFixedThumbnailSize]
// Type encoding: B16@0:8
// Implementation: 0x1092102c4

// -[SCSnapSegmentExpandedCell setEnableFixedThumbnailSize:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092102d4

// -[SCSnapSegmentExpandedCell thumbnailsSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1092102e4

// -[SCSnapSegmentExpandedCell setThumbnailsSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1092102f8

// -[SCSnapSegmentExpandedCell touchToSeek]
// Type encoding: B16@0:8
// Implementation: 0x10921030c

// -[SCSnapSegmentExpandedCell setTouchToSeek:]
// Type encoding: v20@0:8B16
// Implementation: 0x10921031c

// -[SCSnapSegmentExpandedCell showTimingInfoLabel]
// Type encoding: B16@0:8
// Implementation: 0x10921032c

// -[SCSnapSegmentExpandedCell setShowTimingInfoLabel:]
// Type encoding: v20@0:8B16
// Implementation: 0x10921033c

// -[SCSnapSegmentExpandedCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10921034c

@end
