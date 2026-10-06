// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCallInfo
// Superclass: SCValdiMarshallableObject
// Address: 0x112c674c8

@interface SCTCallInfo

// Property: conversationName; attributes: T@"NSString",C,D,N
// Property: callMedia; attributes: Ti,D,N
// Property: localParticipant; attributes: T@"SCTParticipant",&,D,N
// Property: remoteParticipants; attributes: T@"NSArray",C,D,N
// Property: currentAudioDevice; attributes: T@"SCTAudioDevice",&,D,N
// Property: availableAudioDevices; attributes: T@"NSArray",C,D,N
// Property: isLoading; attributes: TB,D,N
// Property: isConnecting; attributes: TB,D,N
// Property: isGroup; attributes: TB,D,N
// Property: selectedLens; attributes: T@"SCTSelectedLens",&,D,N
// Property: isBestFriendConversation; attributes: T@"NSNumber",&,D,N
// Property: callJoinedTimestampMs; attributes: T@"NSNumber",&,D,N
// Property: callStateChangeReason; attributes: T@"NSNumber",&,D,N
// Property: activeScreenSharer; attributes: T@"SCTScreenShareState",&,D,N
// Property: localScreenShareState; attributes: T@"NSNumber",&,D,N
// Property: isHdVideoNegotiated; attributes: TB,D,N
// Property: callId; attributes: T@"NSString",C,D,N
// Property: localSessionId; attributes: T@"NSString",C,D,N
// Property: isSponsoredLensAttachmentOpen; attributes: T@"NSNumber",&,D,N
// Property: isPipStashed; attributes: T@"NSNumber",&,D,N

// -[SCTCallInfo initWithConversationName:callMedia:localParticipant:remoteParticipants:currentAudioDevice:availableAudioDevices:isLoading:isConnecting:isGroup:isHdVideoNegotiated:]
// Type encoding: @76@0:8@16i24@28@36@44@52B60B64B68B72
// Implementation: 0x10b088c18

// +[SCTCallInfo emptyCallInfo]
// Type encoding: @16@0:8
// Implementation: 0x1069bf7bc

// +[SCTCallInfo valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b088c88

@end
