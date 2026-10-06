// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiService
// Superclass: NSObject
// Address: 0x112a5cfe8

@interface SCBitmojiService

// Property: avatarServiceCache; attributes: T@"<SCCBitmojiNetworkingAvatarService>",&,V_avatarServiceCache

// -[SCBitmojiService initWithBitmojiAvatarProvider:bitmojiAvatarDataProvider:userScopedValdiRuntimeServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10570c568

// -[SCBitmojiService getAvatarDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10570c668

// -[SCBitmojiService getCurrentUserAvatarBodyTypeFuture]
// Type encoding: @16@0:8
// Implementation: 0x10570c66c

// -[SCBitmojiService _handleGetAvatarDataForBodyTypeResponseWithAvatarData:error:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10570c854

// -[SCBitmojiService _getAvatarDataV2ClientWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10570c928

// -[SCBitmojiService _getAvatarService:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10570cb2c

// -[SCBitmojiService _setCachedAvatarService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10570cd58

// -[SCBitmojiService _getAvatarDataWithAvatarService:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10570cd5c

// -[SCBitmojiService avatarServiceCache]
// Type encoding: @16@0:8
// Implementation: 0x10570d00c

// -[SCBitmojiService setAvatarServiceCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10570d018

// -[SCBitmojiService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10570d020

@end
