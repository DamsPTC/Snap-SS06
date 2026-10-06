// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitCreativeKitDeepLinkRequestParser
// Superclass: NSObject
// Address: 0x112ae84a8

@interface SCSnapKitCreativeKitDeepLinkRequestParser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapKitCreativeKitDeepLinkRequestParser initWithNetworkServices:circumstanceEngine:userPreferences:blizzardLogger:metricsReporter:pasteboardService:sessionId:userAdIdProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1065cfc0c

// -[SCSnapKitCreativeKitDeepLinkRequestParser parseDeepLinkURL:pasteboardItems:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1065cfe14

// -[SCSnapKitCreativeKitDeepLinkRequestParser isContentValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065d0268

// -[SCSnapKitCreativeKitDeepLinkRequestParser _startHandlingMetadata:deepLinkURL:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1065d0324

// -[SCSnapKitCreativeKitDeepLinkRequestParser _startLoadingContentWithMetadata:deepLinkURL:encryptionKey:encryptionIv:requiresIdentityWebView:success:failure:]
// Type encoding: v68@0:8@16@24@32@40B48@?52@?60
// Implementation: 0x1065d0e54

// -[SCSnapKitCreativeKitDeepLinkRequestParser _startLoadingContentWithMetadata:payload:deepLinkURL:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x1065d1cb4

// -[SCSnapKitCreativeKitDeepLinkRequestParser _parsingFailure:redirectUrl:withClientError:errorMsg:]
// Type encoding: v48@0:8@?16@24Q32@40
// Implementation: 0x1065d2a40

// -[SCSnapKitCreativeKitDeepLinkRequestParser _snapKitStickerWithData:stickerMetadata:style:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065d2af0

// -[SCSnapKitCreativeKitDeepLinkRequestParser _snapKitStickerWithAppDisplayName:attachmentUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065d2bd4

// -[SCSnapKitCreativeKitDeepLinkRequestParser _lensStateWithLensID:launchData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065d2d50

// -[SCSnapKitCreativeKitDeepLinkRequestParser _lensStateWithLensUUID:launchData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065d2dc0

// -[SCSnapKitCreativeKitDeepLinkRequestParser _shouldStripAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065d2e30

// -[SCSnapKitCreativeKitDeepLinkRequestParser _buildCreativeKitMetadata:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065d2ed0

// -[SCSnapKitCreativeKitDeepLinkRequestParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065d3170

@end
