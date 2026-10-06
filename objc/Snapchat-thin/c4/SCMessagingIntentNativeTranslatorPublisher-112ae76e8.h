// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingIntentNativeTranslatorPublisher
// Superclass: NSObject
// Address: 0x112ae76e8

@interface SCMessagingIntentNativeTranslatorPublisher

// Property: nativeSendAttemptEventObservable; attributes: T@"SCObservable",R,N

// -[SCMessagingIntentNativeTranslatorPublisher initWithNativeSendStartEventObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065b8768

// -[SCMessagingIntentNativeTranslatorPublisher _observeNativeSendAttempts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b880c

// -[SCMessagingIntentNativeTranslatorPublisher nativeSendAttemptEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1065b8930

// -[SCMessagingIntentNativeTranslatorPublisher _processSendStartEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b8958

// -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForSnapStartedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b8a08

// -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForChatMessageStartedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b8b84

// -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForDestinationInfo:isSnap:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065b8ca4

// -[SCMessagingIntentNativeTranslatorPublisher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065b8f10

@end
