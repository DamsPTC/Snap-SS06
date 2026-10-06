// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMKeychainStore
// Superclass: NSObject
// Address: 0x1129ed078

@interface GTMKeychainStore

// Property: keychainHelper; attributes: T@"<GTMKeychainHelper>",N,R,VkeychainHelper
// Property: itemName; attributes: T@"NSString",N,C
// Property: keychainAttributes; attributes: T@"NSSet",N,C

// -[GTMKeychainStore keychainHelper]
// Type encoding: @16@0:8
// Implementation: 0x104a49374

// -[GTMKeychainStore itemName]
// Type encoding: @16@0:8
// Implementation: 0x104a493a4

// -[GTMKeychainStore setItemName:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a49460

// -[GTMKeychainStore keychainAttributes]
// Type encoding: @16@0:8
// Implementation: 0x104a49564

// -[GTMKeychainStore setKeychainAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a4962c

// -[GTMKeychainStore initWithItemName:keychainAttributes:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a49924

// -[GTMKeychainStore initWithItemName:keychainHelper:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100979ea0

// -[GTMKeychainStore initWithItemName:keychainAttributes:keychainHelper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10097a04c

// -[GTMKeychainStore initWithItemName:]
// Type encoding: @24@0:8@16
// Implementation: 0x100979d88

// -[GTMKeychainStore saveAuthSession:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x104a49f60

// -[GTMKeychainStore saveAuthSession:withItemName:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x104a4a17c

// -[GTMKeychainStore removeAuthSessionWithItemName:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x104a4a314

// -[GTMKeychainStore removeAuthSessionWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x104a4a4c4

// -[GTMKeychainStore retrieveAuthSessionWithItemName:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x104a4a7c4

// -[GTMKeychainStore retrieveAuthSessionWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x104a4ab38

// -[GTMKeychainStore retrieveAuthSessionInGTMOAuth2FormatWithTokenURL:redirectURI:clientID:clientSecret:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x104a4ad78

// -[GTMKeychainStore retrieveAuthSessionForGoogleInGTMOAuth2FormatWithClientID:clientSecret:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x104a4b128

// -[GTMKeychainStore saveWithGTMOAuth2FormatForAuthSession:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x104a4b398

// -[GTMKeychainStore init]
// Type encoding: @16@0:8
// Implementation: 0x104a4b480

// -[GTMKeychainStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a4b4e0

@end
