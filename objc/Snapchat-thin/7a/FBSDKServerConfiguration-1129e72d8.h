// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKServerConfiguration
// Superclass: NSObject
// Address: 0x1129e72d8

@interface FBSDKServerConfiguration

// Property: dialogConfigurations; attributes: T@"NSDictionary",&,N,V_dialogConfigurations
// Property: dialogFlows; attributes: T@"NSDictionary",&,N,V_dialogFlows
// Property: version; attributes: Tq,N,V_version
// Property: advertisingIDEnabled; attributes: TB,R,N,GisAdvertisingIDEnabled,V_advertisingIDEnabled
// Property: appID; attributes: T@"NSString",R,C,N,V_appID
// Property: appName; attributes: T@"NSString",R,C,N,V_appName
// Property: defaults; attributes: TB,R,N,GisDefaults,V_defaults
// Property: defaultShareMode; attributes: T@"NSString",R,C,N,V_defaultShareMode
// Property: errorConfiguration; attributes: T@"FBSDKErrorConfiguration",R,N,V_errorConfiguration
// Property: implicitLoggingEnabled; attributes: TB,R,N,GisImplicitLoggingSupported,V_implicitLoggingEnabled
// Property: implicitPurchaseLoggingEnabled; attributes: TB,R,N,GisImplicitPurchaseLoggingSupported,V_implicitPurchaseLoggingEnabled
// Property: codelessEventsEnabled; attributes: TB,R,N,GisCodelessEventsEnabled,V_codelessEventsEnabled
// Property: loginTooltipEnabled; attributes: TB,R,N,GisLoginTooltipEnabled,V_loginTooltipEnabled
// Property: uninstallTrackingEnabled; attributes: TB,R,N,GisUninstallTrackingEnabled,V_uninstallTrackingEnabled
// Property: loginTooltipText; attributes: T@"NSString",R,C,N,V_loginTooltipText
// Property: timestamp; attributes: T@"NSDate",R,C,N,V_timestamp
// Property: sessionTimeoutInterval; attributes: Td,N,V_sessionTimeoutInterval
// Property: loggingToken; attributes: T@"NSString",R,C,N,V_loggingToken
// Property: smartLoginOptions; attributes: TQ,R,N,V_smartLoginOptions
// Property: smartLoginBookmarkIconURL; attributes: T@"NSURL",R,C,N,V_smartLoginBookmarkIconURL
// Property: smartLoginMenuIconURL; attributes: T@"NSURL",R,C,N,V_smartLoginMenuIconURL
// Property: updateMessage; attributes: T@"NSString",R,C,N,V_updateMessage
// Property: eventBindings; attributes: T@"NSArray",R,C,N,V_eventBindings
// Property: restrictiveParams; attributes: T@"NSDictionary",R,C,N,V_restrictiveParams
// Property: AAMRules; attributes: T@"NSDictionary",R,C,N,V_AAMRules
// Property: suggestedEventsSetting; attributes: T@"NSDictionary",R,C,N,V_suggestedEventsSetting
// Property: protectedModeRules; attributes: T@"NSDictionary",R,C,N,V_protectedModeRules
// Property: migratedAutoLogValues; attributes: T@"NSDictionary",R,C,N,V_migratedAutoLogValues
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKServerConfiguration initWithAppID:appName:loginTooltipEnabled:loginTooltipText:defaultShareMode:advertisingIDEnabled:implicitLoggingEnabled:implicitPurchaseLoggingEnabled:codelessEventsEnabled:uninstallTrackingEnabled:dialogConfigurations:dialogFlows:timestamp:errorConfiguration:sessionTimeoutInterval:defaults:loggingToken:smartLoginOptions:smartLoginBookmarkIconURL:smartLoginMenuIconURL:updateMessage:eventBindings:restrictiveParams:AAMRules:suggestedEventsSetting:protectedModeRules:migratedAutoLogValues:]
// Type encoding: @204@0:8@16@24B32@36@44B52B56B60B64B68@72@80@88@96d104B112@116Q124@132@140@148@156@164@172@180@188@196
// Implementation: 0x104984198

// -[FBSDKServerConfiguration dialogConfigurationForDialogName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10498482c

// -[FBSDKServerConfiguration useNativeDialogForDialogName:]
// Type encoding: B24@0:8@16
// Implementation: 0x104984834

