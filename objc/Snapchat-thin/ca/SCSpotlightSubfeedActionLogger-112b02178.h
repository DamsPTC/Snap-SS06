// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightSubfeedActionLogger
// Superclass: NSObject
// Address: 0x112b02178

@interface SCSpotlightSubfeedActionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightSubfeedActionLogger initWithUserTrackLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068552bc

// -[SCSpotlightSubfeedActionLogger addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106855358

// -[SCSpotlightSubfeedActionLogger removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106855360

// -[SCSpotlightSubfeedActionLogger _gestureWithActionType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106855368

// -[SCSpotlightSubfeedActionLogger _entryEventWithActionType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106855388

// -[SCSpotlightSubfeedActionLogger _exitEventWithActionType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1068553a8

// -[SCSpotlightSubfeedActionLogger _itemTypeSpecificForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068553c8

// -[SCSpotlightSubfeedActionLogger logSubfeedActionWithGesture:story:feedType:pageSessionId:pageType:section:itemType:operaSessionId:]
// Type encoding: v80@0:8q16@24@32@40q48q56q64@72
// Implementation: 0x106855744

// -[SCSpotlightSubfeedActionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106855934

// +[SCSpotlightSubfeedActionLogger announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10685534c

@end
