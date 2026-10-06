// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitCreativeKitLiteDeepLinkRequestParser
// Superclass: NSObject
// Address: 0x112ae84f8

@interface SCSnapKitCreativeKitLiteDeepLinkRequestParser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser initWithNetworkServices:circumstanceEngine:blizzardLogger:metricsReporter:pasteboardService:sessionId:userAdIdProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1065d3224

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser parseDeepLinkURL:pasteboardItems:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1065d33f0

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _continueParsingDeepLinkURL:success:failure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1065d36ec

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser isContentValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065d393c

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _handleDeepLinkingForVersion:deepLinkURL:subFeature:success:failure:]
// Type encoding: v56@0:8q16@24@32@?40@?48
// Implementation: 0x1065d39f8

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _handleV1SDKLessPreviewWithDeepLinkURL:subFeature:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1065d3ad8

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _verifyDeepLinkURL:subFeature:failure:successCompletion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1065d46b4

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _parsingFailure:withError:errorMessage:]
// Type encoding: v40@0:8@?16Q24@32
// Implementation: 0x1065d4adc

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _parsingFailure:withServerError:httpStatusCode:errorMessage:]
// Type encoding: v48@0:8@?16Q24q32@40
// Implementation: 0x1065d4b70

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _lensStateWithLensID:launchData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065d4c18

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _lensStateWithLensUUID:launchData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065d4c88

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _appStickerStateWithAppDisplayName:attachmentUrl:clientID:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065d4cf8

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldFetchPasteboardAsync]
// Type encoding: B16@0:8
// Implementation: 0x1065d4e84

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldShareToPreview:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065d4e9c

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _buildCreativeKitMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065d4f3c

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldAllowAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065d5268

// -[SCSnapKitCreativeKitLiteDeepLinkRequestParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065d5308

@end
