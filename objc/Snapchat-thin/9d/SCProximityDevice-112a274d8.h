// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProximityDevice
// Superclass: NSObject
// Address: 0x112a274d8

@interface SCProximityDevice

// Property: state; attributes: TB,N,V_state
// Property: delegate; attributes: T@"<SCProximityDeviceDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProximityDevice initWithDevice:notificationCenter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bba70

// -[SCProximityDevice applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052cffc4

// -[SCProximityDevice _onUIDeviceProximityStateChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d005c

// -[SCProximityDevice updateProximityMonitoringStatus:performer:completeHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1052d00f8

// -[SCProximityDevice delegate]
// Type encoding: @16@0:8
// Implementation: 0x1052d0220

// -[SCProximityDevice setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000f5694

// -[SCProximityDevice state]
// Type encoding: B16@0:8
// Implementation: 0x1052d0238

// -[SCProximityDevice setState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052d0240

// -[SCProximityDevice .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052d0248

@end
