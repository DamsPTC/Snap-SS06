// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSFileQueue
// Superclass: NSObject
// Address: 0x112c29fd8

@interface SCRTUSFileQueue

// Property: productName; attributes: T@"NSString",&,N,V_productName
// Property: productConfig; attributes: T@"SCRTUSProductConfig",&,N,V_productConfig
// Property: allFiles; attributes: T@"NSMutableArray",&,N,V_allFiles

// -[SCRTUSFileQueue initWithProductName:productConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af6552c

// -[SCRTUSFileQueue addFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af655e8

// -[SCRTUSFileQueue removeAndGetFilesByTTLMillis:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af65668

// -[SCRTUSFileQueue removeFilesByBytes:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af65844

// -[SCRTUSFileQueue getFilesTotalNumBytes]
// Type encoding: q16@0:8
// Implementation: 0x10af6597c

// -[SCRTUSFileQueue _fileCreationTimeMillisWithinInterval:currentTimeMillis:intervalMillis:]
// Type encoding: B40@0:8q16q24q32
// Implementation: 0x10af65abc

// -[SCRTUSFileQueue productName]
// Type encoding: @16@0:8
// Implementation: 0x10af65acc

// -[SCRTUSFileQueue setProductName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af65ad4

// -[SCRTUSFileQueue productConfig]
// Type encoding: @16@0:8
// Implementation: 0x10af65b04

// -[SCRTUSFileQueue setProductConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af65b0c

// -[SCRTUSFileQueue allFiles]
// Type encoding: @16@0:8
// Implementation: 0x10af65b3c

// -[SCRTUSFileQueue setAllFiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af65b44

// -[SCRTUSFileQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af65b74

@end
