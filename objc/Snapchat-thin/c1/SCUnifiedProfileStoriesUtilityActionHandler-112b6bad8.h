// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileStoriesUtilityActionHandler
// Superclass: NSObject
// Address: 0x112b6bad8

@interface SCUnifiedProfileStoriesUtilityActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCUnifiedProfileStoriesUtilityActionHandler initWithUserSession:saveStoryScopeExposer:storyPrivacySettingsScopeExposer:storyPrivacySettingsScopeServices:circumstanceEngine:standardExternalContentShareScopeExposer:customStoriesOnboardingManager:myStoriesDataCoordinator:ourStoriesAttributionManager:customStoryCreationScopeServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x107a35900

// -[SCUnifiedProfileStoriesUtilityActionHandler _createStandardExternalContentSharePresenterWithScopeExposer:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a35d28

// -[SCUnifiedProfileStoriesUtilityActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a35db0

// -[SCUnifiedProfileStoriesUtilityActionHandler _saveStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a36834

// -[SCUnifiedProfileStoriesUtilityActionHandler _saveSnapForStoryId:snapClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a368ec

// -[SCUnifiedProfileStoriesUtilityActionHandler didCompleteSaveStoryScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a369c0

// -[SCUnifiedProfileStoriesUtilityActionHandler _showMyStoriesSettings:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107a369e0

// -[SCUnifiedProfileStoriesUtilityActionHandler _presentStoryPrivacySettings]
// Type encoding: v16@0:8
// Implementation: 0x107a36d84

// -[SCUnifiedProfileStoriesUtilityActionHandler storyPrivacySettingsScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a36e30

// -[SCUnifiedProfileStoriesUtilityActionHandler storyPrivacySettingsScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a36ea4

// -[SCUnifiedProfileStoriesUtilityActionHandler _deleteSnapForStoryId:snapClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a36eec

// -[SCUnifiedProfileStoriesUtilityActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a370a4

// -[SCUnifiedProfileStoriesUtilityActionHandler didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x107a370d8

// -[SCUnifiedProfileStoriesUtilityActionHandler didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3710c

// -[SCUnifiedProfileStoriesUtilityActionHandler _setOurStoriesAttributionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a37110

// -[SCUnifiedProfileStoriesUtilityActionHandler _beginCustomStoryCreationWithType:creationStyle:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107a373ac

// -[SCUnifiedProfileStoriesUtilityActionHandler didCreateCustomStoryWithPublicationId:displayName:type:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107a374a0

// -[SCUnifiedProfileStoriesUtilityActionHandler didDismissCustomStoryCreation]
// Type encoding: v16@0:8
// Implementation: 0x107a374d4

// -[SCUnifiedProfileStoriesUtilityActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107a37508

// -[SCUnifiedProfileStoriesUtilityActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a37520

// -[SCUnifiedProfileStoriesUtilityActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a3752c

@end
