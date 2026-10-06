// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKLogger
// Superclass: NSObject
// Address: 0x1129e6bf8

@interface FBSDKLogger

// Property: loggerSerialNumber; attributes: TQ,N,V_loggerSerialNumber
// Property: loggingBehavior; attributes: T@"NSString",C,N,V_loggingBehavior
// Property: active; attributes: TB,N,GisActive,V_active
// Property: internalContents; attributes: T@"NSMutableString",R,N,V_internalContents
// Property: contents; attributes: T@"NSString",R,C,N

// -[FBSDKLogger initWithLoggingBehavior:]
// Type encoding: @24@0:8@16
// Implementation: 0x10496ff70

// -[FBSDKLogger contents]
// Type encoding: @16@0:8
// Implementation: 0x10497006c

// -[FBSDKLogger setContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x104970074

// -[FBSDKLogger appendString:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049700c0

// -[FBSDKLogger appendFormat:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049700d8

// -[FBSDKLogger appendKey:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104970160

// -[FBSDKLogger emitToNSLog]
// Type encoding: v16@0:8
// Implementation: 0x1049701e0

// -[FBSDKLogger logEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x104970498

// -[FBSDKLogger loggerSerialNumber]
// Type encoding: Q16@0:8
// Implementation: 0x104970944

// -[FBSDKLogger setLoggerSerialNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10497094c

// -[FBSDKLogger loggingBehavior]
// Type encoding: @16@0:8
// Implementation: 0x104970954

// -[FBSDKLogger setLoggingBehavior:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497095c

// -[FBSDKLogger isActive]
// Type encoding: B16@0:8
// Implementation: 0x104970964

// -[FBSDKLogger setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10497096c

// -[FBSDKLogger internalContents]
// Type encoding: @16@0:8
// Implementation: 0x104970974

// -[FBSDKLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10497097c

// +[FBSDKLogger generateSerialNumber]
// Type encoding: Q16@0:8
// Implementation: 0x1049703d8

// +[FBSDKLogger singleShotLogEntry:logEntry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104970420

// +[FBSDKLogger singleShotLogEntry:timestampTag:formatString:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104970530

// +[FBSDKLogger registerCurrentTime:withTag:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049706f8

// +[FBSDKLogger registerStringToReplace:replaceWith:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104970878

@end
