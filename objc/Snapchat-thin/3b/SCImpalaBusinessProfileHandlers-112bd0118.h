// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaBusinessProfileHandlers
// Superclass: NSObject
// Address: 0x112bd0118

@interface SCImpalaBusinessProfileHandlers

// Property: delegate; attributes: T@"<SCImpalaBusinessProfileHandlersDelegate>",R,W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaBusinessProfileHandlers initWithRPC:isManaged:circumstanceEngine:runtimeProvider:delegate:]
// Type encoding: @52@0:8@16B24@28@36@44
// Implementation: 0x100818af4

// -[SCImpalaBusinessProfileHandlers _handlersWithBusinessProfileIds:userIds:createIfNeeded:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108f18848

// -[SCImpalaBusinessProfileHandlers _updateHandlersWithBusinessProfiles:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c6723c

// -[SCImpalaBusinessProfileHandlers _handlerWithBusinessId:createIfNeeded:userId:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x100c675ac

// -[SCImpalaBusinessProfileHandlers updateHandlersForBusinessProfiles:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10083b5f8

// -[SCImpalaBusinessProfileHandlers updateHandlerForBusinessProfile:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108f18ccc

// -[SCImpalaBusinessProfileHandlers syncedHandlerForBusinessProfileId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f18e24

// -[SCImpalaBusinessProfileHandlers handlersForBusinessProfileIds:userIds:createIfNeeded:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x100c846d0

// -[SCImpalaBusinessProfileHandlers handlerForBusinessProfileId:createIfNeeded:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x100c845a8

// -[SCImpalaBusinessProfileHandlers handlerForBusinessProfileId:userId:createIfNeeded:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x108f18fa0

// -[SCImpalaBusinessProfileHandlers handlerForHostAccountUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108f19154

// -[SCImpalaBusinessProfileHandlers _cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x108f193d8

// -[SCImpalaBusinessProfileHandlers _scheduleCleanUp]
// Type encoding: v16@0:8
// Implementation: 0x100c68c3c

// -[SCImpalaBusinessProfileHandlers businessProfileHandler:didUpdateSubscribed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108f19560

// -[SCImpalaBusinessProfileHandlers businessProfileHandler:didGetBusinessId:forUserId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108f195bc

// -[SCImpalaBusinessProfileHandlers placeholderConvertedToRealBusinessId]
// Type encoding: @16@0:8
// Implementation: 0x100c8521c

// -[SCImpalaBusinessProfileHandlers _userIdDedupeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108f1981c

// -[SCImpalaBusinessProfileHandlers delegate]
// Type encoding: @16@0:8
// Implementation: 0x108f19824

// -[SCImpalaBusinessProfileHandlers .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f1983c

@end
