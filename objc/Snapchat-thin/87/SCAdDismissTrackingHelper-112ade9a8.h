// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDismissTrackingHelper
// Superclass: NSObject
// Address: 0x112ade9a8

@interface SCAdDismissTrackingHelper

// Property: itemBeginDismissTimestamp; attributes: Td,N,V_itemBeginDismissTimestamp
// Property: itemCancelDismissTimestamp; attributes: Td,N,V_itemCancelDismissTimestamp
// Property: itemTotalDismissDuration; attributes: Td,N,V_itemTotalDismissDuration
// Property: totalTimeItemUnviewedSeconds; attributes: Td,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdDismissTrackingHelper init]
// Type encoding: @16@0:8
// Implementation: 0x106441838

// -[SCAdDismissTrackingHelper itemDismissStarted:]
// Type encoding: v24@0:8d16
// Implementation: 0x106441878

// -[SCAdDismissTrackingHelper itemDismissCancelled:]
// Type encoding: v24@0:8d16
// Implementation: 0x106441888

// -[SCAdDismissTrackingHelper totalTimeItemUnviewedSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1064418a8

// -[SCAdDismissTrackingHelper reset]
// Type encoding: v16@0:8
// Implementation: 0x106441900

// -[SCAdDismissTrackingHelper itemBeginDismissTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106441910

// -[SCAdDismissTrackingHelper setItemBeginDismissTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106441918

// -[SCAdDismissTrackingHelper itemCancelDismissTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106441920

// -[SCAdDismissTrackingHelper setItemCancelDismissTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106441928

// -[SCAdDismissTrackingHelper itemTotalDismissDuration]
// Type encoding: d16@0:8
// Implementation: 0x106441930

// -[SCAdDismissTrackingHelper setItemTotalDismissDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x106441938

@end
