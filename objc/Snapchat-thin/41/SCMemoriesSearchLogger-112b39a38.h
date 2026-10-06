// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSearchLogger
// Superclass: NSObject
// Address: 0x112b39a38

@interface SCMemoriesSearchLogger


// -[SCMemoriesSearchLogger initWithLogger:coreConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106db15fc

// -[SCMemoriesSearchLogger logSearchrankingAction:searchSessionId:resultId:numKeystrokes:selectedCategory:searchSessionDurationMs:]
// Type encoding: v64@0:8q16@24@32Q40q48q56
// Implementation: 0x106db16a0

// -[SCMemoriesSearchLogger logSelectedSearchResultSnapWithSearchSessionId:resultId:keyboardLocale:numResults:numKeystrokes:selectedCategory:selectedMediaType:searchSessionDurationMs:]
// Type encoding: v80@0:8@16@24@32Q40Q48q56Q64q72
// Implementation: 0x106db16c4

// -[SCMemoriesSearchLogger logSelectedSearchResultEntryWithSearchSessionId:resultId:keyboardLocale:numResults:numKeystrokes:selectedCategory:searchSessionDurationMs:]
// Type encoding: v72@0:8@16@24@32Q40Q48q56q64
// Implementation: 0x106db1814

// -[SCMemoriesSearchLogger logSelectedResultQueryWithSearchSessionId:keyboardLocale:numResults:numKeystrokes:selectedCategory:]
// Type encoding: v56@0:8@16@24Q32Q40q48
// Implementation: 0x106db183c

// -[SCMemoriesSearchLogger logSelectedResultQueryWithSearchSessionId:keyboardLocale:numResults:numKeystrokes:selectedCategory:selectedMediaType:]
// Type encoding: v64@0:8@16@24Q32Q40q48Q56
// Implementation: 0x106db18f0

// -[SCMemoriesSearchLogger logUnselectedQuery:searchSessionId:keyboardLocale:numResults:numKeystrokes:]
// Type encoding: v56@0:8@16@24@32Q40Q48
// Implementation: 0x106db19d8

// -[SCMemoriesSearchLogger logEmbeddingSearchQueryWithSearchSessionId:keyboardLocale:queryTokens:numResults:numKeystrokes:memSession:]
// Type encoding: v64@0:8@16@24@32Q40Q48@56
// Implementation: 0x106db1a84

// -[SCMemoriesSearchLogger logMemoriesSearchActionWithType:memSearchSessionId:memSession:sessionDurationMs:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x106db1bbc

// -[SCMemoriesSearchLogger _logMemoriesSearchQuery:keyboardLocale:numResults:numKeystrokes:selectedCategoryString:selectedTypeString:]
// Type encoding: v64@0:8@16@24Q32Q40@48@56
// Implementation: 0x106db1ca0

// -[SCMemoriesSearchLogger _logSearchrankingQuery:searchSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106db1dd0

// -[SCMemoriesSearchLogger _logSearchrankingAction:resultId:searchSessionId:searchQueryId:searchSessionDurationMs:selectedCategory:]
// Type encoding: v64@0:8q16@24@32q40q48q56
// Implementation: 0x106db1ecc

// -[SCMemoriesSearchLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106db2024

@end
