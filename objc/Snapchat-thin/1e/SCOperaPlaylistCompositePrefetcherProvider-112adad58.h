// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistCompositePrefetcherProvider
// Superclass: NSObject
// Address: 0x112adad58

@interface SCOperaPlaylistCompositePrefetcherProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaylistCompositePrefetcherProvider initWithPrefetchProviders:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062f15fc

// -[SCOperaPlaylistCompositePrefetcherProvider prefetchRequestFromPlaylistItem:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1062f1670

// -[SCOperaPlaylistCompositePrefetcherProvider startPrefetchForPlaylistItem:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1062f17e4

// -[SCOperaPlaylistCompositePrefetcherProvider prefetchRequestForPlaylistItem:requestImportance:trigger:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1062f1950

// -[SCOperaPlaylistCompositePrefetcherProvider generatePrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: v72@0:8@16@24@32@40Q48@?56@64
// Implementation: 0x1062f1ab4

// -[SCOperaPlaylistCompositePrefetcherProvider generateSnapDocPrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: v72@0:8@16@24@32@40Q48@?56@64
// Implementation: 0x1062f1cb0

// -[SCOperaPlaylistCompositePrefetcherProvider generateHLSPrefetchRequestForForGroup:requestImportance:trigger:completion:completionQueue:]
// Type encoding: v56@0:8@16q24q32@?40@48
// Implementation: 0x1062f1eac

// -[SCOperaPlaylistCompositePrefetcherProvider startPrefetchForGroupId:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: @64@0:8@16@24@32Q40@?48@56
// Implementation: 0x1062f2028

// -[SCOperaPlaylistCompositePrefetcherProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062f21e8

@end
