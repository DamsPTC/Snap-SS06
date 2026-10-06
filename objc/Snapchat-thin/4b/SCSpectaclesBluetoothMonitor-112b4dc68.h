// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBluetoothMonitor
// Superclass: NSObject
// Address: 0x112b4dc68

@interface SCSpectaclesBluetoothMonitor

// Property: serialNumber; attributes: T@"NSString",C,N,V_serialNumber
// Property: delegate; attributes: T@"<SCSpectaclesBluetoothMonitorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesBluetoothMonitor initWithSerialNumber:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa0c88

// -[SCSpectaclesBluetoothMonitor _bluetoothDidConnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0d88

// -[SCSpectaclesBluetoothMonitor _bluetoothDidDisconnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0e1c

// -[SCSpectaclesBluetoothMonitor handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0eb0

// -[SCSpectaclesBluetoothMonitor responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106fa0f8c

// -[SCSpectaclesBluetoothMonitor connectedAccessory]
// Type encoding: @16@0:8
// Implementation: 0x106fa0f94

// -[SCSpectaclesBluetoothMonitor _isActiveAccessory:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fa11cc

// -[SCSpectaclesBluetoothMonitor serialNumber]
// Type encoding: @16@0:8
// Implementation: 0x106fa1260

// -[SCSpectaclesBluetoothMonitor setSerialNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa1268

// -[SCSpectaclesBluetoothMonitor delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fa1270

// -[SCSpectaclesBluetoothMonitor setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa1288

// -[SCSpectaclesBluetoothMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fa1294

// +[SCSpectaclesBluetoothMonitor connectedAccessoryForLagunaDeviceSerialNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa0fe8

@end
