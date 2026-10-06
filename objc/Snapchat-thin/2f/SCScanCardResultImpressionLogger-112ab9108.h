// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanCardResultImpressionLogger
// Superclass: NSObject
// Address: 0x112ab9108

@interface SCScanCardResultImpressionLogger

// Property: paused; attributes: TB,N,V_paused
// Property: remainingShortImpressionTime; attributes: Td,N,V_remainingShortImpressionTime
// Property: remainingLongImpressionTime; attributes: Td,N,V_remainingLongImpressionTime
// Property: timerFactoryBlock; attributes: T@?,C,N,V_timerFactoryBlock
// Property: resultId; attributes: T@"NSString",R,N,V_resultId

// -[SCScanCardResultImpressionLogger initWithUserTrackedLogger:sessionId:queryId:resultId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105ffb6a8

// -[SCScanCardResultImpressionLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105ffb7e8

// -[SCScanCardResultImpressionLogger pauseLogging]
// Type encoding: v16@0:8
// Implementation: 0x105ffb838

// -[SCScanCardResultImpressionLogger resumeLogging]
// Type encoding: v16@0:8
// Implementation: 0x105ffb8bc

// -[SCScanCardResultImpressionLogger resetLogging]
// Type encoding: v16@0:8
// Implementation: 0x105ffbb30

// -[SCScanCardResultImpressionLogger _logShortImpression]
// Type encoding: v16@0:8
// Implementation: 0x105ffbb80

// -[SCScanCardResultImpressionLogger _logLongImpression]
// Type encoding: v16@0:8
// Implementation: 0x105ffbc18

// -[SCScanCardResultImpressionLogger hash]
// Type encoding: Q16@0:8
// Implementation: 0x105ffbcb0

// -[SCScanCardResultImpressionLogger isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ffbcec

// -[SCScanCardResultImpressionLogger resultId]
// Type encoding: @16@0:8
// Implementation: 0x105ffbda4

// -[SCScanCardResultImpressionLogger paused]
// Type encoding: B16@0:8
// Implementation: 0x105ffbdac

// -[SCScanCardResultImpressionLogger setPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ffbdb4

// -[SCScanCardResultImpressionLogger remainingShortImpressionTime]
// Type encoding: d16@0:8
// Implementation: 0x105ffbdbc

// -[SCScanCardResultImpressionLogger setRemainingShortImpressionTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ffbdc4

// -[SCScanCardResultImpressionLogger remainingLongImpressionTime]
// Type encoding: d16@0:8
// Implementation: 0x105ffbdcc

// -[SCScanCardResultImpressionLogger setRemainingLongImpressionTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ffbdd4

// -[SCScanCardResultImpressionLogger timerFactoryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105ffbddc

// -[SCScanCardResultImpressionLogger setTimerFactoryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ffbde4

// -[SCScanCardResultImpressionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ffbdec

// +[SCScanCardResultImpressionLogger loggerWithUserTrackedLogger:sessionId:queryId:resultId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105ffb604

@end
