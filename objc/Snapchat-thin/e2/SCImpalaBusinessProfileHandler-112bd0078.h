// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaBusinessProfileHandler
// Superclass: SCDataHandler
// Address: 0x112bd0078

@interface SCImpalaBusinessProfileHandler

// Property: businessId; attributes: T@"NSString",R,N,V_businessId
// Property: businessProfile; attributes: T@"IMPBusinessProfile",R,N
// Property: businessProfileAndUserData; attributes: T@"IMPBusinessProfileAndUserData",R,N
// Property: story; attributes: T@"IMPBusinessStory",R,N
// Property: storyHandler; attributes: T@"SCDataHandler",R,N
// Property: delegate; attributes: T@"<SCImpalaBusinessProfileHandlerDelegate>",R,W,N,V_delegate
// Property: canPostToStory; attributes: TB,R,N
// Property: canPostToSpotlight; attributes: TB,R,N
// Property: canUpdateProfile; attributes: TB,R,N
// Property: canSaveHighlights; attributes: TB,R,N
// Property: subscribed; attributes: TB,R,N,GisSubscribed
// Property: standardTier; attributes: TB,R,N,GisStandardTier
// Property: official; attributes: TB,R,N,GisOfficial
// Property: unsafeBadgeType; attributes: Tq,R,N
// Property: displayName; attributes: T@"NSString",R,N,GdisplayName
// Property: roleNames; attributes: T@"NSArray",R,N
// Property: isPlaceholderProfile; attributes: TB,R,N,GisPlaceholderProfile
// Property: matchesPlaceholderProfile; attributes: TB,N,V_matchesPlaceholderProfile
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaBusinessProfileHandler initWithRPC:businessId:isManaged:circumstanceEngine:runtimeProvider:delegate:userId:]
// Type encoding: @68@0:8@16@24B32@36@44@52@60
// Implementation: 0x100c677b4

// -[SCImpalaBusinessProfileHandler storyHandler]
// Type encoding: @16@0:8
// Implementation: 0x108f15c88

// -[SCImpalaBusinessProfileHandler businessProfileAndUserData]
// Type encoding: @16@0:8
// Implementation: 0x100c683b8

// -[SCImpalaBusinessProfileHandler businessProfile]
// Type encoding: @16@0:8
// Implementation: 0x100c6886c

// -[SCImpalaBusinessProfileHandler story]
// Type encoding: @16@0:8
// Implementation: 0x108f161e0

// -[SCImpalaBusinessProfileHandler isSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x108f16224

// -[SCImpalaBusinessProfileHandler isPlaceholderProfile]
// Type encoding: B16@0:8
// Implementation: 0x100c68344

// -[SCImpalaBusinessProfileHandler displayName]
// Type encoding: @16@0:8
// Implementation: 0x108f16280

// -[SCImpalaBusinessProfileHandler isStandardTier]
// Type encoding: B16@0:8
// Implementation: 0x108f162c4

// -[SCImpalaBusinessProfileHandler canPostToStory]
// Type encoding: B16@0:8
// Implementation: 0x108f16304

// -[SCImpalaBusinessProfileHandler canPostToSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x108f163a0

// -[SCImpalaBusinessProfileHandler canUpdateProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f16420

// -[SCImpalaBusinessProfileHandler canSaveHighlights]
// Type encoding: B16@0:8
// Implementation: 0x108f164ec

// -[SCImpalaBusinessProfileHandler impalaLocalizedRoleTitleForRole:hostAccountUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f1656c

// -[SCImpalaBusinessProfileHandler roleNames]
// Type encoding: @16@0:8
// Implementation: 0x108f16728

// -[SCImpalaBusinessProfileHandler isOfficial]
// Type encoding: B16@0:8
// Implementation: 0x108f168f4

// -[SCImpalaBusinessProfileHandler unsafeBadgeType]
// Type encoding: q16@0:8
// Implementation: 0x108f16954

// -[SCImpalaBusinessProfileHandler setBusinessProfileAndUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c68984

// -[SCImpalaBusinessProfileHandler storyManifestHandlerForSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f169d4

// -[SCImpalaBusinessProfileHandler updateWithRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x108f16d18

// -[SCImpalaBusinessProfileHandler updateSubscribeStatus:nonFriendAddPlacementTypeOverride:nonFriendAddSourceTypeOverride:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x108f16e1c

// -[SCImpalaBusinessProfileHandler updateSubscribeStatus:placementInfo:nonFriendAddPlacementTypeOverride:nonFriendAddSourceTypeOverride:completion:]
// Type encoding: v52@0:8B16@20@28@36@?44
// Implementation: 0x108f16e30

// -[SCImpalaBusinessProfileHandler updateWithBusinessProfileAndUserData:ignoreBusinessId:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100c683cc

// -[SCImpalaBusinessProfileHandler toJavascriptRepresentation]
// Type encoding: @16@0:8
// Implementation: 0x108f177ac

// -[SCImpalaBusinessProfileHandler needsUpdate]
// Type encoding: B16@0:8
// Implementation: 0x108f17838

// -[SCImpalaBusinessProfileHandler setNeedsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108f178ac

// -[SCImpalaBusinessProfileHandler _handleUpdateResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108f178fc

// -[SCImpalaBusinessProfileHandler _didPostToStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f179f8

// -[SCImpalaBusinessProfileHandler _didDeleteStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f17cc4

// -[SCImpalaBusinessProfileHandler _getBusinessProfileFromPublicProfileRequestFromBusinessId:userId:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f17ebc

// -[SCImpalaBusinessProfileHandler _processBusinessProfileResponse:error:useSnapTaskWrapper:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x108f180e0

// -[SCImpalaBusinessProfileHandler copy]
// Type encoding: @16@0:8
// Implementation: 0x108f18708

// -[SCImpalaBusinessProfileHandler businessId]
// Type encoding: @16@0:8
// Implementation: 0x100c815a4

// -[SCImpalaBusinessProfileHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x108f1872c

// -[SCImpalaBusinessProfileHandler matchesPlaceholderProfile]
// Type encoding: B16@0:8
// Implementation: 0x100c683bc

// -[SCImpalaBusinessProfileHandler setMatchesPlaceholderProfile:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f1874c

// -[SCImpalaBusinessProfileHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f1875c

@end
