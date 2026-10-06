// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdAppInstallSession
// Superclass: NSObject
// Address: 0x112add148

@interface SCAdAppInstallSession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaController; attributes: T@"<SCOperaControlling>",W,N,V_operaController
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",W,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdAppInstallSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:attachmentPreloader:applicationPreferences:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10639e894

// -[SCAdAppInstallSession setOperaController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e9b8

// -[SCAdAppInstallSession setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e9c4

// -[SCAdAppInstallSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10639e9d0

// -[SCAdAppInstallSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10639ea90

// -[SCAdAppInstallSession _preloadStoreProductIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10639ec84

// -[SCAdAppInstallSession _preloadStoreProductForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x10639eef0

// -[SCAdAppInstallSession _preloadStoreProductForAdMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x10639efc0

// -[SCAdAppInstallSession _preloadStoreProductForItemUah:]
// Type encoding: B24@0:8@16
// Implementation: 0x10639f064

// -[SCAdAppInstallSession _preloadAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639f238

// -[SCAdAppInstallSession _prefetchIfNextGroupIsAd]
// Type encoding: v16@0:8
// Implementation: 0x10639f36c

// -[SCAdAppInstallSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x10639f49c

// -[SCAdAppInstallSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639f4b4

// -[SCAdAppInstallSession operaController]
// Type encoding: @16@0:8
// Implementation: 0x10639f4c0

// -[SCAdAppInstallSession eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10639f4d8

// -[SCAdAppInstallSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10639f4f0

@end
