// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiImageParams
// Superclass: NSObject
// Address: 0x112c6eef8

@interface SCBitmojiImageParams

// Property: templateId; attributes: T@"NSString",R,C,N,V_templateId
// Property: avatarId; attributes: T@"NSString",R,C,N,V_avatarId
// Property: friendAvatarId; attributes: T@"NSString",R,C,N,V_friendAvatarId
// Property: scale; attributes: TQ,R,N,V_scale
// Property: imageType; attributes: TQ,R,N,V_imageType
// Property: isAnimated; attributes: TB,R,N,V_isAnimated
// Property: customojiParams; attributes: T@"SCCustomojiParams",R,C,N,V_customojiParams
// Property: renderStyleOverride; attributes: T@"NSNumber",R,C,N,V_renderStyleOverride

// -[SCBitmojiImageParams initWithTemplateId:avatarId:friendAvatarId:scale:imageType:isAnimated:customojiParams:]
// Type encoding: @68@0:8@16@24@32Q40Q48B56@60
// Implementation: 0x10b0e9bb8

// -[SCBitmojiImageParams fullStickerId]
// Type encoding: @16@0:8
// Implementation: 0x10b0e4f44

// -[SCBitmojiImageParams encodedBitmoji]
// Type encoding: @16@0:8
// Implementation: 0x10b0e4da0

// -[SCBitmojiImageParams initWithTemplateId:avatarId:friendAvatarId:scale:imageType:isAnimated:customojiParams:renderStyleOverride:]
// Type encoding: @76@0:8@16@24@32Q40Q48B56@60@68
// Implementation: 0x10b0e9c2c

// -[SCBitmojiImageParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b0e9d84

// -[SCBitmojiImageParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e9da8

// -[SCBitmojiImageParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0e9e50

// -[SCBitmojiImageParams templateId]
// Type encoding: @16@0:8
// Implementation: 0x10b0e9f70

// -[SCBitmojiImageParams avatarId]
// Type encoding: @16@0:8
// Implementation: 0x10b0e9f78

// -[SCBitmojiImageParams friendAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x10b0e9f80

// -[SCBitmojiImageParams scale]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e9f88

// -[SCBitmojiImageParams imageType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e9f90

// -[SCBitmojiImageParams isAnimated]
// Type encoding: B16@0:8
// Implementation: 0x10b0e9f98

// -[SCBitmojiImageParams customojiParams]
// Type encoding: @16@0:8
// Implementation: 0x10b0e9fa0

// -[SCBitmojiImageParams renderStyleOverride]
// Type encoding: @16@0:8
// Implementation: 0x10b0e9fa8

// -[SCBitmojiImageParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e9fb0

// +[SCBitmojiImageParams fromEncoded:customojiParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0e4d80

// +[SCBitmojiImageParams fromEncoded:scale:customojiParams:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x10b0e4d90

@end
