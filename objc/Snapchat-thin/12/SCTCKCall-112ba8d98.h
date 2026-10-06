// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCKCall
// Superclass: NSObject
// Address: 0x112ba8d98

@interface SCTCKCall

// Property: uuid; attributes: T@"NSUUID",R,N,V_uuid
// Property: talkContext; attributes: T@"<SCTalkContext>",R,N,V_talkContext
// Property: initialCallTitle; attributes: T@"NSString",R,N,V_initialCallTitle
// Property: initialConvoId; attributes: T@"NSString",R,N,V_initialConvoId
// Property: disposableObserverLifecycle; attributes: T@"SCDisposableObserverLifecycle",R,N,V_disposableObserverLifecycle
// Property: media; attributes: TQ,N,V_media
// Property: muted; attributes: TB,N,V_muted
// Property: isIncomingCall; attributes: TB,N,V_isIncomingCall
// Property: isHangout; attributes: TB,N,V_isHangout
// Property: isConnected; attributes: TB,N,V_isConnected
// Property: answeredInApp; attributes: TB,N,V_answeredInApp
// Property: callTitle; attributes: T@"NSString",&,N,V_callTitle

// -[SCTCKCall createCallHandle]
// Type encoding: @16@0:8
// Implementation: 0x1085ac328

// -[SCTCKCall createStartCallActionWithVideo:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085ac3c0

// -[SCTCKCall createEndCallAction]
// Type encoding: @16@0:8
// Implementation: 0x1085ac454

// -[SCTCKCall createAnswerCallAction]
// Type encoding: @16@0:8
// Implementation: 0x1085ac4b0

// -[SCTCKCall createSetMutedCallAction:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085ac50c

// -[SCTCKCall initGhostCall]
// Type encoding: @16@0:8
// Implementation: 0x1085ac578

// -[SCTCKCall initWithTalkContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085ac600

// -[SCTCKCall setCallTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ac6f4

// -[SCTCKCall setPendingStartCallCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085ac740

// -[SCTCKCall runPendingStartCallCompletion:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac770

// -[SCTCKCall uuid]
// Type encoding: @16@0:8
// Implementation: 0x1085ac7b4

// -[SCTCKCall talkContext]
// Type encoding: @16@0:8
// Implementation: 0x1085ac7bc

// -[SCTCKCall initialCallTitle]
// Type encoding: @16@0:8
// Implementation: 0x1085ac7c4

// -[SCTCKCall initialConvoId]
// Type encoding: @16@0:8
// Implementation: 0x1085ac7cc

// -[SCTCKCall disposableObserverLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x1085ac7d4

// -[SCTCKCall media]
// Type encoding: Q16@0:8
// Implementation: 0x1085ac7dc

// -[SCTCKCall setMedia:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085ac7e4

// -[SCTCKCall muted]
// Type encoding: B16@0:8
// Implementation: 0x1085ac7ec

// -[SCTCKCall setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac7f4

// -[SCTCKCall isIncomingCall]
// Type encoding: B16@0:8
// Implementation: 0x1085ac7fc

// -[SCTCKCall setIsIncomingCall:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac804

// -[SCTCKCall isHangout]
// Type encoding: B16@0:8
// Implementation: 0x1085ac80c

// -[SCTCKCall setIsHangout:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac814

// -[SCTCKCall isConnected]
// Type encoding: B16@0:8
// Implementation: 0x1085ac81c

// -[SCTCKCall setIsConnected:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac824

// -[SCTCKCall answeredInApp]
// Type encoding: B16@0:8
// Implementation: 0x1085ac82c

// -[SCTCKCall setAnsweredInApp:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ac834

// -[SCTCKCall callTitle]
// Type encoding: @16@0:8
// Implementation: 0x1085ac83c

// -[SCTCKCall .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ac844

@end
