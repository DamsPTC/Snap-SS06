// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowsingJavaScriptBridge
// Superclass: NSObject
// Address: 0x112b745e8

@interface SCWebBrowsingJavaScriptBridge

// Property: scripts; attributes: T@"NSArray",&,N,V_scripts
// Property: javaScriptExecutionDelegate; attributes: T@"<SCWebBrowsingJavaScriptBridgeExecutionDelegate>",W,N,V_javaScriptExecutionDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebBrowsingJavaScriptBridge initWithScriptControllers:webviewConfiguration:grapheneRegistry:enableDefaultClientWorld:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x107bbae5c

// -[SCWebBrowsingJavaScriptBridge reset]
// Type encoding: v16@0:8
// Implementation: 0x107bbb278

// -[SCWebBrowsingJavaScriptBridge evaluateJavaScript:scriptController:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107bbb38c

// -[SCWebBrowsingJavaScriptBridge userContentController:didReceiveScriptMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bbb4f8

// -[SCWebBrowsingJavaScriptBridge _addScriptMessageHandler:name:userContentController:enableMessageHandlingInterface:enableDefaultClientWorld:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x107bbb654

// -[SCWebBrowsingJavaScriptBridge javaScriptExecutionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107bbb774

// -[SCWebBrowsingJavaScriptBridge setJavaScriptExecutionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bbb78c

// -[SCWebBrowsingJavaScriptBridge scripts]
// Type encoding: @16@0:8
// Implementation: 0x107bbb798

// -[SCWebBrowsingJavaScriptBridge setScripts:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bbb7a0

// -[SCWebBrowsingJavaScriptBridge .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bbb7d0

@end
