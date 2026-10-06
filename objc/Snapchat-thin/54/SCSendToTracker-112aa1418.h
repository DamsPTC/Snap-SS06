// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToTracker
// Superclass: NSObject
// Address: 0x112aa1418

@interface SCSendToTracker

// Property: selectionTracker; attributes: T@"<SCSelectionTracking>",R,N,V_selectionTracker
// Property: contactTracker; attributes: T@"SCLazy",R,N,V_contactTracker
// Property: eventObservable; attributes: T@"SCObservable",R,N
// Property: previewText; attributes: T@"NSString",C,N,V_previewText
// Property: toggleValues; attributes: T@"NSDictionary",C,N,V_toggleValues
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: topicTracker; attributes: T@"<SCSendToTopicTracking>",&,N,V_topicTracker
// Property: remixConfiguration; attributes: T@"SCRemixPreviewConfiguration",&,N,V_remixConfiguration
// Property: shouldCreateHighlight; attributes: TB,V_shouldCreateHighlight
// Property: shouldAutoApproveSpotlightReplies; attributes: TB,V_shouldAutoApproveSpotlightReplies
// Property: shouldShowSpotlightRepliesAutoApprovalToggle; attributes: TB,V_shouldShowSpotlightRepliesAutoApprovalToggle
// Property: shouldAllowSpotlightRemixing; attributes: TB,V_shouldAllowSpotlightRemixing
// Property: shouldShowAllowSpotlightRemixingToggle; attributes: TB,V_shouldShowAllowSpotlightRemixingToggle
// Property: canSaveHighlightsWithMemberRole; attributes: TB,V_canSaveHighlightsWithMemberRole
// Property: sponsor; attributes: T@"SCSnapSponsorInfo",C,N,V_sponsor
// Property: sponsorProfile; attributes: T@"SCCBusinessSponsoredSponsorableProfile",C,N,V_sponsorProfile
// Property: scheduleDate; attributes: T@"NSDate",&,N,V_scheduleDate
// Property: shareAnonymously; attributes: T@"SCShareAnonymouslyMetadata",&,V_shareAnonymously
// Property: externalContentShareDelegate; attributes: T@"<SCStandardExternalContentShareDelegate>",W,N,V_externalContentShareDelegate

// -[SCSendToTracker initWithSelectionTracker:contactTracker:snapProUserProfileIdProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e29efc

// -[SCSendToTracker isCreateHighlightEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105e2a010

// -[SCSendToTracker toggleValues]
// Type encoding: @16@0:8
// Implementation: 0x105e2a060

// -[SCSendToTracker emitEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a0f0

// -[SCSendToTracker eventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e2a0f8

// -[SCSendToTracker _shouldAllowRemixingToggleValue]
// Type encoding: B16@0:8
// Implementation: 0x105e2a120

// -[SCSendToTracker selectionTracker]
// Type encoding: @16@0:8
// Implementation: 0x105e2a23c

// -[SCSendToTracker contactTracker]
// Type encoding: @16@0:8
// Implementation: 0x105e2a244

// -[SCSendToTracker previewText]
// Type encoding: @16@0:8
// Implementation: 0x105e2a24c

// -[SCSendToTracker setPreviewText:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a254

// -[SCSendToTracker setToggleValues:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a25c

// -[SCSendToTracker topicTracker]
// Type encoding: @16@0:8
// Implementation: 0x105e2a264

// -[SCSendToTracker setTopicTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a26c

// -[SCSendToTracker shouldCreateHighlight]
// Type encoding: B16@0:8
// Implementation: 0x105e2a29c

// -[SCSendToTracker setShouldCreateHighlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a2a8

// -[SCSendToTracker shareAnonymously]
// Type encoding: @16@0:8
// Implementation: 0x105e2a2b0

// -[SCSendToTracker setShareAnonymously:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a2bc

// -[SCSendToTracker sponsor]
// Type encoding: @16@0:8
// Implementation: 0x105e2a2c4

// -[SCSendToTracker setSponsor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a2cc

// -[SCSendToTracker sponsorProfile]
// Type encoding: @16@0:8
// Implementation: 0x105e2a2d4

// -[SCSendToTracker setSponsorProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a2dc

// -[SCSendToTracker shouldAutoApproveSpotlightReplies]
// Type encoding: B16@0:8
// Implementation: 0x105e2a2e4

// -[SCSendToTracker setShouldAutoApproveSpotlightReplies:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a2f0

// -[SCSendToTracker shouldShowSpotlightRepliesAutoApprovalToggle]
// Type encoding: B16@0:8
// Implementation: 0x105e2a2f8

// -[SCSendToTracker setShouldShowSpotlightRepliesAutoApprovalToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a304

// -[SCSendToTracker shouldAllowSpotlightRemixing]
// Type encoding: B16@0:8
// Implementation: 0x105e2a30c

// -[SCSendToTracker setShouldAllowSpotlightRemixing:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a318

// -[SCSendToTracker shouldShowAllowSpotlightRemixingToggle]
// Type encoding: B16@0:8
// Implementation: 0x105e2a320

// -[SCSendToTracker setShouldShowAllowSpotlightRemixingToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a32c

// -[SCSendToTracker canSaveHighlightsWithMemberRole]
// Type encoding: B16@0:8
// Implementation: 0x105e2a334

// -[SCSendToTracker setCanSaveHighlightsWithMemberRole:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e2a340

// -[SCSendToTracker scheduleDate]
// Type encoding: @16@0:8
// Implementation: 0x105e2a348

// -[SCSendToTracker setScheduleDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a350

// -[SCSendToTracker remixConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105e2a380

// -[SCSendToTracker setRemixConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a388

// -[SCSendToTracker externalContentShareDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105e2a3b8

// -[SCSendToTracker setExternalContentShareDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e2a3d0

// -[SCSendToTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e2a3dc

@end
