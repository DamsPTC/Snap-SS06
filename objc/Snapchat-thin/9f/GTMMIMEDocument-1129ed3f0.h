// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMMIMEDocument
// Superclass: NSObject
// Address: 0x1129ed3f0

@interface GTMMIMEDocument

// Property: boundary; attributes: T@"NSString",C,N

// -[GTMMIMEDocument init]
// Type encoding: @16@0:8
// Implementation: 0x104a61eec

// -[GTMMIMEDocument description]
// Type encoding: @16@0:8
// Implementation: 0x104a61f50

// -[GTMMIMEDocument addPartWithHeaders:body:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a61fac

// -[GTMMIMEDocument seedRandomWith:]
// Type encoding: v20@0:8I16
// Implementation: 0x104a61ffc

// -[GTMMIMEDocument random]
// Type encoding: I16@0:8
// Implementation: 0x104a62010

// -[GTMMIMEDocument boundary]
// Type encoding: @16@0:8
// Implementation: 0x104a6202c

// -[GTMMIMEDocument setBoundary:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a62250

// -[GTMMIMEDocument generateDataArray:length:boundary:]
// Type encoding: v40@0:8@16^Q24^@32
// Implementation: 0x104a62280

// -[GTMMIMEDocument generateInputStream:length:boundary:]
// Type encoding: v40@0:8^@16^Q24^@32
// Implementation: 0x104a62510

// -[GTMMIMEDocument generateDispatchData:length:boundary:]
// Type encoding: v40@0:8^@16^Q24^@32
// Implementation: 0x104a625e0

// -[GTMMIMEDocument .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a63430

// +[GTMMIMEDocument MIMEDocument]
// Type encoding: @16@0:8
// Implementation: 0x104a61ed8

// +[GTMMIMEDocument dataWithHeaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a628e0

// +[GTMMIMEDocument MIMEPartsWithBoundary:data:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a62ab0

// +[GTMMIMEDocument searchData:targetBytes:targetLength:foundOffsets:]
// Type encoding: v48@0:8@16r^v24Q32^@40
// Implementation: 0x104a62f68

// +[GTMMIMEDocument searchData:targetBytes:targetLength:foundOffsets:foundBlockNumbers:]
// Type encoding: v56@0:8@16r^v24Q32^@40^@48
// Implementation: 0x104a63174

// +[GTMMIMEDocument findBytesWithNeedle:needleLength:haystack:haystackLength:foundOffset:]
// Type encoding: Q56@0:8r*16Q24r*32Q40^Q48
// Implementation: 0x104a63230

// +[GTMMIMEDocument headersWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a63248

@end
