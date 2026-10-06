// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPSearchSessionConfig
// Superclass: NSObject
// Address: 0x112b7e688

@interface CTPSearchSessionConfig

// Property: bitmojiOptions; attributes: T@"CTPBitmojiOptions",R,N
// Property: cameoOptions; attributes: T@"CTPCameoOptions",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: origin; attributes: TQ,R,N
// Property: filteredSections; attributes: TQ,R,N
// Property: ctpTarget; attributes: TQ,R,N
// Property: languages; attributes: T@"NSArray",R,N
// Property: resultTypeOptions; attributes: T@"<CTPSessionResultTypeOptions>",R,N

// -[CTPSearchSessionConfig initWithTarget:andOrigin:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x107d5ea5c

// -[CTPSearchSessionConfig initWithExperimentalSections:withTarget:andOrigin:]
// Type encoding: @40@0:8Q16Q24Q32
// Implementation: 0x107d5ea6c

// -[CTPSearchSessionConfig updateWithExperimentalSections:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107d5eaf4

// -[CTPSearchSessionConfig updateWithBitmojiOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d5eafc

// -[CTPSearchSessionConfig updateWithCameoOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d5eb3c

// -[CTPSearchSessionConfig origin]
// Type encoding: Q16@0:8
// Implementation: 0x107d5eb7c

// -[CTPSearchSessionConfig filteredSections]
// Type encoding: Q16@0:8
// Implementation: 0x107d5eb84

// -[CTPSearchSessionConfig ctpTarget]
// Type encoding: Q16@0:8
// Implementation: 0x107d5eb90

// -[CTPSearchSessionConfig languages]
// Type encoding: @16@0:8
// Implementation: 0x107d5eb98

// -[CTPSearchSessionConfig resultTypeOptions]
// Type encoding: @16@0:8
// Implementation: 0x107d5eba4

// -[CTPSearchSessionConfig bitmojiOptions]
// Type encoding: @16@0:8
// Implementation: 0x107d5eba8

// -[CTPSearchSessionConfig cameoOptions]
// Type encoding: @16@0:8
// Implementation: 0x107d5ebe4

// -[CTPSearchSessionConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d5ec20

@end
