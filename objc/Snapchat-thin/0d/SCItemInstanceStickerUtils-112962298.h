// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCItemInstanceStickerUtils
// Superclass: NSObject
// Address: 0x112962298

@interface SCItemInstanceStickerUtils


// -[SCItemInstanceStickerUtils init]
// Type encoding: @16@0:8
// Implementation: 0x103ee04cc

// +[SCItemInstanceStickerUtils altitudeStickerItemInstanceWithAltitude:measurementUnit:type:]
// Type encoding: @28@0:8i16i20i24
// Implementation: 0x103edf868

// +[SCItemInstanceStickerUtils batteryStickerItemInstanceForBatteryLevel:]
// Type encoding: @20@0:8i16
// Implementation: 0x103edf888

// +[SCItemInstanceStickerUtils dateTimeStickerItemInstanceForTime:type:]
// Type encoding: @28@0:8q16i24
// Implementation: 0x103edf8a0

// +[SCItemInstanceStickerUtils pollStickerItemInstanceWithPollInfo:isDynamic:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x103edf8bc

// +[SCItemInstanceStickerUtils mentionStickerItemInstanceWithUsername:userId:displayName:type:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x103edf910

// +[SCItemInstanceStickerUtils questionStickerItemInstanceWithQuestionText:answerText:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103edf9c0

// +[SCItemInstanceStickerUtils weatherStickerItemInstanceWithCelsius:locationName:hourlyForecast:dailyForecast:type:measurementSystem:]
// Type encoding: @52@0:8f16@20@28@36i44i48
// Implementation: 0x103edfbb8

// +[SCItemInstanceStickerUtils genericImageStickerItemInstanceWithImageStickerSource:text:imageSize:actionLinkUrl:isAnimated:type:quotedUserId:]
// Type encoding: @72@0:8@16@24{CGSize=dd}32@48B56i60@64
// Implementation: 0x103edfca0

// +[SCItemInstanceStickerUtils snapKitStickerItemInstanceWithSticker:temporaryFileWriter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103edfdbc

// +[SCItemInstanceStickerUtils attachmentStickerItemInstanceFromUrl:title:shortenedURL:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x103edfe1c

// +[SCItemInstanceStickerUtils discoverDeeplinkStickerItemInstanceFromDeeplinkUrl:title:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103edfecc

// +[SCItemInstanceStickerUtils fanPassStickerItemInstanceFromDeeplinkUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x103edff58

// +[SCItemInstanceStickerUtils shareYoursStickerItemInstanceWithShareYoursId:promptText:participantUserIds:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x103edff68

// +[SCItemInstanceStickerUtils snapMeStickerItemInstanceWithPrompt:]
// Type encoding: @24@0:8@16
// Implementation: 0x103ee0008

// +[SCItemInstanceStickerUtils snapcodeStickerItemInstanceWithUserId:username:avatarId:displayName:withUserTag:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x103ee0050

// +[SCItemInstanceStickerUtils venueStickerItemInstanceWithVenueId:name:type:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x103ee0148

// +[SCItemInstanceStickerUtils storyInviteStickerItemInstanceWithInviteId:storyName:storyId:type:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x103ee01c8

// +[SCItemInstanceStickerUtils planStickerItemInstanceWithEventId:title:startTimestampMs:locationText:creatorUserId:participantCount:eventEmojiOrGraphicId:tzid:type:isAllDay:]
// Type encoding: @84@0:8@16@24q32@40@48i56@60@68i76B80
// Implementation: 0x103ee026c

// +[SCItemInstanceStickerUtils bitmojiStickerItemInstanceWithComicId:avatarId:friendAvatarId:isAnimated:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x103ee0420

@end
