// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCUser
// Superclass: SCValdiMarshallableObject
// Address: 0x112cf1718

@interface SCCUser

// Property: userId; attributes: T@"NSString",C,D,N
// Property: username; attributes: T@"NSString",C,D,N
// Property: displayName; attributes: T@"NSString",C,D,N
// Property: isPopular; attributes: TB,D,N
// Property: isOfficial; attributes: TB,D,N
// Property: bitmojiInfo; attributes: T@"SCCBitmojiInfo",&,D,N
// Property: businessProfileId; attributes: T@"NSString",C,D,N
// Property: snapProUnsafeBadgeType; attributes: T@"NSNumber",&,D,N
// Property: plusBadgeVisibility; attributes: T@"NSNumber",&,D,N
// Property: ranking; attributes: T@"NSNumber",&,D,N
// Property: isBlocked; attributes: T@"NSNumber",&,D,N
// Property: phoneNumber; attributes: T@"NSString",C,D,N
// Property: photoUri; attributes: T@"NSString",C,D,N
// Property: profileLogoUrl; attributes: T@"NSString",C,D,N
// Property: plusInfo; attributes: T@"SCCSnapchatPlusInfo",&,D,N
// Property: actionmojiInfo; attributes: T@"SCCActionmojiInfo",&,D,N
// Property: profileTier; attributes: T@"NSNumber",&,D,N
// Property: isAiChatbot; attributes: T@"NSNumber",&,D,N

// -[SCCUser initWithSCSnapchatter:bitmojiInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f40008

// -[SCCUser initWithSCSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f405c8

// -[SCCUser initWithSCSnapchatter:bitmojiAvatarId:bitmojiSelfieId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108f406d4

// -[SCCUser profileTier:]
// Type encoding: i20@0:8I16
// Implementation: 0x108f40784

// -[SCCUser initWithParticipant:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f3feac

// -[SCCUser initWithScSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x102f4899c

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:profileLogoUrl:plusInfo:actionmojiInfo:profileTier:isAiChatbot:]
// Type encoding: @152@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x10b89cdfc

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:profileLogoUrl:plusInfo:actionmojiInfo:profileTier:]
// Type encoding: @144@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x10b89ce48

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:profileLogoUrl:plusInfo:actionmojiInfo:]
// Type encoding: @136@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x10b89ce94

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:profileLogoUrl:plusInfo:]
// Type encoding: @128@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x10b89cec8

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:profileLogoUrl:]
// Type encoding: @120@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112
// Implementation: 0x10b89cefc

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:photoUri:]
// Type encoding: @112@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104
// Implementation: 0x10b89cf38

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:phoneNumber:]
// Type encoding: @104@0:8@16@24@32B40B44@48@56@64@72@80@88@96
// Implementation: 0x10b89cf7c

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:ranking:isBlocked:]
// Type encoding: @96@0:8@16@24@32B40B44@48@56@64@72@80@88
// Implementation: 0x10b89cfb4

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:plusBadgeVisibility:isBlocked:]
// Type encoding: @88@0:8@16@24@32B40B44@48@56@64@72@80
// Implementation: 0x10b89cfe8

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:snapProUnsafeBadgeType:isBlocked:]
// Type encoding: @80@0:8@16@24@32B40B44@48@56@64@72
// Implementation: 0x10b89d02c

// -[SCCUser initWithUserId:username:displayName:isPopular:isOfficial:bitmojiInfo:businessProfileId:isBlocked:]
// Type encoding: @72@0:8@16@24@32B40B44@48@56@64
// Implementation: 0x10b89d070

// +[SCCUser valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b89d0a8

@end
