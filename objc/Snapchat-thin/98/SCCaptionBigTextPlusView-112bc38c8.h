// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionBigTextPlusView
// Superclass: NSObject
// Address: 0x112bc38c8

@interface SCCaptionBigTextPlusView

// Property: superviewBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_superviewBounds
// Property: superviewContentBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_superviewContentBounds
// Property: containerView; attributes: T@"SCCaptionControlledView",&,N,V_containerView
// Property: textContainerView; attributes: T@"SCCaptionTouchControlUIView",&,N,V_textContainerView
// Property: captionCarouselContainerView; attributes: T@"UIView",&,N,V_captionCarouselContainerView
// Property: textScrollView; attributes: T@"UIScrollView",&,N,V_textScrollView
// Property: textView; attributes: T@"SCPreviewCaptionTextView",&,N,V_textView
// Property: editing; attributes: TB,N,V_editing
// Property: lastTranslationX; attributes: Td,N,V_lastTranslationX
// Property: lastTranslationY; attributes: Td,N,V_lastTranslationY
// Property: lastRotation; attributes: Td,N,V_lastRotation
// Property: lastScale; attributes: Td,N,V_lastScale
// Property: lastEditingScale; attributes: Td,N,V_lastEditingScale
// Property: lastPreviewScale; attributes: Td,N,V_lastPreviewScale
// Property: fontSize; attributes: Td,N,V_fontSize
// Property: editingFontSize; attributes: Td,N,V_editingFontSize
// Property: fontSizeMultiplier; attributes: Td,N,V_fontSizeMultiplier
// Property: keyboardHeight; attributes: Td,N,V_keyboardHeight
// Property: lineFragmentPadding; attributes: Td,N,V_lineFragmentPadding
// Property: colorChanged; attributes: TB,N,V_colorChanged
// Property: manuallyScaled; attributes: TB,N,V_manuallyScaled
// Property: isLagunaMedia; attributes: TB,N,V_isLagunaMedia
// Property: originalContentBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_originalContentBounds
// Property: killSwitchProvider; attributes: T@"<SCCreativeToolsKillSwitchProviding>",W,N,V_killSwitchProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: uniqueId; attributes: Tq,N,VuniqueId
// Property: playbackLayerId; attributes: TI,N,VplaybackLayerId
// Property: hasPromptText; attributes: TB,R,N,V_hasPromptText
// Property: userTaggingStartIndex; attributes: Tq,N,V_userTaggingStartIndex
// Property: editCapabilities; attributes: T@"SDMEditCapabilities",C,N,V_editCapabilities
// Property: generatedMagicCaptionText; attributes: T@"NSString",C,N,V_generatedMagicCaptionText

// -[SCCaptionBigTextPlusView setKillSwitchProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e10c18

// -[SCCaptionBigTextPlusView initWithState:editingDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:]
// Type encoding: @228@0:8@16@24B32B36{CGAffineTransform=dddddd}40{CGRect={CGPoint=dd}{CGSize=dd}}88@120{CGRect={CGPoint=dd}{CGSize=dd}}128{CGRect={CGPoint=dd}{CGSize=dd}}160{UIEdgeInsets=dddd}192B224
// Implementation: 0x108e10c88

// -[SCCaptionBigTextPlusView initWithState:editingDelegate:resourceDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:]
// Type encoding: @240@0:8@16@24@32B40B44{CGAffineTransform=dddddd}48{CGRect={CGPoint=dd}{CGSize=dd}}96@128{CGRect={CGPoint=dd}{CGSize=dd}}136{CGRect={CGPoint=dd}{CGSize=dd}}168{UIEdgeInsets=dddd}200B232B236
// Implementation: 0x108e10fd4

