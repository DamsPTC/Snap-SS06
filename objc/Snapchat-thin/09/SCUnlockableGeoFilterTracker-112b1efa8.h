// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableGeoFilterTracker
// Superclass: SCUnlockableTracker
// Address: 0x112b1efa8

@interface SCUnlockableGeoFilterTracker

// Property: sessionId; attributes: T@"NSString",C,N
// Property: carouselSize; attributes: TQ,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableGeoFilterTracker startWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf68c

// -[SCUnlockableGeoFilterTracker fireTrackWithSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf690

// -[SCUnlockableGeoFilterTracker trackAttachmentViewForFilterId:attachmentType:openTimestamp:viewTimeSec:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x106bbf760

// -[SCUnlockableGeoFilterTracker _fireFilterCarouselInteractionWithSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf998

// -[SCUnlockableGeoFilterTracker _convertInteraction:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bc0504

// -[SCUnlockableGeoFilterTracker _createProtoTrackWithSnapInfo:impressions:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bc0790

// -[SCUnlockableGeoFilterTracker _updateInteraction:existingInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bc090c

// -[SCUnlockableGeoFilterTracker _canTrack:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bc0a38

// -[SCUnlockableGeoFilterTracker newSwipeInteraction]
// Type encoding: @16@0:8
// Implementation: 0x106bc0aec

@end
