// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightManagementProfileActionHandler
// Superclass: NSObject
// Address: 0x112a00f68

@interface SCSpotlightManagementProfileActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCSpotlightManagementProfileActionHandler initWithSpotlightManagementScopeExposer:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:spotlightNavigationDelegate:myStoriesDataCoordinator:spotlightPresenter:userSession:valdiRuntimeProvider:snapTokenProvider:ourStoriesAttributionManager:userInfoServices:userProfileIdProvider:profileOnboardingScopeExposer:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x104e359e4

// -[SCSpotlightManagementProfileActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104e35d64

// -[SCSpotlightManagementProfileActionHandler spotlightManagementDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104e35ecc

// -[SCSpotlightManagementProfileActionHandler spotlightManagementRetrySnapUploadWithStoryId:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e35f14

// -[SCSpotlightManagementProfileActionHandler spotlightManagementPlaySnapWith:fromSourceView:presentingViewController:playbackCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104e35f20

// -[SCSpotlightManagementProfileActionHandler spotlightManagementDeleteSnapWith:clientId:serverId:posterGuid:presentingViewController:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104e35fc8

// -[SCSpotlightManagementProfileActionHandler _viewAllSnapsFromActionMenuWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e35fcc

// -[SCSpotlightManagementProfileActionHandler _viewAllSnaps]
// Type encoding: v16@0:8
// Implementation: 0x104e360b0

// -[SCSpotlightManagementProfileActionHandler _presentImpalaProfileOnboardingFromActionMenuWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e36140

// -[SCSpotlightManagementProfileActionHandler _presentImpalaProfileOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x104e36224

// -[SCSpotlightManagementProfileActionHandler _presentActionMenuFromViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e363f4

// -[SCSpotlightManagementProfileActionHandler _presentActionMenuWithSnapDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e367f4

// -[SCSpotlightManagementProfileActionHandler _saveSnapWithActionSheet:snapDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e36d84

// -[SCSpotlightManagementProfileActionHandler _saveSnapForStoryId:snapClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e36ee8

// -[SCSpotlightManagementProfileActionHandler didCompleteSaveStoryScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e36fbc

// -[SCSpotlightManagementProfileActionHandler _deleteSnapWithActionSheet:snapDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e36fdc

// -[SCSpotlightManagementProfileActionHandler _deleteSnapForStoryId:snapClientId:serverId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e37160

// -[SCSpotlightManagementProfileActionHandler _deleteSnapForStoryId:snapClientId:serverId:posterGuid:presentingViewController:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104e371f4

// -[SCSpotlightManagementProfileActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e37388

// -[SCSpotlightManagementProfileActionHandler didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x104e373d0

// -[SCSpotlightManagementProfileActionHandler didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e37418

// -[SCSpotlightManagementProfileActionHandler _sendSnapWithActionSheet:snapDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e3741c

// -[SCSpotlightManagementProfileActionHandler _sendSnapForStoryId:snapClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e37580

// -[SCSpotlightManagementProfileActionHandler didCompleteStoryShareScope]
// Type encoding: v16@0:8
// Implementation: 0x104e37624

// -[SCSpotlightManagementProfileActionHandler _closeActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e3766c

// -[SCSpotlightManagementProfileActionHandler actionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e37678

// -[SCSpotlightManagementProfileActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x104e3767c

// -[SCSpotlightManagementProfileActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e37694

// -[SCSpotlightManagementProfileActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e376a0

@end
