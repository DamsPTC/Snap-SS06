// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDeepLinkSession
// Superclass: NSObject
// Address: 0x112add238

@interface SCAdDeepLinkSession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaController; attributes: T@"<SCOperaControlling>",W,N,V_operaController
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",W,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdDeepLinkSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:attachmentPreloader:applicationPreferences:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1063a0b28

// -[SCAdDeepLinkSession setOperaController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a0c4c

// -[SCAdDeepLinkSession setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a0c58

// -[SCAdDeepLinkSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063a0c64

// -[SCAdDeepLinkSession _preloadStoreProductIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063a0d24

// -[SCAdDeepLinkSession _preloadStoreProductForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063a0ed0

// -[SCAdDeepLinkSession _preloadStoreProductForItemUah:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063a1048

// -[SCAdDeepLinkSession _preloadAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a1218

// -[SCAdDeepLinkSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063a134c

// -[SCAdDeepLinkSession _prefetchIfNextGroupIsAd]
// Type encoding: v16@0:8
// Implementation: 0x1063a1400

// -[SCAdDeepLinkSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063a1530

// -[SCAdDeepLinkSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a1548

// -[SCAdDeepLinkSession operaController]
// Type encoding: @16@0:8
// Implementation: 0x1063a1554

// -[SCAdDeepLinkSession eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x1063a156c

// -[SCAdDeepLinkSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063a1584

@end
