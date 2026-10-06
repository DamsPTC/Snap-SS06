// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationData
// Superclass: SCDocObject
// Address: 0x112b24db8

@interface SCNotificationData

// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: enabledSetting; attributes: Tq,R,N,V_enabledSetting
// Property: privacySetting; attributes: Tq,R,N,V_privacySetting
// Property: deviceToken; attributes: T@"NSString",R,C,N,V_deviceToken
// Property: deviceVoipToken; attributes: T@"NSString",R,C,N,V_deviceVoipToken
// Property: bitmojiSetting; attributes: Tq,R,N,V_bitmojiSetting
// Property: deviceLocationPushToken; attributes: T@"NSString",R,C,N,V_deviceLocationPushToken

// -[SCNotificationData initWithName:enabledSetting:privacySetting:deviceToken:deviceVoipToken:bitmojiSetting:deviceLocationPushToken:]
// Type encoding: @72@0:8@16q24q32@40@48q56@64
// Implementation: 0x106c3bc40

// -[SCNotificationData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106c3bd98

// -[SCNotificationData hash]
// Type encoding: Q16@0:8
// Implementation: 0x106c3bdbc

// -[SCNotificationData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c3be8c

// -[SCNotificationData name]
// Type encoding: @16@0:8
// Implementation: 0x106c3bfcc

// -[SCNotificationData enabledSetting]
// Type encoding: q16@0:8
// Implementation: 0x106c3bfdc

// -[SCNotificationData privacySetting]
// Type encoding: q16@0:8
// Implementation: 0x106c3bfec

// -[SCNotificationData deviceToken]
// Type encoding: @16@0:8
// Implementation: 0x106c3bffc

// -[SCNotificationData deviceVoipToken]
// Type encoding: @16@0:8
// Implementation: 0x106c3c00c

// -[SCNotificationData bitmojiSetting]
// Type encoding: q16@0:8
// Implementation: 0x106c3c01c

// -[SCNotificationData deviceLocationPushToken]
// Type encoding: @16@0:8
// Implementation: 0x106c3c02c

// -[SCNotificationData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c3c03c

// +[SCNotificationData table]
// Type encoding: r*16@0:8
// Implementation: 0x106c3c214

// +[SCNotificationData immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x106c3c220

// +[SCNotificationData objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x106c3c4d8

@end
