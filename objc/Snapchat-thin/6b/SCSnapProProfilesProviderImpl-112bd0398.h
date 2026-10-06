// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapProProfilesProviderImpl
// Superclass: NSObject
// Address: 0x112bd0398

@interface SCSnapProProfilesProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: managedProfilesObserver; attributes: T@"SCObservable",R,N
// Property: onSubscriptionChange; attributes: T@"SCObservable",R,N

// -[SCSnapProProfilesProviderImpl initWithDataHandler:businessProfileManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c83ec0

// -[SCSnapProProfilesProviderImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108f1d954

// -[SCSnapProProfilesProviderImpl fetchProfileAllowedActionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108f1d9a0

// -[SCSnapProProfilesProviderImpl managedProfilesObserver]
// Type encoding: @16@0:8
// Implementation: 0x108f1dc4c

// -[SCSnapProProfilesProviderImpl onSubscriptionChange]
// Type encoding: @16@0:8
// Implementation: 0x108f1dc74

// -[SCSnapProProfilesProviderImpl profilesWithIds:publisherIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f1dc9c

// -[SCSnapProProfilesProviderImpl managedProfiles]
// Type encoding: @16@0:8
// Implementation: 0x108f1e5d8

// -[SCSnapProProfilesProviderImpl profileHandlers]
// Type encoding: @16@0:8
// Implementation: 0x108f1e6a8

// -[SCSnapProProfilesProviderImpl profileHandlersWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f1e6f0

// -[SCSnapProProfilesProviderImpl profileHandlersOnUpdateWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f1e844

// -[SCSnapProProfilesProviderImpl managedProfilesWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f1e96c

// -[SCSnapProProfilesProviderImpl currentCreatorTierWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f1ead8

// -[SCSnapProProfilesProviderImpl hasPendingRoleInvitesWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f1ecd0

// -[SCSnapProProfilesProviderImpl hasLoadedManagedProfiles]
// Type encoding: B16@0:8
// Implementation: 0x108f1ee1c

// -[SCSnapProProfilesProviderImpl hasSnapProStandardProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1ee24

// -[SCSnapProProfilesProviderImpl hasMemberRoles]
// Type encoding: B16@0:8
// Implementation: 0x108f1efb0

// -[SCSnapProProfilesProviderImpl profileAndStoriesNeedsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108f1f0c0

// -[SCSnapProProfilesProviderImpl hasSnapStarProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1f0c8

// -[SCSnapProProfilesProviderImpl isTierPublicOrOfficial]
// Type encoding: B16@0:8
// Implementation: 0x108f1f278

// -[SCSnapProProfilesProviderImpl canPostToStory]
// Type encoding: B16@0:8
// Implementation: 0x108f1f428

// -[SCSnapProProfilesProviderImpl isHostPublisher]
// Type encoding: B16@0:8
// Implementation: 0x108f1f548

// -[SCSnapProProfilesProviderImpl hasRealPublicProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1f704

// -[SCSnapProProfilesProviderImpl hostProfileTier]
// Type encoding: q16@0:8
// Implementation: 0x108f1f894

// -[SCSnapProProfilesProviderImpl _hostProfileTierWithManagedProfiles:]
// Type encoding: q24@0:8@16
// Implementation: 0x108f1f8dc

// -[SCSnapProProfilesProviderImpl handlerForBusinessProfileId:isManaged:createIfNeeded:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x100c844b4

// -[SCSnapProProfilesProviderImpl handlerForBusinessProfileId:userId:isManaged:createIfNeeded:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x108f1fa88

// -[SCSnapProProfilesProviderImpl syncedHandlerForBusinessProfileId:isManaged:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108f1fba0

// -[SCSnapProProfilesProviderImpl didUpdateSubscribedForBusinessProfileId:hostAccountUserId:subscribed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108f1fc24

// -[SCSnapProProfilesProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f1fcb0

@end
