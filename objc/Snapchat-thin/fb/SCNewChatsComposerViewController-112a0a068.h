// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNewChatsComposerViewController
// Superclass: UIViewController
// Address: 0x112a0a068

@interface SCNewChatsComposerViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNewChatsComposerViewController initWithSnapchattersDataFetcher:friendStoreFactory:groupStore:friendmojiProviderFactory:groupDataFetcher:groupDataCreator:groupDataMutator:composerRuntime:userSession:userInfoProvider:application:alertPresenterFactory:networkingClient:logger:delegate:chatEligibilityProvider:contactUserStoreFactory:searchDependencies:createNewChatsScope:]
// Type encoding: @168@0:8@16@?24@32@?40@48@56@64@72@80@88@96@104@112@120@128@136@?144@152@160
// Implementation: 0x104f39df0

// -[SCNewChatsComposerViewController _initializeNewChatsViewWithFriendStoreFactory:groupStore:friendmojiProviderFactory:composerRuntime:userInfoProvider:application:alertPresenterFactory:networkingClient:logger:contactUserStore:searchDependencies:shouldShowContacts:]
// Type encoding: @108@0:8@?16@24@?32@40@48@56@64@72@80@88@96B104
// Implementation: 0x104f3a224

// -[SCNewChatsComposerViewController _setCustomModalPresentationIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104f3aa34

// -[SCNewChatsComposerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104f3aae4

// -[SCNewChatsComposerViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f3ab3c

// -[SCNewChatsComposerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104f3abb4

// -[SCNewChatsComposerViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f3af28

// -[SCNewChatsComposerViewController cardToExpandTransition]
// Type encoding: @16@0:8
// Implementation: 0x104f3afa0

// -[SCNewChatsComposerViewController cardTransitionWillBeginWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3afa4

// -[SCNewChatsComposerViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x104f3afb0

// -[SCNewChatsComposerViewController _handleRequestForNewChatOrCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3b028

// -[SCNewChatsComposerViewController _navigateToChatOrStartCallForSingleUserOrExistingGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3b09c

// -[SCNewChatsComposerViewController _navigateToExistingGroupAndOrStartCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3b354

// -[SCNewChatsComposerViewController _navigateToChatOrStartCallForNewGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3b44c

// -[SCNewChatsComposerViewController _createNewGroupWithResult:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f3b668

// -[SCNewChatsComposerViewController _fetchSnapchattersWithResult:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f3b7dc

// -[SCNewChatsComposerViewController _createNewGroupWithSnapchatters:result:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f3baf4

// -[SCNewChatsComposerViewController _updateGroupNameWithGroupId:groupName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f3bc50

// -[SCNewChatsComposerViewController _startCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3bd48

// -[SCNewChatsComposerViewController _createGroupOnServerForCallWithGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3bda0

// -[SCNewChatsComposerViewController _openActionSheetWithPressedRecipient:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3bf08

// -[SCNewChatsComposerViewController _newChatsModeFromCreateButtonExtensionType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x104f3bf64

// -[SCNewChatsComposerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f3bf74

@end
