// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductImpressionTracker
// Superclass: NSObject
// Address: 0x112b38bd8

@interface SCCommerceProductImpressionTracker

// Property: productIdToImpressionViewItemMap; attributes: T@"NSMutableDictionary",&,N,V_productIdToImpressionViewItemMap
// Property: productIdToImpressionViewItemHistoryMap; attributes: T@"NSMutableDictionary",&,N,V_productIdToImpressionViewItemHistoryMap
// Property: impressionPerformer; attributes: T@"<SCPerforming>",&,N,V_impressionPerformer

// -[SCCommerceProductImpressionTracker initWithEventLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d788dc

// -[SCCommerceProductImpressionTracker updateTrackingImpressionWithViewSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d789ec

// -[SCCommerceProductImpressionTracker startTrackingImpressionWithViewItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d78b2c

// -[SCCommerceProductImpressionTracker endTrackingImpressionWithViewItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d78c38

// -[SCCommerceProductImpressionTracker convertImpressionWithViewItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d78d7c

// -[SCCommerceProductImpressionTracker _constructNewViewItemsMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d78e88

// -[SCCommerceProductImpressionTracker _updateImpressionDictionaryWithSnapshot:endTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d79038

// -[SCCommerceProductImpressionTracker _addViewItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7917c

// -[SCCommerceProductImpressionTracker _removeViewItem:endTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d792d0

// -[SCCommerceProductImpressionTracker _flushImpressionEventForItemIds:endTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d79324

// -[SCCommerceProductImpressionTracker _flushImpressionForItemId:endTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d7943c

// -[SCCommerceProductImpressionTracker _convertImpressionWithViewItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d795e0

// -[SCCommerceProductImpressionTracker productIdToImpressionViewItemMap]
// Type encoding: @16@0:8
// Implementation: 0x106d79778

// -[SCCommerceProductImpressionTracker setProductIdToImpressionViewItemMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d79780

// -[SCCommerceProductImpressionTracker productIdToImpressionViewItemHistoryMap]
// Type encoding: @16@0:8
// Implementation: 0x106d797b0

// -[SCCommerceProductImpressionTracker setProductIdToImpressionViewItemHistoryMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d797b8

// -[SCCommerceProductImpressionTracker impressionPerformer]
// Type encoding: @16@0:8
// Implementation: 0x106d797e8

// -[SCCommerceProductImpressionTracker setImpressionPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d797f0

// -[SCCommerceProductImpressionTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d79820

@end
