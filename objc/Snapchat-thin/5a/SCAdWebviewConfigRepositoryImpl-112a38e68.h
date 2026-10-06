// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebviewConfigRepositoryImpl
// Superclass: NSObject
// Address: 0x112a38e68

@interface SCAdWebviewConfigRepositoryImpl

// Property: transactor; attributes: T@"SCSQLiteTransactor",&,N,V_transactor
// Property: adCrashLogger; attributes: T@"SCLazy",R,N,V_adCrashLogger
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebviewConfigRepositoryImpl initWithTransactorProvider:adCrashLogger:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105448da8

// -[SCAdWebviewConfigRepositoryImpl beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105448f5c

// -[SCAdWebviewConfigRepositoryImpl beginObservationWithAdWebviewEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054490ac

// -[SCAdWebviewConfigRepositoryImpl _onWebviewConfigEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054491fc

// -[SCAdWebviewConfigRepositoryImpl adWebviewConfigsForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054495e0

// -[SCAdWebviewConfigRepositoryImpl recentAdWebviewConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1054496d0

// -[SCAdWebviewConfigRepositoryImpl recentAndBookmarkedAdWebviewConfigs]
// Type encoding: @16@0:8
// Implementation: 0x10544975c

// -[SCAdWebviewConfigRepositoryImpl upsertAdWebviewConfig:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054498a8

// -[SCAdWebviewConfigRepositoryImpl deleteAdWebviewConfigWithIdentifiers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054499dc

// -[SCAdWebviewConfigRepositoryImpl cleanExpiredAdWebviewConfigsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105449b10

// -[SCAdWebviewConfigRepositoryImpl _upsertAdWebviewConfig:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105449c1c

// -[SCAdWebviewConfigRepositoryImpl _deleteAdWebviewConfigWithIdentifiers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10544a060

// -[SCAdWebviewConfigRepositoryImpl _cleanExpiredAdWebviewConfigsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10544a184

// -[SCAdWebviewConfigRepositoryImpl initDatabase]
// Type encoding: v16@0:8
// Implementation: 0x10544a2ec

// -[SCAdWebviewConfigRepositoryImpl transactor]
// Type encoding: @16@0:8
// Implementation: 0x10544a324

// -[SCAdWebviewConfigRepositoryImpl _handleSQLFetchedResult:adIdentifiers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10544a35c

// -[SCAdWebviewConfigRepositoryImpl _handleSqlMutationResult:adIdentifiers:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10544a6d4

// -[SCAdWebviewConfigRepositoryImpl setTransactor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10544a9b4

// -[SCAdWebviewConfigRepositoryImpl adCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x10544a9e4

// -[SCAdWebviewConfigRepositoryImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x10544a9ec

// -[SCAdWebviewConfigRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10544a9f4

@end
