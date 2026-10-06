// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKUserDataStore
// Superclass: NSObject
// Address: 0x1129e7698

@interface FBSDKUserDataStore


// -[FBSDKUserDataStore setUserEmail:firstName:lastName:phone:dateOfBirth:gender:city:state:zip:country:externalId:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x10498c734

// -[FBSDKUserDataStore setUserData:forType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10498cd50

// -[FBSDKUserDataStore setHashData:forType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10498cdbc

// -[FBSDKUserDataStore setInternalHashData:forType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10498cf0c

// -[FBSDKUserDataStore setEnabledRules:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498d04c

// -[FBSDKUserDataStore clearUserDataForType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498d08c

// -[FBSDKUserDataStore getUserData]
// Type encoding: @16@0:8
// Implementation: 0x10498d098

// -[FBSDKUserDataStore getHashedData]
// Type encoding: @16@0:8
// Implementation: 0x10498d09c

// -[FBSDKUserDataStore clearUserData]
// Type encoding: v16@0:8
// Implementation: 0x10498d310

// -[FBSDKUserDataStore getInternalHashedDataForType:]
// Type encoding: @24@0:8@16
// Implementation: 0x10498d350

// -[FBSDKUserDataStore stringByHashedData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10498d568

// -[FBSDKUserDataStore encryptData:type:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10498d5e4

// -[FBSDKUserDataStore normalizeData:type:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10498d6b0

// -[FBSDKUserDataStore maybeSHA256Hashed:]
// Type encoding: B24@0:8@16
// Implementation: 0x10498d98c

// +[FBSDKUserDataStore initialize]
// Type encoding: v16@0:8
// Implementation: 0x10498c680

// +[FBSDKUserDataStore initializeUserData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10498d490

@end
