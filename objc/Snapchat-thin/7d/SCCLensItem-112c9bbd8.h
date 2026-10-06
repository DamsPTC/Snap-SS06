// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCLensItem
// Superclass: SCValdiMarshallableObject
// Address: 0x112c9bbd8

@interface SCCLensItem

// Property: lensId; attributes: T@"NSString",C,D,N
// Property: name; attributes: T@"NSString",C,D,N
// Property: deeplinkUrl; attributes: T@"NSString",C,D,N
// Property: iconUrl; attributes: T@"NSString",C,D,N
// Property: thumbnailUrl; attributes: T@"NSString",C,D,N
// Property: launchData; attributes: T@"SCCLensLaunchData",&,D,N

// -[SCCLensItem asLensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106831228

// -[SCCLensItem initWithLensId:name:deeplinkUrl:iconUrl:thumbnailUrl:launchData:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10b675410

// +[SCCLensItem valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b67543c

@end
