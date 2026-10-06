// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlugInScopeContainer
// Superclass: SCPlugInScopeExposer
// Address: 0x112c6b438

@interface SCPlugInScopeContainer

// Property: delegate; attributes: T@"<SCPlugInScopeContainerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlugInScopeContainer initWithScopeContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100a46144

// -[SCPlugInScopeContainer exposePlugInScope:onPlugInsRegistered:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x100a47c98

// -[SCPlugInScopeContainer scope]
// Type encoding: @16@0:8
// Implementation: 0x10b0ab83c

// -[SCPlugInScopeContainer removeScope]
// Type encoding: v16@0:8
// Implementation: 0x10b0ab84c

// -[SCPlugInScopeContainer _canExpose]
// Type encoding: B16@0:8
// Implementation: 0x100a47da0

// -[SCPlugInScopeContainer _assertFailCanExpose:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ab890

// -[SCPlugInScopeContainer beginLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x100b89a90

// -[SCPlugInScopeContainer scopeContainer:exposingScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100a480b0

// -[SCPlugInScopeContainer scopeContainer:removingScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ab894

// -[SCPlugInScopeContainer scopeContainer:overExposedScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ab8f0

// -[SCPlugInScopeContainer scopeContainer:overRemovedScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ab94c

// -[SCPlugInScopeContainer scopeContainer:duplicatedLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ab9a8

// -[SCPlugInScopeContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b0aba04

// -[SCPlugInScopeContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a461d4

// -[SCPlugInScopeContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0aba24

@end
