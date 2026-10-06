// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionStateUtils
// Superclass: NSObject
// Address: 0x112bc40e8

@interface SCCaptionStateUtils

// Property: text; attributes: T@"NSString",C,N,V_text
// Property: attributedText; attributes: T@"NSAttributedString",C,N,V_attributedText
// Property: displayingFontSize; attributes: Td,N,V_displayingFontSize
// Property: editingFontSize; attributes: Td,N,V_editingFontSize
// Property: centerX; attributes: Td,N,V_centerX
// Property: centerY; attributes: Td,N,V_centerY
// Property: rotation; attributes: Td,N,V_rotation
// Property: relativeSize; attributes: T{CGSize=dd},N,V_relativeSize
// Property: hidden; attributes: TB,N,V_hidden
// Property: editing; attributes: TB,N,V_editing
// Property: keyboardHeight; attributes: Td,N,V_keyboardHeight
// Property: isTracking; attributes: TB,N,V_isTracking
// Property: alignment; attributes: Tq,N,V_alignment
// Property: source; attributes: Tq,N,V_source
// Property: trackingTrajectory; attributes: T@"NSArray",C,N,V_trackingTrajectory
// Property: captionStyle; attributes: T@"SCDynamicCaptionStyle",&,N,V_captionStyle
// Property: appliedStyle; attributes: T@"SCDynamicUnlockablesCaptionStyle",&,N,V_appliedStyle
// Property: pickedColor; attributes: T@"UIColor",C,N,V_pickedColor
// Property: lastTextTransform; attributes: Tq,N,V_lastTextTransform
// Property: uniqueId; attributes: Tq,N,V_uniqueId
// Property: playbackLayerId; attributes: TI,N,V_playbackLayerId
// Property: taggedUsers; attributes: T@"NSDictionary",C,N,V_taggedUsers
// Property: topics; attributes: T@"NSArray",C,N,V_topics
// Property: userTaggingStartIndex; attributes: Tq,N,V_userTaggingStartIndex
// Property: taggedTextBounds; attributes: T@"NSDictionary",C,N,V_taggedTextBounds
// Property: isTimed; attributes: TB,N,V_isTimed
// Property: stylePreference; attributes: Tq,N,V_stylePreference
// Property: hasDismissedPollsSuggestions; attributes: TB,N,V_hasDismissedPollsSuggestions
// Property: editCapabilities; attributes: T@"SDMEditCapabilities",C,N,V_editCapabilities
// Property: generatedMagicCaptionText; attributes: T@"NSString",C,N,V_generatedMagicCaptionText
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptionStateUtils init]
// Type encoding: @16@0:8
// Implementation: 0x108e3f0dc

// -[SCCaptionStateUtils copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e3f1b4

// -[SCCaptionStateUtils isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e3f420

// -[SCCaptionStateUtils hash]
// Type encoding: Q16@0:8
// Implementation: 0x108e3f654

// -[SCCaptionStateUtils isClassicStyle]
// Type encoding: B16@0:8
// Implementation: 0x108e3f65c

// -[SCCaptionStateUtils isClassicStyleApplied]
// Type encoding: B16@0:8
// Implementation: 0x108e3f6c4

// -[SCCaptionStateUtils stylePreference]
// Type encoding: q16@0:8
// Implementation: 0x108e3f70c

// -[SCCaptionStateUtils setStylePreference:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f714

// -[SCCaptionStateUtils attributedText]
// Type encoding: @16@0:8
// Implementation: 0x108e3f71c

// -[SCCaptionStateUtils setAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f724

// -[SCCaptionStateUtils centerX]
// Type encoding: d16@0:8
// Implementation: 0x108e3f72c

// -[SCCaptionStateUtils setCenterX:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f734

// -[SCCaptionStateUtils centerY]
// Type encoding: d16@0:8
// Implementation: 0x108e3f73c

// -[SCCaptionStateUtils setCenterY:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f744

// -[SCCaptionStateUtils displayingFontSize]
// Type encoding: d16@0:8
// Implementation: 0x108e3f74c

// -[SCCaptionStateUtils setDisplayingFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f754

// -[SCCaptionStateUtils editing]
// Type encoding: B16@0:8
// Implementation: 0x108e3f75c

// -[SCCaptionStateUtils setEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e3f764

// -[SCCaptionStateUtils editingFontSize]
// Type encoding: d16@0:8
// Implementation: 0x108e3f76c

// -[SCCaptionStateUtils setEditingFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f774

// -[SCCaptionStateUtils hidden]
// Type encoding: B16@0:8
// Implementation: 0x108e3f77c