// -[SCCaptionBigTextPlusView initWithState:editingDelegate:backgroundImage:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:]
// Type encoding: @240@0:8@16@24@32B40B44{CGAffineTransform=dddddd}48{CGRect={CGPoint=dd}{CGSize=dd}}96@128{CGRect={CGPoint=dd}{CGSize=dd}}136{CGRect={CGPoint=dd}{CGSize=dd}}168{UIEdgeInsets=dddd}200B232B236
// Implementation: 0x108e11138

// -[SCCaptionBigTextPlusView setEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1128c

// -[SCCaptionBigTextPlusView alignment]
// Type encoding: q16@0:8
// Implementation: 0x108e11310

// -[SCCaptionBigTextPlusView setAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e11318

// -[SCCaptionBigTextPlusView editingTextView]
// Type encoding: @16@0:8
// Implementation: 0x108e113e4

// -[SCCaptionBigTextPlusView initializeViewsWithState:backgroundImage:shouldKeepStyles:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108e113e8

// -[SCCaptionBigTextPlusView alignCaption:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e12414

// -[SCCaptionBigTextPlusView _initializeLastRotation]
// Type encoding: v16@0:8
// Implementation: 0x108e124e8

// -[SCCaptionBigTextPlusView _initializeLastLocations:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e124f0

// -[SCCaptionBigTextPlusView updateAnchor:rotation:scale:]
// Type encoding: v48@0:8{CGPoint=dd}16d32d40
// Implementation: 0x108e1266c

// -[SCCaptionBigTextPlusView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108e126c8

// -[SCCaptionBigTextPlusView tearDownAndRemoveFromSuperview]
// Type encoding: v16@0:8
// Implementation: 0x108e1270c

// -[SCCaptionBigTextPlusView clearText]
// Type encoding: v16@0:8
// Implementation: 0x108e127e8

// -[SCCaptionBigTextPlusView view]
// Type encoding: @16@0:8
// Implementation: 0x108e12804

// -[SCCaptionBigTextPlusView _configureTextViewBasedOnEditMode]
// Type encoding: v16@0:8
// Implementation: 0x108e12808

// -[SCCaptionBigTextPlusView _setTopAlphaGradientEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1286c

// -[SCCaptionBigTextPlusView _resetFontSizeAndUpdatePosition]
// Type encoding: v16@0:8
// Implementation: 0x108e12afc

// -[SCCaptionBigTextPlusView addObservers]
// Type encoding: v16@0:8
// Implementation: 0x108e12b3c

// -[SCCaptionBigTextPlusView removeObservers]
// Type encoding: v16@0:8
// Implementation: 0x108e12b94

// -[SCCaptionBigTextPlusView inputKeyboardWillChangeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e12be4

// -[SCCaptionBigTextPlusView isHidden]
// Type encoding: B16@0:8
// Implementation: 0x108e12d28

// -[SCCaptionBigTextPlusView isEditing]
// Type encoding: B16@0:8
// Implementation: 0x108e12d64

// -[SCCaptionBigTextPlusView text]
// Type encoding: @16@0:8
// Implementation: 0x108e12d68

// -[SCCaptionBigTextPlusView captionStyle]
// Type encoding: @16@0:8
// Implementation: 0x108e12dac

// -[SCCaptionBigTextPlusView pickedColor]
// Type encoding: @16@0:8
// Implementation: 0x108e12dd4

// -[SCCaptionBigTextPlusView searchableNameForFriendFiltering]
// Type encoding: @16@0:8
// Implementation: 0x108e12dfc

// -[SCCaptionBigTextPlusView usernamesForTagging]
// Type encoding: @16@0:8
// Implementation: 0x108e13050

// -[SCCaptionBigTextPlusView topicsInCaption]
// Type encoding: @16@0:8
// Implementation: 0x108e13098

// -[SCCaptionBigTextPlusView setCaptionExitSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e130e0

// -[SCCaptionBigTextPlusView captionExitSource]
// Type encoding: q16@0:8
// Implementation: 0x108e130e8

// -[SCCaptionBigTextPlusView taggedUsers]
// Type encoding: @16@0:8
// Implementation: 0x108e130f0

