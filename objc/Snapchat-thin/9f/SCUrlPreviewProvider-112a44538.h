// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUrlPreviewProvider
// Superclass: NSObject
// Address: 0x112a44538

@interface SCUrlPreviewProvider


// -[SCUrlPreviewProvider initWithUrlPreviewFetcher:urlPreviewRepository:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055322a8

// -[SCUrlPreviewProvider doesUrlPreviewNeedRefresh:]
// Type encoding: B24@0:8@16
// Implementation: 0x105532374

// -[SCUrlPreviewProvider fetchPreviewForUrl:senderUserId:observationQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055323fc

// -[SCUrlPreviewProvider _handleUrlPreviewFetchResponse:url:error:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105532644

// -[SCUrlPreviewProvider _fetchPreviewForUrl:senderUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105532dbc

// -[SCUrlPreviewProvider _logMetricForFetchWithResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055330c4

// -[SCUrlPreviewProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055332f4

@end
