// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaybackLog
// Superclass: NSObject
// Address: 0x1129b5e30

@interface SCOperaPlaybackLog

// Property: playbackId; attributes: T@"NSString",N,R
// Property: timestampMs; attributes: TQ,N,R,VtimestampMs
// Property: messages; attributes: T@"NSDictionary",N,R
// Property: error; attributes: T@"NSError",N,R
// Property: resolution; attributes: T{CGSize=dd},N,R,Vresolution
// Property: mediaFormat; attributes: T@"NSString",N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCOperaPlaybackLog playbackId]
// Type encoding: @16@0:8
// Implementation: 0x10444f60c

// -[SCOperaPlaybackLog timestampMs]
// Type encoding: Q16@0:8
// Implementation: 0x10444f658

// -[SCOperaPlaybackLog messages]
// Type encoding: @16@0:8
// Implementation: 0x10444f668

// -[SCOperaPlaybackLog error]
// Type encoding: @16@0:8
// Implementation: 0x10444f6c8

// -[SCOperaPlaybackLog resolution]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10444f718

// -[SCOperaPlaybackLog mediaFormat]
// Type encoding: @16@0:8
// Implementation: 0x10444f72c

// -[SCOperaPlaybackLog initWithPlaybackId:timestampMs:messages:error:resolution:mediaFormat:]
// Type encoding: @72@0:8@16Q24@32@40{CGSize=dd}48@64
// Implementation: 0x10444f85c

// -[SCOperaPlaybackLog copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10444fae8

// -[SCOperaPlaybackLog description]
// Type encoding: @16@0:8
// Implementation: 0x10444faec

// -[SCOperaPlaybackLog init]
// Type encoding: @16@0:8
// Implementation: 0x10444fb20

// -[SCOperaPlaybackLog .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104450198

@end
