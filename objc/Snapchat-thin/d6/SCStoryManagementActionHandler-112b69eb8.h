// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementActionHandler
// Superclass: NSObject
// Address: 0x112b69eb8

@interface SCStoryManagementActionHandler

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: delegate; attributes: T@"<SCStoryManagementActionHandlerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryManagementActionHandler initWithUserSession:storyId:storyType:myStoriesDataCoordinator:playbackManagementDataProvider:storiesMediaCoordinator:saveStoryScopeExposer:storyShareScopeExposer:storyShareScopeServices:circumstanceEngine:snapchattersSynchronousDataFetcher:standardExternalContentShareScopeExposer:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:bloopsReportScopeExposer:temporaryFileWriter:ourStoriesAttributionManager:ourStorySnapPlaybackInfos:]
// Type encoding: @168@0:8@16@24q32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x107a10e7c

// -[SCStoryManagementActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a11338

// -[SCStoryManagementActionHandler _saveSnapWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a11a68

// -[SCStoryManagementActionHandler didCompleteSaveStoryScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a11b34

// -[SCStoryManagementActionHandler _deleteSnapWithClientId:businessProfileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a11b54

// -[SCStoryManagementActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a11d6c

// -[SCStoryManagementActionHandler didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x107a11ddc

// -[SCStoryManagementActionHandler didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a11e10

// -[SCStoryManagementActionHandler _sendSnapWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a11e14

// -[SCStoryManagementActionHandler didCompleteStoryShareScope]
// Type encoding: v16@0:8
// Implementation: 0x107a11eb4

// -[SCStoryManagementActionHandler _showSnapActionMenuForClientId:creatorId:customStoryOwnerId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a11efc

// -[SCStoryManagementActionHandler unifiedActionMenuPresenterDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a12238

// -[SCStoryManagementActionHandler unifiedActionMenuPresenterWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a122f0

// -[SCStoryManagementActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107a122f4

// -[SCStoryManagementActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a1230c

// -[SCStoryManagementActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x107a12318

// -[SCStoryManagementActionHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a12330

// -[SCStoryManagementActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a1233c

@end
