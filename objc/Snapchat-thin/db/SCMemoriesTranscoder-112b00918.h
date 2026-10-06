// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesTranscoder
// Superclass: NSObject
// Address: 0x112b00918

@interface SCMemoriesTranscoder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesTranscoder initWithShareableMediaProvider:memoriesAPIDataProvider:composerImageFactory:composerVideoFactory:asyncQueueProvider:crashLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1068224dc

// -[SCMemoriesTranscoder transcodeWithMemories:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068226d8

// -[SCMemoriesTranscoder pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10682282c

// -[SCMemoriesTranscoder _transcodeMemories:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106822838

// -[SCMemoriesTranscoder _onFetchError:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10682298c

// -[SCMemoriesTranscoder _generateShareableMediaWithSnaps:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106822a94

// -[SCMemoriesTranscoder _onTranscodeCompleteWithMedia:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106822c5c

// -[SCMemoriesTranscoder _onTranscodeError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106822f44

// -[SCMemoriesTranscoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106823034

@end
