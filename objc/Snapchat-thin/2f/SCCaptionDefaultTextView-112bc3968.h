// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionDefaultTextView
// Superclass: NSObject
// Address: 0x112bc3968

@interface SCCaptionDefaultTextView

// Property: containerView; attributes: T@"SCCaptionControlledView",&,N,V_containerView
// Property: editing; attributes: TB,N,GisEditing,V_editing
// Property: lastVertical; attributes: Td,N,V_lastVertical
// Property: textView; attributes: T@"SCPreviewCaptionTextView",&,N,V_textView
// Property: keyboardHeight; attributes: Td,N,V_keyboardHeight
// Property: superviewBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_superviewBounds
// Property: superviewContentBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_superviewContentBounds
// Property: killSwitchProvider; attributes: T@"<SCCreativeToolsKillSwitchProviding>",W,N,V_killSwitchProvider
// Property: editingDelegate; attributes: T@"<SCCaptionEditingDelegate>",W,N,V_editingDelegate
// Property: edgeMargins; attributes: T{UIEdgeInsets=dddd},N,V_edgeMargins
// Property: uniqueId; attributes: Tq,N,VuniqueId
// Property: playbackLayerId; attributes: TI,N,VplaybackLayerId
// Property: hasPromptText; attributes: TB,R,N,V_hasPromptText
// Property: userTaggingStartIndex; attributes: Tq,N,V_userTaggingStartIndex
// Property: editCapabilities; attributes: T@"SDMEditCapabilities",C,N,V_editCapabilities
// Property: generatedMagicCaptionText; attributes: T@"NSString",C,N,V_generatedMagicCaptionText
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptionDefaultTextView setKillSwitchProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1a294

// -[SCCaptionDefaultTextView initWithState:editingDelegate:resourceDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:]
// Type encoding: @240@0:8@16@24@32B40B44{CGAffineTransform=dddddd}48{CGRect={CGPoint=dd}{CGSize=dd}}96@128{CGRect={CGPoint=dd}{CGSize=dd}}136{CGRect={CGPoint=dd}{CGSize=dd}}168{UIEdgeInsets=dddd}200B232B236
// Implementation: 0x108e1a304

// -[SCCaptionDefaultTextView initWithState:editingDelegate:backgroundImage:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:]
// Type encoding: @240@0:8@16@24@32B40B44{CGAffineTransform=dddddd}48{CGRect={CGPoint=dd}{CGSize=dd}}96@128{CGRect={CGPoint=dd}{CGSize=dd}}136{CGRect={CGPoint=dd}{CGSize=dd}}168{UIEdgeInsets=dddd}200B232B236
// Implementation: 0x108e1a540

// -[SCCaptionDefaultTextView alignment]
// Type encoding: q16@0:8
// Implementation: 0x108e1a5ac

// -[SCCaptionDefaultTextView setEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1a5b4

// -[SCCaptionDefaultTextView setAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1a638

// -[SCCaptionDefaultTextView _setAlignment]
// Type encoding: v16@0:8
// Implementation: 0x108e1a640

// -[SCCaptionDefaultTextView initializeViewsWithState:shouldKeepStyles:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108e1a688

// -[SCCaptionDefaultTextView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108e1b04c

// -[SCCaptionDefaultTextView _setTextTransformWithLastTransform:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1b090

// -[SCCaptionDefaultTextView updateAnchor:rotation:scale:]
// Type encoding: v48@0:8{CGPoint=dd}16d32d40
// Implementation: 0x108e1b1fc

// -[SCCaptionDefaultTextView tearDownAndRemoveFromSuperview]
// Type encoding: v16@0:8
// Implementation: 0x108e1b204

// -[SCCaptionDefaultTextView view]
// Type encoding: @16@0:8
// Implementation: 0x108e1b290

// -[SCCaptionDefaultTextView _configureTextViewBasedOnEditMode]
// Type encoding: v16@0:8
// Implementation: 0x108e1b294

// -[SCCaptionDefaultTextView addObservers]
// Type encoding: v16@0:8
// Implementation: 0x108e1b2ec

// -[SCCaptionDefaultTextView removeObservers]
// Type encoding: v16@0:8
// Implementation: 0x108e1b344

// -[SCCaptionDefaultTextView inputKeyboardWillChangeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1b394

// -[SCCaptionDefaultTextView editingTextView]
// Type encoding: @16@0:8
// Implementation: 0x108e1b88c

// -[SCCaptionDefaultTextView isHidden]
// Type encoding: B16@0:8
// Implementation: 0x108e1b890

// -[SCCaptionDefaultTextView text]
// Type encoding: @16@0:8
// Implementation: 0x108e1b8cc

// -[SCCaptionDefaultTextView captionStyle]
// Type encoding: @16@0:8
// Implementation: 0x108e1b910

// -[SCCaptionDefaultTextView searchableNameForFriendFiltering]
// Type encoding: @16@0:8
// Implementation: 0x108e1b938

// -[SCCaptionDefaultTextView usernamesForTagging]
// Type encoding: @16@0:8
// Implementation: 0x108e1bc74

