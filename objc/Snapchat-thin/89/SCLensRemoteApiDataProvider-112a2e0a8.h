// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiDataProvider
// Superclass: NSObject
// Address: 0x112a2e0a8

@interface SCLensRemoteApiDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiDataProvider initWithDocObjectContext:preferences:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105384160

// -[SCLensRemoteApiDataProvider saveInProgressAuthWithLensId:specId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105384220

// -[SCLensRemoteApiDataProvider saveAuthCode:orError:forExistingAuthProgress:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105384334

// -[SCLensRemoteApiDataProvider getInProgressAuth]
// Type encoding: @16@0:8
// Implementation: 0x1053844c8

// -[SCLensRemoteApiDataProvider deleteInProgressAuth]
// Type encoding: v16@0:8
// Implementation: 0x10538452c

// -[SCLensRemoteApiDataProvider clearRemoteApiDataWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105384580

// -[SCLensRemoteApiDataProvider deleteDataForSpecId:withCompletionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1053848e4

// -[SCLensRemoteApiDataProvider fetchTokenForSpecId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105384b7c

// -[SCLensRemoteApiDataProvider upsertOAuthToken:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105384e18

// -[SCLensRemoteApiDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105384fc0

@end
