// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusCustomNotificationSoundsServiceImpl
// Superclass: NSObject
// Address: 0x112a0f928

@interface SCCPlusCustomNotificationSoundsServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCPlusCustomNotificationSoundsServiceImpl initWithConversationServices:conversationIdServices:temporaryFileWriterServices:performerProvider:featureSettingsService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104fe18a0

// -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForUserWithUserId:soundType:isBestFriend:callback:]
// Type encoding: v40@0:8@16i24B28@?32
// Implementation: 0x104fe19c4

// -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForGroupWithGroupId:soundType:callback:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x104fe1d00

// -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForGlobalSoundWithSoundType:callback:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x104fe1d80

// -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedSoundMetadataForUserWithUserId:soundType:callback:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x104fe1df8

// -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedSoundMetadataForGroupWithGroupId:soundType:callback:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x104fe20e8

// -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedGlobalSoundMetadataWithSoundType:callback:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x104fe20ec

// -[SCCPlusCustomNotificationSoundsServiceImpl isGlobalRingtoneEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104fe227c

// -[SCCPlusCustomNotificationSoundsServiceImpl _getSelectedSoundMetadataForConversationId:soundType:callback:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x104fe2284

// -[SCCPlusCustomNotificationSoundsServiceImpl _getSoundProviderForConversationId:soundType:isBestFriend:]
// Type encoding: @32@0:8@16i24B28
// Implementation: 0x104fe243c

// -[SCCPlusCustomNotificationSoundsServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fe2650

// +[SCCPlusCustomNotificationSoundsServiceImpl _soundMetadataFromConversation:soundType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x104fe24d4

@end
