// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSJSONCodec
// Superclass: NSObject
// Address: 0xad90e0

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
// Implementation: 0x4a9d6c

// -[KSJSONCodec dealloc]
// Type encoding: v16@0:8
// Implementation: 0x4aa264

// -[KSJSONCodec topLevelContainer]
// Type encoding: @16@0:8
// Implementation: 0x4aaa48

// -[KSJSONCodec setTopLevelContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x4aaa50

// -[KSJSONCodec currentContainer]
// Type encoding: @16@0:8
// Implementation: 0x4aaa70

// -[KSJSONCodec setCurrentContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x4aaa78

// -[KSJSONCodec containerStack]
// Type encoding: @16@0:8
// Implementation: 0x4aaa80

// -[KSJSONCodec setContainerStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x4aaa88

// -[KSJSONCodec callbacks]
// Type encoding: ^{KSJSONDecodeCallbacks=^?^?^?^?^?^?^?^?^?}16@0:8
// Implementation: 0x4aaaa8

// -[KSJSONCodec setCallbacks:]
// Type encoding: v24@0:8^{KSJSONDecodeCallbacks=^?^?^?^?^?^?^?^?^?}16
// Implementation: 0x4aaab0

// -[KSJSONCodec serializedData]
// Type encoding: @16@0:8
// Implementation: 0x4aaab8

// -[KSJSONCodec setSerializedData:]
// Type encoding: v24@0:8@16
// Implementation: 0x4aaac0

// -[KSJSONCodec error]
// Type encoding: @16@0:8
// Implementation: 0x4aaae0

// -[KSJSONCodec setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x4aaae8

// -[KSJSONCodec prettyPrint]
// Type encoding: B16@0:8
// Implementation: 0x4aab08

// -[KSJSONCodec setPrettyPrint:]
// Type encoding: v20@0:8B16
// Implementation: 0x4aab10

// -[KSJSONCodec sorted]
// Type encoding: B16@0:8
// Implementation: 0x4aab18

// -[KSJSONCodec setSorted:]
// Type encoding: v20@0:8B16
// Implementation: 0x4aab20

// -[KSJSONCodec ignoreNullsInArrays]
// Type encoding: B16@0:8
// Implementation: 0x4aab28

// -[KSJSONCodec setIgnoreNullsInArrays:]
// Type encoding: v20@0:8B16
// Implementation: 0x4aab30

// -[KSJSONCodec ignoreNullsInObjects]
// Type encoding: B16@0:8
// Implementation: 0x4aab38

// -[KSJSONCodec setIgnoreNullsInObjects:]
// Type encoding: v20@0:8B16
// Implementation: 0x4aab40

// -[KSJSONCodec .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4aab48

// +[KSJSONCodec codecWithEncodeOptions:decodeOptions:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x4a9d3c

// +[KSJSONCodec encode:options:error:]
// Type encoding: @36@0:8@16i24^@28
// Implementation: 0x4aa2ac

// +[KSJSONCodec decode:options:error:]
// Type encoding: @36@0:8@16i24^@28
// Implementation: 0x4aa898

@end
