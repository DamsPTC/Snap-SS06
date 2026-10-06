// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestTrackingInfo
// Superclass: NSObject
// Address: 0x112c71e00

@interface SCRequestTrackingInfo

// Property: trackingId; attributes: T@"NSString",R,C,N,V_trackingId
// Property: expirationInDays; attributes: TQ,R,N,V_expirationInDays
// Property: type; attributes: T@"NSString",R,C,N,V_type
// Property: mediaType; attributes: T@"NSString",R,C,N,V_mediaType
// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: contentResolveTime; attributes: T@"NSNumber",R,C,N,V_contentResolveTime
// Property: mediaContextType; attributes: Tq,R,N,V_mediaContextType
// Property: requestId; attributes: T@"NSString",C,N,V_requestId

// -[SCRequestTrackingInfo initWithTrackingId:type:mediaType:expirationInDays:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10b26c7c4

// -[SCRequestTrackingInfo initWithTrackingId:mediaId:type:mediaType:contentResolveTime:mediaContextType:expirationInDays:]
// Type encoding: @72@0:8@16@24@32@40@48q56Q64
// Implementation: 0x10b26c7fc

// -[SCRequestTrackingInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26c93c

// -[SCRequestTrackingInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26c9dc

// -[SCRequestTrackingInfo trackingId]
// Type encoding: @16@0:8
// Implementation: 0x10b26ca84

// -[SCRequestTrackingInfo expirationInDays]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ca8c

// -[SCRequestTrackingInfo type]
// Type encoding: @16@0:8
// Implementation: 0x10b26ca94

// -[SCRequestTrackingInfo mediaType]
// Type encoding: @16@0:8
// Implementation: 0x10b26ca9c

// -[SCRequestTrackingInfo mediaId]
// Type encoding: @16@0:8
// Implementation: 0x10b26caa4

// -[SCRequestTrackingInfo contentResolveTime]
// Type encoding: @16@0:8
// Implementation: 0x10b26caac

// -[SCRequestTrackingInfo mediaContextType]
// Type encoding: q16@0:8
// Implementation: 0x10b26cab4

// -[SCRequestTrackingInfo requestId]
// Type encoding: @16@0:8
// Implementation: 0x10b26cabc

// -[SCRequestTrackingInfo setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26cac4

// -[SCRequestTrackingInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26cacc

@end
