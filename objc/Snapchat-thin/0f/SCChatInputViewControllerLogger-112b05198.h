// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputViewControllerLogger
// Superclass: NSObject
// Address: 0x112b05198

@interface SCChatInputViewControllerLogger

// Property: drawerSessionId; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInputViewControllerLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068f0d78

// -[SCChatInputViewControllerLogger logInputDrawer:activationFromState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068f0dec

// -[SCChatInputViewControllerLogger logInputDrawer:deactivationFromState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068f0eb8

// -[SCChatInputViewControllerLogger logInputDrawer:transitionFromState:toState:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x1068f0fa8

// -[SCChatInputViewControllerLogger logSubmenuExpansion:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068f1100

// -[SCChatInputViewControllerLogger drawerSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1068f1180

// -[SCChatInputViewControllerLogger _logLoggableDrawer:viewMode:actionType:drawerType:drawerSessionId:]
// Type encoding: v56@0:8@16q24q32q40@48
// Implementation: 0x1068f11a8

// -[SCChatInputViewControllerLogger _setDrawerSessionIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068f1388

// -[SCChatInputViewControllerLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f13dc

@end
