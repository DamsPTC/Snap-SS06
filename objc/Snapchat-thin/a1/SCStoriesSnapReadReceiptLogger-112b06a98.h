// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapReadReceiptLogger
// Superclass: NSObject
// Address: 0x112b06a98

@interface SCStoriesSnapReadReceiptLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesSnapReadReceiptLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x106925244

// -[SCStoriesSnapReadReceiptLogger initWithUserTrackedLogger:metricsLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069252b0

// -[SCStoriesSnapReadReceiptLogger logErrorFetchExpiredSnapWithStoryType:]
// Type encoding: v24@0:8@16
// Implementation: 0x106925354

// -[SCStoriesSnapReadReceiptLogger logFetchedViewReportsResponse:emptyResponse:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106925364

// -[SCStoriesSnapReadReceiptLogger logViewStatesNotReadyWhenProvidingMetadataType:]
// Type encoding: v24@0:8@16
// Implementation: 0x106925398

// -[SCStoriesSnapReadReceiptLogger logViewStatesUpdatedWithType:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069253a8

// -[SCStoriesSnapReadReceiptLogger logReadReceiptSavedWithExpirationSource:storyType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069253b8

// -[SCStoriesSnapReadReceiptLogger logReadReceiptsPrunedWithStateType:count:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1069253cc

// -[SCStoriesSnapReadReceiptLogger logReadReceiptEnqueueToEndpoint:decision:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069253dc

// -[SCStoriesSnapReadReceiptLogger logReadReceiptUploadResultToEndpoint:result:count:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1069253ec

// -[SCStoriesSnapReadReceiptLogger logReadReceiptPostUploadToEndpoint:result:count:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106925400

// -[SCStoriesSnapReadReceiptLogger logReadReceiciptsUploadToEndpoint:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106925414

// -[SCStoriesSnapReadReceiptLogger logReadReceiptNetworkEventWithSnapId:outcome:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106925bd0

// -[SCStoriesSnapReadReceiptLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106925c6c

@end
