// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReactionsProviderImpl
// Superclass: NSObject
// Address: 0x112a6d028

@interface SCReactionsProviderImpl

// Property: reactionsLogger; attributes: T@"SCReactionsLogger",&,N,V_reactionsLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCReactionsProviderImpl initWithItemsRepository:circumstanceEngine:grapheneRegistry:persistenceServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057fcc04

// -[SCReactionsProviderImpl reactions]
// Type encoding: @16@0:8
// Implementation: 0x1057fcd10

// -[SCReactionsProviderImpl reactionsForIntents:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057fcd40

// -[SCReactionsProviderImpl _reactionsWithRetryCount:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1057fcda8

// -[SCReactionsProviderImpl _reactionsForIntents:retryCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1057fd62c

// -[SCReactionsProviderImpl _clearPersistenceLayer]
// Type encoding: v16@0:8
// Implementation: 0x1057fe0b4

// -[SCReactionsProviderImpl _logIncompleteItems:presentItems:requestType:isRetry:]
// Type encoding: v44@0:8Q16Q24Q32B40
// Implementation: 0x1057fe0f0

// -[SCReactionsProviderImpl _itemFetchStrategy]
// Type encoding: q16@0:8
// Implementation: 0x1057fe140

// -[SCReactionsProviderImpl _chatReactionsFeed]
// Type encoding: @16@0:8
// Implementation: 0x1057fe148

// -[SCReactionsProviderImpl _createIntentionsMap]
// Type encoding: @16@0:8
// Implementation: 0x1057fe1ec

// -[SCReactionsProviderImpl reactionsLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057fe394

// -[SCReactionsProviderImpl setReactionsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057fe39c

// -[SCReactionsProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057fe3cc

@end
