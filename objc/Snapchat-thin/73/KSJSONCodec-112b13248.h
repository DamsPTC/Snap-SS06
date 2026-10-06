// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSJSONCodec
// Superclass: NSObject
// Address: 0x112b13248

@interface KSJSONCodec

// Property: callbacks; attributes: T^{KSJSONDecodeCallbacks=^?^?^?^?^?^?^?^?^?},N,V_callbacks
// Property: containerStack; attributes: T@"NSMutableArray",&,N,V_containerStack
// Property: currentContainer; attributes: T@,N,V_currentContainer
// Property: topLevelContainer; attributes: T@,&,N,V_topLevelContainer
// Property: serializedData; attributes: T@"NSMutableData",&,N,V_serializedData
// Property: error; attributes: T@"NSError",&,N,V_error
// Property: prettyPrint; attributes: TB,N,V_prettyPrint
// Property: sorted; attributes: TB,N,V_sorted
// Property: ignoreNullsInArrays; attributes: TB,N,V_ignoreNullsInArrays
// Property: ignoreNullsInObjects; attributes: TB,N,V_ignoreNullsInObjects

// -[KSJSONCodec initWithEncodeOptions:decodeOptions:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x106aed70c

// -[KSJSONCodec dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106aedc04

// -[KSJSONCodec topLevelContainer]
// Type encoding: @16@0:8
// Implementation: 0x106aee3e8

// -[KSJSONCodec setTopLevelContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aee3f0

// -[KSJSONCodec currentContainer]
// Type encoding: @16@0:8
// Implementation: 0x106aee410

// -[KSJSONCodec setCurrentContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aee418

// -[KSJSONCodec containerStack]
// Type encoding: @16@0:8
// Implementation: 0x106aee420

// -[KSJSONCodec setContainerStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aee428

// -[KSJSONCodec callbacks]
// Type encoding: ^{KSJSONDecodeCallbacks=^?^?^?^?^?^?^?^?^?}16@0:8
// Implementation: 0x106aee448

// -[KSJSONCodec setCallbacks:]
// Type encoding: v24@0:8^{KSJSONDecodeCallbacks=^?^?^?^?^?^?^?^?^?}16
// Implementation: 0x106aee450

// -[KSJSONCodec serializedData]
// Type encoding: @16@0:8
// Implementation: 0x106aee458

// -[KSJSONCodec setSerializedData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aee460

// -[KSJSONCodec error]
// Type encoding: @16@0:8
// Implementation: 0x106aee480

// -[KSJSONCodec setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aee488

// -[KSJSONCodec prettyPrint]
// Type encoding: B16@0:8
// Implementation: 0x106aee4a8

// -[KSJSONCodec setPrettyPrint:]
// Type encoding: v20@0:8B16
// Implementation: 0x106aee4b0

// -[KSJSONCodec sorted]
// Type encoding: B16@0:8
// Implementation: 0x106aee4b8

// -[KSJSONCodec setSorted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106aee4c0

// -[KSJSONCodec ignoreNullsInArrays]
// Type encoding: B16@0:8
// Implementation: 0x106aee4c8

// -[KSJSONCodec setIgnoreNullsInArrays:]
// Type encoding: v20@0:8B16
// Implementation: 0x106aee4d0

// -[KSJSONCodec ignoreNullsInObjects]
// Type encoding: B16@0:8
// Implementation: 0x106aee4d8

// -[KSJSONCodec setIgnoreNullsInObjects:]
// Type encoding: v20@0:8B16
// Implementation: 0x106aee4e0

// -[KSJSONCodec .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106aee4e8

// +[KSJSONCodec codecWithEncodeOptions:decodeOptions:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x106aed6dc

// +[KSJSONCodec encode:options:error:]
// Type encoding: @36@0:8@16i24^@28
// Implementation: 0x106aedc4c

// +[KSJSONCodec decode:options:error:]
// Type encoding: @36@0:8@16i24^@28
// Implementation: 0x106aee238

@end
