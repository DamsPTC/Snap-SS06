// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBleMonitor
// Superclass: NSObject
// Address: 0x112b4da88

@interface SCSpectaclesBleMonitor

// Property: centralManager; attributes: T@"<SCSpectaclesBluetoothCentralManaging>",&,N,V_centralManager
// Property: state; attributes: Tq,N,V_state
// Property: identifier; attributes: T@"NSUUID",C,N,V_identifier
// Property: peripheral; attributes: T@"CBPeripheral",&,N,V_peripheral
// Property: lastPeripheralError; attributes: T@"NSError",&,N,V_lastPeripheralError
// Property: rssiTimer; attributes: T@"SCWeakTimer",&,N,V_rssiTimer
// Property: delegate; attributes: T@"<SCSpectaclesBleMonitorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesBleMonitor initWithCentralManager:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f9e838

// -[SCSpectaclesBleMonitor setupWithConnectedPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9e8e4

// -[SCSpectaclesBleMonitor connectPeripheralWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9eabc

// -[SCSpectaclesBleMonitor cancelBleConnection]
// Type encoding: v16@0:8
// Implementation: 0x106f9ec14

// -[SCSpectaclesBleMonitor _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f9eda8

// -[SCSpectaclesBleMonitor _retrievePeripheralAndReconnect]
// Type encoding: v16@0:8
// Implementation: 0x106f9efd0

// -[SCSpectaclesBleMonitor startRssiUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106f9f300

// -[SCSpectaclesBleMonitor _stopRssiUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106f9f384

// -[SCSpectaclesBleMonitor _sendReadRSSI]
// Type encoding: v16@0:8
// Implementation: 0x106f9f38c

// -[SCSpectaclesBleMonitor centralManagerDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f40c

// -[SCSpectaclesBleMonitor centralManager:didConnectPeripheral:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f9f518

// -[SCSpectaclesBleMonitor centralManager:didFailToConnectPeripheral:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9f59c

// -[SCSpectaclesBleMonitor centralManager:didDisconnectPeripheral:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9f67c

// -[SCSpectaclesBleMonitor peripheral]
// Type encoding: @16@0:8
// Implementation: 0x106f9f78c

// -[SCSpectaclesBleMonitor setPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f794

// -[SCSpectaclesBleMonitor lastPeripheralError]
// Type encoding: @16@0:8
// Implementation: 0x106f9f7c4

// -[SCSpectaclesBleMonitor setLastPeripheralError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f7cc

// -[SCSpectaclesBleMonitor delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f9f7fc

// -[SCSpectaclesBleMonitor setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f814

// -[SCSpectaclesBleMonitor centralManager]
// Type encoding: @16@0:8
// Implementation: 0x106f9f820

// -[SCSpectaclesBleMonitor setCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f828

// -[SCSpectaclesBleMonitor state]
// Type encoding: q16@0:8
// Implementation: 0x106f9f858

// -[SCSpectaclesBleMonitor setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f9f860

// -[SCSpectaclesBleMonitor identifier]
// Type encoding: @16@0:8
// Implementation: 0x106f9f868

// -[SCSpectaclesBleMonitor setIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f870

// -[SCSpectaclesBleMonitor rssiTimer]
// Type encoding: @16@0:8
// Implementation: 0x106f9f878

// -[SCSpectaclesBleMonitor setRssiTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9f880

// -[SCSpectaclesBleMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f9f8b0

@end
