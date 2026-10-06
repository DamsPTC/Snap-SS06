// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCountdownsDeepLinkProcessor
// Superclass: NSObject
// Address: 0x1129ff848

@interface SCCountdownsDeepLinkProcessor

// Property: identifier; attributes: T@"NSString",R
// Property: priority; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCountdownsDeepLinkProcessor initWithNavigationDelegate:countdownsServices:circumstanceEngine:snapchattersDataFetcher:userId:userInfoServices:navigationServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104e0b718

// -[SCCountdownsDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x104e0b8a8

// -[SCCountdownsDeepLinkProcessor _modalContainer]
// Type encoding: @16@0:8
// Implementation: 0x104e0ba50

// -[SCCountdownsDeepLinkProcessor _processDeeplinkDelegateEventsWithError:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e0bac0

// -[SCCountdownsDeepLinkProcessor _fetchSnapchatterDataDelegate:continuation:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e0bb64

// -[SCCountdownsDeepLinkProcessor _handleListPageForCountdownURL:additionalInfo:delegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104e0bd24

// -[SCCountdownsDeepLinkProcessor _continueListPageWithSnapchatter:error:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e0bd90

// -[SCCountdownsDeepLinkProcessor _handleCreatePageForCountdownURL:additionalInfo:delegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104e0bea0

// -[SCCountdownsDeepLinkProcessor _continueCreatePageWithSnapchatter:error:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e0bf0c

// -[SCCountdownsDeepLinkProcessor _handleDetailsPageForCountdownURL:additionalInfo:delegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104e0c01c

// -[SCCountdownsDeepLinkProcessor _continueDetailsPageWithSnapchatter:error:countdownURL:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104e0c168

// -[SCCountdownsDeepLinkProcessor identifier]
// Type encoding: @16@0:8
// Implementation: 0x104e0c2d8

// -[SCCountdownsDeepLinkProcessor priority]
// Type encoding: q16@0:8
// Implementation: 0x104e0c2ec

// -[SCCountdownsDeepLinkProcessor canProvideProcessorForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e0c2f4

// -[SCCountdownsDeepLinkProcessor isValidDeepLink:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e0c308

// -[SCCountdownsDeepLinkProcessor makeDeepLinkProcessor]
// Type encoding: @16@0:8
// Implementation: 0x104e0c354

// -[SCCountdownsDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e0c358

// -[SCCountdownsDeepLinkProcessor shouldForceNavigation]
// Type encoding: B16@0:8
// Implementation: 0x104e0c418

// -[SCCountdownsDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e0c420

// -[SCCountdownsDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e0c424

// +[SCCountdownsDeepLinkProcessor _emptySnapchatterError]
// Type encoding: @16@0:8
// Implementation: 0x104e0ba10

// +[SCCountdownsDeepLinkProcessor _emptyCountdownIdError]
// Type encoding: @16@0:8
// Implementation: 0x104e0ba30

@end
