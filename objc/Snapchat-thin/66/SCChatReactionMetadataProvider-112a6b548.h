// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatReactionMetadataProvider
// Superclass: NSObject
// Address: 0x112a6b548

@interface SCChatReactionMetadataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatReactionMetadataProvider initWithReactionsProvider:chatGraphene:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057cf5ac

// -[SCChatReactionMetadataProvider reactionsForIntentIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057cf8f8

// -[SCChatReactionMetadataProvider selectableReactions]
// Type encoding: @16@0:8
// Implementation: 0x1057cfcbc

// -[SCChatReactionMetadataProvider selectablePlusExclusiveReactions]
// Type encoding: @16@0:8
// Implementation: 0x1057cfcc4

// -[SCChatReactionMetadataProvider selectablePlusExclusiveIntentIds]
// Type encoding: @16@0:8
// Implementation: 0x1057cfccc

// -[SCChatReactionMetadataProvider _selectableReactions]
// Type encoding: @16@0:8
// Implementation: 0x1057cfdec

// -[SCChatReactionMetadataProvider _selectablePlusExclusiveReactions]
// Type encoding: @16@0:8
// Implementation: 0x1057cfe78

// -[SCChatReactionMetadataProvider _selectableReactionsWithIntentIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057cff04

// -[SCChatReactionMetadataProvider _emitFetchStatusMetricWithDimension:result:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057d0350

// -[SCChatReactionMetadataProvider _emitMetricsForSelectableReactionsLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d0408

// -[SCChatReactionMetadataProvider _emitMetricsForReactionsLoad:requestedIntentIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057d0474

// -[SCChatReactionMetadataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057d0508

@end
