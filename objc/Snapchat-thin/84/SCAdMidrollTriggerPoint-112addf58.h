// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdMidrollTriggerPoint
// Superclass: NSObject
// Address: 0x112addf58

@interface SCAdMidrollTriggerPoint

// Property: identifier; attributes: T@"NSString",R,C,N,V_identifier
// Property: triggeringRadius; attributes: T{SCAdMidrollTriggeringRadius=dd},R,N,V_triggeringRadius
// Property: index; attributes: Tq,R,N,V_index
// Property: delegate; attributes: T@"<SCAdMidrollTriggerPointTriggering>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdMidrollTriggerPoint initWithTriggeringRadius:identifier:index:isDynamicInsertionTriggerPoint:adConfigProvider:]
// Type encoding: @60@0:8{SCAdMidrollTriggeringRadius=dd}16@32q40B48@52
// Implementation: 0x1063fdb38

// -[SCAdMidrollTriggerPoint shouldTriggerForPlaybackInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063fdc10

// -[SCAdMidrollTriggerPoint willTriggerForPlaybackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063fdef4

// -[SCAdMidrollTriggerPoint didTriggerForPlaybackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063fdef8

// -[SCAdMidrollTriggerPoint triggerPointID]
// Type encoding: @16@0:8
// Implementation: 0x1063fdefc

// -[SCAdMidrollTriggerPoint updateTriggerPointList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063fdf24

// -[SCAdMidrollTriggerPoint updateIsNoFill:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063fe06c

// -[SCAdMidrollTriggerPoint _closestTriggerPointPriorToTimestamp:]
// Type encoding: @24@0:8d16
// Implementation: 0x1063fe074

// -[SCAdMidrollTriggerPoint _closestTriggerPointNextToTimestamp:]
// Type encoding: @24@0:8d16
// Implementation: 0x1063fe154

// -[SCAdMidrollTriggerPoint identifier]
// Type encoding: @16@0:8
// Implementation: 0x1063fe2b0

// -[SCAdMidrollTriggerPoint triggeringRadius]
// Type encoding: {SCAdMidrollTriggeringRadius=dd}16@0:8
// Implementation: 0x1063fe2b8

// -[SCAdMidrollTriggerPoint index]
// Type encoding: q16@0:8
// Implementation: 0x1063fe2c0

// -[SCAdMidrollTriggerPoint delegate]
// Type encoding: @16@0:8
// Implementation: 0x1063fe2c8

// -[SCAdMidrollTriggerPoint setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063fe2e0

// -[SCAdMidrollTriggerPoint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063fe2ec

@end
