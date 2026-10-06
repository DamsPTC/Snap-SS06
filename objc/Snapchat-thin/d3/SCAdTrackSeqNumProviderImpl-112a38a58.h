// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackSeqNumProviderImpl
// Superclass: NSObject
// Address: 0x112a38a58

@interface SCAdTrackSeqNumProviderImpl

// Property: identifierToTrackSeqNumMapping; attributes: T@"NSMutableDictionary",C,N,V_identifierToTrackSeqNumMapping
// Property: identifierToSpectrumTrackSeqNumMapping; attributes: T@"NSMutableDictionary",C,N,V_identifierToSpectrumTrackSeqNumMapping
// Property: identifierToViewSeqNumMapping; attributes: T@"NSMutableDictionary",C,N,V_identifierToViewSeqNumMapping
// Property: identifierToFeedSeqNumMapping; attributes: T@"NSMutableDictionary",C,N,V_identifierToFeedSeqNumMapping
// Property: viewSeqNumObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: adPlaybackSessionEndSubject; attributes: T@"SCPublishSubject",R,N,V_adPlaybackSessionEndSubject

// -[SCAdTrackSeqNumProviderImpl initWithAdCrashLogger:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054291c8

// -[SCAdTrackSeqNumProviderImpl viewSeqNumObservable]
// Type encoding: @16@0:8
// Implementation: 0x10542932c

// -[SCAdTrackSeqNumProviderImpl trackSeqNumForAdIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105429354

// -[SCAdTrackSeqNumProviderImpl spectrumTrackSeqNumForAdIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105429408

// -[SCAdTrackSeqNumProviderImpl viewSeqNumForAdIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1054294bc

// -[SCAdTrackSeqNumProviderImpl feedSeqNumForAdIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105429570

// -[SCAdTrackSeqNumProviderImpl incrementTrackSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429624

// -[SCAdTrackSeqNumProviderImpl incrementSpectrumTrackSeqNumWithAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054296c8

// -[SCAdTrackSeqNumProviderImpl incrementViewSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10542976c

// -[SCAdTrackSeqNumProviderImpl incrementFeedSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429810

// -[SCAdTrackSeqNumProviderImpl _trackSeqNumForAdIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x1054298b4

// -[SCAdTrackSeqNumProviderImpl _spectrumTrackSeqNumAdIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x10542997c

// -[SCAdTrackSeqNumProviderImpl _viewSeqNumForAdIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x105429a44

// -[SCAdTrackSeqNumProviderImpl _feedSeqNumForAdIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x105429b20

// -[SCAdTrackSeqNumProviderImpl _incrementTrackSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429be8

// -[SCAdTrackSeqNumProviderImpl _incrementSpectrumTrackSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429ca0

// -[SCAdTrackSeqNumProviderImpl _incrementViewNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429d58

// -[SCAdTrackSeqNumProviderImpl _incrementFeedSeqNumForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429e4c

// -[SCAdTrackSeqNumProviderImpl _guardOnNullAdIdentifierWithS2R:funcName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105429f04

// -[SCAdTrackSeqNumProviderImpl adPlaybackSessionEndSubject]
// Type encoding: @16@0:8
// Implementation: 0x105429fb8

// -[SCAdTrackSeqNumProviderImpl identifierToTrackSeqNumMapping]
// Type encoding: @16@0:8
// Implementation: 0x105429fc0

// -[SCAdTrackSeqNumProviderImpl setIdentifierToTrackSeqNumMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429fc8

// -[SCAdTrackSeqNumProviderImpl identifierToSpectrumTrackSeqNumMapping]
// Type encoding: @16@0:8
// Implementation: 0x105429fd0

// -[SCAdTrackSeqNumProviderImpl setIdentifierToSpectrumTrackSeqNumMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429fd8

// -[SCAdTrackSeqNumProviderImpl identifierToViewSeqNumMapping]
// Type encoding: @16@0:8
// Implementation: 0x105429fe0

// -[SCAdTrackSeqNumProviderImpl setIdentifierToViewSeqNumMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429fe8

// -[SCAdTrackSeqNumProviderImpl identifierToFeedSeqNumMapping]
// Type encoding: @16@0:8
// Implementation: 0x105429ff0

// -[SCAdTrackSeqNumProviderImpl setIdentifierToFeedSeqNumMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x105429ff8

// -[SCAdTrackSeqNumProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10542a000

@end
