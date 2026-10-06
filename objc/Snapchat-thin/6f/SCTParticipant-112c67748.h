// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTParticipant
// Superclass: SCValdiMarshallableObject
// Address: 0x112c67748

@interface SCTParticipant

// Property: userId; attributes: T@"NSString",C,D,N
// Property: displayName; attributes: T@"NSString",C,D,N
// Property: color; attributes: T@"NSString",C,D,N
// Property: callState; attributes: Ti,D,N
// Property: publishedMedia; attributes: Ti,D,N
// Property: isPausedVideo; attributes: TB,D,N
// Property: isSpeaking; attributes: TB,D,N
// Property: bitmojiAvatarId; attributes: T@"NSString",C,D,N
// Property: videoSinkId; attributes: T@"NSString",C,D,N
// Property: mediaIssueType; attributes: Ti,D,N
// Property: connectedLensState; attributes: T@"SCTConnectedLensState",&,D,N
// Property: platform; attributes: T@"NSNumber",&,D,N
// Property: selectedLensId; attributes: T@"NSString",C,D,N
// Property: videoFrameSize; attributes: T@"NSNumber",&,D,N

// -[SCTParticipant initWithUserId:displayName:color:callState:publishedMedia:isPausedVideo:isSpeaking:mediaIssueType:]
// Type encoding: @60@0:8@16@24@32i40i44B48B52i56
// Implementation: 0x10b0895f8

// +[SCTParticipant valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b089654

@end
