// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapMentionsPresenter
// Superclass: NSObject
// Address: 0x112a00b08

@interface SCSnapMentionsPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapMentionsPresenter initWithSnapRepostMentionScopeExposer:conversationIdResolver:viewController:storiesNetworkRequester:networkConnectivityMonitor:circumstanceEngine:storyPlayer:adRenderDataParser:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104e29e48

// -[SCSnapMentionsPresenter launchRepostMentionWithMediaId:mediaType:snapId:userId:musicTrackInfo:]
// Type encoding: v56@0:8@16d24@32@40@48
// Implementation: 0x104e29f90

// -[SCSnapMentionsPresenter launchPlaybackWithRawStoryCard:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e29f94

// -[SCSnapMentionsPresenter didDismissRepostMention]
// Type encoding: v16@0:8
// Implementation: 0x104e2a0b0

// -[SCSnapMentionsPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104e2a0f8

// -[SCSnapMentionsPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e2a104

@end
