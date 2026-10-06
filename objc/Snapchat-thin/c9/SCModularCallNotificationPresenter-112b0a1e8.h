// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModularCallNotificationPresenter
// Superclass: NSObject
// Address: 0x112b0a1e8

@interface SCModularCallNotificationPresenter

// Property: containerView; attributes: T@"UIView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCModularCallNotificationPresenter initWithNotificationPool:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069be9fc

// -[SCModularCallNotificationPresenter clearQueue]
// Type encoding: v16@0:8
// Implementation: 0x1069bea84

// -[SCModularCallNotificationPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1069bea8c

// -[SCModularCallNotificationPresenter emitNotificationWithMessage:type:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1069bea98

// -[SCModularCallNotificationPresenter _emitNotificationWithMessage:type:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1069bebb0

// -[SCModularCallNotificationPresenter containerView]
// Type encoding: @16@0:8
// Implementation: 0x1069beca8

// -[SCModularCallNotificationPresenter presentNotificationOverView:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069befd4

// -[SCModularCallNotificationPresenter debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x1069bf5d4

// -[SCModularCallNotificationPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069bf5e0

@end
