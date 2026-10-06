// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchV2PublicProfilePresenter
// Superclass: NSObject
// Address: 0x112a22d48

@interface SCSearchV2PublicProfilePresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchV2PublicProfilePresenter initWithFriendProfileScopeExposer:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:chatScopeExposer:chatScopeServices:presentingViewController:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10521486c

// -[SCSearchV2PublicProfilePresenter presentUserProfileWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052149b8

// -[SCSearchV2PublicProfilePresenter presentSnapProProfileWithProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214b44

// -[SCSearchV2PublicProfilePresenter presentLensCreatorCommunityProfileWithUserId:displayName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105214c98

// -[SCSearchV2PublicProfilePresenter lensCreatorProfiledDismissedWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214e1c

// -[SCSearchV2PublicProfilePresenter shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105214e3c

// -[SCSearchV2PublicProfilePresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105214e44

// -[SCSearchV2PublicProfilePresenter friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214e50

// -[SCSearchV2PublicProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105214e70

// -[SCSearchV2PublicProfilePresenter presentChat:deeplinkType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105214e7c

// -[SCSearchV2PublicProfilePresenter chatScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105214f78

// -[SCSearchV2PublicProfilePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105214f98

@end
