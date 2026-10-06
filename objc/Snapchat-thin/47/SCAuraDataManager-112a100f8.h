// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraDataManager
// Superclass: NSObject
// Address: 0x112a100f8

@interface SCAuraDataManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuraDataManager initWithUserSession:auraServiceClient:docObjectContext:auraBirthInfoDataManager:displayNameProvider:usernameProvider:snapchattersDataFetcher:clock:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104fee90c

// -[SCAuraDataManager updateMyAuraDataWithCompletionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x104feee2c

// -[SCAuraDataManager _updateMyAuraDataWithCompletionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x104feef94

// -[SCAuraDataManager updateFriendAuraDataWithFriendUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fefdb4

// -[SCAuraDataManager updateFriendAuraDataWithFriendSnapchatter:completionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104feff20

// -[SCAuraDataManager _updateFriendAuraDataWithFriendSnapchatter:completionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104ff00b0

// -[SCAuraDataManager _handleAstrologySyncResponse:error:friendUserId:paramsHash:paramsHashChanged:ttlExpired:docObjectContext:completionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v88@0:8@16@24@32@40B48B52@56@64@?72@?80
// Implementation: 0x104ff090c

// -[SCAuraDataManager _invokeCompletionWithError:completionQueue:successCompletionHandler:failureCompletionHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104ff0ef0

// -[SCAuraDataManager fetchMyPersonalityProfileWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ff1068

// -[SCAuraDataManager _fetchMyPersonalityProfileWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ff119c

// -[SCAuraDataManager fetchFriendPersonalityProfileWithFriendUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ff1370

// -[SCAuraDataManager _fetchFriendPersonalityProfileWithFriendUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ff14d8

// -[SCAuraDataManager fetchFriendCompatibilityProfileWithFriendUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ff168c

// -[SCAuraDataManager _fetchFriendCompatibilityProfileWithFriendUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ff17f4

// -[SCAuraDataManager setHasSeenMyPersonalityProfileDiviningPage]
// Type encoding: v16@0:8
// Implementation: 0x104ff19a8

// -[SCAuraDataManager setHasSeenFriendPersonalityProfileDiviningPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ff1acc

// -[SCAuraDataManager setHasSeenFriendCompatibilityProfileDiviningPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ff1bf0

// -[SCAuraDataManager _upsertAuraDataForOwner:update:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ff1d14

// -[SCAuraDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ff1df8

@end
