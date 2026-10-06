// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackParseResultProcessorV2
// Superclass: NSObject
// Address: 0x112a39278

@interface SCAdTrackParseResultProcessorV2

// Property: adResponseProvider; attributes: T@"<SCAdResponseProvider>",&,N,V_adResponseProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTrackParseResultProcessorV2 initWithConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:adTrackEventRepository:adTrackEventRepositoryV2:adTrackParser:adTrackParserV2:adTrackPerformer:adTrackRequestMigrator:adTrackSeqNumProvider:backgroundTaskProcessor:blizzardLogger:crashLogger:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10545cd70

// -[SCAdTrackParseResultProcessorV2 processTrackRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10545d058

// -[SCAdTrackParseResultProcessorV2 _processTrackRequest:adIdentifier:trackSeqNum:spectrumTrackSeqNum:viewSeqNum:completion:]
// Type encoding: v64@0:8@16@24Q32Q40Q48@?56
// Implementation: 0x10545d69c

// -[SCAdTrackParseResultProcessorV2 _processTrackRequestV2:trackSeqNum:spectrumTrackSeqNum:viewSeqNum:completion:]
// Type encoding: v56@0:8@16Q24Q32Q40@?48
// Implementation: 0x10545dd84

// -[SCAdTrackParseResultProcessorV2 adResponseProvider]
// Type encoding: @16@0:8
// Implementation: 0x10545df9c

// -[SCAdTrackParseResultProcessorV2 setAdResponseProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10545dfa4

// -[SCAdTrackParseResultProcessorV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10545dfd4

@end
