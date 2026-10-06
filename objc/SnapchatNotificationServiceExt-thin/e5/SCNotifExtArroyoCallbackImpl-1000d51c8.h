// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtArroyoCallbackImpl
// Superclass: NSObject
// Address: 0x1000d51c8

@interface SCNotifExtArroyoCallbackImpl

// Property: successCallback; attributes: T@?,R,N,V_successCallback
// Property: failureCallback; attributes: T@?,R,N,V_failureCallback
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotifExtArroyoCallbackImpl initWithSuccessCallback:failureCallback:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x10003fdf4

// -[SCNotifExtArroyoCallbackImpl onError:]
// Type encoding: v24@0:8q16
// Implementation: 0x10003fea0

// -[SCNotifExtArroyoCallbackImpl onComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003fecc

// -[SCNotifExtArroyoCallbackImpl onSuccess]
// Type encoding: v16@0:8
// Implementation: 0x10003fed8

// -[SCNotifExtArroyoCallbackImpl _convertStatus:]
// Type encoding: q24@0:8q16
// Implementation: 0x10003fee4

// -[SCNotifExtArroyoCallbackImpl successCallback]
// Type encoding: @?16@0:8
// Implementation: 0x10003fef8

// -[SCNotifExtArroyoCallbackImpl failureCallback]
// Type encoding: @?16@0:8
// Implementation: 0x10003ff00

// -[SCNotifExtArroyoCallbackImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003ff08

@end
