// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTAudioState
// Superclass: NSObject
// Address: 0x112baa468

@interface SCTAudioState

// Property: actualRoute; attributes: T@"<SCAudioRoute>",&,V_actualRoute
// Property: expectedRoute; attributes: T@"<SCAudioRoute>",&,V_expectedRoute
// Property: callStartMedia; attributes: TQ,V_callStartMedia
// Property: availableRoutes; attributes: T@"NSMutableSet",R,V_availableRoutes
// Property: didAnswerFromUnlockedScreen; attributes: TB,R,V_didAnswerFromUnlockedScreen
// Property: didForegroundInCall; attributes: TB,R,V_didForegroundInCall
// Property: didForegroundWithVideo; attributes: TB,R,V_didForegroundWithVideo
// Property: didReceiveFromCallKit; attributes: TB,R,V_didReceiveFromCallKit
// Property: localUserMedia; attributes: T@"<SCTCMediaPublishStatus>",R,V_localUserMedia
// Property: userSelectedRoute; attributes: T@"<SCAudioRoute>",R,V_userSelectedRoute
// Property: userSelectionTimestamp; attributes: T@"NSDate",R,V_userSelectionTimestamp

// -[SCTAudioState init]
// Type encoding: @16@0:8
// Implementation: 0x1085fb660

// -[SCTAudioState evaluateExpectedRouteWithNativeAudioSelector:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085fb6cc

// -[SCTAudioState _routeRequestsWithNativeAudioSelector:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085fb81c

// -[SCTAudioState _highestPriorityRouteRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085fba08

// -[SCTAudioState _userSelectedRouteIfChosenWithNativeAudioSelector:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085fbb40

// -[SCTAudioState _publishedMediaRouteRequest]
// Type encoding: @16@0:8
// Implementation: 0x1085fbbfc

// -[SCTAudioState _callStartMediaRouteRequest]
// Type encoding: @16@0:8
// Implementation: 0x1085fbc50

// -[SCTAudioState _earpieceOrSpeakerRequestWithPriority:useEarpiece:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1085fbc88

// -[SCTAudioState resetState]
// Type encoding: v16@0:8
// Implementation: 0x1085fbd00

// -[SCTAudioState updateActualRouteToAppliedRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fbd60

// -[SCTAudioState updateAvailableRoutes:actualRoute:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085fbda8

// -[SCTAudioState updateDidAnswerFromUnlockedScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085fbdf8

// -[SCTAudioState updateDidForegroundInCall:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085fbe00

// -[SCTAudioState updateDidReceiveFromCallKit:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085fbe08

// -[SCTAudioState isCurrentRouteEarpiece]
// Type encoding: B16@0:8
// Implementation: 0x1085fbe10

// -[SCTAudioState updateDidForegroundWithVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085fbe7c

// -[SCTAudioState updateUserSelectedRouteToSpeaker]
// Type encoding: v16@0:8
// Implementation: 0x1085fbe84

// -[SCTAudioState updateUserSelectedAudioDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fbedc

// -[SCTAudioState _updateUserSelectedRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fbf1c

// -[SCTAudioState updateLocalUserMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fbf8c

// -[SCTAudioState updateCallStartMedia:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085fbfbc

// -[SCTAudioState _earpieceRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fbfc0

// -[SCTAudioState _mostRecentBluetoothOrOthersRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fbfc8

// -[SCTAudioState _speakerRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fc160

// -[SCTAudioState _wiredHeadsetRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fc168

// -[SCTAudioState _audioRouteFromAudioDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085fc170

// -[SCTAudioState _availableRouteWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1085fc360

// -[SCTAudioState _mostRecentlyAvailableRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fc47c

// -[SCTAudioState _scAudioRouteForSystemRoute:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085fc608

// -[SCTAudioState _updateAvailableRoutes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fc980

// -[SCTAudioState _updateActualRouteAccordingToSystemRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fcb94

// -[SCTAudioState actualRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc04

// -[SCTAudioState setActualRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fcc10

// -[SCTAudioState availableRoutes]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc18

// -[SCTAudioState expectedRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc24

// -[SCTAudioState setExpectedRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fcc30

// -[SCTAudioState didAnswerFromUnlockedScreen]
// Type encoding: B16@0:8
// Implementation: 0x1085fcc38

// -[SCTAudioState didForegroundInCall]
// Type encoding: B16@0:8
// Implementation: 0x1085fcc44

// -[SCTAudioState didForegroundWithVideo]
// Type encoding: B16@0:8
// Implementation: 0x1085fcc50

// -[SCTAudioState didReceiveFromCallKit]
// Type encoding: B16@0:8
// Implementation: 0x1085fcc5c

// -[SCTAudioState localUserMedia]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc68

// -[SCTAudioState callStartMedia]
// Type encoding: Q16@0:8
// Implementation: 0x1085fcc74

// -[SCTAudioState setCallStartMedia:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085fcc7c

// -[SCTAudioState userSelectedRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc84

// -[SCTAudioState userSelectionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1085fcc90

// -[SCTAudioState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085fcc9c

@end
