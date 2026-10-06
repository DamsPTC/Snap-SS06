// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryQuickPostViewController
// Superclass: UIViewController
// Address: 0x112a1b048

@interface SCStoryQuickPostViewController

// Property: quickPostWorkFlowDelegate; attributes: T@"<SCStoryQuickPostWorkFlowDelegate>",W,N,V_quickPostWorkFlowDelegate
// Property: quickPostWorkFlowDataSource; attributes: T@"<SCStoryQuickPostWorkFlowDataSource>",W,N,V_quickPostWorkFlowDataSource
// Property: sendConfirmationView; attributes: T@"SCSendConfirmationView",&,N,V_sendConfirmationView
// Property: storyQuickPostView; attributes: T@"SCStoryQuickPostView",&,N,V_storyQuickPostView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryQuickPostViewController initWithUserSession:onboardingManager:snapchattersDataFetcher:blockedSnapchattersFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:configuration:snapProPreferencesManager:circumstanceEngine:complianceEngine:featureSettingsService:myStoriesDataCoordinator:storyPrivacySettingManager:previewLegacyServices:imageDownloader:storyQuickPostScope:webBrowsingScopeExposer:previewTooltipsProvider:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:storiesBlizzardLogger:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:]
// Type encoding: @264@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232q240@248@256
// Implementation: 0x1051324f0

// -[SCStoryQuickPostViewController _viewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x105132c0c

// -[SCStoryQuickPostViewController _setupSendConfirmationView]
// Type encoding: v16@0:8
// Implementation: 0x105132ccc

// -[SCStoryQuickPostViewController _sendConfirmationFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x105132dfc

// -[SCStoryQuickPostViewController _setupStoryQuickPostView]
// Type encoding: v16@0:8
// Implementation: 0x105132eb8

// -[SCStoryQuickPostViewController _mostRecentCustomStorySelectionWithPostableCustomStories:lastMyStoryPostTimeInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x105133270

// -[SCStoryQuickPostViewController _preselectRecentlyPostedCustomStoriesIfNecessaryWithStoryQuickPostView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105133664

// -[SCStoryQuickPostViewController _storyQuickPostFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x105133898

// -[SCStoryQuickPostViewController didUpdateStoryQuickPostSelectionWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x105133954

// -[SCStoryQuickPostViewController didUpdateStoryQuickPostMetadata]
// Type encoding: v16@0:8
// Implementation: 0x105133a14

// -[SCStoryQuickPostViewController didUpdateTotalStoriesCount]
// Type encoding: v16@0:8
// Implementation: 0x105133a24

// -[SCStoryQuickPostViewController didPressSend]
// Type encoding: v16@0:8
// Implementation: 0x105133a70

// -[SCStoryQuickPostViewController didPressSendFromSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105133a78

// -[SCStoryQuickPostViewController didPressSave]
// Type encoding: v16@0:8
// Implementation: 0x105133b4c

// -[SCStoryQuickPostViewController didPressSendConfirmationBar:]
// Type encoding: v24@0:8q16
// Implementation: 0x105133b50

// -[SCStoryQuickPostViewController didPressSuggestedFriend:]
// Type encoding: v24@0:8@16
// Implementation: 0x105133b54

// -[SCStoryQuickPostViewController _reloadDestinationListIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105133b58

// -[SCStoryQuickPostViewController reloadQuickPost]
// Type encoding: v16@0:8
// Implementation: 0x105133c84

// -[SCStoryQuickPostViewController _syncDestinationSelection]
// Type encoding: v16@0:8
// Implementation: 0x105133dac

// -[SCStoryQuickPostViewController _updateSendConfirmationView]
// Type encoding: v16@0:8
// Implementation: 0x105133e5c

// -[SCStoryQuickPostViewController _updateSendConfirmationViewWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x105133e80

// -[SCStoryQuickPostViewController quickPostWorkFlowDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105134294

// -[SCStoryQuickPostViewController setQuickPostWorkFlowDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051342b4

// -[SCStoryQuickPostViewController quickPostWorkFlowDataSource]
// Type encoding: @16@0:8
// Implementation: 0x1051342c8

// -[SCStoryQuickPostViewController setQuickPostWorkFlowDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051342e8

// -[SCStoryQuickPostViewController sendConfirmationView]
// Type encoding: @16@0:8
// Implementation: 0x1051342fc

// -[SCStoryQuickPostViewController setSendConfirmationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10513430c

// -[SCStoryQuickPostViewController storyQuickPostView]
// Type encoding: @16@0:8
// Implementation: 0x10513434c

// -[SCStoryQuickPostViewController setStoryQuickPostView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10513435c

// -[SCStoryQuickPostViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10513439c

@end
