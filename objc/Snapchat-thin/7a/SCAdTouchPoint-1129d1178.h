// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTouchPoint
// Superclass: NSObject
// Address: 0x1129d1178

@interface SCAdTouchPoint

// Property: startPoint; attributes: T{CGPoint=dd},R,N
// Property: startLocationXToScreenWidthRatio; attributes: Td,R,N
// Property: startLocationYToScreenHeightRatio; attributes: Td,R,N
// Property: endPoint; attributes: T@"NSValue",R,C,N
// Property: endLocationXToScreenWidthRatio; attributes: T@"NSNumber",R,C,N
// Property: endLocationYToScreenHeightRatio; attributes: T@"NSNumber",R,C,N
// Property: tapSource; attributes: Tq,R,N
// Property: swipeDuration; attributes: Td,R,N
// Property: tapSwipeStartTime; attributes: Td,R,N
// Property: swipeSource; attributes: TQ,R,N
// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdTouchPoint startPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x1084bfca4

// -[SCAdTouchPoint startLocationXToScreenWidthRatio]
// Type encoding: d16@0:8
// Implementation: 0x1084bfda8

// -[SCAdTouchPoint startLocationYToScreenHeightRatio]
// Type encoding: d16@0:8
// Implementation: 0x1084bfe90

// -[SCAdTouchPoint endPoint]
// Type encoding: @16@0:8
// Implementation: 0x1084bff78

// -[SCAdTouchPoint endLocationXToScreenWidthRatio]
// Type encoding: @16@0:8
// Implementation: 0x1084c0094

// -[SCAdTouchPoint endLocationYToScreenHeightRatio]
// Type encoding: @16@0:8
// Implementation: 0x1084c01ac

// -[SCAdTouchPoint tapSource]
// Type encoding: q16@0:8
// Implementation: 0x1084c02c4

// -[SCAdTouchPoint swipeDuration]
// Type encoding: d16@0:8
// Implementation: 0x1084c03a8

// -[SCAdTouchPoint tapSwipeStartTime]
// Type encoding: d16@0:8
// Implementation: 0x1084c0470

// -[SCAdTouchPoint swipeSource]
// Type encoding: Q16@0:8
// Implementation: 0x1084c055c

// -[SCAdTouchPoint description]
// Type encoding: @16@0:8
// Implementation: 0x104692f6c

// -[SCAdTouchPoint init]
// Type encoding: @16@0:8
// Implementation: 0x104692f9c

// -[SCAdTouchPoint hash]
// Type encoding: q16@0:8
// Implementation: 0x104692fe4

// -[SCAdTouchPoint isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104693004

// -[SCAdTouchPoint copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104693084

// -[SCAdTouchPoint matchTap:swipe:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1046932d8

// +[SCAdTouchPoint tapWithPoint:locationXToScreenWidthRatio:locationYToScreenHeightRatio:tapSource:tapStartTimeMs:]
// Type encoding: @64@0:8{CGPoint=dd}16d32d40q48d56
// Implementation: 0x104693088

// +[SCAdTouchPoint swipeWithStartPoint:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endPoint:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:durationMs:swipeStartTimeMs:swipeSource:]
// Type encoding: @104@0:8{CGPoint=dd}16d32d40{CGPoint=dd}48d64d72d80d88Q96
// Implementation: 0x1046930a0

@end
