// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedCapturerState
// Superclass: NSObject
// Address: 0x1129ac040

@interface SCManagedCapturerState

// Property: isInterrupted; attributes: TB,N,R,VisInterrupted
// Property: isMultitaskingCameraAccessEnabled; attributes: TB,N,R,VisMultitaskingCameraAccessEnabled
// Property: frameRate; attributes: Tq,N,R,VframeRate
// Property: stabilizationModeState; attributes: T@"SCCameraStabilizationState",N,R,VstabilizationModeState
// Property: lowLightCondition; attributes: TB,N,R,VlowLightCondition
// Property: adjustingExposure; attributes: TB,N,R,VadjustingExposure
// Property: adjustingFocus; attributes: TB,N,R,VadjustingFocus
// Property: devicePosition; attributes: Tq,N,R,VdevicePosition
// Property: secondaryDevicePositions; attributes: TQ,N,R,VsecondaryDevicePositions
// Property: exposureBias; attributes: T@"NSNumber",N,R,VexposureBias
// Property: flashSupported; attributes: TB,N,R,VflashSupported
// Property: torchSupported; attributes: TB,N,R,VtorchSupported
// Property: flashActive; attributes: TB,N,R,VflashActive
// Property: ringFlashSelectionInfo; attributes: T@"SCRingFlashSelectionInfo",N,R,VringFlashSelectionInfo
// Property: torchActive; attributes: TB,N,R,VtorchActive
// Property: lensesActive; attributes: TB,N,R,VlensesActive
// Property: arSessionActive; attributes: TB,N,R,VarSessionActive
// Property: lensProcessorReady; attributes: TB,N,R,VlensProcessorReady
// Property: directorModeActive; attributes: TB,N,R,VdirectorModeActive
// Property: lightingCondition; attributes: Tq,N,R,VlightingCondition
// Property: audioSessionActivated; attributes: TB,N,R,VaudioSessionActivated
// Property: lensActivationSourceOptions; attributes: TQ,N,R,VlensActivationSourceOptions
// Property: availabilityOptions; attributes: TQ,N,R,VavailabilityOptions
// Property: zoomFactor; attributes: Tf,N,R,VzoomFactor
// Property: ultraWideSupportedOnCurrentDevice; attributes: TB,N,R,VultraWideSupportedOnCurrentDevice
// Property: telephotoSupportedOnCurrentDevice; attributes: TB,N,R,VtelephotoSupportedOnCurrentDevice
// Property: hasUltraWideSupportedDevice; attributes: TB,N,R,VhasUltraWideSupportedDevice
// Property: hasTelephotoSupportedDevice; attributes: TB,N,R,VhasTelephotoSupportedDevice
// Property: telephotoSwitchZoomThreshold; attributes: T@"NSNumber",N,R,VtelephotoSwitchZoomThreshold
// Property: backCamerasOpticalZoomFactors; attributes: T@"NSArray",N,R
// Property: aspectRatio4By3ModeActive; attributes: TB,N,R,VaspectRatio4By3ModeActive
// Property: hasCapturerBeenInitialized; attributes: TB,N,R,VhasCapturerBeenInitialized
// Property: isHDModeActive; attributes: TB,N,R,VisHDModeActive
// Property: isFrontCameraNotFound; attributes: TB,N,R,VisFrontCameraNotFound
// Property: isBackCameraNotFound; attributes: TB,N,R,VisBackCameraNotFound
// Property: cameraLensSmudgeStatus; attributes: Tq,N,R,VcameraLensSmudgeStatus
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCManagedCapturerState isCarouselLensesActive]
// Type encoding: B16@0:8
// Implementation: 0x1043ca1e4

// -[SCManagedCapturerState updatedSourceOptionsForLensesActive:source:]
// Type encoding: Q28@0:8B16Q20
// Implementation: 0x1043ca1fc

// -[SCManagedCapturerState isInterrupted]
// Type encoding: B16@0:8
// Implementation: 0x1043d24cc

// -[SCManagedCapturerState isMultitaskingCameraAccessEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1043d24dc

// -[SCManagedCapturerState frameRate]
// Type encoding: q16@0:8
// Implementation: 0x1043d24ec

// -[SCManagedCapturerState stabilizationModeState]
// Type encoding: @16@0:8
// Implementation: 0x1043d24fc

// -[SCManagedCapturerState lowLightCondition]
// Type encoding: B16@0:8
// Implementation: 0x1008ad4c0

// -[SCManagedCapturerState adjustingExposure]
// Type encoding: B16@0:8
// Implementation: 0x100c722ac

// -[SCManagedCapturerState adjustingFocus]
// Type encoding: B16@0:8
// Implementation: 0x1043d250c

// -[SCManagedCapturerState devicePosition]
// Type encoding: q16@0:8
// Implementation: 0x1002a1e24

// -[SCManagedCapturerState secondaryDevicePositions]
// Type encoding: Q16@0:8
// Implementation: 0x1008ad46c

// -[SCManagedCapturerState exposureBias]
// Type encoding: @16@0:8
// Implementation: 0x1043d251c

// -[SCManagedCapturerState flashSupported]
// Type encoding: B16@0:8
// Implementation: 0x1043d252c

