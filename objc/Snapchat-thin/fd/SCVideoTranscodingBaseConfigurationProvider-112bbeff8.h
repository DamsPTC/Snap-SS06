// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingBaseConfigurationProvider
// Superclass: NSObject
// Address: 0x112bbeff8

@interface SCVideoTranscodingBaseConfigurationProvider


// -[SCVideoTranscodingBaseConfigurationProvider initWithProviderInput:mediaCapabilityDetector:circumstanceEngine:grapheneRegistry:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108ced210

// -[SCVideoTranscodingBaseConfigurationProvider bitrateForSending]
// Type encoding: d16@0:8
// Implementation: 0x108ced364

// -[SCVideoTranscodingBaseConfigurationProvider _bitrateFromMediaQualityLevel]
// Type encoding: d16@0:8
// Implementation: 0x108ced368

// -[SCVideoTranscodingBaseConfigurationProvider bitrateForSaving]
// Type encoding: d16@0:8
// Implementation: 0x108ced694

// -[SCVideoTranscodingBaseConfigurationProvider targetSizeForSending]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ced8b8

// -[SCVideoTranscodingBaseConfigurationProvider _targetSizeFromMediaQualityLevel]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ced8bc

// -[SCVideoTranscodingBaseConfigurationProvider targetSizeForSaving]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ced980

// -[SCVideoTranscodingBaseConfigurationProvider keyFrameIntervalForSending]
// Type encoding: Q16@0:8
// Implementation: 0x108cedb34

// -[SCVideoTranscodingBaseConfigurationProvider keyFrameIntervalForSaving]
// Type encoding: Q16@0:8
// Implementation: 0x108cedb80

// -[SCVideoTranscodingBaseConfigurationProvider audioBitrateForSending]
// Type encoding: d16@0:8
// Implementation: 0x108cedc74

// -[SCVideoTranscodingBaseConfigurationProvider audioBitrateForSaving]
// Type encoding: d16@0:8
// Implementation: 0x108cedca0

// -[SCVideoTranscodingBaseConfigurationProvider transcodingCodecType]
// Type encoding: Q16@0:8
// Implementation: 0x108cedccc

// -[SCVideoTranscodingBaseConfigurationProvider h264ProfileLevelForSend]
// Type encoding: @16@0:8
// Implementation: 0x108cedd18

// -[SCVideoTranscodingBaseConfigurationProvider h264ProfileLevelForSaving]
// Type encoding: @16@0:8
// Implementation: 0x108cedd20

// -[SCVideoTranscodingBaseConfigurationProvider maxFrameRate]
// Type encoding: Q16@0:8
// Implementation: 0x108cedd50

// -[SCVideoTranscodingBaseConfigurationProvider shouldMuteAudio]
// Type encoding: B16@0:8
// Implementation: 0x108cedd9c

// -[SCVideoTranscodingBaseConfigurationProvider enableStereoAudio]
// Type encoding: B16@0:8
// Implementation: 0x108ceddb0

// -[SCVideoTranscodingBaseConfigurationProvider isQualityScoreCalculationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ceddb8

// -[SCVideoTranscodingBaseConfigurationProvider isStreamingEnabledForSending]
// Type encoding: B16@0:8
// Implementation: 0x108ceddc0

// -[SCVideoTranscodingBaseConfigurationProvider isStreamingEnabledForSaving]
// Type encoding: B16@0:8
// Implementation: 0x108ceddc8

// -[SCVideoTranscodingBaseConfigurationProvider isChunkedTranscodingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108cede64

// -[SCVideoTranscodingBaseConfigurationProvider preferredOutputSegmentInterval]
// Type encoding: d16@0:8
// Implementation: 0x108cedf38

// -[SCVideoTranscodingBaseConfigurationProvider _qualityLevelWithIntValue:]
// Type encoding: q24@0:8q16
// Implementation: 0x108cedfd0

// -[SCVideoTranscodingBaseConfigurationProvider _minimumConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108cee07c

// -[SCVideoTranscodingBaseConfigurationProvider _videoTranscodingTargetSizeForSendSnapVideo]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108cee138

// -[SCVideoTranscodingBaseConfigurationProvider _targetShorterSideLength]
// Type encoding: q16@0:8
// Implementation: 0x108cee1a8

// -[SCVideoTranscodingBaseConfigurationProvider _targetAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x108cee264

// -[SCVideoTranscodingBaseConfigurationProvider _mayAdjustAspectRatio]
// Type encoding: B16@0:8
// Implementation: 0x108cee2a4

// -[SCVideoTranscodingBaseConfigurationProvider _iphoneGeneration]
// Type encoding: q16@0:8
// Implementation: 0x108cee2c0

// -[SCVideoTranscodingBaseConfigurationProvider _shouldUseHEVCForInput:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cee3f8

// -[SCVideoTranscodingBaseConfigurationProvider _isForMyStoryAndShouldUseHevc:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cee5f4

// -[SCVideoTranscodingBaseConfigurationProvider _isDirectMessageAndShouldUseHEVC:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cee698

// -[SCVideoTranscodingBaseConfigurationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cee7e8

@end
