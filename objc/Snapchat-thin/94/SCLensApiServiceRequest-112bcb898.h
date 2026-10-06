// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensApiServiceRequest
// Superclass: NSObject
// Address: 0x112bcb898

@interface SCLensApiServiceRequest

// Property: requestId; attributes: T@"NSString",R,C,N,V_requestId
// Property: specId; attributes: T@"NSString",R,C,N,V_specId
// Property: endpointId; attributes: T@"NSString",R,C,N,V_endpointId
// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: lens; attributes: T@"SCLens",R,C,N,V_lens
// Property: isStudioDev; attributes: TB,R,N,V_isStudioDev
// Property: params; attributes: T@"NSDictionary",R,C,N,V_params
// Property: body; attributes: T@"NSData",R,C,N,V_body
// Property: linkedResources; attributes: T@"NSArray",R,C,N,V_linkedResources

// -[SCLensApiServiceRequest containsLocalOrUnencryptedLinkedResource]
// Type encoding: B16@0:8
// Implementation: 0x102a4d114

// -[SCLensApiServiceRequest containsInvalidLinkedResource]
// Type encoding: B16@0:8
// Implementation: 0x102a4d330

// -[SCLensApiServiceRequest initWithRequestId:specId:endpointId:lensId:lens:isStudioDev:params:body:linkedResources:]
// Type encoding: @84@0:8@16@24@32@40@48B56@60@68@76
// Implementation: 0x108ee366c

// -[SCLensApiServiceRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108ee383c

// -[SCLensApiServiceRequest hash]
// Type encoding: Q16@0:8
// Implementation: 0x108ee3860

// -[SCLensApiServiceRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ee3920

// -[SCLensApiServiceRequest requestId]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a68

// -[SCLensApiServiceRequest specId]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a70

// -[SCLensApiServiceRequest endpointId]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a78

// -[SCLensApiServiceRequest lensId]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a80

// -[SCLensApiServiceRequest lens]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a88

// -[SCLensApiServiceRequest isStudioDev]
// Type encoding: B16@0:8
// Implementation: 0x108ee3a90

// -[SCLensApiServiceRequest params]
// Type encoding: @16@0:8
// Implementation: 0x108ee3a98

// -[SCLensApiServiceRequest body]
// Type encoding: @16@0:8
// Implementation: 0x108ee3aa0

// -[SCLensApiServiceRequest linkedResources]
// Type encoding: @16@0:8
// Implementation: 0x108ee3aa8

// -[SCLensApiServiceRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ee3ab0

@end