// -[SCManagedCapturerState torchSupported]
// Type encoding: B16@0:8
// Implementation: 0x1043d253c

// -[SCManagedCapturerState flashActive]
// Type encoding: B16@0:8
// Implementation: 0x1043d254c

// -[SCManagedCapturerState ringFlashSelectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10085eaa4

// -[SCManagedCapturerState torchActive]
// Type encoding: B16@0:8
// Implementation: 0x1043d255c

// -[SCManagedCapturerState lensesActive]
// Type encoding: B16@0:8
// Implementation: 0x100c6a2f8

// -[SCManagedCapturerState arSessionActive]
// Type encoding: B16@0:8
// Implementation: 0x1000db680

// -[SCManagedCapturerState lensProcessorReady]
// Type encoding: B16@0:8
// Implementation: 0x1043d256c

// -[SCManagedCapturerState directorModeActive]
// Type encoding: B16@0:8
// Implementation: 0x1043d257c

// -[SCManagedCapturerState lightingCondition]
// Type encoding: q16@0:8
// Implementation: 0x1043d258c

// -[SCManagedCapturerState audioSessionActivated]
// Type encoding: B16@0:8
// Implementation: 0x1043d259c

// -[SCManagedCapturerState lensActivationSourceOptions]
// Type encoding: Q16@0:8
// Implementation: 0x1043d25ac

// -[SCManagedCapturerState availabilityOptions]
// Type encoding: Q16@0:8
// Implementation: 0x1043d25bc

// -[SCManagedCapturerState zoomFactor]
// Type encoding: f16@0:8
// Implementation: 0x100c5ed5c

// -[SCManagedCapturerState ultraWideSupportedOnCurrentDevice]
// Type encoding: B16@0:8
// Implementation: 0x100c71bd0

// -[SCManagedCapturerState telephotoSupportedOnCurrentDevice]
// Type encoding: B16@0:8
// Implementation: 0x100c71be0

// -[SCManagedCapturerState hasUltraWideSupportedDevice]
// Type encoding: B16@0:8
// Implementation: 0x100c5ecd0

// -[SCManagedCapturerState hasTelephotoSupportedDevice]
// Type encoding: B16@0:8
// Implementation: 0x100c5ece0

// -[SCManagedCapturerState telephotoSwitchZoomThreshold]
// Type encoding: @16@0:8
// Implementation: 0x100c5ecf0

// -[SCManagedCapturerState backCamerasOpticalZoomFactors]
// Type encoding: @16@0:8
// Implementation: 0x100c5ed00

// -[SCManagedCapturerState aspectRatio4By3ModeActive]
// Type encoding: B16@0:8
// Implementation: 0x1043d25cc

// -[SCManagedCapturerState hasCapturerBeenInitialized]
// Type encoding: B16@0:8
// Implementation: 0x1043d25dc

// -[SCManagedCapturerState isHDModeActive]
// Type encoding: B16@0:8
// Implementation: 0x1043d25ec

// -[SCManagedCapturerState isFrontCameraNotFound]
// Type encoding: B16@0:8
// Implementation: 0x1043d25fc

// -[SCManagedCapturerState isBackCameraNotFound]
// Type encoding: B16@0:8
// Implementation: 0x1043d260c

// -[SCManagedCapturerState cameraLensSmudgeStatus]
// Type encoding: q16@0:8
// Implementation: 0x1043d261c

// -[SCManagedCapturerState initWithIsInterrupted:isMultitaskingCameraAccessEnabled:frameRate:stabilizationModeState:lowLightCondition:adjustingExposure:adjustingFocus:devicePosition:secondaryDevicePositions:exposureBias:flashSupported:torchSupported:flashActive:ringFlashSelectionInfo:torchActive:lensesActive:arSessionActive:lensProcessorReady:directorModeActive:lightingCondition:audioSessionActivated:lensActivationSourceOptions:availabilityOptions:zoomFactor:ultraWideSupportedOnCurrentDevice:telephotoSupportedOnCurrentDevice:hasUltraWideSupportedDevice:hasTelephotoSupportedDevice:telephotoSwitchZoomThreshold:backCamerasOpticalZoomFactors:aspectRatio4By3ModeActive:hasCapturerBeenInitialized:isHDModeActive:isFrontCameraNotFound:isBackCameraNotFound:cameraLensSmudgeStatus:]
// Type encoding: @208@0:8B16B20q24@32B40B44B48q52Q60@68B76B80B84@88B96B100B104B108B112q116B124Q128Q136f144B148B152B156B160@164@172B180B184B188B192B196q200
// Implementation: 0x1043d2cc0

// -[SCManagedCapturerState hash]
// Type encoding: q16@0:8
// Implementation: 0x1043d2ed0

// -[SCManagedCapturerState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1043d38d0

// -[SCManagedCapturerState copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x100353654

// -[SCManagedCapturerState description]
// Type encoding: @16@0:8
// Implementation: 0x1043d3950

// -[SCManagedCapturerState init]
// Type encoding: @16@0:8
// Implementation: 0x1043d3984

// -[SCManagedCapturerState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1002edb10

@end
