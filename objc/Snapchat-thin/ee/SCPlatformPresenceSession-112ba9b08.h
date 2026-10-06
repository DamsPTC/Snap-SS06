// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlatformPresenceSession
// Superclass: NSObject
// Address: 0x112ba9b08

@interface SCPlatformPresenceSession

// Property: sessionStateObservable; attributes: T@"SCObservable",R,V_sessionStateObservable
// Property: lastPlatformSessionState; attributes: T@"SCCPresencePlatformPresenceSessionState",R,V_lastPlatformSessionState

// -[SCPlatformPresenceSession initWithPlatformPresenceSession:platformUserActionSubject:crashLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1085de5a8

// -[SCPlatformPresenceSession _isDisposedForCommand:errorCode:messageDetail:]
// Type encoding: B36@0:8:16i24@28
// Implementation: 0x1085de7c8

// -[SCPlatformPresenceSession chatVisible]
// Type encoding: v16@0:8
// Implementation: 0x1085de958

// -[SCPlatformPresenceSession chatHidden]
// Type encoding: v16@0:8
// Implementation: 0x1085de9c0

// -[SCPlatformPresenceSession startPeeking]
// Type encoding: v16@0:8
// Implementation: 0x1085dea28

// -[SCPlatformPresenceSession processTypingActivity:typingActivityType:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1085dea90

// -[SCPlatformPresenceSession replyCameraVisible]
// Type encoding: v16@0:8
// Implementation: 0x1085debe4

// -[SCPlatformPresenceSession chatMediaVisible]
// Type encoding: v16@0:8
// Implementation: 0x1085dec4c

// -[SCPlatformPresenceSession extendChatMediaVisible]
// Type encoding: v16@0:8
// Implementation: 0x1085decb4

// -[SCPlatformPresenceSession dispose]
// Type encoding: v16@0:8
// Implementation: 0x1085ded1c

// -[SCPlatformPresenceSession sessionStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085ded78

// -[SCPlatformPresenceSession lastPlatformSessionState]
// Type encoding: @16@0:8
// Implementation: 0x1085ded84

// -[SCPlatformPresenceSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ded90

@end
