// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardSnaptokenProvider
// Superclass: NSObject
// Address: 0x112b10b38

@interface SCBlizzardSnaptokenProvider

// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_graphene
// Property: snapToken; attributes: T@"NSString",R,C,N

// -[SCBlizzardSnaptokenProvider initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106acd754

// -[SCBlizzardSnaptokenProvider _loadFromDiskSnapToken]
// Type encoding: v16@0:8
// Implementation: 0x106acd7c8

// -[SCBlizzardSnaptokenProvider _sendGrapheneSnapTokenStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x106acd894

// -[SCBlizzardSnaptokenProvider snapToken]
// Type encoding: @16@0:8
// Implementation: 0x106acd8b8

// -[SCBlizzardSnaptokenProvider graphene]
// Type encoding: @16@0:8
// Implementation: 0x106acdcf0

// -[SCBlizzardSnaptokenProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106acdcf8

// +[SCBlizzardSnaptokenProvider _getSnapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x106acdbdc

// +[SCBlizzardSnaptokenProvider _getPreferences]
// Type encoding: @16@0:8
// Implementation: 0x106acdc44

// +[SCBlizzardSnaptokenProvider setPreferences:snapTokenProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100351f50

// +[SCBlizzardSnaptokenProvider removeSnapTokenProvider]
// Type encoding: v16@0:8
// Implementation: 0x106acdcac

@end
