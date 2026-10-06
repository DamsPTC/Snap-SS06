// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceSecurityManager
// Superclass: NSObject
// Address: 0x112a85178

@interface SCSpectaclesDeviceSecurityManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: deviceSecurityData; attributes: T@"SCSpectaclesUserDeviceSecurityData",R,N,V_deviceSecurityData
// Property: deviceSecurityDataResult; attributes: T@"SCObservable",R,N,V_deviceSecurityDataResult
// Property: setUserDevicePasswordDataResult; attributes: T@"SCObservable",R,N,V_setUserDevicePasswordDataResult
// Property: deviceSecurityVerifyPasscodeResult; attributes: T@"SCObservable",R,N,V_deviceSecurityVerifyPasscodeResult
// Property: factoryResetResult; attributes: T@"SCObservable",R,N,V_factoryResetResult

// -[SCSpectaclesDeviceSecurityManager initWithConnectionHub:device:analyticsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a541cc

// -[SCSpectaclesDeviceSecurityManager _updateNewUserDeviceSecurityDataResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a54314

// -[SCSpectaclesDeviceSecurityManager requestUserDeviceSecurityData]
// Type encoding: v16@0:8
// Implementation: 0x105a5431c

// -[SCSpectaclesDeviceSecurityManager setPhoneProximityEnabled:lagunaId:passcode:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x105a54360

// -[SCSpectaclesDeviceSecurityManager setLockOutEvent:lockOutTime:lagunaId:passcode:]
// Type encoding: v48@0:8Q16@24@32@40
// Implementation: 0x105a543a4

// -[SCSpectaclesDeviceSecurityManager turnOnRequirePasscodeWithLagunaId:passcode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a54464

// -[SCSpectaclesDeviceSecurityManager turnOffRequirePasscodeWithLagunaId:currentPasscode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a544b4

// -[SCSpectaclesDeviceSecurityManager changePasscode:newPasscode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a54504

// -[SCSpectaclesDeviceSecurityManager verifyPasscode:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a54548

// -[SCSpectaclesDeviceSecurityManager requestFactoryReset]
// Type encoding: v16@0:8
// Implementation: 0x105a5458c

// -[SCSpectaclesDeviceSecurityManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a545d0

// -[SCSpectaclesDeviceSecurityManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a54f08

// -[SCSpectaclesDeviceSecurityManager setActionSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a54f10

// -[SCSpectaclesDeviceSecurityManager logPasscodeOptionPresentation]
// Type encoding: v16@0:8
// Implementation: 0x105a54f24

// -[SCSpectaclesDeviceSecurityManager _logDeviceSecuritySettingsAction:lockOutTime:failureReason:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x105a54f34

// -[SCSpectaclesDeviceSecurityManager deviceSecurityData]
// Type encoding: @16@0:8
// Implementation: 0x105a54fac

// -[SCSpectaclesDeviceSecurityManager deviceSecurityDataResult]
// Type encoding: @16@0:8
// Implementation: 0x105a54fb4

// -[SCSpectaclesDeviceSecurityManager setUserDevicePasswordDataResult]
// Type encoding: @16@0:8
// Implementation: 0x105a54fbc

// -[SCSpectaclesDeviceSecurityManager deviceSecurityVerifyPasscodeResult]
// Type encoding: @16@0:8
// Implementation: 0x105a54fc4

// -[SCSpectaclesDeviceSecurityManager factoryResetResult]
// Type encoding: @16@0:8
// Implementation: 0x105a54fcc

// -[SCSpectaclesDeviceSecurityManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a54fd4

@end
