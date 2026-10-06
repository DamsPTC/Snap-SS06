// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSnapKitImpl
// Superclass: SCFeature
// Address: 0x112acbb28

@interface SCFeatureSnapKitImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: canEnable; attributes: TB,N,V_canEnable
// Property: cameraDeepLinkViewController; attributes: T@"SCCameraDeepLinkViewController",&,N,V_cameraDeepLinkViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureSnapKitImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008d21f4

// -[SCFeatureSnapKitImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106103978

// -[SCFeatureSnapKitImpl _didBeginVideoRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061039ac

// -[SCFeatureSnapKitImpl _didFinishRecording:session:recordedVideo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061039b4

// -[SCFeatureSnapKitImpl _didFailRecording:session:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061039e8

// -[SCFeatureSnapKitImpl _didCancelRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061039f0

// -[SCFeatureSnapKitImpl _didGetError:forType:session:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1061039f8

// -[SCFeatureSnapKitImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3db20

// -[SCFeatureSnapKitImpl _didCapturePhoto]
// Type encoding: v16@0:8
// Implementation: 0x106103a00

// -[SCFeatureSnapKitImpl initWithUserSession:legacyCameraTooltipsService:cameraHardwareResource:cameraConfiguration:blizzardLogger:grapheneMetricsReporter:renderTarget:musicFeature:itemViewService:temporaryFileWriter:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x1008d1f14

// -[SCFeatureSnapKitImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10610262c

// -[SCFeatureSnapKitImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d24d4

// -[SCFeatureSnapKitImpl metadata]
// Type encoding: @16@0:8
// Implementation: 0x1061026c0

// -[SCFeatureSnapKitImpl creativeKitMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1061026d0

// -[SCFeatureSnapKitImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x106102740

// -[SCFeatureSnapKitImpl isCurrentlyDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x1008d250c

// -[SCFeatureSnapKitImpl hasActiveLensShare]
// Type encoding: B16@0:8
// Implementation: 0x1061027f0

// -[SCFeatureSnapKitImpl getLensId]
// Type encoding: @16@0:8
// Implementation: 0x106102868

// -[SCFeatureSnapKitImpl startToObserveLensChangeForLensId:activeLensObservable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061028f8

// -[SCFeatureSnapKitImpl _onLensChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106102c08

// -[SCFeatureSnapKitImpl setDeepLinkMetadata:userSession:toggleCamera:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106102d90

// -[SCFeatureSnapKitImpl setPreviewPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eb150

// -[SCFeatureSnapKitImpl logCameraLoadEventWithDeepLinkUrl:cameraDeepLinkMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106102e7c

// -[SCFeatureSnapKitImpl lensFailedToUnlock]
// Type encoding: v16@0:8
// Implementation: 0x106102f34

// -[SCFeatureSnapKitImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10610311c

// -[SCFeatureSnapKitImpl forwardCameraOverlayTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610312c

// -[SCFeatureSnapKitImpl forwardCameraTimerGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610313c

// -[SCFeatureSnapKitImpl setCanEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610314c

// -[SCFeatureSnapKitImpl _didToggleAvailability]
// Type encoding: v16@0:8
// Implementation: 0x10610316c

// -[SCFeatureSnapKitImpl cameraDeepLinkViewController]
// Type encoding: @16@0:8
// Implementation: 0x1061031d0

// -[SCFeatureSnapKitImpl _setupCameraPosition:toggleCamera:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10610330c

// -[SCFeatureSnapKitImpl canEnable]
// Type encoding: B16@0:8
// Implementation: 0x10610336c

// -[SCFeatureSnapKitImpl setCameraDeepLinkViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610337c

// -[SCFeatureSnapKitImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061033bc

@end
