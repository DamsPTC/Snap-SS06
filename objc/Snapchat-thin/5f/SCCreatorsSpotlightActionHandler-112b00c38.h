// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreatorsSpotlightActionHandler
// Superclass: NSObject
// Address: 0x112b00c38

@interface SCCreatorsSpotlightActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreatorsSpotlightActionHandler initWithSpotlightRepliesRequestSender:ourStoryDeepLinkScopeExposer:viewController:safetyReportScopeExposer:safetyReportScopeDelegate:spotlightRepliesUpdateAnnouncer:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10682a50c

// -[SCCreatorsSpotlightActionHandler approveReplyWithSnapId:replyIdLowBits:replyIdHighBits:callback:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x10682a674

// -[SCCreatorsSpotlightActionHandler rejectReplyWithSnapId:replyIdLowBits:replyIdHighBits:callback:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x10682a708

// -[SCCreatorsSpotlightActionHandler reportReplyWithUserId:snapId:replyIdLowBits:replyIdHighBits:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10682a79c

// -[SCCreatorsSpotlightActionHandler openSpotlightSnapWithSnapId:commentsDefaultTab:baseView:storyPlayerModerationData:commentInteractionInfo:compositeStoryId:]
// Type encoding: v60@0:8@16i24@28@36@44@52
// Implementation: 0x10682a8f4

// -[SCCreatorsSpotlightActionHandler _openSpotlightSnapWithSnapId:commentsDefaultTab:baseView:storyPlayerModerationData:commentInteractionInfo:compositeStoryId:hashtag:musicId:]
// Type encoding: v76@0:8@16i24@28@36@44@52@60@68
// Implementation: 0x10682a914

// -[SCCreatorsSpotlightActionHandler observeReplyUpdatesWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10682ac40

// -[SCCreatorsSpotlightActionHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10682ac70

// -[SCCreatorsSpotlightActionHandler presentingViewControllerForOurStoryDeepLinkHandlerScope]
// Type encoding: @16@0:8
// Implementation: 0x10682ac7c

// -[SCCreatorsSpotlightActionHandler removeOurStoryDeeplinkScope]
// Type encoding: v16@0:8
// Implementation: 0x10682ac94

// -[SCCreatorsSpotlightActionHandler handleSpotlightSnapDeepLinkWithSnapId:compositeStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10682acd4

// -[SCCreatorsSpotlightActionHandler handleSpotlightSnapDeepLinkWithSnapId:compositeStoryId:hashtag:musicId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10682acec

// -[SCCreatorsSpotlightActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10682ad20

// -[SCCreatorsSpotlightActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10682ae88

@end
