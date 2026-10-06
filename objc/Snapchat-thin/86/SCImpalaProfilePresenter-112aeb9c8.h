// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaProfilePresenter
// Superclass: NSObject
// Address: 0x112aeb9c8

@interface SCImpalaProfilePresenter

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: viewController; attributes: T@"UIViewController<SCPageNameLogging>",R,W,N,V_viewController
// Property: delegate; attributes: T@"<SCImpalaProfilePresenterDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaProfilePresenter initWithUserSession:snapchattersDataFetcher:snapchatterPublicInfoFetcher:viewController:sourcePageType:attributedPage:friendProfileScopeLauncher:friendActionSheetScopeExposer:unifiedPublicProfilesScopeLauncher:pageLauncher:]
// Type encoding: @96@0:8@16@24@32@40q48q56@64@72@80@88
// Implementation: 0x1066645a8

// -[SCImpalaProfilePresenter presentPublicProfileWithProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10666474c

// -[SCImpalaProfilePresenter presentPublisherProfileWithProfileId:showId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106664754

// -[SCImpalaProfilePresenter presentUserProfileWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10666475c

// -[SCImpalaProfilePresenter presentUserActionSheetWithUserId:hideUserDetails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1066648a8

// -[SCImpalaProfilePresenter _presentUnifiedProfileForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106664a08

// -[SCImpalaProfilePresenter _presentUnifiedActionSheetForSnapchatter:hideUserDetails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106664c74

// -[SCImpalaProfilePresenter _presentUnifiedPublicProfileWithProfileId:isPublisherProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106664df4

// -[SCImpalaProfilePresenter friendActionSheetOpenProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106664fc0

// -[SCImpalaProfilePresenter friendActionSheetShowCameraForSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106664fc8

// -[SCImpalaProfilePresenter friendActionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106665290

// -[SCImpalaProfilePresenter friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066652d8

// -[SCImpalaProfilePresenter presentingViewControllerForUnifiedPublicProfilesPresenterScope]
// Type encoding: @16@0:8
// Implementation: 0x106665464

// -[SCImpalaProfilePresenter unifiedPublicProfilesPresenterScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x1066654dc

// -[SCImpalaProfilePresenter friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106665514

// -[SCImpalaProfilePresenter shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106665560

// -[SCImpalaProfilePresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106665568

// -[SCImpalaProfilePresenter dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106665574

// -[SCImpalaProfilePresenter userSession]
// Type encoding: @16@0:8
// Implementation: 0x1066655f8

// -[SCImpalaProfilePresenter viewController]
// Type encoding: @16@0:8
// Implementation: 0x106665610

// -[SCImpalaProfilePresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x106665628

// -[SCImpalaProfilePresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106665640

// -[SCImpalaProfilePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10666564c

@end
