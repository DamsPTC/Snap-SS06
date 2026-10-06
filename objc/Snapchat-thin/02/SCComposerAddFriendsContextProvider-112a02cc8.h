// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerAddFriendsContextProvider
// Superclass: NSObject
// Address: 0x112a02cc8

@interface SCComposerAddFriendsContextProvider

// Property: previousStatusBarStyle; attributes: Tq,N,V_previousStatusBarStyle
// Property: uiContainer; attributes: T@"<SCUIContainer>",W,N,V_uiContainer
// Property: notificationPool; attributes: T@"<SIGNotificationPool>",&,N,V_notificationPool
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: addFriendsActionEventObservable; attributes: T@"SCObservable",&,N,V_addFriendsActionEventSubject

// -[SCComposerAddFriendsContextProvider initWithFriendStore:friendActionStore:incomingFriendStore:suggestedFriendStore:contactUserStore:contactAddressBookEntryStore:blockedUserStore:recentFriendStore:nearbyFriendsStore:snapchattersDataFetcher:recentlyActiveFriendStore:snapchattersFriendscoreCoordinator:viewedIncomingFriendsTracker:permissionInfoProvider:circumstanceEngine:pageChangeObservable:addFriendsRecentlyActionPageScopeExposer:blizzardLogger:inviteContactSectionLogger:cofStore:networkingClient:userInfoProvider:presentingViewController:addFriendsDeckHierarchy:recentlyActiveEducationAlertScopeExposer:recentlyActiveEducationAlertScopeServices:friendmojiProvider:friendscoreProvider:userSearchingDependencies:actionMenuPresenter:isUserEligibleForTwilio:pageEventDataSubject:iOS18ContactSyncUpsellViewFactory:userPreferences:pageSessionId:webBrowsingScopeExposer:composerDeckConverter:facebookContactSyncer:usesNavigationPresentation:callLauncher:valdiRuntimeProvider:enableFindFriendsUpsellPresenterFactory:userInfoServices:]
// Type encoding: @352@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248B256@260@268@276@284@292@300@308B316@320@328@336@344
// Implementation: 0x104e6edb8

// -[SCComposerAddFriendsContextProvider defaultContext]
// Type encoding: @16@0:8
// Implementation: 0x104e6f600

// -[SCComposerAddFriendsContextProvider _lazyComposerAddFriendsContext]
// Type encoding: @16@0:8
// Implementation: 0x104e6f608

// -[SCComposerAddFriendsContextProvider _createAddFriendsContext]
// Type encoding: @16@0:8
// Implementation: 0x104e6f700

// -[SCComposerAddFriendsContextProvider _showEnableFindFriendsUpsellTray]
// Type encoding: @16@0:8
// Implementation: 0x104e70ca4

// -[SCComposerAddFriendsContextProvider _setShowMeInFindFriendsEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x104e70ea4

// -[SCComposerAddFriendsContextProvider _completeEnableFindFriendsUpsellPromise]
// Type encoding: v16@0:8
// Implementation: 0x104e70fd4

// -[SCComposerAddFriendsContextProvider handleTakeoverDisplayed]
// Type encoding: v16@0:8
// Implementation: 0x104e71128

// -[SCComposerAddFriendsContextProvider handleAccepted]
// Type encoding: v16@0:8
// Implementation: 0x104e7112c

// -[SCComposerAddFriendsContextProvider handleDismissed]
// Type encoding: v16@0:8
// Implementation: 0x104e71130

// -[SCComposerAddFriendsContextProvider _doDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104e71134

// -[SCComposerAddFriendsContextProvider _openSnapcode]
// Type encoding: v16@0:8
// Implementation: 0x104e711e8

// -[SCComposerAddFriendsContextProvider _presentMoreActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x104e7129c

// -[SCComposerAddFriendsContextProvider _shareMessage]
// Type encoding: v16@0:8
// Implementation: 0x104e71350

// -[SCComposerAddFriendsContextProvider _shareEmail]
// Type encoding: v16@0:8
// Implementation: 0x104e71404

// -[SCComposerAddFriendsContextProvider _shareMore]
// Type encoding: v16@0:8
// Implementation: 0x104e714b8

// -[SCComposerAddFriendsContextProvider _openAllContacts]
// Type encoding: v16@0:8
// Implementation: 0x104e7156c

