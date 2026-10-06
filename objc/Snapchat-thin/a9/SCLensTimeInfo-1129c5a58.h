// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensTimeInfo
// Superclass: NSObject
// Address: 0x1129c5a58

@interface SCLensTimeInfo

// Property: viewTimeSeconds; attributes: Td,N,R,VviewTimeSeconds
// Property: recordingTimeSeconds; attributes: Td,N,R,VrecordingTimeSeconds
// Property: gamePlayTimeSeconds; attributes: Td,N,R,VgamePlayTimeSeconds
// Property: startViewingTime; attributes: T@"SCTimestamp",N,R,VstartViewingTime
// Property: endViewingTime; attributes: T@"SCTimestamp",N,R,VendViewingTime
// Property: cpuViewTimeSeconds; attributes: Td,N,R,VcpuViewTimeSeconds
// Property: description; attributes: T@"NSString",N,R

// -[SCLensTimeInfo viewTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1044f1a04

// -[SCLensTimeInfo recordingTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1044f1a14

// -[SCLensTimeInfo gamePlayTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1044f1a24

// -[SCLensTimeInfo startViewingTime]
// Type encoding: @16@0:8
// Implementation: 0x1044f1a34

// -[SCLensTimeInfo endViewingTime]
// Type encoding: @16@0:8
// Implementation: 0x1044f1a44

// -[SCLensTimeInfo cpuViewTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1044f1a54

// -[SCLensTimeInfo initWithViewTimeSeconds:recordingTimeSeconds:gamePlayTimeSeconds:startViewingTime:endViewingTime:cpuViewTimeSeconds:]
// Type encoding: @64@0:8d16d24d32@40@48d56
// Implementation: 0x1044f1b18

// -[SCLensTimeInfo copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044f1be0

// -[SCLensTimeInfo description]
// Type encoding: @16@0:8
// Implementation: 0x1044f1be4

// -[SCLensTimeInfo init]
// Type encoding: @16@0:8
// Implementation: 0x1044f1c00

// -[SCLensTimeInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044f1c7c

@end
