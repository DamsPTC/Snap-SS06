// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeMessageWindowManager
// Superclass: NSObject
// Address: 0x112a43f98

@interface SCNativeMessageWindowManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeMessageWindowManager initWithNativeSession:windowUpdatesObservable:windowErrorsObservable:windowDestroyedObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10552773c

// -[SCNativeMessageWindowManager windowUpdatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105527830

// -[SCNativeMessageWindowManager windowErrorsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105527858

// -[SCNativeMessageWindowManager windowDestroyedObservable]
// Type encoding: @16@0:8
// Implementation: 0x105527880

// -[SCNativeMessageWindowManager createWindowForConversationWithId:params:isReset:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1055278a8

// -[SCNativeMessageWindowManager moveWindowBackForConversationId:numMessages:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105527940

// -[SCNativeMessageWindowManager moveWindowForwardForConversationId:numMessages:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1055279ac

// -[SCNativeMessageWindowManager _messageWindowManager]
// Type encoding: @16@0:8
// Implementation: 0x105527a18

// -[SCNativeMessageWindowManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105527a58

@end
