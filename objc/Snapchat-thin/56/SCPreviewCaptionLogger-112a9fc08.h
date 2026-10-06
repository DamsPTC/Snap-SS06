// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCaptionLogger
// Superclass: NSObject
// Address: 0x112a9fc08

@interface SCPreviewCaptionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewCaptionLogger initWithBlizzardServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x105de8ef0

// -[SCPreviewCaptionLogger setCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de8ff0

// -[SCPreviewCaptionLogger logCaptionAdded]
// Type encoding: v16@0:8
// Implementation: 0x105de9020

// -[SCPreviewCaptionLogger logCaptionRemoved]
// Type encoding: v16@0:8
// Implementation: 0x105de9030

// -[SCPreviewCaptionLogger logCaptionCarouselStyleItemTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de9040

// -[SCPreviewCaptionLogger logCaptionCarouselUserTaggingItemTapped]
// Type encoding: v16@0:8
// Implementation: 0x105de9048

// -[SCPreviewCaptionLogger logUserTaggingFromTextInput]
// Type encoding: v16@0:8
// Implementation: 0x105de9058

// -[SCPreviewCaptionLogger logUserTaggingFromButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105de9068

// -[SCPreviewCaptionLogger logUserTaggingFromSticker]
// Type encoding: v16@0:8
// Implementation: 0x105de9078

// -[SCPreviewCaptionLogger logCaptionEditingActionFromLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de9088

// -[SCPreviewCaptionLogger updateCaptionMetricsInSnapCommonLoggingParams:captionStyleLoggingParams:magicCaptionLoggingParams:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105de9320

// -[SCPreviewCaptionLogger getCaptionPerformanceSessions]
// Type encoding: @16@0:8
// Implementation: 0x105de9528

// -[SCPreviewCaptionLogger logCaptionStylesExpected:captionStylesFailed:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105de9550

// -[SCPreviewCaptionLogger logStartedTyping]
// Type encoding: v16@0:8
// Implementation: 0x105de9598

// -[SCPreviewCaptionLogger logCaptionCanEnterText]
// Type encoding: v16@0:8
// Implementation: 0x105de95e4

// -[SCPreviewCaptionLogger logCaptionPickerOpenedWithOpenAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105de9630

// -[SCPreviewCaptionLogger logCaptionPickerClosedWithExitSource:captionAdded:captionDeleted:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x105de9728

// -[SCPreviewCaptionLogger logCaptionDeletedFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de98a8

// -[SCPreviewCaptionLogger logCaptionShowedFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de98ac

// -[SCPreviewCaptionLogger logCaptionFilterIdWasSelected:itemPosition:hasBackground:captionStyle:]
// Type encoding: v44@0:8@16Q24B32@36
// Implementation: 0x105de98f0

// -[SCPreviewCaptionLogger logCaptionCarouselPollPromptTap]
// Type encoding: v16@0:8
// Implementation: 0x105de997c

// -[SCPreviewCaptionLogger logCaptionCarouseQuestionPromptTap]
// Type encoding: v16@0:8
// Implementation: 0x105de9988

// -[SCPreviewCaptionLogger logCaptionCarouselExitPromptTap]
// Type encoding: v16@0:8
// Implementation: 0x105de9994

// -[SCPreviewCaptionLogger logCaptionStickerSuggestionItemTappedWithStickerId:stickerType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de99a0

// -[SCPreviewCaptionLogger _logCaptionPickerItemViewedWithExitAction:captionDeleted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105de9ab8

// -[SCPreviewCaptionLogger _logCaptionPickerItemPicked]
// Type encoding: v16@0:8
// Implementation: 0x105de9c98

// -[SCPreviewCaptionLogger _logCaptionDeletedWithFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de9dfc

// -[SCPreviewCaptionLogger _exitActionFromExitSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x105de9ea0

// -[SCPreviewCaptionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105de9f8c

// +[SCPreviewCaptionLogger _wasCaptionNew:]
// Type encoding: B24@0:8q16
// Implementation: 0x105de9ecc

// +[SCPreviewCaptionLogger actionFromString:]
// Type encoding: q24@0:8@16
// Implementation: 0x105de9edc

@end
