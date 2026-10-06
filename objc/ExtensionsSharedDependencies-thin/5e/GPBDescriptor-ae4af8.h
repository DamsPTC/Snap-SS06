// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBDescriptor
// Superclass: NSObject
// Address: 0xae4af8

@interface GPBDescriptor

// Property: name; attributes: T@"NSString",R,C,N
// Property: fields; attributes: T@"NSArray",R,N,Vfields_
// Property: oneofs; attributes: T@"NSArray",R,N,Voneofs_
// Property: extensionRanges; attributes: Tr^{GPBExtensionRange=II},R,N,VextensionRanges_
// Property: extensionRangesCount; attributes: TI,R,N,VextensionRangesCount_
// Property: file; attributes: T@"GPBFileDescriptor",R,N
// Property: wireFormat; attributes: TB,R,N,GisWireFormat,VwireFormat_
// Property: messageClass; attributes: T#,R,N,VmessageClass_
// Property: containingType; attributes: T@"GPBDescriptor",R
// Property: fullName; attributes: T@"NSString",R

// -[GPBDescriptor initWithClass:messageName:fileDescription:fields:storageSize:wireFormat:]
// Type encoding: @56@0:8#16@24^{GPBFileDescription=**C}32@40I48B52
// Implementation: 0x7431cc

// -[GPBDescriptor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x743268

// -[GPBDescriptor copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x7432c0

// -[GPBDescriptor setupOneofs:count:firstHasIndex:]
// Type encoding: v32@0:8r^*16I24i28
// Implementation: 0x7432c4

// -[GPBDescriptor setupExtraTextInfo:]
// Type encoding: v24@0:8r*16
// Implementation: 0x743460

// -[GPBDescriptor setupExtensionRanges:count:]
// Type encoding: v28@0:8r^{GPBExtensionRange=II}16i24
// Implementation: 0x743580

// -[GPBDescriptor setupContainingMessageClass:]
// Type encoding: v24@0:8#16
// Implementation: 0x74358c

// -[GPBDescriptor setupContainingMessageClassName:]
// Type encoding: v24@0:8r*16
// Implementation: 0x74359c

// -[GPBDescriptor setupMessageClassNameSuffix:]
// Type encoding: v24@0:8@16
// Implementation: 0x7435c8

// -[GPBDescriptor name]
// Type encoding: @16@0:8
// Implementation: 0x743614

// -[GPBDescriptor file]
// Type encoding: @16@0:8
// Implementation: 0x74361c

// -[GPBDescriptor containingType]
// Type encoding: @16@0:8
// Implementation: 0x74371c

// -[GPBDescriptor fullName]
// Type encoding: @16@0:8
// Implementation: 0x743738

// -[GPBDescriptor fieldWithNumber:]
// Type encoding: @20@0:8I16
// Implementation: 0x743940

// -[GPBDescriptor fieldWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x743a30

// -[GPBDescriptor oneofWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x743b34

// -[GPBDescriptor messageClass]
// Type encoding: #16@0:8
// Implementation: 0x743c38

// -[GPBDescriptor fields]
// Type encoding: @16@0:8
// Implementation: 0x743c40

// -[GPBDescriptor oneofs]
// Type encoding: @16@0:8
// Implementation: 0x743c48

// -[GPBDescriptor extensionRanges]
// Type encoding: r^{GPBExtensionRange=II}16@0:8
// Implementation: 0x743c50

// -[GPBDescriptor extensionRangesCount]
// Type encoding: I16@0:8
// Implementation: 0x743c58

// -[GPBDescriptor isWireFormat]
// Type encoding: B16@0:8
// Implementation: 0x743c60

// +[GPBDescriptor allocDescriptorForClass:messageName:fileDescription:fields:fieldCount:storageSize:flags:]
// Type encoding: @60@0:8#16@24^{GPBFileDescription=**C}32^v40I48I52I56
// Implementation: 0x742ef4

// +[GPBDescriptor allocDescriptorForClass:file:fields:fieldCount:storageSize:flags:]
// Type encoding: @52@0:8#16@24^v32I40I44I48
// Implementation: 0x743040

// +[GPBDescriptor allocDescriptorForClass:rootClass:file:fields:fieldCount:storageSize:flags:]
// Type encoding: @60@0:8#16#24@32^v40I48I52I56
// Implementation: 0x7431b0

@end
