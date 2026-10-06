// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPublisherRequestManager
// Superclass: NSObject
// Address: 0x112adddc8

@interface SCAdPublisherRequestManager

// Property: dataSourceTarget; attributes: T@"<SCAdPublisherDataSourceAdapter>",R,W,N,V_dataSourceTarget
// Property: config; attributes: T@"SCAdPublisherRequestConfigValue",R,N,V_config
// Property: adRequestClientIdToAdSlot; attributes: T@"NSMutableDictionary",R,V_adRequestClientIdToAdSlot

// -[SCAdPublisherRequestManager initWithPublisherDataSource:config:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f267c

// -[SCAdPublisherRequestManager queueAdRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f2734

// -[SCAdPublisherRequestManager registerAdRequestResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f28a8

// -[SCAdPublisherRequestManager registerViewedAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f28d4

// -[SCAdPublisherRequestManager registerRemovedAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f2900

// -[SCAdPublisherRequestManager _updateAdSlotRequestStatus:adRequestClientId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1063f292c

// -[SCAdPublisherRequestManager _updateAdSlotViewStatus:adRequestClientId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1063f2a0c

// -[SCAdPublisherRequestManager _sortedAdSlots]
// Type encoding: @16@0:8
// Implementation: 0x1063f2aec

// -[SCAdPublisherRequestManager _balanceBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1063f2bd0

// -[SCAdPublisherRequestManager _lastUserViewedAdSlotIdx]
// Type encoding: Q16@0:8
// Implementation: 0x1063f2d18

// -[SCAdPublisherRequestManager _dispatchMediaRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f2e0c

// -[SCAdPublisherRequestManager _dispatchAdRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f3060

// -[SCAdPublisherRequestManager dataSourceTarget]
// Type encoding: @16@0:8
// Implementation: 0x1063f32bc

// -[SCAdPublisherRequestManager config]
// Type encoding: @16@0:8
// Implementation: 0x1063f32d4

// -[SCAdPublisherRequestManager adRequestClientIdToAdSlot]
// Type encoding: @16@0:8
// Implementation: 0x1063f32dc

// -[SCAdPublisherRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063f32e8

// +[SCAdPublisherRequestManager requestManagerWithPublisherDataSource:config:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f2614

@end
