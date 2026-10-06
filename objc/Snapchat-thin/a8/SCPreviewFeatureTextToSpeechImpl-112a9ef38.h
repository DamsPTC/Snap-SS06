// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureTextToSpeechImpl
// Superclass: NSObject
// Address: 0x112a9ef38

@interface SCPreviewFeatureTextToSpeechImpl

// Property: textToSpeechEnabled; attributes: TB,R,N
// Property: currentTtsData; attributes: T@"NSData",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureTextToSpeechImpl initWithPreviewConfiguration:snapEditor:videoPlayback:textToSpeechServices:featureSettingsService:snapDocEditor:legacySnapEditor:audioEffectsMixingConfigProvider:temporaryFileWriter:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105dbc780

// -[SCPreviewFeatureTextToSpeechImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105dbc970

// -[SCPreviewFeatureTextToSpeechImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dbcb60

// -[SCPreviewFeatureTextToSpeechImpl textToSpeechEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105dbcbf4

// -[SCPreviewFeatureTextToSpeechImpl canShowTextToSpeechUIForCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dbcc3c

// -[SCPreviewFeatureTextToSpeechImpl currentTtsData]
// Type encoding: @16@0:8
// Implementation: 0x105dbcdb4

// -[SCPreviewFeatureTextToSpeechImpl textToSpeechExistsForCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dbcddc

// -[SCPreviewFeatureTextToSpeechImpl textToSpeechPreviewExistsForCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dbce68

// -[SCPreviewFeatureTextToSpeechImpl removeTextToSpeechForCaption:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dbcef4

// -[SCPreviewFeatureTextToSpeechImpl requestTextToSpeechForCaption:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dbd208

// -[SCPreviewFeatureTextToSpeechImpl requestTextToSpeechPreviewForCaption:startOffsetMs:completion:]
// Type encoding: v56@0:8@16{?=qiIq}24@?48
// Implementation: 0x105dbd454

// -[SCPreviewFeatureTextToSpeechImpl commitTextToSpeechPreviewForCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dbd6b0

// -[SCPreviewFeatureTextToSpeechImpl removeTextToSpeechPreview]
// Type encoding: v16@0:8
// Implementation: 0x105dbd730

// -[SCPreviewFeatureTextToSpeechImpl updateTextToSpeechPreviewStartOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105dbd77c

// -[SCPreviewFeatureTextToSpeechImpl generateTextToSpeechPreviewForCaption:startOffset:completion:]
// Type encoding: v56@0:8@16{?=qiIq}24@?48
// Implementation: 0x105dbd7f4

// -[SCPreviewFeatureTextToSpeechImpl shouldIgnoreSnapdocUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dbda04

// -[SCPreviewFeatureTextToSpeechImpl _captionIsOnSnapdocGlobalSegment:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dbda60

// -[SCPreviewFeatureTextToSpeechImpl _ttsRequestCompletedWithError:caption:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105dbdb4c

// -[SCPreviewFeatureTextToSpeechImpl _updateMultiSnapStateWithAudioData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dbdd80

// -[SCPreviewFeatureTextToSpeechImpl _showErrorDialogForCaption:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dbdff8

// -[SCPreviewFeatureTextToSpeechImpl _showPermissionsDialogForCaptionIfNeeded:isPreview:startOffsetMs:completion:]
// Type encoding: B60@0:8@16B24{?=qiIq}28@?52
// Implementation: 0x105dbe250

// -[SCPreviewFeatureTextToSpeechImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105dbe72c

// -[SCPreviewFeatureTextToSpeechImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dbe744

// -[SCPreviewFeatureTextToSpeechImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dbe750

@end
