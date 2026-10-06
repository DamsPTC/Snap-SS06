// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensGamesRPCHandlerImpl
// Superclass: NSObject
// Address: 0x112a2d8d8

@interface SCLensGamesRPCHandlerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensGamesRPCHandlerImpl initWithUnifiedGRPCServices:userStorageServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105381940

// -[SCLensGamesRPCHandlerImpl clearAllWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105381d68

// -[SCLensGamesRPCHandlerImpl recordLensUsage:appId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105381e6c

// -[SCLensGamesRPCHandlerImpl getLensUsage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053820ec

// -[SCLensGamesRPCHandlerImpl deleteLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10538235c

// -[SCLensGamesRPCHandlerImpl inviteWithConversationId:lensId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10538250c

// -[SCLensGamesRPCHandlerImpl ringWithConversationId:lensId:invitedUserIds:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10538265c

// -[SCLensGamesRPCHandlerImpl _deleteResultForLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053827e8

// -[SCLensGamesRPCHandlerImpl _saveResultForLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053828c8

// -[SCLensGamesRPCHandlerImpl _getLensUsageLocalForLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053829c4

// -[SCLensGamesRPCHandlerImpl _clearLocalCache]
// Type encoding: v16@0:8
// Implementation: 0x105382a4c

// -[SCLensGamesRPCHandlerImpl listLensesUsedWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105382b98

// -[SCLensGamesRPCHandlerImpl _listLensesUsedWithCursor:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105382ba4

// -[SCLensGamesRPCHandlerImpl _grpcCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x105382f24

// -[SCLensGamesRPCHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105382f68

// +[SCLensGamesRPCHandlerImpl _errorForMissingParamWithLensId:appId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105382a8c

@end
