// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacySendToAttribution
// Superclass: NSObject
// Address: 0x112bcc4c8

@interface SCLegacySendToAttribution

// Property: sendToSessionId; attributes: T@"NSString",R,C,N,V_sendToSessionId
// Property: snapSource; attributes: Tq,R,N,V_snapSource
// Property: messageType; attributes: Tq,R,N,V_messageType
// Property: sourcePage; attributes: Tq,R,N,V_sourcePage
// Property: captureSessionId; attributes: T@"NSString",R,C,N,V_captureSessionId
// Property: contextSessionId; attributes: T@"NSString",R,C,N,V_contextSessionId
// Property: contentId; attributes: T@"NSString",R,C,N,V_contentId
// Property: lensIds; attributes: T@"NSArray",R,C,N,V_lensIds
// Property: isSponsoredSnap; attributes: TB,R,N,V_isSponsoredSnap
// Property: spectaclesSnapsOnly; attributes: TB,R,N,V_spectaclesSnapsOnly
// Property: isMusicSnap; attributes: TB,R,N,V_isMusicSnap
// Property: isImageSnap; attributes: TB,R,N,V_isImageSnap
// Property: isBatchCapture; attributes: TB,R,N,V_isBatchCapture
// Property: isMultiSelection; attributes: TB,R,N,V_isMultiSelection
// Property: isShortVideo; attributes: TB,R,N,V_isShortVideo
// Property: isEligibleForSpotlight; attributes: TB,R,N,V_isEligibleForSpotlight
// Property: isRemixingSpotlightVideo; attributes: TB,R,N,V_isRemixingSpotlightVideo
// Property: isCameosSnap; attributes: TB,R,N,V_isCameosSnap
// Property: isLensShare; attributes: TB,R,N,V_isLensShare
// Property: isTwoDTryOnSnap; attributes: TB,R,N,V_isTwoDTryOnSnap
// Property: shouldDisplayPolaroidEducation; attributes: TB,R,N,V_shouldDisplayPolaroidEducation

// -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:]
// Type encoding: @40@0:8q16q24q32
// Implementation: 0x108efa5a0

// -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:isEligibleForSpotlight:]
// Type encoding: @44@0:8q16q24q32B40
// Implementation: 0x108efa5d8

// -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:isLensShare:lensIds:]
// Type encoding: @52@0:8q16q24q32B40@44
// Implementation: 0x108efa61c

// -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:contextSessionId:]
// Type encoding: @48@0:8q16q24q32@40
// Implementation: 0x108efa658

// -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:captureSessionId:contextSessionId:contentId:lensIds:isSponsoredSnap:spectaclesSnapsOnly:isMusicSnap:isImageSnap:isBatchCapture:isMultiSelection:isShortVideo:isEligibleForSpotlight:isRemixingSpotlightVideo:isCameosSnap:isLensShare:isTwoDTryOnSnap:shouldDisplayPolaroidEducation:]
// Type encoding: @124@0:8q16q24q32@40@48@56@64B72B76B80B84B88B92B96B100B104B108B112B116B120
// Implementation: 0x108efa690

// -[SCLegacySendToAttribution initWithSendToSessionId:snapSource:messageType:sourcePage:captureSessionId:contextSessionId:contentId:lensIds:isSponsoredSnap:spectaclesSnapsOnly:isMusicSnap:isImageSnap:isBatchCapture:isMultiSelection:isShortVideo:isEligibleForSpotlight:isRemixingSpotlightVideo:isCameosSnap:isLensShare:isTwoDTryOnSnap:shouldDisplayPolaroidEducation:]
// Type encoding: @132@0:8@16q24q32q40@48@56@64@72B80B84B88B92B96B100B104B108B112B116B120B124B128
// Implementation: 0x108efaff4

// -[SCLegacySendToAttribution copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108efb1fc

// -[SCLegacySendToAttribution hash]
// Type encoding: Q16@0:8
// Implementation: 0x108efb220

// -[SCLegacySendToAttribution isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108efb348

// -[SCLegacySendToAttribution sendToSessionId]
// Type encoding: @16@0:8
// Implementation: 0x108efb538

// -[SCLegacySendToAttribution snapSource]
// Type encoding: q16@0:8
// Implementation: 0x108efb540

// -[SCLegacySendToAttribution messageType]
// Type encoding: q16@0:8
// Implementation: 0x108efb548

// -[SCLegacySendToAttribution sourcePage]
// Type encoding: q16@0:8
// Implementation: 0x108efb550

// -[SCLegacySendToAttribution captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x108efb558

// -[SCLegacySendToAttribution contextSessionId]
// Type encoding: @16@0:8
// Implementation: 0x108efb560

// -[SCLegacySendToAttribution contentId]
// Type encoding: @16@0:8
// Implementation: 0x108efb568

// -[SCLegacySendToAttribution lensIds]
// Type encoding: @16@0:8
// Implementation: 0x108efb570

// -[SCLegacySendToAttribution isSponsoredSnap]
// Type encoding: B16@0:8
// Implementation: 0x108efb578

// -[SCLegacySendToAttribution spectaclesSnapsOnly]
// Type encoding: B16@0:8
// Implementation: 0x108efb580

// -[SCLegacySendToAttribution isMusicSnap]
// Type encoding: B16@0:8
// Implementation: 0x108efb588

// -[SCLegacySendToAttribution isImageSnap]
// Type encoding: B16@0:8
// Implementation: 0x108efb590

// -[SCLegacySendToAttribution isBatchCapture]
// Type encoding: B16@0:8
// Implementation: 0x108efb598

// -[SCLegacySendToAttribution isMultiSelection]
// Type encoding: B16@0:8
// Implementation: 0x108efb5a0

// -[SCLegacySendToAttribution isShortVideo]
// Type encoding: B16@0:8
// Implementation: 0x108efb5a8

// -[SCLegacySendToAttribution isEligibleForSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x108efb5b0

// -[SCLegacySendToAttribution isRemixingSpotlightVideo]
// Type encoding: B16@0:8
// Implementation: 0x108efb5b8

// -[SCLegacySendToAttribution isCameosSnap]
// Type encoding: B16@0:8
// Implementation: 0x108efb5c0

// -[SCLegacySendToAttribution isLensShare]
// Type encoding: B16@0:8
// Implementation: 0x108efb5c8

// -[SCLegacySendToAttribution isTwoDTryOnSnap]
// Type encoding: B16@0:8
// Implementation: 0x108efb5d0

// -[SCLegacySendToAttribution shouldDisplayPolaroidEducation]
// Type encoding: B16@0:8
// Implementation: 0x108efb5d8

// -[SCLegacySendToAttribution .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108efb5e0

@end
