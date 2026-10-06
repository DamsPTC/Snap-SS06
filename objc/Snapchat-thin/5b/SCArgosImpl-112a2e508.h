// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArgosImpl
// Superclass: NSObject
// Address: 0x112a2e508

@interface SCArgosImpl

// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: argosClient; attributes: T@"SCArgosClient",R,N,V_argosClient
// Property: argosConfig; attributes: T@"SCArgosConfig",R,N,V_argosConfig
// Property: touchTracker; attributes: T@"SCTouchTracker",R,N,V_touchTracker
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArgosImpl initWithClient:config:grapheneRegistry:uiEvents:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100444c14

// -[SCArgosImpl fetchArgosHeaders:requestId:completionPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10060b630

// -[SCArgosImpl generateAttestationPayload:requestParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105388d40

// -[SCArgosImpl grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x105388df4

// -[SCArgosImpl argosClient]
// Type encoding: @16@0:8
// Implementation: 0x105388dfc

// -[SCArgosImpl argosConfig]
// Type encoding: @16@0:8
// Implementation: 0x105388e04

// -[SCArgosImpl touchTracker]
// Type encoding: @16@0:8
// Implementation: 0x105388e0c

// -[SCArgosImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105388e14

@end
