// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBMessage
// Superclass: NSObject
// Address: 0xae5de0

@interface GPBMessage

// Property: unknownFields; attributes: T@"GPBUnknownFieldSet",C,N
// Property: initialized; attributes: TB,R,N,GisInitialized

// -[GPBMessage init]
// Type encoding: @16@0:8
// Implementation: 0x762948

// -[GPBMessage initWithData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x7629a8

// -[GPBMessage initWithData:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x7629b4

// -[GPBMessage initWithCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x762a34

// -[GPBMessage dealloc]
// Type encoding: v16@0:8
// Implementation: 0x762bb4

// -[GPBMessage copyFieldsInto:zone:descriptor:]
// Type encoding: v40@0:8@16^{_NSZone=}24@32
// Implementation: 0x762bfc

// -[GPBMessage copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x763078

// -[GPBMessage clear]
// Type encoding: v16@0:8
// Implementation: 0x763398

// -[GPBMessage internalClear:]
// Type encoding: v20@0:8B16
// Implementation: 0x7633a0

// -[GPBMessage isInitialized]
// Type encoding: B16@0:8
// Implementation: 0x7637e0

// -[GPBMessage descriptor]
// Type encoding: @16@0:8
// Implementation: 0x763c8c

// -[GPBMessage data]
// Type encoding: @16@0:8
// Implementation: 0x763ca0

// -[GPBMessage delimitedData]
// Type encoding: @16@0:8
// Implementation: 0x763d40

// -[GPBMessage writeToOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x763e30

// -[GPBMessage writeToCodedOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x763f00

// -[GPBMessage writeDelimitedToOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x76408c

// -[GPBMessage writeDelimitedToCodedOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x76411c

// -[GPBMessage writeField:toCodedOutputStream:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x764190

// -[GPBMessage getExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x764d98

// -[GPBMessage getExistingExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x764f2c

// -[GPBMessage hasExtension:]
// Type encoding: B24@0:8@16
// Implementation: 0x764f34

// -[GPBMessage extensionsCurrentlySet]
// Type encoding: @16@0:8
// Implementation: 0x764f54

// -[GPBMessage writeExtensionsToCodedOutputStream:range:sortedExtensions:]
// Type encoding: v40@0:8@16{GPBExtensionRange=II}24@32
// Implementation: 0x764f5c

// -[GPBMessage setExtension:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x76508c

// -[GPBMessage addExtension:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x765184

// -[GPBMessage setExtension:index:value:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x76523c

// -[GPBMessage clearExtension:]
// Type encoding: v24@0:8@16
// Implementation: 0x7652d0

// -[GPBMessage mergeFromData:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x765324

// -[GPBMessage mergeFromData:extensionRegistry:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x7653c8

// -[GPBMessage unknownFields]
// Type encoding: @16@0:8
// Implementation: 0x7655ec

// -[GPBMessage setUnknownFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x7655f4

// -[GPBMessage parseMessageSet:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x765640

// -[GPBMessage parseUnknownField:extensionRegistry:tag:]
// Type encoding: B36@0:8@16@24I32
// Implementation: 0x765978

// -[GPBMessage addUnknownMapEntry:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x765aac

// -[GPBMessage mergeFromCodedInputStream:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x765ad8

// -[GPBMessage mergeFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x766578

// -[GPBMessage isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x766c48

// -[GPBMessage hash]
// Type encoding: Q16@0:8
// Implementation: 0x766f9c

// -[GPBMessage description]
// Type encoding: @16@0:8
// Implementation: 0x7671b4

// -[GPBMessage serializedSize]
// Type encoding: Q16@0:8
// Implementation: 0x767218

// -[GPBMessage initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x7691dc

// -[GPBMessage encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x769244

// +[GPBMessage initialize]
// Type encoding: v16@0:8
// Implementation: 0x7627f4

// +[GPBMessage allocWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x76286c

// +[GPBMessage alloc]
// Type encoding: @16@0:8
// Implementation: 0x76289c

// +[GPBMessage descriptor]
// Type encoding: @16@0:8
// Implementation: 0x7628a0

// +[GPBMessage message]
// Type encoding: @16@0:8
// Implementation: 0x762934

// +[GPBMessage parseFromData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x76548c

// +[GPBMessage parseFromData:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x765498

// +[GPBMessage parseFromCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x7654d8

// +[GPBMessage parseDelimitedFromCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x765518

// +[GPBMessage resolveInstanceMethod:]
// Type encoding: B24@0:8:16
// Implementation: 0x768248

// +[GPBMessage resolveClassMethod:]
// Type encoding: B24@0:8:16
// Implementation: 0x769178

// +[GPBMessage supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x7691d4

// +[GPBMessage accessInstanceVariablesDirectly]
// Type encoding: B16@0:8
// Implementation: 0x76928c

@end
