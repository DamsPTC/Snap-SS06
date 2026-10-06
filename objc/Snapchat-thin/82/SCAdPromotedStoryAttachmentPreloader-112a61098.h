// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPromotedStoryAttachmentPreloader
// Superclass: NSObject
// Address: 0x112a61098

@interface SCAdPromotedStoryAttachmentPreloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPromotedStoryAttachmentPreloader initWithConfigProvider:attachmentPreloader:grapheneRegistry:notificationPool:mainQueuePerformer:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105764ebc

// -[SCAdPromotedStoryAttachmentPreloader _isPlayableAttachmentPreloadingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105765088

// -[SCAdPromotedStoryAttachmentPreloader preloadPromotedTileCtaAttachment:tileVisibility:tilePosition:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057650d0

// -[SCAdPromotedStoryAttachmentPreloader _buildAttachmentDataModel:cacheKey:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105765394

// -[SCAdPromotedStoryAttachmentPreloader _onPreloadAttachment:cacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057657f8

// -[SCAdPromotedStoryAttachmentPreloader _doOnPreloadSuccess:cacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105765a90

// -[SCAdPromotedStoryAttachmentPreloader _logPreloadError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105765b6c

// -[SCAdPromotedStoryAttachmentPreloader _showNotificationWithTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105765bf4

// -[SCAdPromotedStoryAttachmentPreloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105765c54

@end
