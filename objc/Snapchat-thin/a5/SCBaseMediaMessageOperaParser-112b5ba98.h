// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseMediaMessageOperaParser
// Superclass: NSObject
// Address: 0x112b5ba98

@interface SCBaseMediaMessageOperaParser


// +[SCBaseMediaMessageOperaParser pagesForChatMediaContent:message:isGroupConversation:recipientUserId:userSession:viewLocation:messageProperties:circumstanceEngine:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:featureSettingsService:]
// Type encoding: @108@0:8@16@24B32@36@44q52@60@68@76@84@92@100
// Implementation: 0x1070457d8

// +[SCBaseMediaMessageOperaParser _basePagePropertiesForChatMediaContent:message:circumstanceEngine:contentDelivery:chatMediaFetcher:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1070461c8

// +[SCBaseMediaMessageOperaParser _pagePropertiesForSpectaclesChatMediaContentIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x107046398

// +[SCBaseMediaMessageOperaParser _pagePropertiesForSpectaclesChatMediaType:mediaSize:]
// Type encoding: @40@0:8q16{CGSize=dd}24
// Implementation: 0x107046458

// +[SCBaseMediaMessageOperaParser _pagePropertiesForPendingMediaLoadState:]
// Type encoding: @24@0:8q16
// Implementation: 0x10704659c

// +[SCBaseMediaMessageOperaParser _pageChromePropertiesForMessage:sender:timestamp:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1070466fc

// +[SCBaseMediaMessageOperaParser _populateOverlayInPagePropertiesIfNecessary:overlayCacheId:contentDelivery:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1070467c4

// +[SCBaseMediaMessageOperaParser _pagePropertiesForLoadedChatMediaContent:contentDelivery:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107046878

// +[SCBaseMediaMessageOperaParser _sharedPagePropertiesForChatMediaContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x107046c50

// +[SCBaseMediaMessageOperaParser _operaPageLoadingStateFromChatMediaContentLoadState:]
// Type encoding: q24@0:8q16
// Implementation: 0x107046cf0

// +[SCBaseMediaMessageOperaParser _overlayPropertiesWithOverlayImageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107046d04

// +[SCBaseMediaMessageOperaParser _pagePropertiesWithImageId:rotationEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107046da0

// +[SCBaseMediaMessageOperaParser _pagePropertiesWithImageId:videoURL:rotationEnabled:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107046e98

// +[SCBaseMediaMessageOperaParser _pagePropertiesWithGifId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107047024

@end
