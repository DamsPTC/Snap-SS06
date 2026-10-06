// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2CardsDataProvider
// Superclass: NSObject
// Address: 0x112ae0d48

@interface SCContextV2CardsDataProvider

// Property: placeholderCards; attributes: T@"SnapContextPlaceholderCards",&,N,V_placeholderCards
// Property: delegate; attributes: T@"<SCContextV2CardsDataProviderDelegate>",W,N,V_delegate

// -[SCContextV2CardsDataProvider initWithLogger:cardsDataFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106483e64

// -[SCContextV2CardsDataProvider loadCardsWithSessionParams:source:onRetry:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106483f08

// -[SCContextV2CardsDataProvider loadCardsWithSessionParams:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106484314

// -[SCContextV2CardsDataProvider setPlaceholderCards:]
// Type encoding: v24@0:8@16
// Implementation: 0x106484424

// -[SCContextV2CardsDataProvider _logMenuPresentWithResult:source:content:onRetry:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x1064844a0

// -[SCContextV2CardsDataProvider placeholderCards]
// Type encoding: @16@0:8
// Implementation: 0x106484568

// -[SCContextV2CardsDataProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x106484570

// -[SCContextV2CardsDataProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106484588

// -[SCContextV2CardsDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106484594

// +[SCContextV2CardsDataProvider maybeHasRemoteCardsDataForInfoProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x106484498

@end
