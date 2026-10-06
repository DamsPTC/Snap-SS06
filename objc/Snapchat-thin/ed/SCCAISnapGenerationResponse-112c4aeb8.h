// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCAISnapGenerationResponse
// Superclass: SCValdiMarshallableObject
// Address: 0x112c4aeb8

@interface SCCAISnapGenerationResponse

// Property: description; attributes: T@"NSString",N,R
// Property: generationId; attributes: T@"NSString",C,D,N
// Property: lensId; attributes: T@"NSString",C,D,N
// Property: success; attributes: TB,D,N
// Property: friendId; attributes: T@"NSString",C,D,N
// Property: errorMsg; attributes: T@"NSString",C,D,N

// -[SCCAISnapGenerationResponse description]
// Type encoding: @16@0:8
// Implementation: 0x1022db278

// -[SCCAISnapGenerationResponse initWithGenerationId:lensId:success:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b01293c

// +[SCCAISnapGenerationResponse valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b012968

@end
