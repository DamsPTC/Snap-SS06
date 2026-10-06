// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextImageContent
// Superclass: NSObject
// Address: 0x1129b1c90

@interface SCContextImageContent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCContextImageContent description]
// Type encoding: @16@0:8
// Implementation: 0x104425e88

// -[SCContextImageContent init]
// Type encoding: @16@0:8
// Implementation: 0x104425ec0

// -[SCContextImageContent hash]
// Type encoding: q16@0:8
// Implementation: 0x104425f08

// -[SCContextImageContent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104425f3c

// -[SCContextImageContent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104425fbc

// -[SCContextImageContent matchLocal:remote:bolt:bitmoji:encryptedMedia:image:]
// Type encoding: v64@0:8@?16@?24@?32@?40@?48@?56
// Implementation: 0x104426380

// -[SCContextImageContent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104426548

// +[SCContextImageContent localWithIcon:]
// Type encoding: @24@0:8q16
// Implementation: 0x104425fc4

// +[SCContextImageContent remoteWithContentURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104425fdc

// +[SCContextImageContent boltWithId:contextType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x104426014

// +[SCContextImageContent bitmojiWithAvatarId:selfieId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104426054

// +[SCContextImageContent encryptedMediaWithContentURL:encryptionKey:encryptionIV:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1044260cc

// +[SCContextImageContent imageWithImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044261a0

@end
