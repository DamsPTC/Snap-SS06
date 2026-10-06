// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHomeDeviceInfoProvider
// Superclass: NSObject
// Address: 0x112a242d8

@interface SCSpectaclesHomeDeviceInfoProvider

// Property: displayNameObservable; attributes: T@"SCBridgeObservable",&,N,V_displayNameObservable
// Property: hardwareVersion; attributes: T@"<SCComposerSpectaclesHomeDeviceHardwareVersion>",?,&,N,V_hardwareVersion
// Property: deviceSerialNumber; attributes: T@"NSString",?,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHomeDeviceInfoProvider initWithDevice:spectaclesManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10523727c

// -[SCSpectaclesHomeDeviceInfoProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105237400

// -[SCSpectaclesHomeDeviceInfoProvider spectaclesDeviceDidUpdateDeviceName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10523740c

// -[SCSpectaclesHomeDeviceInfoProvider displayNameObservable]
// Type encoding: @16@0:8
// Implementation: 0x10523747c

// -[SCSpectaclesHomeDeviceInfoProvider setDisplayNameObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105237484

// -[SCSpectaclesHomeDeviceInfoProvider hardwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x1052374b4

// -[SCSpectaclesHomeDeviceInfoProvider setHardwareVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052374bc

// -[SCSpectaclesHomeDeviceInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052374ec

@end