// -[SCCaptionBigTextPlusView addTaggedUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e13108

// -[SCCaptionBigTextPlusView addTaggedUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e13274

// -[SCCaptionBigTextPlusView hasTaggedUsers]
// Type encoding: B16@0:8
// Implementation: 0x108e13390

// -[SCCaptionBigTextPlusView setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e133d4

// -[SCCaptionBigTextPlusView attributedText]
// Type encoding: @16@0:8
// Implementation: 0x108e13404

// -[SCCaptionBigTextPlusView isFullscreen]
// Type encoding: B16@0:8
// Implementation: 0x108e13448

// -[SCCaptionBigTextPlusView captionPresent]
// Type encoding: B16@0:8
// Implementation: 0x108e1344c

// -[SCCaptionBigTextPlusView textContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108e134dc

// -[SCCaptionBigTextPlusView textSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e13504

// -[SCCaptionBigTextPlusView stopTagging]
// Type encoding: v16@0:8
// Implementation: 0x108e13550

// -[SCCaptionBigTextPlusView _getCombinedTaggedItemsDictionary]
// Type encoding: @16@0:8
// Implementation: 0x108e135e8

// -[SCCaptionBigTextPlusView _removeTagFromCaptionIfNeededForText:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x108e13638

// -[SCCaptionBigTextPlusView _replaceTextWithFormattedTag:updateDictionaryHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e13714

// -[SCCaptionBigTextPlusView setUserInteractionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e13ab4

// -[SCCaptionBigTextPlusView setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e13b34

// -[SCCaptionBigTextPlusView setTextFromTagging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e13b6c

// -[SCCaptionBigTextPlusView setPromptText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e13c2c

// -[SCCaptionBigTextPlusView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e13d1c

// -[SCCaptionBigTextPlusView setCaptionStyle:appliedStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e13eb4

// -[SCCaptionBigTextPlusView _applyCaptionStyleUpdates]
// Type encoding: v16@0:8
// Implementation: 0x108e13f54

// -[SCCaptionBigTextPlusView _changeFontSizeBasedOnScale]
// Type encoding: v16@0:8
// Implementation: 0x108e13fbc

// -[SCCaptionBigTextPlusView _changeScaleBasedOnFontSize]
// Type encoding: v16@0:8
// Implementation: 0x108e14040

// -[SCCaptionBigTextPlusView _maxTextWidth]
// Type encoding: q16@0:8
// Implementation: 0x108e14098

// -[SCCaptionBigTextPlusView _contentWidth]
// Type encoding: q16@0:8
// Implementation: 0x108e140bc

// -[SCCaptionBigTextPlusView _centerFromAnchorPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x108e140f0

// -[SCCaptionBigTextPlusView _anchorFromCenterPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x108e141e8

// -[SCCaptionBigTextPlusView _anchorFromCenterPoint:textWidth:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16d32
// Implementation: 0x108e14258

// -[SCCaptionBigTextPlusView _verticalCoordinate]
// Type encoding: d16@0:8
// Implementation: 0x108e14304

// -[SCCaptionBigTextPlusView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e14340

// -[SCCaptionBigTextPlusView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x108e145a8

// -[SCCaptionBigTextPlusView textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e14aec

// -[SCCaptionBigTextPlusView textViewDidChangeSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e14b44

// -[SCCaptionBigTextPlusView textPasteConfigurationSupporting:transformPasteItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e14d30

// -[SCCaptionBigTextPlusView startEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e14ed8

// -[SCCaptionBigTextPlusView stopEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e14f2c

// -[SCCaptionBigTextPlusView _prepareToStartEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e14fa4

// -[SCCaptionBigTextPlusView _didStartEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1501c

// -[SCCaptionBigTextPlusView _prepareToStopEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e15188

// -[SCCaptionBigTextPlusView _didStopEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e151d4

// -[SCCaptionBigTextPlusView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e153b8

