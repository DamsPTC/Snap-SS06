// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppLinkNavigation
// Superclass: NSObject
// Address: 0x1129e7a68

@interface FBSDKAppLinkNavigation

// Property: extras; attributes: T@"NSDictionary",N,R
// Property: appLinkData; attributes: T@"NSDictionary",N,R
// Property: appLink; attributes: T@"FBSDKAppLink",N,R,VappLink
// Property: navigationType; attributes: Tq,N,R

// -[FBSDKAppLinkNavigation extras]
// Type encoding: @16@0:8
// Implementation: 0x104995e50

// -[FBSDKAppLinkNavigation appLinkData]
// Type encoding: @16@0:8
// Implementation: 0x104995e6c

// -[FBSDKAppLinkNavigation appLink]
// Type encoding: @16@0:8
// Implementation: 0x104995ee0

// -[FBSDKAppLinkNavigation navigationType]
// Type encoding: q16@0:8
// Implementation: 0x104995f20

// -[FBSDKAppLinkNavigation initWithAppLink:extras:appLinkData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1049966a0

// -[FBSDKAppLinkNavigation initWithAppLink:extras:appLinkData:settings:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10499696c

// -[FBSDKAppLinkNavigation navigate:]
// Type encoding: q24@0:8^@16
// Implementation: 0x104997400

// -[FBSDKAppLinkNavigation postNavigateEventNotificationWithTargetURL:error:navigationType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104999298

// -[FBSDKAppLinkNavigation navigationTypeFor:]
// Type encoding: q24@0:8@16
// Implementation: 0x104999390

// -[FBSDKAppLinkNavigation init]
// Type encoding: @16@0:8
// Implementation: 0x104999454

// -[FBSDKAppLinkNavigation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049994b4

// +[FBSDKAppLinkNavigation defaultResolver]
// Type encoding: @16@0:8
// Implementation: 0x1049959e0

// +[FBSDKAppLinkNavigation setDefaultResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049959f4

// +[FBSDKAppLinkNavigation navigationWithAppLink:extras:appLinkData:settings:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104996b30

// +[FBSDKAppLinkNavigation callbackAppLinkDataForAppWithName:url:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104996c14

// +[FBSDKAppLinkNavigation resolveAppLink:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104998670

// +[FBSDKAppLinkNavigation resolveAppLink:resolver:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1049987a4

// +[FBSDKAppLinkNavigation navigateToAppLink:error:]
// Type encoding: q32@0:8@16^@24
// Implementation: 0x1049989d8

// +[FBSDKAppLinkNavigation navigationTypeForLink:]
// Type encoding: q24@0:8@16
// Implementation: 0x104998a1c

// +[FBSDKAppLinkNavigation navigateToURL:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104998e1c

// +[FBSDKAppLinkNavigation navigateToURL:resolver:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1049991ac

@end
