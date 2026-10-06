// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendActionContextImpl
// Superclass: NSObject
// Address: 0x112a13848

@interface SCFriendActionContextImpl

// Property: modalUIContainer; attributes: T@"<SCUIContainer>",R,N
// Property: presentingViewController_LEGACY_DO_NOT_USE; attributes: T@"UIViewController",R,W,N,V_presentingViewController
// Property: delegate; attributes: T@"<SCFriendActionDelegate>",W,N,V_delegate
// Property: plugins; attributes: T@"NSHashTable",&,N,V_plugins
// Property: sourcePageType; attributes: Tq,R,N,V_sourcePageType
// Property: sessionId; attributes: T@"NSString",R,N,V_sessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendActionContextImpl initWithLoggingService:sourcePageType:sessionId:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x105068b74

// -[SCFriendActionContextImpl setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105068c20

// -[SCFriendActionContextImpl modalUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105068c2c

// -[SCFriendActionContextImpl logActionWithName:]
// Type encoding: v24@0:8q16
// Implementation: 0x105068c84

// -[SCFriendActionContextImpl presentingViewController_LEGACY_DO_NOT_USE]
// Type encoding: @16@0:8
// Implementation: 0x105068c94

// -[SCFriendActionContextImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105068cac

// -[SCFriendActionContextImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105068cc4

// -[SCFriendActionContextImpl plugins]
// Type encoding: @16@0:8
// Implementation: 0x105068cd0

// -[SCFriendActionContextImpl setPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105068cd8

// -[SCFriendActionContextImpl sourcePageType]
// Type encoding: q16@0:8
// Implementation: 0x105068d08

// -[SCFriendActionContextImpl sessionId]
// Type encoding: @16@0:8
// Implementation: 0x105068d10

// -[SCFriendActionContextImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105068d18

@end
