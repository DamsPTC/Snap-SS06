// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackEventRepositoryV1
// Superclass: NSObject
// Address: 0x112a388c8

@interface SCAdTrackEventRepositoryV1

// Property: transactor; attributes: T@"SCSQLiteTransactor",&,N,V_transactor
// Property: repositoryAdaptor; attributes: T@"SCAdTrackEventObservableRepositoryAdaptor",R,N,V_repositoryAdaptor
// Property: adCrashLogger; attributes: T@"SCLazy",R,N,V_adCrashLogger
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTrackEventRepositoryV1 initWithAdConfigProvider:transactorProvider:repositoryAdaptor:adCrashLogger:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105422a98

// -[SCAdTrackEventRepositoryV1 beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105422cdc

// -[SCAdTrackEventRepositoryV1 beginTrackEventObservationWithRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x105422e30

// -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105422f84

// -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:trackSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1054230b8

// -[SCAdTrackEventRepositoryV1 trackEventSequencesForAdIdentifier:trackSeqNum:viewSeqNum:adType:]
// Type encoding: @48@0:8@16Q24Q32q40
// Implementation: 0x1054230c4

// -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:trackSeqNum:snapIndex:]
// Type encoding: @40@0:8@16Q24q32
// Implementation: 0x1054231c8

// -[SCAdTrackEventRepositoryV1 webViewMetricEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105423308

// -[SCAdTrackEventRepositoryV1 resetForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054234fc

// -[SCAdTrackEventRepositoryV1 initDatabase]
// Type encoding: v16@0:8
// Implementation: 0x105423500

// -[SCAdTrackEventRepositoryV1 transactor]
// Type encoding: @16@0:8
// Implementation: 0x105423538

// -[SCAdTrackEventRepositoryV1 _trackUiEventsForAdIdentifier:trackSeqNum:viewSeqNum:adType:]
// Type encoding: @48@0:8@16Q24Q32q40
// Implementation: 0x105423570

// -[SCAdTrackEventRepositoryV1 _trackMetricEventsForAdIdentifier:trackSeqNum:viewSeqNum:snapIndex:adType:]
// Type encoding: @56@0:8@16Q24Q32q40q48
// Implementation: 0x105423734

// -[SCAdTrackEventRepositoryV1 _trackWebViewEventsForAdIdentifier:trackSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105423808

// -[SCAdTrackEventRepositoryV1 trackDeeplinkEventsForAdIdentifier:viewSeqNum:snapIndex:]
// Type encoding: @40@0:8@16Q24q32
// Implementation: 0x1054239fc

// -[SCAdTrackEventRepositoryV1 _onAdTrackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105423c04

// -[SCAdTrackEventRepositoryV1 _onWebviewEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105423d40

// -[SCAdTrackEventRepositoryV1 _onDeeplinkEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054244a0

// -[SCAdTrackEventRepositoryV1 _onLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105424878

// -[SCAdTrackEventRepositoryV1 _onInteractionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105424e20

// -[SCAdTrackEventRepositoryV1 _handleSqlTrackEventsForFetchedResult:adIdentifier:trackSeqNum:viewSeqNum:snapIndex:adType:]
// Type encoding: @64@0:8@16@24q32q40q48q56
// Implementation: 0x1054251dc

// -[SCAdTrackEventRepositoryV1 _handleSqlTrackWebViewEventsForFetchedResult:adIdentifier:trackSeqNum:snapIndex:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x105425588

// -[SCAdTrackEventRepositoryV1 _handleSqlTrackDeeplinkEventsForFetchedResult:adIdentifier:viewSeqNum:snapIndex:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x105425900

// -[SCAdTrackEventRepositoryV1 _handleSqlMutationResult:adIdentifier:trackSeqNum:viewSeqNum:snapIndex:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x105425c78

// -[SCAdTrackEventRepositoryV1 setTransactor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105425f58

// -[SCAdTrackEventRepositoryV1 repositoryAdaptor]
// Type encoding: @16@0:8
// Implementation: 0x105425f88

// -[SCAdTrackEventRepositoryV1 adCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x105425f90

// -[SCAdTrackEventRepositoryV1 performer]
// Type encoding: @16@0:8
// Implementation: 0x105425f98

// -[SCAdTrackEventRepositoryV1 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105425fa0

@end
