// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStandardExternalShareActionRouter
// Superclass: NSObject
// Address: 0x112b01548

@interface SCStandardExternalShareActionRouter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStandardExternalShareActionRouter initWithUiContainer:eventSubject:snapSavingService:notificationPool:performerProvider:temporaryFileWriter:inviteService:circumstanceEngine:textConfiguration:delegate:crashLogger:shareSource:pageLauncher:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96q104@112
// Implementation: 0x10683c19c

// -[SCStandardExternalShareActionRouter presentTextOnlyForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10683c690

// -[SCStandardExternalShareActionRouter presentSingleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10683c850

// -[SCStandardExternalShareActionRouter _presentSingleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10683c910

// -[SCStandardExternalShareActionRouter presentMultipleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10683cb14

// -[SCStandardExternalShareActionRouter _presentMultipleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10683cbd4

// -[SCStandardExternalShareActionRouter _handleCopyLinkShare:shareDestination:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10683cdc0

// -[SCStandardExternalShareActionRouter _handleTextOrMediaShareForSystemShareSheet:mediaConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10683d3a8

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForFacebook:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683e154

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForWhatsApp:phoneNumber:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10683e354

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForMessenger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683e594

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForTwitter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683e7a0

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForLine:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683e9ac

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForTelegram:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683ebb8

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForViber:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683edc4

// -[SCStandardExternalShareActionRouter _handleLinkShareForLinktree:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683efd0

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForSMS:phoneNumber:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10683f32c

// -[SCStandardExternalShareActionRouter _handleShareWithSystemShareForDestination:excludedActivityTypes:localizedAppName:mediaConfiguration:textConfiguration:lensLoggingInfo:]
// Type encoding: v64@0:8q16@24@32@40@48@56
// Implementation: 0x10683f33c

// -[SCStandardExternalShareActionRouter _handleSingleMediaShareForCopy:textConfiguration:shareDestination:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106840628

// -[SCStandardExternalShareActionRouter _handleMultipleMediaShareForCopy:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106840f78

// -[SCStandardExternalShareActionRouter _handleSingleMediaShareForInstagramStories:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106841008

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForInstagramDirect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106841678

// -[SCStandardExternalShareActionRouter _handleTextOnlyShareForSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068418c8

// -[SCStandardExternalShareActionRouter _handleSingleMediaShareForInstagramFeed:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106841d08

// -[SCStandardExternalShareActionRouter _handleMultipleMediaShareForInstagramStoriesAndFeed:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106842628

// -[SCStandardExternalShareActionRouter _handleTextOrMediaShareForDiscord:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106842724

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForWhatsApp:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10684286c

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForLine:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106842968

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTelegram:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106842a64

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForViber:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106842b60

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForSMS:textConfiguration:phoneNumber:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106842c5c

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleShareForSMS:textConfiguration:phoneNumber:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106842c60

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTikTok:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068438d0

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTwitter:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106843bf4

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForMessenger:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106843d94

// -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForFacebook:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106843f38

// -[SCStandardExternalShareActionRouter _saveToCameraRollWithMedia:textConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068440dc

// -[SCStandardExternalShareActionRouter _showDropdownForSavedToCameraRoll]
// Type encoding: v16@0:8
// Implementation: 0x106844c88

// -[SCStandardExternalShareActionRouter presentShareFailureFeedback]
// Type encoding: v16@0:8
// Implementation: 0x106844d20

// -[SCStandardExternalShareActionRouter _showDropdownForSomethingWentWrong]
// Type encoding: v16@0:8
// Implementation: 0x106844df4

// -[SCStandardExternalShareActionRouter _showDropdownForLinkCopied]
// Type encoding: v16@0:8
// Implementation: 0x106844e8c

// -[SCStandardExternalShareActionRouter _showDropdownForUnableToOpenApplication]
// Type encoding: v16@0:8
// Implementation: 0x106844f24

// -[SCStandardExternalShareActionRouter messageComposeViewController:didFinishWithResult:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106844fb0

// -[SCStandardExternalShareActionRouter _handleShareDestinationByDelegate:textConfiguration:mediaConfiguration:]
// Type encoding: B40@0:8q16@24@32
// Implementation: 0x1068451bc

// -[SCStandardExternalShareActionRouter _openURLOptionallyAndEmitCompletedEventsWithTextConfiguration:mediaConfiguration:destination:openURL:shortLinkURL:exportSucceeded:exportStartTimestamp:exportCompleteTimestamp:destinationRoutingCookie:]
// Type encoding: v84@0:8@16@24q32@40@48B56@60@68Q76
// Implementation: 0x106845400

// -[SCStandardExternalShareActionRouter _openURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106845af8

// -[SCStandardExternalShareActionRouter _imageCountFromMedia:]
// Type encoding: q24@0:8@16
// Implementation: 0x106845c5c

// -[SCStandardExternalShareActionRouter _videoCountFromMedia:]
// Type encoding: q24@0:8@16
// Implementation: 0x106845e2c

// -[SCStandardExternalShareActionRouter _detachUI]
// Type encoding: v16@0:8
// Implementation: 0x106845ffc

// -[SCStandardExternalShareActionRouter _attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068460dc

// -[SCStandardExternalShareActionRouter _allActivityTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068461ec

// -[SCStandardExternalShareActionRouter _hardLinkFromURL:toURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068463b4

// -[SCStandardExternalShareActionRouter _writeImageToTempDirectory:filename:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106846524

// -[SCStandardExternalShareActionRouter _logExportNonFatalError:destination:contentType:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106846604

// -[SCStandardExternalShareActionRouter _textConfigurationURLForTextConfiguration:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106846710

// -[SCStandardExternalShareActionRouter _textConfigurationTitleForTextConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106846840

// -[SCStandardExternalShareActionRouter _generateShortLinkURLWithTextConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068468bc

// -[SCStandardExternalShareActionRouter _updateShortLinkURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106846a48

// -[SCStandardExternalShareActionRouter _getShortLinkURLWithTextConfiguration:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106846b90

// -[SCStandardExternalShareActionRouter _logExternalAppOpenOutcome:destination:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106846e38

// -[SCStandardExternalShareActionRouter _logExternalShareOutcome:destination:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106846ea0

// -[SCStandardExternalShareActionRouter _logFailedShareMediaSaveOutcome:contentType:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106846ebc

// -[SCStandardExternalShareActionRouter didSendSnap]
// Type encoding: v16@0:8
// Implementation: 0x106846ec8

// -[SCStandardExternalShareActionRouter didSaveSnap]
// Type encoding: v16@0:8
// Implementation: 0x106846fb0

// -[SCStandardExternalShareActionRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106846fb4

@end
