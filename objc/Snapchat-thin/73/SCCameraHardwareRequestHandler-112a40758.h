// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraHardwareRequestHandler
// Superclass: NSObject
// Address: 0x112a40758

@interface SCCameraHardwareRequestHandler

// Property: lastEvent; attributes: T@"SCCameraRequestHandlerEvent",&,N,V_lastEvent

// -[SCCameraHardwareRequestHandler initWithCameraOperationFactory:hardwarePerformer:cameraPermissionObservable:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000d32d4

// -[SCCameraHardwareRequestHandler _activateQueue]
// Type encoding: v16@0:8
// Implementation: 0x1000f3a48

// -[SCCameraHardwareRequestHandler _deactivateQueue]
// Type encoding: v16@0:8
// Implementation: 0x1054cc954

// -[SCCameraHardwareRequestHandler submitHardwareRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000f3e58

// -[SCCameraHardwareRequestHandler submitBarrierForDependentOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054cc960

// -[SCCameraHardwareRequestHandler updates]
// Type encoding: @16@0:8
// Implementation: 0x1000d81c8

// -[SCCameraHardwareRequestHandler setLastEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353d44

// -[SCCameraHardwareRequestHandler lastEvent]
// Type encoding: @16@0:8
// Implementation: 0x1002a4f5c

// -[SCCameraHardwareRequestHandler canExecuteOperation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1002a4b74

// -[SCCameraHardwareRequestHandler didExecuteOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353c68

// -[SCCameraHardwareRequestHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054cca04

// +[SCCameraHardwareRequestHandler queueWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000d34b8

@end
