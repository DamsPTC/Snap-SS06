// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiMarshallableObjectRegistry
// Superclass: NSObject
// Address: 0x112cf49b8

@interface SCValdiMarshallableObjectRegistry


// -[SCValdiMarshallableObjectRegistry init]
// Type encoding: @16@0:8
// Implementation: 0x1003a785c

// -[SCValdiMarshallableObjectRegistry registerClass:objectDescriptor:]
// Type encoding: v56@0:8#16{SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}24
// Implementation: 0x10b9749c4

// -[SCValdiMarshallableObjectRegistry registerEnum:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b974a50

// -[SCValdiMarshallableObjectRegistry registerUntypedClass:]
// Type encoding: v24@0:8#16
// Implementation: 0x1003ad7a8

// -[SCValdiMarshallableObjectRegistry registerUntypedProtocol:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b974aac

// -[SCValdiMarshallableObjectRegistry forceLoadClass:]
// Type encoding: v24@0:8#16
// Implementation: 0x10b974ae8

// -[SCValdiMarshallableObjectRegistry marshallObject:ofClass:toMarshaller:]
// Type encoding: q40@0:8@16#24^{SCValdiMarshaller=}32
// Implementation: 0x10b974bc0

// -[SCValdiMarshallableObjectRegistry marshallObject:toMarshaller:]
// Type encoding: q32@0:8@16^{SCValdiMarshaller=}24
// Implementation: 0x10b974dc0

// -[SCValdiMarshallableObjectRegistry unmarshallObjectOfClass:fromMarshaller:atIndex:]
// Type encoding: @40@0:8#16^{SCValdiMarshaller=}24q32
// Implementation: 0x10b974e10

// -[SCValdiMarshallableObjectRegistry allocateStorageForClass:]
// Type encoding: ^v24@0:8#16
// Implementation: 0x1008d63bc

// -[SCValdiMarshallableObjectRegistry allocateStorageForClass:fieldValues:]
// Type encoding: ^v32@0:8#16*24
// Implementation: 0x1003af068

// -[SCValdiMarshallableObjectRegistry deallocateStorage:forClass:]
// Type encoding: v32@0:8^v16#24
// Implementation: 0x100907b3c

// -[SCValdiMarshallableObjectRegistry setSchemaOfClass:inMarshaller:]
// Type encoding: v32@0:8#16^{SCValdiMarshaller=}24
// Implementation: 0x10b974fd4

// -[SCValdiMarshallableObjectRegistry makeObjectOfClass:]
// Type encoding: @24@0:8#16
// Implementation: 0x10b975110

// -[SCValdiMarshallableObjectRegistry makeObjectWithFieldValuesOfClass:]
// Type encoding: @24@0:8#16
// Implementation: 0x10b975190

// -[SCValdiMarshallableObjectRegistry object:equalsToObject:forClass:]
// Type encoding: B40@0:8@16@24#32
// Implementation: 0x10b9751e8

// -[SCValdiMarshallableObjectRegistry getValueSchemaRegistryPtr]
// Type encoding: ^v16@0:8
// Implementation: 0x10b97529c

// -[SCValdiMarshallableObjectRegistry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b9752a8

// -[SCValdiMarshallableObjectRegistry .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1003a7854

@end