// -[SCCaptionBigTextPlusView pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e15530

// -[SCCaptionBigTextPlusView pinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e155d4

// -[SCCaptionBigTextPlusView rotation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1582c

// -[SCCaptionBigTextPlusView textFrameContainsGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e158c0

// -[SCCaptionBigTextPlusView resizeForEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e15ad0

// -[SCCaptionBigTextPlusView _resize]
// Type encoding: v16@0:8
// Implementation: 0x108e15ad4

// -[SCCaptionBigTextPlusView _textOrigin]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e15ae8

// -[SCCaptionBigTextPlusView _setTextOrigin:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108e15bf8

// -[SCCaptionBigTextPlusView _adjustTextContainerInsetsRetainingOrigin:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x108e15cbc

// -[SCCaptionBigTextPlusView _resizeWithScreenWidthInEditingMode:updateLastLocation:shouldChangeFont:didTextViewChange:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x108e15df8

// -[SCCaptionBigTextPlusView _setTextContainerViewBoundsAndTextScrollViewFrameWithSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108e16728

// -[SCCaptionBigTextPlusView _getFontWithAppliedStyle:fontSize:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108e169a4

// -[SCCaptionBigTextPlusView _updateEditModeFrameLoc]
// Type encoding: v16@0:8
// Implementation: 0x108e16a80

// -[SCCaptionBigTextPlusView _updateCaptionStyleCarouselViewFrame]
// Type encoding: v16@0:8
// Implementation: 0x108e16cf8

// -[SCCaptionBigTextPlusView _notifyEditingLayoutDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108e16e18

// -[SCCaptionBigTextPlusView _findRightFontSize:]
// Type encoding: d24@0:8@16
// Implementation: 0x108e16e94

// -[SCCaptionBigTextPlusView viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:]
// Type encoding: v112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48{UIEdgeInsets=dddd}80
// Implementation: 0x108e1710c

// -[SCCaptionBigTextPlusView colorChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e171b8

// -[SCCaptionBigTextPlusView isPinningSupported]
// Type encoding: B16@0:8
// Implementation: 0x108e17238

// -[SCCaptionBigTextPlusView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108e17240

// -[SCCaptionBigTextPlusView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108e17248

// -[SCCaptionBigTextPlusView _adjustAnimationsSpeedForView:withSpeed:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108e17298

// -[SCCaptionBigTextPlusView _adjustKeyboardAnimationSpeed:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e1751c

// -[SCCaptionBigTextPlusView setCaptionDismissedPollsSuggestion]
// Type encoding: v16@0:8
// Implementation: 0x108e176d4

// -[SCCaptionBigTextPlusView setCaptionStylePreference:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e176e0

// -[SCCaptionBigTextPlusView _updateCaptionStyleColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e176e8

// -[SCCaptionBigTextPlusView _updateCaptionStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e17e68

// -[SCCaptionBigTextPlusView _needUpdateColor]
// Type encoding: B16@0:8
// Implementation: 0x108e17ea8

// -[SCCaptionBigTextPlusView _setTextTransform]
// Type encoding: v16@0:8
// Implementation: 0x108e17f24

// -[SCCaptionBigTextPlusView _setTextBackground]
// Type encoding: v16@0:8
// Implementation: 0x108e1828c

// -[SCCaptionBigTextPlusView _setFontBorderWithTextIsEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e18390

// -[SCCaptionBigTextPlusView _setShadows]
// Type encoding: v16@0:8
// Implementation: 0x108e1865c

// -[SCCaptionBigTextPlusView _removeAllShadows]
// Type encoding: v16@0:8
// Implementation: 0x108e18938

// -[SCCaptionBigTextPlusView _createTextView]
// Type encoding: @16@0:8
// Implementation: 0x108e18a8c

// -[SCCaptionBigTextPlusView _manipulateCaptionTextViewsWithActionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e18d00

