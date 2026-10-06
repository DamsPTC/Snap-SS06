// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiAvatarProvider
// Superclass: NSObject
// Address: 0x112a30bc8

@interface SCBitmojiAvatarProvider

// Property: avatarId; attributes: T@"NSString",C,V_avatarId
// Property: avatarIdObserver; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiAvatarProvider initWithUserInfoProvider:bitmojiAvatarIdMutator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10049aef0

// -[SCBitmojiAvatarProvider _publishAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e898c

// -[SCBitmojiAvatarProvider avatarIdObserver]
// Type encoding: @16@0:8
// Implementation: 0x1004e8dc4

// -[SCBitmojiAvatarProvider updateAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c2084

// -[SCBitmojiAvatarProvider hasAvatarId]
// Type encoding: B16@0:8
// Implementation: 0x1053c208c

// -[SCBitmojiAvatarProvider avatarId]
// Type encoding: @16@0:8
// Implementation: 0x1004e8abc

// -[SCBitmojiAvatarProvider setAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c20cc

// -[SCBitmojiAvatarProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053c20d4

@end
