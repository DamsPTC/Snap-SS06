// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLastTurnInteractionState
// Superclass: NSObject
// Address: 0x112b429a8

@interface SCLastTurnInteractionState

// Property: targetId; attributes: T@"NSString",R,C,N,V_targetId
// Property: lastTurnInteractionTimestamp; attributes: T@"NSDate",R,C,N,V_lastTurnInteractionTimestamp
// Property: secondToLastTurnInteractionTimestamp; attributes: T@"NSDate",R,C,N,V_secondToLastTurnInteractionTimestamp
// Property: lastInteractionTimestamp; attributes: T@"NSDate",R,C,N,V_lastInteractionTimestamp
// Property: lastInteractionActionType; attributes: Tq,R,N,V_lastInteractionActionType
// Property: earliestViewerInteractionAfterLastTurnTimestamp; attributes: T@"NSDate",R,C,N,V_earliestViewerInteractionAfterLastTurnTimestamp
// Property: lastSnapSendByUserTimestamp; attributes: T@"NSDate",R,C,N,V_lastSnapSendByUserTimestamp
// Property: lastContentShareByUserTimestamp; attributes: T@"NSDate",R,C,N,V_lastContentShareByUserTimestamp

// -[SCLastTurnInteractionState initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e7f210

// -[SCLastTurnInteractionState initWithTargetId:lastTurnInteractionTimestamp:secondToLastTurnInteractionTimestamp:lastInteractionTimestamp:lastInteractionActionType:earliestViewerInteractionAfterLastTurnTimestamp:lastSnapSendByUserTimestamp:lastContentShareByUserTimestamp:]
// Type encoding: @80@0:8@16@24@32@40q48@56@64@72
// Implementation: 0x106e7f39c

// -[SCLastTurnInteractionState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106e7f540

// -[SCLastTurnInteractionState encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e7f564

// -[SCLastTurnInteractionState hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e7f63c

// -[SCLastTurnInteractionState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e7f6f8

// -[SCLastTurnInteractionState targetId]
// Type encoding: @16@0:8
// Implementation: 0x106e7f828

// -[SCLastTurnInteractionState lastTurnInteractionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f830

// -[SCLastTurnInteractionState secondToLastTurnInteractionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f838

// -[SCLastTurnInteractionState lastInteractionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f840

// -[SCLastTurnInteractionState lastInteractionActionType]
// Type encoding: q16@0:8
// Implementation: 0x106e7f848

// -[SCLastTurnInteractionState earliestViewerInteractionAfterLastTurnTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f850

// -[SCLastTurnInteractionState lastSnapSendByUserTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f858

// -[SCLastTurnInteractionState lastContentShareByUserTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106e7f860

// -[SCLastTurnInteractionState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e7f868

@end
