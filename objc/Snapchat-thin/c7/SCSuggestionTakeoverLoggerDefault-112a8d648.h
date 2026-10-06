// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSuggestionTakeoverLoggerDefault
// Superclass: NSObject
// Address: 0x112a8d648

@interface SCSuggestionTakeoverLoggerDefault

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSuggestionTakeoverLoggerDefault initWithBlizzardLogger:grapheneRegistry:sourcePage:takeoverType:triggerCondition:lazyQuickAddLogger:friendSurfaceImpressionLogger:]
// Type encoding: @72@0:8@16@24q32q40q48@56@64
// Implementation: 0x105b463ec

// -[SCSuggestionTakeoverLoggerDefault markSuggestedSnapchatterAsSeen:index:isRecentlyActive:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b465e0

// -[SCSuggestionTakeoverLoggerDefault markIncomingSnapchatterAsSeen:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b46668

// -[SCSuggestionTakeoverLoggerDefault logContinueDidClicked]
// Type encoding: v16@0:8
// Implementation: 0x105b466b8

// -[SCSuggestionTakeoverLoggerDefault logMaybeLaterDidClicked]
// Type encoding: v16@0:8
// Implementation: 0x105b4678c

// -[SCSuggestionTakeoverLoggerDefault logDismissSuggestionTakeover]
// Type encoding: v16@0:8
// Implementation: 0x105b46860

// -[SCSuggestionTakeoverLoggerDefault logPopupOfSuggestionTakeover]
// Type encoding: v16@0:8
// Implementation: 0x105b46934

// -[SCSuggestionTakeoverLoggerDefault logImpressedSuggestionWithUserId:isRecentlyActive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b4698c

// -[SCSuggestionTakeoverLoggerDefault logImpressedIncomingWithUserId:isRecentlyActive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b46a0c

// -[SCSuggestionTakeoverLoggerDefault logFriendSurfaceImpressionWithDismissReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b46a8c

// -[SCSuggestionTakeoverLoggerDefault _appendFriendSurfaceImpressionItemWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b46b14

// -[SCSuggestionTakeoverLoggerDefault _friendSurfaceCurrentTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x105b46b98

// -[SCSuggestionTakeoverLoggerDefault logAddedSuggestionWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b46be8

// -[SCSuggestionTakeoverLoggerDefault logAddedIncomingWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b46c2c

// -[SCSuggestionTakeoverLoggerDefault logMultiAddedSuggestionsWithUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b46c70

// -[SCSuggestionTakeoverLoggerDefault _logImpressionAndAddedSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x105b46cb4

// -[SCSuggestionTakeoverLoggerDefault _initializePopupEvent]
// Type encoding: v16@0:8
// Implementation: 0x105b46dd4

// -[SCSuggestionTakeoverLoggerDefault _logBlizzardEventWithDismissAction:suggestionsImpressedCount:suggestionsAddedCount:incomingAddedCount:incomingRequestsImpressedCount:]
// Type encoding: v56@0:8q16q24q32q40q48
// Implementation: 0x105b46e28

// -[SCSuggestionTakeoverLoggerDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b46ec8

@end
