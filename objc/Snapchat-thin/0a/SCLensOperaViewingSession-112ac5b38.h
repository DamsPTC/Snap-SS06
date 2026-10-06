// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensOperaViewingSession
// Superclass: NSObject
// Address: 0x112ac5b38

@interface SCLensOperaViewingSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensOperaViewingSession initWithLens:lensLogger:userTrackedLogger:skAdNetworkMetricsManager:skStoreProductPrefetcher:adConfigProvider:timeProvider:mainQueuePerformer:processOperaViewEvents:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64@72B80
// Implementation: 0x1060d7af0

// -[SCLensOperaViewingSession openAttachment]
// Type encoding: v16@0:8
// Implementation: 0x1060d7cdc

// -[SCLensOperaViewingSession closeAttachment]
// Type encoding: v16@0:8
// Implementation: 0x1060d7d78

// -[SCLensOperaViewingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1060d7db8

// -[SCLensOperaViewingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060d8038

// -[SCLensOperaViewingSession _logSKAdClickMetricsWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d83d0

// -[SCLensOperaViewingSession _onStoreViewClosed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d8768

// -[SCLensOperaViewingSession _logGeofilterAttachmentView:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060d88c0

// -[SCLensOperaViewingSession _trackUnlockableAttachmentView]
// Type encoding: v16@0:8
// Implementation: 0x1060d8bf4

// -[SCLensOperaViewingSession _fireMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1060d8dcc

// -[SCLensOperaViewingSession _fetchProductPrefetchStatusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060d8e94

// -[SCLensOperaViewingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d90a4

// -[SCLensOperaViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060d90a8

@end
