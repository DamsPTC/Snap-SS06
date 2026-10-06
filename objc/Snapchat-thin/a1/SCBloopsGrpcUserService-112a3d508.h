// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsGrpcUserService
// Superclass: NSObject
// Address: 0x112a3d508

@interface SCBloopsGrpcUserService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsGrpcUserService initWithBloopsGrpcService:modelsConverter:userId:routeTag:overridedRegion:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054b2a38

// -[SCBloopsGrpcUserService registerUserBloopsTarget:preprocessedDataDescriptor:genderType:formatVersion:sdkVersion:locale:completion:]
// Type encoding: v72@0:8@16@24q32@40@48@56@?64
// Implementation: 0x1054b2d20

// -[SCBloopsGrpcUserService getUserBloopsTargetWithSDKVersion:locale:useCase:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1054b3024

// -[SCBloopsGrpcUserService deleteUserBloopsTarget:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054b32d4

// -[SCBloopsGrpcUserService updateUserBloopsTargetPolicy:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054b3410

// -[SCBloopsGrpcUserService updateUserHairStyle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054b358c

// -[SCBloopsGrpcUserService updateUserBloopsGender:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1054b36e8

// -[SCBloopsGrpcUserService updateUserBloopsAdsPolicy:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1054b3848

// -[SCBloopsGrpcUserService getUsersBloopsTargetsForUserIds:firstMatchReturnOnly:source:completion:]
// Type encoding: v44@0:8@16B24q28@?36
// Implementation: 0x1054b39a8

// -[SCBloopsGrpcUserService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054b3c28

@end
