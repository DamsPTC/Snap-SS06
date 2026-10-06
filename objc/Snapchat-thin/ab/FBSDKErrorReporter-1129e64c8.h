// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKErrorReporter
// Superclass: NSObject
// Address: 0x1129e64c8

@interface FBSDKErrorReporter

// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: fileManager; attributes: T@"<FBSDKFileManaging>",&,N,V_fileManager
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: dataExtractor; attributes: T#,&,N,V_dataExtractor
// Property: directoryPath; attributes: T@"NSString",R,N,V_directoryPath
// Property: isEnabled; attributes: TB,N,V_isEnabled

// -[FBSDKErrorReporter init]
// Type encoding: @16@0:8
// Implementation: 0x1049599fc

// -[FBSDKErrorReporter initWithGraphRequestFactory:fileManager:settings:fileDataExtractor:]
// Type encoding: @48@0:8@16@24@32#40
// Implementation: 0x104959aa4

// -[FBSDKErrorReporter enable]
// Type encoding: v16@0:8
// Implementation: 0x104959c5c

// -[FBSDKErrorReporter saveError:errorDomain:message:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104959d34

// -[FBSDKErrorReporter createErrorDirectoryIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104959e90

// -[FBSDKErrorReporter uploadErrors]
// Type encoding: v16@0:8
// Implementation: 0x104959fd4

// -[FBSDKErrorReporter loadErrorReports]
// Type encoding: @16@0:8
// Implementation: 0x10495a284

// -[FBSDKErrorReporter _clearErrorInfo]
// Type encoding: v16@0:8
// Implementation: 0x10495a558

// -[FBSDKErrorReporter _saveErrorInfoToDisk:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495a724

// -[FBSDKErrorReporter _pathToErrorInfoFile]
// Type encoding: @16@0:8
// Implementation: 0x10495a7b8

// -[FBSDKErrorReporter graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x10495a898

// -[FBSDKErrorReporter setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495a8a0

// -[FBSDKErrorReporter fileManager]
// Type encoding: @16@0:8
// Implementation: 0x10495a8ac

// -[FBSDKErrorReporter setFileManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495a8b4

// -[FBSDKErrorReporter settings]
// Type encoding: @16@0:8
// Implementation: 0x10495a8c0

// -[FBSDKErrorReporter setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495a8c8

// -[FBSDKErrorReporter dataExtractor]
// Type encoding: #16@0:8
// Implementation: 0x10495a8d4

// -[FBSDKErrorReporter setDataExtractor:]
// Type encoding: v24@0:8#16
// Implementation: 0x10495a8dc

// -[FBSDKErrorReporter directoryPath]
// Type encoding: @16@0:8
// Implementation: 0x10495a8e8

// -[FBSDKErrorReporter isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10495a8f0

// -[FBSDKErrorReporter setIsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10495a8f8

// -[FBSDKErrorReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10495a900

// +[FBSDKErrorReporter shared]
// Type encoding: @16@0:8
// Implementation: 0x104959bc0

// +[FBSDKErrorReporter saveError:errorDomain:message:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104959cbc

@end