// -[SCCaptionDefaultTextView topicsInCaption]
// Type encoding: @16@0:8
// Implementation: 0x108e1bcbc

// -[SCCaptionDefaultTextView taggedUsers]
// Type encoding: @16@0:8
// Implementation: 0x108e1bd04

// -[SCCaptionDefaultTextView addTaggedUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1bd1c

// -[SCCaptionDefaultTextView addTaggedUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1be74

// -[SCCaptionDefaultTextView hasTaggedUsers]
// Type encoding: B16@0:8
// Implementation: 0x108e1bf78

// -[SCCaptionDefaultTextView setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1bfbc

// -[SCCaptionDefaultTextView isFullscreen]
// Type encoding: B16@0:8
// Implementation: 0x108e1bfec

// -[SCCaptionDefaultTextView captionPresent]
// Type encoding: B16@0:8
// Implementation: 0x108e1bff4

// -[SCCaptionDefaultTextView textContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108e1c084

// -[SCCaptionDefaultTextView textSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e1c0ac

// -[SCCaptionDefaultTextView _getCombinedTaggedItemsDictionary]
// Type encoding: @16@0:8
// Implementation: 0x108e1c0f8

// -[SCCaptionDefaultTextView _removeTagFromCaptionIfNeededForText:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x108e1c148

// -[SCCaptionDefaultTextView _replaceTextWithFormattedTag:updateDictionaryHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e1c224

// -[SCCaptionDefaultTextView setCaptionDismissedPollsSuggestion]
// Type encoding: v16@0:8
// Implementation: 0x108e1c5f0

// -[SCCaptionDefaultTextView setCaptionStylePreference:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1c604

// -[SCCaptionDefaultTextView setUserInteractionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1c60c

// -[SCCaptionDefaultTextView setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1c68c

// -[SCCaptionDefaultTextView setTextFromTagging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1c6c4

// -[SCCaptionDefaultTextView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1c7b8

// -[SCCaptionDefaultTextView setPromptText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1c8c0

// -[SCCaptionDefaultTextView setCaptionStyle:appliedStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e1c9b0

// -[SCCaptionDefaultTextView maxTextWidth]
// Type encoding: q16@0:8
// Implementation: 0x108e1cb84

// -[SCCaptionDefaultTextView contentWidth]
// Type encoding: q16@0:8
// Implementation: 0x108e1cba8

// -[SCCaptionDefaultTextView contentMargin]
// Type encoding: q16@0:8
// Implementation: 0x108e1cc08

// -[SCCaptionDefaultTextView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1cc58

// -[SCCaptionDefaultTextView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x108e1ce04

// -[SCCaptionDefaultTextView textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1d140

// -[SCCaptionDefaultTextView textViewDidChangeSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1d2d4

// -[SCCaptionDefaultTextView textPasteConfigurationSupporting:transformPasteItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e1d4c0

// -[SCCaptionDefaultTextView stopTagging]
// Type encoding: v16@0:8
// Implementation: 0x108e1d668

// -[SCCaptionDefaultTextView startEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1d700

// -[SCCaptionDefaultTextView stopEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1d7a8

// -[SCCaptionDefaultTextView prepareToStartEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e1d880

// -[SCCaptionDefaultTextView didStartEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1d8c4

// -[SCCaptionDefaultTextView prepareToStopEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e1d910

// -[SCCaptionDefaultTextView didStopEditingAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e1d978

// -[SCCaptionDefaultTextView removePromptTextIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108e1da58

// -[SCCaptionDefaultTextView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1daac

// -[SCCaptionDefaultTextView pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1dc08

// -[SCCaptionDefaultTextView pinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1dd7c

// -[SCCaptionDefaultTextView rotation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1dd80

// -[SCCaptionDefaultTextView textFrameContainsGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e1dd84

// -[SCCaptionDefaultTextView colorChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1de88

// -[SCCaptionDefaultTextView pickedColor]
// Type encoding: @16@0:8
// Implementation: 0x108e1df00

// -[SCCaptionDefaultTextView setCaptionExitSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1df28

// -[SCCaptionDefaultTextView captionExitSource]
// Type encoding: q16@0:8
// Implementation: 0x108e1df30

// -[SCCaptionDefaultTextView attributedText]
// Type encoding: @16@0:8
// Implementation: 0x108e1df38

// -[SCCaptionDefaultTextView adjustedYOffsetForContentBounds:textViewHeight:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x108e1df7c

// -[SCCaptionDefaultTextView _textContainerViewFrameForAnimation]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1dfd0

// -[SCCaptionDefaultTextView _textViewFrameForAnimation]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1e120

// -[SCCaptionDefaultTextView _captionCarouselContainerViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1e148

// -[SCCaptionDefaultTextView textContainerViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1e210

// -[SCCaptionDefaultTextView textViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1e3b4

// -[SCCaptionDefaultTextView _updateLastVerticalWithY:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1e454

// -[SCCaptionDefaultTextView _resetLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e1e4a0

// -[SCCaptionDefaultTextView resizeForEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e1e4dc

// -[SCCaptionDefaultTextView _notifyEditingLayoutDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108e1e528

