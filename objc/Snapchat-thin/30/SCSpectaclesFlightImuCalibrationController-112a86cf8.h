// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFlightImuCalibrationController
// Superclass: NSObject
// Address: 0x112a86cf8

@interface SCSpectaclesFlightImuCalibrationController

// Property: delegate; attributes: T@"<SCSpectaclesFlightImuCalibrationControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFlightImuCalibrationController initWithFlightImuCalibrationRPCManager:device:deviceConnectionStateReporter:onDemandResourceFetcher:analyticsLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105a763c0

// -[SCSpectaclesFlightImuCalibrationController _setupCalibrationStatusObservable]
// Type encoding: v16@0:8
// Implementation: 0x105a765a0

// -[SCSpectaclesFlightImuCalibrationController _setupDeviceConnectionStateReporter]
// Type encoding: v16@0:8
// Implementation: 0x105a76734

// -[SCSpectaclesFlightImuCalibrationController configureWithActionObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a768a4

// -[SCSpectaclesFlightImuCalibrationController viewModelPublisher]
// Type encoding: @16@0:8
// Implementation: 0x105a76a10

// -[SCSpectaclesFlightImuCalibrationController _startFlightImuCalibration]
// Type encoding: v16@0:8
// Implementation: 0x105a76a18

// -[SCSpectaclesFlightImuCalibrationController _stopFlightImuCalibration]
// Type encoding: v16@0:8
// Implementation: 0x105a76ac8

// -[SCSpectaclesFlightImuCalibrationController _restartCheeriosIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105a76ad0

// -[SCSpectaclesFlightImuCalibrationController _handleCalibrationStatusEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a76b54

// -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationCompleteState]
// Type encoding: v16@0:8
// Implementation: 0x105a76be8

// -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationErrorState]
// Type encoding: v16@0:8
// Implementation: 0x105a76c2c

// -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationDoingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a76c48

// -[SCSpectaclesFlightImuCalibrationController _isCurrentCalibrationPhaseFinishedWithResults:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a76c94

// -[SCSpectaclesFlightImuCalibrationController _presentCancelCalibrationAlertDialog]
// Type encoding: v16@0:8
// Implementation: 0x105a76d60

// -[SCSpectaclesFlightImuCalibrationController _presentCalibrationErrorAlertDialog]
// Type encoding: v16@0:8
// Implementation: 0x105a76ff0

// -[SCSpectaclesFlightImuCalibrationController _presentDownloadAssetsErrorAlertDialog]
// Type encoding: v16@0:8
// Implementation: 0x105a77210

// -[SCSpectaclesFlightImuCalibrationController _presentAlertDialog:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a77414

// -[SCSpectaclesFlightImuCalibrationController _dismissCalibrationPage]
// Type encoding: v16@0:8
// Implementation: 0x105a7753c

// -[SCSpectaclesFlightImuCalibrationController _loadingPageViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105a77570

// -[SCSpectaclesFlightImuCalibrationController _emitCalibrationInProgressPageViewModelWithPhase:phaseState:currentPhaseSucceeded:currentPhaseFailed:]
// Type encoding: v40@0:8q16q24B32B36
// Implementation: 0x105a77608

// -[SCSpectaclesFlightImuCalibrationController _emitCalibrationCompletePageViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105a77738

// -[SCSpectaclesFlightImuCalibrationController _trayTitleForPhase:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a7784c

// -[SCSpectaclesFlightImuCalibrationController _phaseStateStringForPhaseState:]
// Type encoding: @24@0:8q16
// Implementation: 0x105a778f4

// -[SCSpectaclesFlightImuCalibrationController _videoViewModelIdFromPhase:phaseState:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x105a7791c

// -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveStartCalibrationResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a779b8

// -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveStopCalibrationResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a779d4

// -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveRestartDeviceResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a779d8

// -[SCSpectaclesFlightImuCalibrationController _handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a779dc

// -[SCSpectaclesFlightImuCalibrationController _tapDoneButton]
// Type encoding: v16@0:8
// Implementation: 0x105a77ac0

// -[SCSpectaclesFlightImuCalibrationController _tapCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x105a77b50

// -[SCSpectaclesFlightImuCalibrationController _videoPlayToEnd]
// Type encoding: v16@0:8
// Implementation: 0x105a77b54

// -[SCSpectaclesFlightImuCalibrationController _trayIconFinishedAnimating]
// Type encoding: v16@0:8
// Implementation: 0x105a77bec

// -[SCSpectaclesFlightImuCalibrationController _prefetchCalibrationVideos]
// Type encoding: v16@0:8
// Implementation: 0x105a77ca0

// -[SCSpectaclesFlightImuCalibrationController _fetchVideoViewModelsForUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105a77d94

// -[SCSpectaclesFlightImuCalibrationController _handleVideoViewModelsDict:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a77f4c

// -[SCSpectaclesFlightImuCalibrationController _startWatchdogTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a7820c

// -[SCSpectaclesFlightImuCalibrationController _cancelWatchdogTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a782ec

// -[SCSpectaclesFlightImuCalibrationController _logCancelCalibrationEvent]
// Type encoding: v16@0:8
// Implementation: 0x105a78328

// -[SCSpectaclesFlightImuCalibrationController _logErrorCalibrationEvent]
// Type encoding: v16@0:8
// Implementation: 0x105a783e8

// -[SCSpectaclesFlightImuCalibrationController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105a784a8

// -[SCSpectaclesFlightImuCalibrationController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a784c0

// -[SCSpectaclesFlightImuCalibrationController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a784cc

@end
