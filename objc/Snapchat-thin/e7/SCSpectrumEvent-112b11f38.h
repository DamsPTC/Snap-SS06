// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectrumEvent
// Superclass: NSObject
// Address: 0x112b11f38

@interface SCSpectrumEvent

// Property: sessionId; attributes: T@"NSString",R,N,V_sessionId
// Property: userGuid; attributes: T@"NSString",R,N,V_userGuid
// Property: appBuild; attributes: T@"NSString",R,N,V_appBuild
// Property: appVersion; attributes: T@"NSString",R,N,V_appVersion
// Property: osVersion; attributes: T@"NSString",R,N,V_osVersion
// Property: clientId; attributes: T@"NSString",R,N,V_clientId
// Property: locale; attributes: T@"NSString",R,N,V_locale
// Property: deviceModel; attributes: T@"NSString",R,N,V_deviceModel
// Property: accountAgeDays; attributes: Tq,R,N,V_accountAgeDays
// Property: appStartupType; attributes: Ti,R,N,V_appStartupType
// Property: clientNodepEpochMs; attributes: Tq,R,N,V_clientNodepEpochMs
// Property: spectrumEvent; attributes: T@"Event",R,N,V_spectrumEvent

// -[SCSpectrumEvent initWithSessionId:userGuid:appBuild:appVersion:osVersion:clientId:locale:deviceModel:accountAgeDays:appStartupType:clientNodepEpochMs:spectrumEvent:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72q80i88q92@100
// Implementation: 0x100553f40

// -[SCSpectrumEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106adab2c

// -[SCSpectrumEvent sessionId]
// Type encoding: @16@0:8
// Implementation: 0x100555e10

// -[SCSpectrumEvent userGuid]
// Type encoding: @16@0:8
// Implementation: 0x100555f48

// -[SCSpectrumEvent appBuild]
// Type encoding: @16@0:8
// Implementation: 0x100555f50

// -[SCSpectrumEvent appVersion]
// Type encoding: @16@0:8
// Implementation: 0x100555f58

// -[SCSpectrumEvent osVersion]
// Type encoding: @16@0:8
// Implementation: 0x100555f78

// -[SCSpectrumEvent clientId]
// Type encoding: @16@0:8
// Implementation: 0x100556158

// -[SCSpectrumEvent locale]
// Type encoding: @16@0:8
// Implementation: 0x100556160

// -[SCSpectrumEvent deviceModel]
// Type encoding: @16@0:8
// Implementation: 0x100556188

// -[SCSpectrumEvent accountAgeDays]
// Type encoding: q16@0:8
// Implementation: 0x100556190

// -[SCSpectrumEvent appStartupType]
// Type encoding: i16@0:8
// Implementation: 0x100556198

// -[SCSpectrumEvent clientNodepEpochMs]
// Type encoding: q16@0:8
// Implementation: 0x106adacf0

// -[SCSpectrumEvent spectrumEvent]
// Type encoding: @16@0:8
// Implementation: 0x100556b1c

// -[SCSpectrumEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106adacf8

@end