// -[SCComposerAddFriendsContextProvider _findFriends]
// Type encoding: v16@0:8
// Implementation: 0x104e71620

// -[SCComposerAddFriendsContextProvider _presentUserProfile:section:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e716d4

// -[SCComposerAddFriendsContextProvider _presentUserActions:section:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e718b4

// -[SCComposerAddFriendsContextProvider _presentUserChat:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e71a94

// -[SCComposerAddFriendsContextProvider _presentUserSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e71c34

// -[SCComposerAddFriendsContextProvider _presentUserCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e71dd4

// -[SCComposerAddFriendsContextProvider _presentInvitesPage]
// Type encoding: v16@0:8
// Implementation: 0x104e71e9c

// -[SCComposerAddFriendsContextProvider _presentFacebookFriendsPage]
// Type encoding: v16@0:8
// Implementation: 0x104e71f50

// -[SCComposerAddFriendsContextProvider _openNearbyPage]
// Type encoding: v16@0:8
// Implementation: 0x104e72004

// -[SCComposerAddFriendsContextProvider _presentAlertDialog]
// Type encoding: v16@0:8
// Implementation: 0x104e720b8

// -[SCComposerAddFriendsContextProvider _presentAlertDialogOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e7216c

// -[SCComposerAddFriendsContextProvider _dismissContactSyncInviteTitleWithUserPreferences:contactPermissionInfoProvider:circumstanceEngine:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104e721fc

// -[SCComposerAddFriendsContextProvider _shouldHideFacebookSectionWithUserPreferences:circumstanceEngine:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104e722dc

// -[SCComposerAddFriendsContextProvider _doDismissOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e723b4

// -[SCComposerAddFriendsContextProvider _openSnapcodeOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72440

// -[SCComposerAddFriendsContextProvider _presentMoreActionMenuOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e724e0

// -[SCComposerAddFriendsContextProvider _shareMessageOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72540

// -[SCComposerAddFriendsContextProvider _shareEmailOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72598

// -[SCComposerAddFriendsContextProvider _shareMoreOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e725f0

// -[SCComposerAddFriendsContextProvider _openAllContactsOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72648

// -[SCComposerAddFriendsContextProvider _findFriendsOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72694

// -[SCComposerAddFriendsContextProvider _openNearbyPageOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e726e0

// -[SCComposerAddFriendsContextProvider _getSnapchatterFromUser:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e72738

// -[SCComposerAddFriendsContextProvider _presentUserProfileOnMainThread:section:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e72afc

// -[SCComposerAddFriendsContextProvider _presentUserActionsOnMainThread:section:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e72bf8

// -[SCComposerAddFriendsContextProvider _presentUserChatOnMainThread:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e72cf8

// -[SCComposerAddFriendsContextProvider _presentUserSnapOnMainThread:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e72df4

// -[SCComposerAddFriendsContextProvider _presentInvitesPageOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72ef0

// -[SCComposerAddFriendsContextProvider _presentFacebookFriendsPageOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x104e72f3c

// -[SCComposerAddFriendsContextProvider _composerContactPermissionStateFromPermissionInfoProvider:]
// Type encoding: i24@0:8@16
// Implementation: 0x104e72fb4

// -[SCComposerAddFriendsContextProvider recentlyActiveEducationAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e7304c

// -[SCComposerAddFriendsContextProvider _setupWebLauncher]
// Type encoding: @16@0:8
// Implementation: 0x104e7306c

// -[SCComposerAddFriendsContextProvider previousStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x104e73130

// -[SCComposerAddFriendsContextProvider setPreviousStatusBarStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x104e73138

// -[SCComposerAddFriendsContextProvider actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x104e73140

// -[SCComposerAddFriendsContextProvider setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e73148

// -[SCComposerAddFriendsContextProvider addFriendsActionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x104e73178

// -[SCComposerAddFriendsContextProvider setAddFriendsActionEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e73180

// -[SCComposerAddFriendsContextProvider uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x104e731b0

// -[SCComposerAddFriendsContextProvider setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e731c8

// -[SCComposerAddFriendsContextProvider notificationPool]
// Type encoding: @16@0:8
// Implementation: 0x104e731d4

// -[SCComposerAddFriendsContextProvider setNotificationPool:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e731dc

// -[SCComposerAddFriendsContextProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e7320c

// +[SCComposerAddFriendsContextProvider _enableFindFriendsUpsellError:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e71050

@end