// -[SCCaptionStateUtils setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e3f784

// -[SCCaptionStateUtils isTracking]
// Type encoding: B16@0:8
// Implementation: 0x108e3f78c

// -[SCCaptionStateUtils setIsTracking:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e3f794

// -[SCCaptionStateUtils keyboardHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e3f79c

// -[SCCaptionStateUtils setKeyboardHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f7a4

// -[SCCaptionStateUtils relativeSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e3f7ac

// -[SCCaptionStateUtils setRelativeSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108e3f7b4

// -[SCCaptionStateUtils rotation]
// Type encoding: d16@0:8
// Implementation: 0x108e3f7bc

// -[SCCaptionStateUtils setRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e3f7c4

// -[SCCaptionStateUtils text]
// Type encoding: @16@0:8
// Implementation: 0x108e3f7cc

// -[SCCaptionStateUtils setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f7d4

// -[SCCaptionStateUtils alignment]
// Type encoding: q16@0:8
// Implementation: 0x108e3f7dc

// -[SCCaptionStateUtils setAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f7e4

// -[SCCaptionStateUtils captionStyle]
// Type encoding: @16@0:8
// Implementation: 0x108e3f7ec

// -[SCCaptionStateUtils setCaptionStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f7f4

// -[SCCaptionStateUtils appliedStyle]
// Type encoding: @16@0:8
// Implementation: 0x108e3f824

// -[SCCaptionStateUtils setAppliedStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f82c

// -[SCCaptionStateUtils lastTextTransform]
// Type encoding: q16@0:8
// Implementation: 0x108e3f85c

// -[SCCaptionStateUtils setLastTextTransform:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f864

// -[SCCaptionStateUtils pickedColor]
// Type encoding: @16@0:8
// Implementation: 0x108e3f86c

// -[SCCaptionStateUtils setPickedColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f874

// -[SCCaptionStateUtils source]
// Type encoding: q16@0:8
// Implementation: 0x108e3f87c

// -[SCCaptionStateUtils setSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f884

// -[SCCaptionStateUtils taggedUsers]
// Type encoding: @16@0:8
// Implementation: 0x108e3f88c

// -[SCCaptionStateUtils setTaggedUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f894

// -[SCCaptionStateUtils topics]
// Type encoding: @16@0:8
// Implementation: 0x108e3f89c

// -[SCCaptionStateUtils setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f8a4

// -[SCCaptionStateUtils trackingTrajectory]
// Type encoding: @16@0:8
// Implementation: 0x108e3f8ac

// -[SCCaptionStateUtils setTrackingTrajectory:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f8b4

// -[SCCaptionStateUtils uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108e3f8bc

// -[SCCaptionStateUtils setUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f8c4

// -[SCCaptionStateUtils playbackLayerId]
// Type encoding: I16@0:8
// Implementation: 0x108e3f8cc

// -[SCCaptionStateUtils setPlaybackLayerId:]
// Type encoding: v20@0:8I16
// Implementation: 0x108e3f8d4

// -[SCCaptionStateUtils userTaggingStartIndex]
// Type encoding: q16@0:8
// Implementation: 0x108e3f8dc

// -[SCCaptionStateUtils setUserTaggingStartIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e3f8e4

// -[SCCaptionStateUtils isTimed]
// Type encoding: B16@0:8
// Implementation: 0x108e3f8ec

// -[SCCaptionStateUtils setIsTimed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e3f8f4

// -[SCCaptionStateUtils taggedTextBounds]
// Type encoding: @16@0:8
// Implementation: 0x108e3f8fc

// -[SCCaptionStateUtils setTaggedTextBounds:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f904

// -[SCCaptionStateUtils hasDismissedPollsSuggestions]
// Type encoding: B16@0:8
// Implementation: 0x108e3f90c

// -[SCCaptionStateUtils setHasDismissedPollsSuggestions:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e3f914

// -[SCCaptionStateUtils editCapabilities]
// Type encoding: @16@0:8
// Implementation: 0x108e3f91c

// -[SCCaptionStateUtils setEditCapabilities:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f924

// -[SCCaptionStateUtils generatedMagicCaptionText]
// Type encoding: @16@0:8
// Implementation: 0x108e3f92c

// -[SCCaptionStateUtils setGeneratedMagicCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e3f934

// -[SCCaptionStateUtils .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e3f93c

// +[SCCaptionStateUtils stateWithStyle:text:hidden:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108e3f318

// +[SCCaptionStateUtils stateWithStyle:source:text:hidden:]
// Type encoding: @44@0:8@16q24@32B40
// Implementation: 0x108e3f3d8

@end
