// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingResourceLoadingRequestHandler
// Superclass: NSObject
// Address: 0x112b6ea08

@interface SCStreamingResourceLoadingRequestHandler

// Property: player; attributes: T@"AVPlayer<SCPlayerStateProviding>",W,D,N
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingResourceLoadingRequestHandler initWithConfigProvider:grapheneRegistry:contentInfo:callbackQueue:requestHandlerDelegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107aac4d0

// -[SCStreamingResourceLoadingRequestHandler setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aac818

// -[SCStreamingResourceLoadingRequestHandler player]
// Type encoding: @16@0:8
// Implementation: 0x107aaca00

// -[SCStreamingResourceLoadingRequestHandler _playerStatusDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaca6c

// -[SCStreamingResourceLoadingRequestHandler resourceLoader:didCancelLoadingRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aacc94

// -[SCStreamingResourceLoadingRequestHandler resourceLoader:shouldWaitForLoadingOfRequestedResource:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107aacd2c

// -[SCStreamingResourceLoadingRequestHandler cancel]
// Type encoding: v16@0:8
// Implementation: 0x107aacdc0

// -[SCStreamingResourceLoadingRequestHandler setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aace2c

// -[SCStreamingResourceLoadingRequestHandler _handleContentInfoLoadingRequest:finishLoading:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107aaceac

// -[SCStreamingResourceLoadingRequestHandler _handleDataLoadingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aacfe4

// -[SCStreamingResourceLoadingRequestHandler _tearDown]
// Type encoding: v16@0:8
// Implementation: 0x107aad064

// -[SCStreamingResourceLoadingRequestHandler _shouldProceedFetching:]
// Type encoding: B24@0:8@16
// Implementation: 0x107aad1c4

// -[SCStreamingResourceLoadingRequestHandler _handleCMDataLoadingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aad3e8

// -[SCStreamingResourceLoadingRequestHandler _boostStreamingImportanceForActivePlayer]
// Type encoding: v16@0:8
// Implementation: 0x107aad914

// -[SCStreamingResourceLoadingRequestHandler _handleCMWriteStreamCallback:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aadbfc

// -[SCStreamingResourceLoadingRequestHandler _loadingRequestHash:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aadd70

// -[SCStreamingResourceLoadingRequestHandler _regenerateConfigsWithFeatureProvidedSignals:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aadda0

// -[SCStreamingResourceLoadingRequestHandler _configForActive:defaultConfig:featureProvidedSignals:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x107aade4c

// -[SCStreamingResourceLoadingRequestHandler viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107aae054

// -[SCStreamingResourceLoadingRequestHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aae05c

// +[SCStreamingResourceLoadingRequestHandler _nextExponentialChunkSizeAtOffset:withFirstChunkSize:initialMultiplier:successiveMultiplier:maxMultiplier:maxChunkSize:]
// Type encoding: Q52@0:8Q16Q24f32f36f40Q44
// Implementation: 0x107aac450

// +[SCStreamingResourceLoadingRequestHandler _playerIsPaused:]
// Type encoding: B24@0:8@16
// Implementation: 0x107aaca18

@end
