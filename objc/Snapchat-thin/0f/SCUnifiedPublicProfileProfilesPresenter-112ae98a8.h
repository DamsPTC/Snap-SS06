// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedPublicProfileProfilesPresenter
// Superclass: NSObject
// Address: 0x112ae98a8

@interface SCUnifiedPublicProfileProfilesPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedPublicProfileProfilesPresenter initWithFriendProfileScopeLauncher:friendActionSheetScopeLauncher:chatCameraScopeLauncher:chatCameraScopeServices:unifiedPublicProfileScopeDelegate:snapchatterFetcherHelper:userSession:rootViewController:placement:addSourceType:pageLauncher:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72q80q88@96
// Implementation: 0x1065fff7c

// -[SCUnifiedPublicProfileProfilesPresenter presentPublicProfileWithProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600154

// -[SCUnifiedPublicProfileProfilesPresenter presentPublisherProfileWithProfileId:showId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10660015c

// -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600164

// -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithSourceWithUserId:sourceType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x106600170

// -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithViewTypeWithUserId:sourceType:viewType:]
// Type encoding: v32@0:8@16i24i28
// Implementation: 0x106600188

// -[SCUnifiedPublicProfileProfilesPresenter _presentUserProfileWithUserId:sourcePage:initialViewState:]
// Type encoding: v36@0:8@16q24i32
// Implementation: 0x1066001a4

// -[SCUnifiedPublicProfileProfilesPresenter presentUserActionSheetWithUserId:hideUserDetails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1066003c4

// -[SCUnifiedPublicProfileProfilesPresenter _presentFriendProfileForSnapchatter:sourcePage:initialViewState:]
// Type encoding: v36@0:8@16q24i32
// Implementation: 0x1066005d4

// -[SCUnifiedPublicProfileProfilesPresenter _presentFriendActionSheetForSnapchatter:hideUserDetails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106600750

// -[SCUnifiedPublicProfileProfilesPresenter presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1066008a0

// -[SCUnifiedPublicProfileProfilesPresenter _presentUnifiedPublicProfileWithProfileId:isPublisherProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106600990

// -[SCUnifiedPublicProfileProfilesPresenter friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600b28

// -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetOpenProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600b30

// -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600b40

// -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106600b48

// -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetShowCameraForSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106600e00

// -[SCUnifiedPublicProfileProfilesPresenter dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066010ac

// -[SCUnifiedPublicProfileProfilesPresenter shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x1066010b4

// -[SCUnifiedPublicProfileProfilesPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1066010bc

// -[SCUnifiedPublicProfileProfilesPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066010c8

@end
