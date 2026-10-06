// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardConfig
// Superclass: NSObject
// Address: 0x112b10a98

@interface SCBlizzardConfig

// Property: logQueueDefinitions; attributes: T@"NSArray",R,C,N,V_logQueueDefinitions
// Property: spectrumDefinitions; attributes: T@"NSArray",R,C,N,V_spectrumDefinitions
// Property: qosToLogQueueNameMap; attributes: T@"NSDictionary",R,C,N,V_qosToLogQueueNameMap
// Property: version; attributes: T@"NSString",R,C,N,V_version

// -[SCBlizzardConfig jsonDictionary]
// Type encoding: @16@0:8
// Implementation: 0x106acdd28

// -[SCBlizzardConfig initWithJSONDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x106acdfd4

// -[SCBlizzardConfig initWithDefaults]
// Type encoding: @16@0:8
// Implementation: 0x100281684

// -[SCBlizzardConfig _getQosToLogQueueNameMap]
// Type encoding: @16@0:8
// Implementation: 0x1002ced34

// -[SCBlizzardConfig initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106acd110

// -[SCBlizzardConfig initWithLogQueueDefinitions:spectrumDefinitions:qosToLogQueueNameMap:version:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1002d1388

// -[SCBlizzardConfig copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106acd210

// -[SCBlizzardConfig encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106acd234

// -[SCBlizzardConfig hash]
// Type encoding: Q16@0:8
// Implementation: 0x106acd2bc

// -[SCBlizzardConfig isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106acd348

// -[SCBlizzardConfig logQueueDefinitions]
// Type encoding: @16@0:8
// Implementation: 0x1002d3530

// -[SCBlizzardConfig spectrumDefinitions]
// Type encoding: @16@0:8
// Implementation: 0x10032601c

// -[SCBlizzardConfig qosToLogQueueNameMap]
// Type encoding: @16@0:8
// Implementation: 0x1003243f8

// -[SCBlizzardConfig version]
// Type encoding: @16@0:8
// Implementation: 0x1002d1dd8

// -[SCBlizzardConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106acd420

// +[SCBlizzardConfig BLIZZARD_TIER0_EVENTS_WITHOUT_SESSION]
// Type encoding: @16@0:8
// Implementation: 0x1003eae5c

// +[SCBlizzardConfig BLIZZARD_DEFAULT_BLACKLISTED_EVENTS]
// Type encoding: @16@0:8
// Implementation: 0x100280fac

// +[SCBlizzardConfig BLIZZARD_REGION_SHORTNAME_DICTIONARY]
// Type encoding: @16@0:8
// Implementation: 0x1002c4d88

// +[SCBlizzardConfig SPECTRUM_REGIONALIZED_ALLOWLIST]
// Type encoding: @16@0:8
// Implementation: 0x106ace2bc

@end
