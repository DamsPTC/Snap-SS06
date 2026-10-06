// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaContent
// Superclass: NSObject
// Address: 0x112c7caf8

@interface SCChatMediaContent

// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: iv; attributes: T@"NSString",R,C,N,V_iv
// Property: rotationLocked; attributes: TB,R,N,V_rotationLocked
// Property: mediaType; attributes: Tq,R,N,V_mediaType
// Property: mediaLoadState; attributes: Tq,R,N,V_mediaLoadState
// Property: messageBodyType; attributes: Tq,R,N,V_messageBodyType
// Property: shouldBlockDownload; attributes: TB,R,N,V_shouldBlockDownload
// Property: messageTimestamp; attributes: T@"NSDate",R,C,N,V_messageTimestamp
// Property: messageSender; attributes: T@"NSString",R,C,N,V_messageSender
// Property: width; attributes: T@"NSNumber",R,C,N,V_width
// Property: height; attributes: T@"NSNumber",R,C,N,V_height
// Property: isZipped; attributes: TB,R,N,V_isZipped
// Property: duration; attributes: T@"NSNumber",R,C,N,V_duration
// Property: isInfiniteDuration; attributes: TB,R,N,V_isInfiniteDuration
// Property: snapAttachments; attributes: T@"NSArray",R,C,N,V_snapAttachments
// Property: venueId; attributes: T@"NSString",R,C,N,V_venueId
// Property: snapMetadata; attributes: T@"SCConversationSnapMetadata",R,C,N,V_snapMetadata
// Property: contentObject; attributes: T@"NSData",R,C,N,V_contentObject
// Property: thumbnailContentObject; attributes: T@"NSData",R,C,N,V_thumbnailContentObject
// Property: optimizedContentObject; attributes: T@"NSData",R,C,N,V_optimizedContentObject
// Property: overlayContentObject; attributes: T@"NSData",R,C,N,V_overlayContentObject
// Property: isEligibleForStreaming; attributes: TB,R,N,V_isEligibleForStreaming

// -[SCChatMediaContent toChatMediaDataForMessageId:analyticsMessageId:conversationId:isQuoted:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x108543198

// -[SCChatMediaContent composerChatMediaType]
// Type encoding: i16@0:8
// Implementation: 0x108543544

// -[SCChatMediaContent initWithMediaId:key:iv:rotationLocked:mediaType:mediaLoadState:messageBodyType:shouldBlockDownload:messageTimestamp:messageSender:width:height:isZipped:duration:isInfiniteDuration:snapAttachments:venueId:snapMetadata:contentObject:thumbnailContentObject:optimizedContentObject:overlayContentObject:isEligibleForStreaming:]
// Type encoding: @180@0:8@16@24@32B40q44q52q60B68@72@80@88@96B104@108B116@120@128@136@144@152@160@168B176
// Implementation: 0x100be7868

// -[SCChatMediaContent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b62dee8

// -[SCChatMediaContent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b62df0c

// -[SCChatMediaContent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b62e048

// -[SCChatMediaContent mediaId]
// Type encoding: @16@0:8
// Implementation: 0x100be7c20

// -[SCChatMediaContent key]
// Type encoding: @16@0:8
// Implementation: 0x100beac80

// -[SCChatMediaContent iv]
// Type encoding: @16@0:8
// Implementation: 0x100beac88

// -[SCChatMediaContent rotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x100beac90

// -[SCChatMediaContent mediaType]
// Type encoding: q16@0:8
// Implementation: 0x100beaca0

// -[SCChatMediaContent mediaLoadState]
// Type encoding: q16@0:8
// Implementation: 0x100beaca8

// -[SCChatMediaContent messageBodyType]
// Type encoding: q16@0:8
// Implementation: 0x100beacb8

// -[SCChatMediaContent shouldBlockDownload]
// Type encoding: B16@0:8
// Implementation: 0x100beacc0

// -[SCChatMediaContent messageTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x100beacc8

// -[SCChatMediaContent messageSender]
// Type encoding: @16@0:8
// Implementation: 0x100beacd0

// -[SCChatMediaContent width]
// Type encoding: @16@0:8
// Implementation: 0x100beacd8

// -[SCChatMediaContent height]
// Type encoding: @16@0:8
// Implementation: 0x100beace0

// -[SCChatMediaContent isZipped]
// Type encoding: B16@0:8
// Implementation: 0x100beace8

// -[SCChatMediaContent duration]
// Type encoding: @16@0:8
// Implementation: 0x100beacf8

// -[SCChatMediaContent isInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x100bead00

// -[SCChatMediaContent snapAttachments]
// Type encoding: @16@0:8
// Implementation: 0x100bead10

// -[SCChatMediaContent venueId]
// Type encoding: @16@0:8
// Implementation: 0x100bead50

// -[SCChatMediaContent snapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100bead90

// -[SCChatMediaContent contentObject]
// Type encoding: @16@0:8
// Implementation: 0x100bead98

// -[SCChatMediaContent thumbnailContentObject]
// Type encoding: @16@0:8
// Implementation: 0x100beada0

// -[SCChatMediaContent optimizedContentObject]
// Type encoding: @16@0:8
// Implementation: 0x100beade0

// -[SCChatMediaContent overlayContentObject]
// Type encoding: @16@0:8
// Implementation: 0x100beae20

// -[SCChatMediaContent isEligibleForStreaming]
// Type encoding: B16@0:8
// Implementation: 0x100beae60

// -[SCChatMediaContent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100be7c30

@end
