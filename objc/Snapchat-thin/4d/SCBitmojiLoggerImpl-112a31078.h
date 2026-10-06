// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiLoggerImpl
// Superclass: NSObject
// Address: 0x112a31078

@interface SCBitmojiLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiLoggerImpl initWithLogger:grapheneRegistry:loginInfoRepository:registrationFlowUUIDService:authenticationSessionInfoProvider:grapheneLoggerV2:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1053c4b00

// -[SCBitmojiLoggerImpl logSettingBitmojiView:page:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1053c4c88

// -[SCBitmojiLoggerImpl logSettingBitmojiSelfiePickerSession:imageLoadTimes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1053c4ce8

// -[SCBitmojiLoggerImpl logUnlinkBitmoji:page:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x1053c4e08

// -[SCBitmojiLoggerImpl logUnlinkBitmoji:action:page:]
// Type encoding: v40@0:8Q16Q24q32
// Implementation: 0x1053c4e14

// -[SCBitmojiLoggerImpl logSeeLinkButton:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053c4eac

// -[SCBitmojiLoggerImpl logSelfieView:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053c4efc

// -[SCBitmojiLoggerImpl logSelfieTap:page:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053c4f58

// -[SCBitmojiLoggerImpl logSelfieChange:success:page:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x1053c4fe4

// -[SCBitmojiLoggerImpl logSelfieCancel:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053c507c

// -[SCBitmojiLoggerImpl logSelfiePackFetchWithDeliverySource:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053c50cc

// -[SCBitmojiLoggerImpl logDeepLinkingWithDeepLinkSource:isUniversalLink:page:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x1053c50f4

// -[SCBitmojiLoggerImpl logCheetahDefaultSelfieUsed]
// Type encoding: v16@0:8
// Implementation: 0x1053c51c0

// -[SCBitmojiLoggerImpl _logRegistrationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c51cc

// -[SCBitmojiLoggerImpl _setHasLoggedInBeforeOnEvent:withValue:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053c52fc

// -[SCBitmojiLoggerImpl logAvatarStyleChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1053c53c8

// -[SCBitmojiLoggerImpl logStickerLoadDuration:isPreScroll:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1053c5428

// -[SCBitmojiLoggerImpl logStudyWithFallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c5448

// -[SCBitmojiLoggerImpl logFashionDropActionType:dropId:dropType:tokenPrice:]
// Type encoding: v48@0:8Q16@24Q32q40
// Implementation: 0x1053c5458

// -[SCBitmojiLoggerImpl logFetchWithType:feature:status:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1053c550c

// -[SCBitmojiLoggerImpl logNetworkRequestWithFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c55ac

// -[SCBitmojiLoggerImpl logRenderRequestWithSource:status:cacheStatus:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1053c55bc

// -[SCBitmojiLoggerImpl _getBitmojiAvatarStyle:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053c5660

// -[SCBitmojiLoggerImpl _getBlizzardUnlinkResultType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053c5680

// -[SCBitmojiLoggerImpl _getBlizzardUnlinkActionType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053c56a0

// -[SCBitmojiLoggerImpl _deepLinkSourceWithSourceString:]
// Type encoding: q24@0:8@16
// Implementation: 0x1053c56b8

// -[SCBitmojiLoggerImpl _blizzardFashionDropActionTypeWithDropActionType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053c5754

// -[SCBitmojiLoggerImpl _blizzardFashionDropTypeWithDropType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053c576c

// -[SCBitmojiLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053c5780

@end