// -[SCCaptionBigTextPlusView _setFontColor]
// Type encoding: v16@0:8
// Implementation: 0x108e18ea0

// -[SCCaptionBigTextPlusView _shouldShowCaptionStyleOptions]
// Type encoding: B16@0:8
// Implementation: 0x108e19030

// -[SCCaptionBigTextPlusView _patternImageForGradientColors:colorStops:colorGradientAngleDegree:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x108e190f8

// -[SCCaptionBigTextPlusView removePromptTextIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108e192b0

// -[SCCaptionBigTextPlusView shareLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e19304

// -[SCCaptionBigTextPlusView state]
// Type encoding: @16@0:8
// Implementation: 0x108e19438

// -[SCCaptionBigTextPlusView alignableTouchControlView]
// Type encoding: @16@0:8
// Implementation: 0x108e19900

// -[SCCaptionBigTextPlusView alignableContentRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e19928

// -[SCCaptionBigTextPlusView shouldProcessGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e19a00

// -[SCCaptionBigTextPlusView updateAnchorState:withGestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e19b90

// -[SCCaptionBigTextPlusView deletableView]
// Type encoding: @16@0:8
// Implementation: 0x108e19c64

// -[SCCaptionBigTextPlusView trackableView]
// Type encoding: @16@0:8
// Implementation: 0x108e19ca4

// -[SCCaptionBigTextPlusView isTracking]
// Type encoding: B16@0:8
// Implementation: 0x108e19ccc

// -[SCCaptionBigTextPlusView isTimed]
// Type encoding: B16@0:8
// Implementation: 0x108e19cd4

// -[SCCaptionBigTextPlusView trackingTrajectoryState]
// Type encoding: @16@0:8
// Implementation: 0x108e19d18

// -[SCCaptionBigTextPlusView durationEnabledState]
// Type encoding: @16@0:8
// Implementation: 0x108e19d74

// -[SCCaptionBigTextPlusView durationEnabledToolType]
// Type encoding: Q16@0:8
// Implementation: 0x108e19df8

// -[SCCaptionBigTextPlusView isSelfResizing]
// Type encoding: B16@0:8
// Implementation: 0x108e19e00

// -[SCCaptionBigTextPlusView uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108e19e08

// -[SCCaptionBigTextPlusView setUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e19e10

// -[SCCaptionBigTextPlusView playbackLayerId]
// Type encoding: I16@0:8
// Implementation: 0x108e19e18

// -[SCCaptionBigTextPlusView setPlaybackLayerId:]
// Type encoding: v20@0:8I16
// Implementation: 0x108e19e20

// -[SCCaptionBigTextPlusView userTaggingStartIndex]
// Type encoding: q16@0:8
// Implementation: 0x108e19e28

// -[SCCaptionBigTextPlusView setUserTaggingStartIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e19e30

// -[SCCaptionBigTextPlusView editCapabilities]
// Type encoding: @16@0:8
// Implementation: 0x108e19e38

// -[SCCaptionBigTextPlusView setEditCapabilities:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19e40

// -[SCCaptionBigTextPlusView generatedMagicCaptionText]
// Type encoding: @16@0:8
// Implementation: 0x108e19e48

// -[SCCaptionBigTextPlusView setGeneratedMagicCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19e50

// -[SCCaptionBigTextPlusView hasPromptText]
// Type encoding: B16@0:8
// Implementation: 0x108e19e58

// -[SCCaptionBigTextPlusView killSwitchProvider]
// Type encoding: @16@0:8
// Implementation: 0x108e19e60

// -[SCCaptionBigTextPlusView superviewBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e19e78

// -[SCCaptionBigTextPlusView setSuperviewBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e19e84

// -[SCCaptionBigTextPlusView superviewContentBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e19e90

// -[SCCaptionBigTextPlusView setSuperviewContentBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e19e9c

// -[SCCaptionBigTextPlusView containerView]
// Type encoding: @16@0:8
// Implementation: 0x108e19ea8

