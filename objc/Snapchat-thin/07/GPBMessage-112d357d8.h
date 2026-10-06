// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBMessage
// Superclass: NSObject
// Address: 0x112d357d8

@interface GPBMessage

// Property: unknownFields; attributes: T@"GPBUnknownFieldSet",C,N
// Property: initialized; attributes: TB,R,N,GisInitialized

// -[GPBMessage init]
// Type encoding: @16@0:8
// Implementation: 0x100108e60

// -[GPBMessage initWithData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x100113ad4

// -[GPBMessage initWithData:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x100108de0

// -[GPBMessage initWithCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10bd7e9e8

// -[GPBMessage dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10010de38

// -[GPBMessage copyFieldsInto:zone:descriptor:]
// Type encoding: v40@0:8@16^{_NSZone=}24@32
// Implementation: 0x10bd7eb68

// -[GPBMessage copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bd7efe4

// -[GPBMessage clear]
// Type encoding: v16@0:8
// Implementation: 0x10bd7f304

// -[GPBMessage internalClear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10010de80

// -[GPBMessage isInitialized]
// Type encoding: B16@0:8
// Implementation: 0x10bd7f30c

// -[GPBMessage descriptor]
// Type encoding: @16@0:8
// Implementation: 0x100109540

// -[GPBMessage data]
// Type encoding: @16@0:8
// Implementation: 0x1002956c4

// -[GPBMessage delimitedData]
// Type encoding: @16@0:8
// Implementation: 0x10bd7f7b8

// -[GPBMessage writeToOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd7f8a8

// -[GPBMessage writeToCodedOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002979a0

// -[GPBMessage writeDelimitedToOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd7f978

// -[GPBMessage writeDelimitedToCodedOutputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd7fa08

// -[GPBMessage writeField:toCodedOutputStream:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100297b3c

// -[GPBMessage getExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bd7fa7c

// -[GPBMessage getExistingExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bd7fc10

// -[GPBMessage hasExtension:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bd7fc18

// -[GPBMessage extensionsCurrentlySet]
// Type encoding: @16@0:8
// Implementation: 0x10bd7fc38

// -[GPBMessage writeExtensionsToCodedOutputStream:range:sortedExtensions:]
// Type encoding: v40@0:8@16{GPBExtensionRange=II}24@32
// Implementation: 0x10bd7fc40

// -[GPBMessage setExtension:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bd7fd70

// -[GPBMessage addExtension:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bd7fe68

// -[GPBMessage setExtension:index:value:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10bd7ff20

// -[GPBMessage clearExtension:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd7ffb4

// -[GPBMessage mergeFromData:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100824118

// -[GPBMessage mergeFromData:extensionRegistry:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x100108ec0

// -[GPBMessage unknownFields]
// Type encoding: @16@0:8
// Implementation: 0x10bd8011c

// -[GPBMessage setUnknownFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd80124

// -[GPBMessage parseMessageSet:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bd80170

// -[GPBMessage parseUnknownField:extensionRegistry:tag:]
// Type encoding: B36@0:8@16@24I32
// Implementation: 0x10bd804a8

// -[GPBMessage addUnknownMapEntry:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd805dc

// -[GPBMessage mergeFromCodedInputStream:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100108ff8

// -[GPBMessage mergeFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bd80608

// -[GPBMessage isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bd80c74

// -[GPBMessage hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bd80fc8

// -[GPBMessage description]
// Type encoding: @16@0:8
// Implementation: 0x10bd811e0

// -[GPBMessage serializedSize]
// Type encoding: Q16@0:8
// Implementation: 0x100295764

// -[GPBMessage initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008240b0

// -[GPBMessage encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bfb8a4

// +[GPBMessage initialize]
// Type encoding: v16@0:8
// Implementation: 0x100107d80

// +[GPBMessage allocWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x100108db0

// +[GPBMessage alloc]
// Type encoding: @16@0:8
// Implementation: 0x100108dac

// +[GPBMessage descriptor]
// Type encoding: @16@0:8
// Implementation: 0x100108050

// +[GPBMessage message]
// Type encoding: @16@0:8
// Implementation: 0x100266430

// +[GPBMessage parseFromData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x100108d60

// +[GPBMessage parseFromData:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x100108d6c

// +[GPBMessage parseFromCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10bd80008

// +[GPBMessage parseDelimitedFromCodedInputStream:extensionRegistry:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10bd80048

// +[GPBMessage resolveInstanceMethod:]
// Type encoding: B24@0:8:16
// Implementation: 0x10010cf50

// +[GPBMessage resolveClassMethod:]
// Type encoding: B24@0:8:16
// Implementation: 0x10bd81514

// +[GPBMessage supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x10bd81570

// +[GPBMessage accessInstanceVariablesDirectly]
// Type encoding: B16@0:8
// Implementation: 0x10bd81578

@end