// -[FBSDKServerConfiguration useSafariViewControllerForDialogName:]
// Type encoding: B24@0:8@16
// Implementation: 0x104984844

// -[FBSDKServerConfiguration _useFeatureWithKey:dialogName:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104984854

// -[FBSDKServerConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049849fc

// -[FBSDKServerConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104985110

// -[FBSDKServerConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104985360

// -[FBSDKServerConfiguration dialogConfigurations]
// Type encoding: @16@0:8
// Implementation: 0x104985364

// -[FBSDKServerConfiguration dialogFlows]
// Type encoding: @16@0:8
// Implementation: 0x10498536c

// -[FBSDKServerConfiguration isAdvertisingIDEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104985374

// -[FBSDKServerConfiguration appID]
// Type encoding: @16@0:8
// Implementation: 0x10498537c

// -[FBSDKServerConfiguration appName]
// Type encoding: @16@0:8
// Implementation: 0x104985384

// -[FBSDKServerConfiguration isDefaults]
// Type encoding: B16@0:8
// Implementation: 0x10498538c

// -[FBSDKServerConfiguration defaultShareMode]
// Type encoding: @16@0:8
// Implementation: 0x104985394

// -[FBSDKServerConfiguration errorConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10498539c

// -[FBSDKServerConfiguration isImplicitLoggingSupported]
// Type encoding: B16@0:8
// Implementation: 0x1049853a4

// -[FBSDKServerConfiguration isImplicitPurchaseLoggingSupported]
// Type encoding: B16@0:8
// Implementation: 0x1049853ac

// -[FBSDKServerConfiguration isCodelessEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049853b4

// -[FBSDKServerConfiguration isLoginTooltipEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049853bc

// -[FBSDKServerConfiguration isUninstallTrackingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049853c4

// -[FBSDKServerConfiguration loginTooltipText]
// Type encoding: @16@0:8
// Implementation: 0x1049853cc

// -[FBSDKServerConfiguration timestamp]
// Type encoding: @16@0:8
// Implementation: 0x1049853d4

// -[FBSDKServerConfiguration sessionTimeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x1049853dc

// -[FBSDKServerConfiguration setSessionTimeoutInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x1049853e4

// -[FBSDKServerConfiguration loggingToken]
// Type encoding: @16@0:8
// Implementation: 0x1049853ec

// -[FBSDKServerConfiguration smartLoginOptions]
// Type encoding: Q16@0:8
// Implementation: 0x1049853f4

// -[FBSDKServerConfiguration smartLoginBookmarkIconURL]
// Type encoding: @16@0:8
// Implementation: 0x1049853fc

// -[FBSDKServerConfiguration smartLoginMenuIconURL]
// Type encoding: @16@0:8
// Implementation: 0x104985404

// -[FBSDKServerConfiguration updateMessage]
// Type encoding: @16@0:8
// Implementation: 0x10498540c

// -[FBSDKServerConfiguration eventBindings]
// Type encoding: @16@0:8
// Implementation: 0x104985414

// -[FBSDKServerConfiguration restrictiveParams]
// Type encoding: @16@0:8
// Implementation: 0x10498541c

// -[FBSDKServerConfiguration AAMRules]
// Type encoding: @16@0:8
// Implementation: 0x104985424

// -[FBSDKServerConfiguration suggestedEventsSetting]
// Type encoding: @16@0:8
// Implementation: 0x10498542c

// -[FBSDKServerConfiguration protectedModeRules]
// Type encoding: @16@0:8
// Implementation: 0x104985434

// -[FBSDKServerConfiguration migratedAutoLogValues]
// Type encoding: @16@0:8
// Implementation: 0x10498543c

// -[FBSDKServerConfiguration version]
// Type encoding: q16@0:8
// Implementation: 0x104985444

// -[FBSDKServerConfiguration setVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10498544c

// -[FBSDKServerConfiguration setDialogConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x104985454

// -[FBSDKServerConfiguration setDialogFlows:]
// Type encoding: v24@0:8@16
// Implementation: 0x104985460

// -[FBSDKServerConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10498546c

// +[FBSDKServerConfiguration defaultServerConfigurationForAppID:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049845e0

// +[FBSDKServerConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x1049849f4

@end