// -[SCCaptionDefaultTextView viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:]
// Type encoding: v112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48{UIEdgeInsets=dddd}80
// Implementation: 0x108e1e5b4

// -[SCCaptionDefaultTextView isPinningSupported]
// Type encoding: B16@0:8
// Implementation: 0x108e1e770

// -[SCCaptionDefaultTextView _adjustAnimationsSpeedForView:withSpeed:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108e1e778

// -[SCCaptionDefaultTextView _adjustKeyboardAnimationSpeed:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e1e9fc

// -[SCCaptionDefaultTextView shareLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e1ebb4

// -[SCCaptionDefaultTextView state]
// Type encoding: @16@0:8
// Implementation: 0x108e1ecb4

// -[SCCaptionDefaultTextView alignableTouchControlView]
// Type encoding: @16@0:8
// Implementation: 0x108e1f0a8

// -[SCCaptionDefaultTextView alignableContentRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1f0b0

// -[SCCaptionDefaultTextView shouldProcessGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e1f0b4

// -[SCCaptionDefaultTextView updateAnchorState:withGestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e1f0c4

// -[SCCaptionDefaultTextView deletableView]
// Type encoding: @16@0:8
// Implementation: 0x108e1f0c8

// -[SCCaptionDefaultTextView trackableView]
// Type encoding: @16@0:8
// Implementation: 0x108e1f108

// -[SCCaptionDefaultTextView isTracking]
// Type encoding: B16@0:8
// Implementation: 0x108e1f130

// -[SCCaptionDefaultTextView isTimed]
// Type encoding: B16@0:8
// Implementation: 0x108e1f138

// -[SCCaptionDefaultTextView trackingTrajectoryState]
// Type encoding: @16@0:8
// Implementation: 0x108e1f17c

// -[SCCaptionDefaultTextView durationEnabledState]
// Type encoding: @16@0:8
// Implementation: 0x108e1f1d8

// -[SCCaptionDefaultTextView durationEnabledToolType]
// Type encoding: Q16@0:8
// Implementation: 0x108e1f25c

// -[SCCaptionDefaultTextView isSelfResizing]
// Type encoding: B16@0:8
// Implementation: 0x108e1f264

// -[SCCaptionDefaultTextView uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108e1f26c

// -[SCCaptionDefaultTextView setUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1f274

// -[SCCaptionDefaultTextView playbackLayerId]
// Type encoding: I16@0:8
// Implementation: 0x108e1f27c

// -[SCCaptionDefaultTextView setPlaybackLayerId:]
// Type encoding: v20@0:8I16
// Implementation: 0x108e1f284

// -[SCCaptionDefaultTextView userTaggingStartIndex]
// Type encoding: q16@0:8
// Implementation: 0x108e1f28c

// -[SCCaptionDefaultTextView setUserTaggingStartIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e1f294

// -[SCCaptionDefaultTextView editCapabilities]
// Type encoding: @16@0:8
// Implementation: 0x108e1f29c

// -[SCCaptionDefaultTextView setEditCapabilities:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1f2a4

// -[SCCaptionDefaultTextView generatedMagicCaptionText]
// Type encoding: @16@0:8
// Implementation: 0x108e1f2ac

// -[SCCaptionDefaultTextView setGeneratedMagicCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1f2b4

// -[SCCaptionDefaultTextView hasPromptText]
// Type encoding: B16@0:8
// Implementation: 0x108e1f2bc

// -[SCCaptionDefaultTextView killSwitchProvider]
// Type encoding: @16@0:8
// Implementation: 0x108e1f2c4

// -[SCCaptionDefaultTextView editingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108e1f2dc

// -[SCCaptionDefaultTextView setEditingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1f2f4

// -[SCCaptionDefaultTextView edgeMargins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108e1f300

// -[SCCaptionDefaultTextView setEdgeMargins:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x108e1f30c

// -[SCCaptionDefaultTextView containerView]
// Type encoding: @16@0:8
// Implementation: 0x108e1f318

// -[SCCaptionDefaultTextView setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1f320

// -[SCCaptionDefaultTextView isEditing]
// Type encoding: B16@0:8
// Implementation: 0x108e1f350

// -[SCCaptionDefaultTextView lastVertical]
// Type encoding: d16@0:8
// Implementation: 0x108e1f358

// -[SCCaptionDefaultTextView setLastVertical:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1f360

// -[SCCaptionDefaultTextView textView]
// Type encoding: @16@0:8
// Implementation: 0x108e1f368

// -[SCCaptionDefaultTextView setTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e1f370

// -[SCCaptionDefaultTextView keyboardHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e1f3a0

// -[SCCaptionDefaultTextView setKeyboardHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e1f3a8

// -[SCCaptionDefaultTextView superviewBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1f3b0

// -[SCCaptionDefaultTextView setSuperviewBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e1f3bc

// -[SCCaptionDefaultTextView superviewContentBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e1f3c8

// -[SCCaptionDefaultTextView setSuperviewContentBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e1f3d4

// -[SCCaptionDefaultTextView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e1f3e0

@end
