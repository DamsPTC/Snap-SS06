// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsUserServiceImpl
// Superclass: NSObject
// Address: 0x112a3d558

@interface SCBloopsUserServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsUserServiceImpl initWithGRPCService:getMyDataCache:withCurrentUserCacheService:withFriendsCacheService:featureSettingsService:writeToSUPEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x1054b3c70

// -[SCBloopsUserServiceImpl registerUserBloopsTarget:preprocessedDataDescriptor:genderType:formatVersion:sdkVersion:locale:completion:]
// Type encoding: v72@0:8@16@24q32@40@48@56@?64
// Implementation: 0x1054b3da4

// -[SCBloopsUserServiceImpl getUserBloopsTargetWithSDKVersion:locale:useCase:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1054b4034

// -[SCBloopsUserServiceImpl deleteUserBloopsTarget:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054b43b8

// -[SCBloopsUserServiceImpl updateUserBloopsTargetPolicy:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054b454c

// -[SCBloopsUserServiceImpl updateUserHairStyle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054b4764

// -[SCBloopsUserServiceImpl updateUserBloopsGender:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1054b492c

// -[SCBloopsUserServiceImpl updateUserBloopsAdsPolicy:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1054b4ad4

// -[SCBloopsUserServiceImpl getUsersBloopsTargetsForUserIds:firstMatchReturnOnly:source:completion:]
// Type encoding: v44@0:8@16B24q28@?36
// Implementation: 0x1054b4ce0

// -[SCBloopsUserServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054b50ec

@end
