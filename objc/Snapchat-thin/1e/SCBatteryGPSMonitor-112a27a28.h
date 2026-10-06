// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryGPSMonitor
// Superclass: NSObject
// Address: 0x112a27a28

@interface SCBatteryGPSMonitor

// Property: isGPSOn; attributes: TB,R,N,V_isGPSOn

// -[SCBatteryGPSMonitor initWithBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10011b704

// -[SCBatteryGPSMonitor _initWithQueuePerformer:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011b83c

// -[SCBatteryGPSMonitor didStartUpdatingLocation:startTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052dad5c

// -[SCBatteryGPSMonitor _didStartUpdatingLocation:startTime:inBackground:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052daebc

// -[SCBatteryGPSMonitor didStopUpdatingLocation:stopTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052dafe0

// -[SCBatteryGPSMonitor _didStopUpdatingLocation:stopTime:inBackground:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052db140

// -[SCBatteryGPSMonitor didRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052db24c

// -[SCBatteryGPSMonitor _locationManagerDidRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:inBackground:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1052db3c0

// -[SCBatteryGPSMonitor didRequestStopUpdatingLocationWithAttributedFeature:stopTime:userDidGrantAuthorization:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052db6d8

// -[SCBatteryGPSMonitor _locationManagerDidRequestStopUpdatingLocationWithAttributedFeature:endTime:userDidGrantAuthorization:inBackground:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1052db84c

// -[SCBatteryGPSMonitor _logLocationUpdateRequestEndForCaller:stoppedByCaller:endTime:inBackground:]
// Type encoding: v40@0:8@16B24@28B36
// Implementation: 0x1052db994

// -[SCBatteryGPSMonitor gpsUsageFromAppOpenUntilTimestamp:onAppBackground:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052dbc80

// -[SCBatteryGPSMonitor _gpsUsageFromAppOpenUntilTimestamp:onAppBackground:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052dbe48

// -[SCBatteryGPSMonitor backgroundGpsUsageWithStartTime:endTime:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1052dd5c4

// -[SCBatteryGPSMonitor _backgroundGpsUsageWithStartTime:endTime:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1052dd77c

// -[SCBatteryGPSMonitor resetGPSUsageRecordWhenAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x1052dd9f8

// -[SCBatteryGPSMonitor _resetGPSUsageRecordWhenAppOpenAtTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ddb18

// -[SCBatteryGPSMonitor _didEnterBackgroundAtTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ddcbc

// -[SCBatteryGPSMonitor _appInBackground]
// Type encoding: B16@0:8
// Implementation: 0x1052dde9c

// -[SCBatteryGPSMonitor isGPSOn]
// Type encoding: B16@0:8
// Implementation: 0x1052de154

// -[SCBatteryGPSMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052de15c

@end
