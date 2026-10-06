// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsUserDataModel
// Superclass: NSObject
// Address: 0x112c82688

@interface SCBloopsUserDataModel

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: userGender; attributes: Tq,R,N,V_userGender
// Property: userPolicy; attributes: Tq,R,N,V_userPolicy
// Property: userAdsPolicy; attributes: Tq,R,N,V_userAdsPolicy
// Property: rawImage; attributes: T@"SCBloopsEncryptedDataModel",R,C,N,V_rawImage
// Property: processedImage; attributes: T@"SCBloopsEncryptedDataModel",R,C,N,V_processedImage
// Property: formatVersion; attributes: T@"NSString",R,C,N,V_formatVersion
// Property: sdkVersion; attributes: T@"NSString",R,C,N,V_sdkVersion
// Property: hairStyle; attributes: T@"NSString",R,C,N,V_hairStyle

// -[SCBloopsUserDataModel initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b647fa8

// -[SCBloopsUserDataModel initWithUserId:userGender:userPolicy:userAdsPolicy:rawImage:processedImage:formatVersion:sdkVersion:hairStyle:]
// Type encoding: @88@0:8@16q24q32q40@48@56@64@72@80
// Implementation: 0x10b648134

// -[SCBloopsUserDataModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6482b8

// -[SCBloopsUserDataModel encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6482dc

// -[SCBloopsUserDataModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6483c8

// -[SCBloopsUserDataModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b648478

// -[SCBloopsUserDataModel userId]
// Type encoding: @16@0:8
// Implementation: 0x10b6485b0

// -[SCBloopsUserDataModel userGender]
// Type encoding: q16@0:8
// Implementation: 0x10b6485b8

// -[SCBloopsUserDataModel userPolicy]
// Type encoding: q16@0:8
// Implementation: 0x10b6485c0

// -[SCBloopsUserDataModel userAdsPolicy]
// Type encoding: q16@0:8
// Implementation: 0x10b6485c8

// -[SCBloopsUserDataModel rawImage]
// Type encoding: @16@0:8
// Implementation: 0x10b6485d0

// -[SCBloopsUserDataModel processedImage]
// Type encoding: @16@0:8
// Implementation: 0x10b6485d8

// -[SCBloopsUserDataModel formatVersion]
// Type encoding: @16@0:8
// Implementation: 0x10b6485e0

// -[SCBloopsUserDataModel sdkVersion]
// Type encoding: @16@0:8
// Implementation: 0x10b6485e8

// -[SCBloopsUserDataModel hairStyle]
// Type encoding: @16@0:8
// Implementation: 0x10b6485f0

// -[SCBloopsUserDataModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6485f8

@end