// -[SCCaptionBigTextPlusView setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19eb0

// -[SCCaptionBigTextPlusView setTextContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19ee0

// -[SCCaptionBigTextPlusView captionCarouselContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108e19f10

// -[SCCaptionBigTextPlusView setCaptionCarouselContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19f18

// -[SCCaptionBigTextPlusView textScrollView]
// Type encoding: @16@0:8
// Implementation: 0x108e19f48

// -[SCCaptionBigTextPlusView setTextScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19f50

// -[SCCaptionBigTextPlusView textView]
// Type encoding: @16@0:8
// Implementation: 0x108e19f80

// -[SCCaptionBigTextPlusView setTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e19f88

// -[SCCaptionBigTextPlusView editing]
// Type encoding: B16@0:8
// Implementation: 0x108e19fb8

// -[SCCaptionBigTextPlusView lastTranslationX]
// Type encoding: d16@0:8
// Implementation: 0x108e19fc0

// -[SCCaptionBigTextPlusView setLastTranslationX:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e19fc8

// -[SCCaptionBigTextPlusView lastTranslationY]
// Type encoding: d16@0:8
// Implementation: 0x108e19fd0

// -[SCCaptionBigTextPlusView setLastTranslationY:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e19fd8

// -[SCCaptionBigTextPlusView lastRotation]
// Type encoding: d16@0:8
// Implementation: 0x108e19fe0

// -[SCCaptionBigTextPlusView setLastRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e19fe8

// -[SCCaptionBigTextPlusView lastScale]
// Type encoding: d16@0:8
// Implementation: 0x108e19ff0

// -[SCCaptionBigTextPlusView setLastScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e19ff8

// -[SCCaptionBigTextPlusView lastEditingScale]
// Type encoding: d16@0:8
// Implementation: 0x108e1a000

// -[SCCaptionBigTextPlusView setLastEditingScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a008

// -[SCCaptionBigTextPlusView lastPreviewScale]
// Type encoding: d16@0:8
// Implementation: 0x108e1a010

// -[SCCaptionBigTextPlusView setLastPreviewScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a018

// -[SCCaptionBigTextPlusView fontSize]
// Type encoding: d16@0:8
// Implementation: 0x108e1a020

// -[SCCaptionBigTextPlusView setFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a028

// -[SCCaptionBigTextPlusView editingFontSize]
// Type encoding: d16@0:8
// Implementation: 0x108e1a030

// -[SCCaptionBigTextPlusView setEditingFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a038

// -[SCCaptionBigTextPlusView fontSizeMultiplier]
// Type encoding: d16@0:8
// Implementation: 0x108e1a040

// -[SCCaptionBigTextPlusView setFontSizeMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a048

// -[SCCaptionBigTextPlusView keyboardHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e1a050

// -[SCCaptionBigTextPlusView setKeyboardHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a058

// -[SCCaptionBigTextPlusView lineFragmentPadding]
// Type encoding: d16@0:8
// Implementation: 0x108e1a060

// -[SCCaptionBigTextPlusView setLineFragmentPadding:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1a068

// -[SCCaptionBigTextPlusView colorChanged]
// Type encoding: B16@0:8
// Implementation: 0x108e1a070

// -[SCCaptionBigTextPlusView setColorChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1a078

// -[SCCaptionBigTextPlusView manuallyScaled]
// Type encoding: B16@0:8
// Implementation: 0x108e1a080

// -[SCCaptionBigTextPlusView setManuallyScaled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1a088

// -[SCCaptionBigTextPlusView isLagunaMedia]
// Type encoding: B16@0:8
// Implementation: 0x108e1a090

// -[SCCaptionBigTextPlusView setIsLagunaMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1a098

// -[SCCaptionBigTextPlusView originalContentBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1a0a0

// -[SCCaptionBigTextPlusView setOriginalContentBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e1a0ac

// -[SCCaptionBigTextPlusView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e1a0b8

@end
