// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocConfigurer
// Superclass: NSObject
// Address: 0x112b73d28

@interface SCSnapDocConfigurer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocConfigurer initWithUserSession:circumstanceEngine:snapDocMediaResolver:snapDocParser:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adRenderDataParser:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x107b928e0

// -[SCSnapDocConfigurer isFullSnapDoc:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b92bbc

// -[SCSnapDocConfigurer fullSnapDocForRequestSnapDoc:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b92c44

// -[SCSnapDocConfigurer fullSnapDocForRequestSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b92da8

// -[SCSnapDocConfigurer queryPlaybackMediaStatusForSnapDoc:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b92fb0

// -[SCSnapDocConfigurer queryPlaybackMediaStatusForSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b9315c

// -[SCSnapDocConfigurer fetchMediaDataForSnapDoc:editionId:publisherId:completionQueue:trigger:completion:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x107b932ec

// -[SCSnapDocConfigurer prefetchMediaDataForSnapDoc:editionId:publisherId:completionQueue:trigger:completion:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x107b9353c

// -[SCSnapDocConfigurer cancelQueuedRequestForSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b93740

// -[SCSnapDocConfigurer operaPagePropertiesForSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b938ac

// -[SCSnapDocConfigurer cleanCaches:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b93940

// -[SCSnapDocConfigurer _updateWithError:fullSnapDocDataModel:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107b93990

// -[SCSnapDocConfigurer _prefetchSnapDocContentManagerMediaResourcesForFullSnapDoc:completionQueue:trigger:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x107b93ad0

// -[SCSnapDocConfigurer _fetchSnapDocContentManagerMediaResourcesForFullSnapDoc:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b93e04

// -[SCSnapDocConfigurer _addCancellableRequest:snapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b941dc

// -[SCSnapDocConfigurer _updateCancellableRequest:forIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b94374

// -[SCSnapDocConfigurer _cancelCancellableRequestForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b943dc

// -[SCSnapDocConfigurer _removeCancellableRequestForSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b94454

// -[SCSnapDocConfigurer _removeCancellableRequestForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b945c0

// -[SCSnapDocConfigurer _queryPlaybackMediaStatusForSnapDoc:isAsynchronous:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x107b94604

// -[SCSnapDocConfigurer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b94834

// +[SCSnapDocConfigurer convertToSnapDocV3:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b93938

@end
