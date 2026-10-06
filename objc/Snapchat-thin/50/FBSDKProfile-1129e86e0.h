// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKProfile
// Superclass: NSObject
// Address: 0x1129e86e0

@interface FBSDKProfile

// Property: profileToData; attributes: T@"NSData",N,R
// Property: userFriendsData; attributes: T@"NSData",N,R
// Property: pictureData; attributes: T@"NSData",N,R
// Property: userID; attributes: T@"NSString",N,R
// Property: firstName; attributes: T@"NSString",N,R
// Property: middleName; attributes: T@"NSString",N,R
// Property: lastName; attributes: T@"NSString",N,R
// Property: name; attributes: T@"NSString",N,R
// Property: linkURL; attributes: T@"NSURL",N,R
// Property: refreshDate; attributes: T@"NSDate",N,R
// Property: imageURL; attributes: T@"NSURL",N,R
// Property: email; attributes: T@"NSString",N,R
// Property: friendIDs; attributes: T@"NSArray",N,R
// Property: birthday; attributes: T@"NSDate",N,R
// Property: ageRange; attributes: T@"FBSDKUserAgeRange",N,R,VageRange
// Property: hometown; attributes: T@"FBSDKLocation",N,R,Vhometown
// Property: location; attributes: T@"FBSDKLocation",N,R,Vlocation
// Property: gender; attributes: T@"NSString",N,R
// Property: permissions; attributes: T@"NSSet",N,R
// Property: isLimited; attributes: TB,N,R,VisLimited

// -[FBSDKProfile initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049d6548

// -[FBSDKProfile encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049d6d7c

// -[FBSDKProfile profileToData]
// Type encoding: @16@0:8
// Implementation: 0x1049d0038

// -[FBSDKProfile userFriendsData]
// Type encoding: @16@0:8
// Implementation: 0x1049d1338

// -[FBSDKProfile pictureData]
// Type encoding: @16@0:8
// Implementation: 0x1049d1670

// -[FBSDKProfile imageURLForPictureMode:size:]
// Type encoding: @40@0:8Q16{CGSize=dd}24
// Implementation: 0x1049cf868

// -[FBSDKProfile userID]
// Type encoding: @16@0:8
// Implementation: 0x1049d7fd8

// -[FBSDKProfile firstName]
// Type encoding: @16@0:8
// Implementation: 0x1049d805c

// -[FBSDKProfile middleName]
// Type encoding: @16@0:8
// Implementation: 0x1049d80a0

// -[FBSDKProfile lastName]
// Type encoding: @16@0:8
// Implementation: 0x1049d80e4

// -[FBSDKProfile name]
// Type encoding: @16@0:8
// Implementation: 0x1049d8128

// -[FBSDKProfile linkURL]
// Type encoding: @16@0:8
// Implementation: 0x1049d816c

// -[FBSDKProfile refreshDate]
// Type encoding: @16@0:8
// Implementation: 0x1049d81bc

// -[FBSDKProfile imageURL]
// Type encoding: @16@0:8
// Implementation: 0x1049d828c

// -[FBSDKProfile email]
// Type encoding: @16@0:8
// Implementation: 0x1049d83a4

// -[FBSDKProfile friendIDs]
// Type encoding: @16@0:8
// Implementation: 0x1049d83e8

// -[FBSDKProfile birthday]
// Type encoding: @16@0:8
// Implementation: 0x1049d844c

// -[FBSDKProfile ageRange]
// Type encoding: @16@0:8
// Implementation: 0x1049d849c

// -[FBSDKProfile hometown]
// Type encoding: @16@0:8
// Implementation: 0x1049d84dc

// -[FBSDKProfile location]
// Type encoding: @16@0:8
// Implementation: 0x1049d851c

// -[FBSDKProfile gender]
// Type encoding: @16@0:8
// Implementation: 0x1049d855c

// -[FBSDKProfile permissions]
// Type encoding: @16@0:8
// Implementation: 0x1049d85f8

// -[FBSDKProfile isLimited]
// Type encoding: B16@0:8
// Implementation: 0x1049d8664

// -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:permissions:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1049d90c8

// -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:imageURL:email:friendIDs:birthday:ageRange:hometown:location:gender:permissions:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1049d93a0

// -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:imageURL:email:friendIDs:birthday:ageRange:hometown:location:gender:isLimited:permissions:]
// Type encoding: @148@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128B136@140
// Implementation: 0x1049d9eb8

// -[FBSDKProfile init]
// Type encoding: @16@0:8
// Implementation: 0x1049da608

// -[FBSDKProfile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049da668

// +[FBSDKProfile profileUserDefaultsKey]
// Type encoding: @16@0:8
// Implementation: 0x1049d5e6c

// +[FBSDKProfile supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x1049d5e98

// +[FBSDKProfile currentProfile]
// Type encoding: @16@0:8
// Implementation: 0x1049d4edc

// +[FBSDKProfile setCurrentProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049d4f20

// +[FBSDKProfile fetchCachedProfile]
// Type encoding: @16@0:8
// Implementation: 0x1049d5e2c

// +[FBSDKProfile loadCurrentProfileWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1049d22f0

// +[FBSDKProfile loadProfileWithAccessToken:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1049d398c

// +[FBSDKProfile makeGraphRequestParametersWithToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049d3a30

// +[FBSDKProfile getImageURLWithProfileID:pictureMode:size:]
// Type encoding: @48@0:8@16Q24{CGSize=dd}32
// Implementation: 0x1049cf978

// +[FBSDKProfile _current]
// Type encoding: @16@0:8
// Implementation: 0x1049d86d0

// +[FBSDKProfile set_current:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049d8760

// +[FBSDKProfile isUpdatedWithAccessTokenChange]
// Type encoding: B16@0:8
// Implementation: 0x1049d89cc

// +[FBSDKProfile setIsUpdatedWithAccessTokenChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049db72c

// +[FBSDKProfile enableUpdatesOnAccessTokenChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049db728

// +[FBSDKProfile observeAccessTokenChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049da530

@end
