// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGNotificationButton
// Superclass: NSObject
// Address: 0x112ce5698

@interface SIGNotificationButton

// Property: buttonStyle; attributes: TQ,R,N
// Property: buttonText; attributes: T@"NSString",R,C,N
// Property: buttonIcon; attributes: T@"UIImage",R,N
// Property: buttonIconFuture; attributes: T@"SCFuture",R,N
// Property: contentModeDetail; attributes: T@"SIGNotificationButtonContentModeDetail",R,N

// -[SIGNotificationButton initWithButtonText:buttonIcon:buttonIconFuture:contentModeDetail:buttonStyle:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x10b807204

// -[SIGNotificationButton buttonStyle]
// Type encoding: Q16@0:8
// Implementation: 0x10b8072f0

// -[SIGNotificationButton buttonText]
// Type encoding: @16@0:8
// Implementation: 0x10b8072f8

// -[SIGNotificationButton buttonIcon]
// Type encoding: @16@0:8
// Implementation: 0x10b807320

// -[SIGNotificationButton buttonIconFuture]
// Type encoding: @16@0:8
// Implementation: 0x10b807348

// -[SIGNotificationButton contentModeDetail]
// Type encoding: @16@0:8
// Implementation: 0x10b807370

// -[SIGNotificationButton asyncButtonIconWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b807398

// -[SIGNotificationButton .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b8077c4

// +[SIGNotificationButton buttonText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b807454

// +[SIGNotificationButton buttonText:buttonIcon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b8074c4

// +[SIGNotificationButton buttonTextGray:buttonIcon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b80753c

// +[SIGNotificationButton buttonIcon:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b8075b4

// +[SIGNotificationButton buttonIcon:contentMode:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b8075bc

// +[SIGNotificationButton buttonIcon:contentMode:desiredButtonSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x10b8075cc

// +[SIGNotificationButton buttonIconFuture:contentMode:desiredButtonSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x10b8075d8

// +[SIGNotificationButton buttonIcon:buttonIconFuture:contentMode:desiredButtonSize:]
// Type encoding: @56@0:8@16@24q32{CGSize=dd}40
// Implementation: 0x10b8075e8

// +[SIGNotificationButton buttonIcon:contentModeDetail:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b8076bc

// +[SIGNotificationButton buttonIconFuture:contentModeDetail:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b807740

@end
