// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionUtils
// Superclass: NSObject
// Address: 0x112bc3aa8

@interface SCCaptionUtils


// +[SCCaptionUtils attributedStringFromSOJUGalleryCaption:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e24698

// +[SCCaptionUtils getColorArrayFromDynamicCaptionTextColor:pickedColor:colorIsChangeable:baseColor:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x108e24fdc

// +[SCCaptionUtils colorTransform:tranformParameters:baseColor:pickedColor:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108e251e0

// +[SCCaptionUtils gradientImageFromColors:colorStops:colorGradientAngleDegree:imageSize:drawingRects:]
// Type encoding: @64@0:8@16@24d32{CGSize=dd}40@56
// Implementation: 0x108e255a0

// +[SCCaptionUtils captionPresent:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e27178

// +[SCCaptionUtils removeTaggedItemAndUpdateDictionaryIfNecessary:textView:range:replacementTextLength:useFirstNameForTagging:]
// Type encoding: v60@0:8@16@24{_NSRange=QQ}32q48B56
// Implementation: 0x108e2720c

// +[SCCaptionUtils addTaggedItemToDictionary:taggedItem:textLengthDiff:insertIndex:textLength:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x108e27a04

// +[SCCaptionUtils findPreviousTaggingPositionFromPosition:text:taggedItemsDictionary:]
// Type encoding: q40@0:8q16@24@32
// Implementation: 0x108e27c48

// +[SCCaptionUtils deleteAndModifyTaggingForEditingCaption:currentTaggingIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108e27e40

// +[SCCaptionUtils appliedStyleFromCaptionStyle:captionStylePreference:shouldDefaultToAltStyle:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x108e28068

// +[SCCaptionUtils findNextAppliedStyleFromCaption:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e2812c

// +[SCCaptionUtils isDynamicUnlockablesCaptionStyleTypeOfClassic:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e28234

@end
