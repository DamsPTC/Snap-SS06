// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVenueInfoSticker
// Superclass: NSObject
// Address: 0x112c198b8

@interface SCVenueInfoSticker

// Property: error; attributes: T@"NSError",R,N,V_error
// Property: venues; attributes: T@"NSArray",R,C,N,V_venues
// Property: state; attributes: TQ,R,N,V_state
// Property: inferredVenueState; attributes: TQ,R,N,V_inferredVenueState
// Property: supportsReporting; attributes: TB,R,N,V_supportsReporting
// Property: inferredVenueName; attributes: T@"NSString",&,N,V_inferredVenueName
// Property: venueId; attributes: T@"NSString",&,N,V_venueId

// -[SCVenueInfoSticker initWithSupportsReporting:]
// Type encoding: @20@0:8B16
// Implementation: 0x10af2de98

// -[SCVenueInfoSticker setToBroadLocation]
// Type encoding: v16@0:8
// Implementation: 0x10af2df0c

// -[SCVenueInfoSticker beginLoading]
// Type encoding: v16@0:8
// Implementation: 0x10af2df1c

// -[SCVenueInfoSticker finishLoadingWithVenues:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af2df2c

// -[SCVenueInfoSticker finishLoadingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af2df3c

// -[SCVenueInfoSticker beginLoadingInferredVenue]
// Type encoding: v16@0:8
// Implementation: 0x10af2df4c

// -[SCVenueInfoSticker finishLoadingWithInferredVenueName:venueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af2df5c

// -[SCVenueInfoSticker finishLoadingInferredVenueWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af2df6c

// -[SCVenueInfoSticker _updateState:venues:error:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x10af2df7c

// -[SCVenueInfoSticker _updateInferredState:inferredVenueName:venueId:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x10af2e00c

// -[SCVenueInfoSticker inferredVenueName]
// Type encoding: @16@0:8
// Implementation: 0x10af2e0a8

// -[SCVenueInfoSticker setInferredVenueName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af2e0b0

// -[SCVenueInfoSticker venueId]
// Type encoding: @16@0:8
// Implementation: 0x10af2e0e0

// -[SCVenueInfoSticker setVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af2e0e8

// -[SCVenueInfoSticker error]
// Type encoding: @16@0:8
// Implementation: 0x10af2e118

// -[SCVenueInfoSticker venues]
// Type encoding: @16@0:8
// Implementation: 0x10af2e120

// -[SCVenueInfoSticker state]
// Type encoding: Q16@0:8
// Implementation: 0x10af2e128

// -[SCVenueInfoSticker inferredVenueState]
// Type encoding: Q16@0:8
// Implementation: 0x10af2e130

// -[SCVenueInfoSticker supportsReporting]
// Type encoding: B16@0:8
// Implementation: 0x10af2e138

// -[SCVenueInfoSticker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af2e140

@end
