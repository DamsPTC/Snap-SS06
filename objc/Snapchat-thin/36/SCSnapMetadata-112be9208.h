// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapMetadata
// Superclass: NSObject
// Address: 0x112be9208

@interface SCSnapMetadata

// Property: lensMetadata; attributes: T@"NSString",R,C,N,V_lensMetadata
// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: contextHint; attributes: T@"NSString",R,C,N,V_contextHint
// Property: cameraFrontFacing; attributes: TB,R,N,V_cameraFrontFacing
// Property: tinselExternalMediaId; attributes: T@"NSString",R,C,N,V_tinselExternalMediaId
// Property: unlockablesSnapInfo; attributes: T@"NSString",R,C,N,V_unlockablesSnapInfo
// Property: isGenAISnap; attributes: TB,R,N,V_isGenAISnap

// -[SCSnapMetadata initWithLensMetadata:lensId:contextHint:cameraFrontFacing:tinselExternalMediaId:unlockablesSnapInfo:isGenAISnap:]
// Type encoding: @64@0:8@16@24@32B40@44@52B60
// Implementation: 0x109153420

// -[SCSnapMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109153570

// -[SCSnapMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x109153594

// -[SCSnapMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109153634

// -[SCSnapMetadata lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x109153744

// -[SCSnapMetadata lensId]
// Type encoding: @16@0:8
// Implementation: 0x10915374c

// -[SCSnapMetadata contextHint]
// Type encoding: @16@0:8
// Implementation: 0x109153754

// -[SCSnapMetadata cameraFrontFacing]
// Type encoding: B16@0:8
// Implementation: 0x10915375c

// -[SCSnapMetadata tinselExternalMediaId]
// Type encoding: @16@0:8
// Implementation: 0x109153764

// -[SCSnapMetadata unlockablesSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10915376c

// -[SCSnapMetadata isGenAISnap]
// Type encoding: B16@0:8
// Implementation: 0x109153774

// -[SCSnapMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10915377c

@end
