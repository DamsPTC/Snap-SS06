// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerFeedLogger
// Superclass: NSObject
// Address: 0x112b14878

@interface SCLensExplorerFeedLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerFeedLogger initWithPerformer:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b01168

// -[SCLensExplorerFeedLogger logEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b0120c

// -[SCLensExplorerFeedLogger _logEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b01374

// -[SCLensExplorerFeedLogger _logFeedItemCriticalActionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b014a0

// -[SCLensExplorerFeedLogger _logFeedItemImpressionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b01584

// -[SCLensExplorerFeedLogger _logFeedItemMRCLongImpressionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b01608

// -[SCLensExplorerFeedLogger _logFeedItemLongImpressionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b016e8

// -[SCLensExplorerFeedLogger _logPageOpenWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b017c8

// -[SCLensExplorerFeedLogger _logPageViewWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b018ac

// -[SCLensExplorerFeedLogger _logButtonActionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b0198c

// -[SCLensExplorerFeedLogger _fillPageBaseFieldsForEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b01ab8

// -[SCLensExplorerFeedLogger _fillFeedItemBaseFieldsForEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b01c0c

// -[SCLensExplorerFeedLogger blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x106b01fe0

// -[SCLensExplorerFeedLogger _removeNullsFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b01fe8

// -[SCLensExplorerFeedLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b02104

@end
