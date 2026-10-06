// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTLazyIdentityServices
// Superclass: NSObject
// Address: 0x112ba9bf8

@interface SCTLazyIdentityServices

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTLazyIdentityServices initWithUserId:snapchatterPublicInfoFetcher:snapchattersDataTracker:snapchattersUserInfoRepository:groupsDataCreator:groupsDataFetcher:groupsDataTracker:conversationManager:usernameProvider:displayNameProvider:bitmojiAvatarIdProvider:lazyUserSnapPrivacyProvider:grapheneLogger:featureSettingsService:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1085e1bdc

// -[SCTLazyIdentityServices remoteParticipantsForConvoId:injectBots:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1085e1f40

// -[SCTLazyIdentityServices remoteParticipantsForConvoId:injectBots:performer:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1085e1fc4

// -[SCTLazyIdentityServices _remoteParticipantsForConvoId:metadata:injectBots:performer:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x1085e21d0

// -[SCTLazyIdentityServices remoteParticipantsObservableForConvoId:injectBots:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1085e2a60

// -[SCTLazyIdentityServices localParticipantObservableForConvoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085e2b4c

// -[SCTLazyIdentityServices fetchSnapchatterByUserId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e2c74

// -[SCTLazyIdentityServices fetchSnapchattersByUserId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e2e0c

// -[SCTLazyIdentityServices fetchSnapchattersFromConvoId:metadata:excludeSelf:performer:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x1085e2f58

// -[SCTLazyIdentityServices displayNameForConvoId:convoMetadata:performer:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1085e3284

// -[SCTLazyIdentityServices isBestFriendConvoId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e3534

// -[SCTLazyIdentityServices isMutualFriendForConvoId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e35ec

// -[SCTLazyIdentityServices isBotForConvoId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e3758

// -[SCTLazyIdentityServices canReceiveMessageFrom:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e389c

// -[SCTLazyIdentityServices _isUserSnapPrivacyFriends]
// Type encoding: B16@0:8
// Implementation: 0x1085e3b58

// -[SCTLazyIdentityServices isCallingNotificationsMutedForConvoId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e3be0

// -[SCTLazyIdentityServices ensureServerConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e3d20

// -[SCTLazyIdentityServices setConversationMetadata:forConvoId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085e3f38

// -[SCTLazyIdentityServices conversationMetadataForConvoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085e3fb4

// -[SCTLazyIdentityServices hasConversationMetadataForConvoId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e403c

// -[SCTLazyIdentityServices fetchConversationMetadataForConvoId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e4074

// -[SCTLazyIdentityServices _fetchConversationMetadataForConvoId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e40e8

// -[SCTLazyIdentityServices fetchDestinationInfoForConvoId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e4464

// -[SCTLazyIdentityServices isUserInGroupWithConvoId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e4708

// -[SCTLazyIdentityServices userLeftGroupObservableForConvoId:joinedGroupTimeout:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1085e47f8

// -[SCTLazyIdentityServices fetchCustomRingtoneIdForConvoId:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085e4b68

// -[SCTLazyIdentityServices _resolveRingtoneId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085e4dc4

// -[SCTLazyIdentityServices .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085e4e64

@end
