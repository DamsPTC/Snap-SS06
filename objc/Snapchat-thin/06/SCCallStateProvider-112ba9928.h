// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCallStateProvider
// Superclass: NSObject
// Address: 0x112ba9928

@interface SCCallStateProvider

// Property: hasAnyCallingActivity; attributes: TB,R,N,V_hasAnyCallingActivity
// Property: isParticipatingInAnyCall; attributes: TB,R,N,V_isParticipatingInAnyCall
// Property: hasCallKitCall; attributes: TB,R,N
// Property: screenSharingState; attributes: Tq,R,N
// Property: conversationIdsToCalls; attributes: T@"SCObservable",R,N
// Property: talkContextIdsToActiveCalls; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCallStateProvider initWithCallKitCallManager:screenCaptureServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1007ec460

// -[SCCallStateProvider initWithCallKitCallManager:screenCaptureServices:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1007ec4fc

// -[SCCallStateProvider removeSessionForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085db1bc

// -[SCCallStateProvider updateWithPresencePlatformActiveConversationsInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085db30c

// -[SCCallStateProvider conversationIdsToCalls]
// Type encoding: @16@0:8
// Implementation: 0x1085db43c

// -[SCCallStateProvider talkContextIdsToActiveCalls]
// Type encoding: @16@0:8
// Implementation: 0x1007ec650

// -[SCCallStateProvider callForConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085db444

// -[SCCallStateProvider activeCallForTalkContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085db44c

// -[SCCallStateProvider hasCallKitCall]
// Type encoding: B16@0:8
// Implementation: 0x1085db4c0

// -[SCCallStateProvider screenSharingState]
// Type encoding: q16@0:8
// Implementation: 0x1085db518

// -[SCCallStateProvider sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085db568

// -[SCCallStateProvider _notifyTalkContextToActiveCall]
// Type encoding: v16@0:8
// Implementation: 0x1085db784

// -[SCCallStateProvider _notifyConvoIdToCall]
// Type encoding: v16@0:8
// Implementation: 0x1085db7bc

// -[SCCallStateProvider _updateInternals]
// Type encoding: v16@0:8
// Implementation: 0x1085db7f4

// -[SCCallStateProvider _updateAndNotifyForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085db90c

// -[SCCallStateProvider _updatePresencePlatformActiveConvo]
// Type encoding: v16@0:8
// Implementation: 0x1085dbf08

// -[SCCallStateProvider hasAnyCallingActivity]
// Type encoding: B16@0:8
// Implementation: 0x1085dc320

// -[SCCallStateProvider isParticipatingInAnyCall]
// Type encoding: B16@0:8
// Implementation: 0x1085dc328

// -[SCCallStateProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085dc330

@end
