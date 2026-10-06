// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SpotlightAutoShareServiceImpl
// Superclass: NSObject
// Address: 0x1128adf40

@interface SpotlightAutoShareServiceImpl

// Property: isCrossPostingToPublicStoriesEnabled; attributes: TB,N,R
// Property: isQuickPostTrayCrossPostingEnabled; attributes: TB,N,R
// Property: isAutoSelectStoryOnSpotlightEnabled; attributes: TB,N,R

// -[SpotlightAutoShareServiceImpl didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x102fd233c

// -[SpotlightAutoShareServiceImpl crossPostingSpotlightToStoriesWithSnapDocWithSnapDoc:snapDocKey:mediaQualityType:conversations:massSnapRecipients:stories:phoneNumbers:incidentalAttachments:snapSendInfo:messagingLocalMediaReferences:spotlightTileMediaReference:externalContentMetadata:localMessageContentMetadata:localPlatformData:completionQueue:completionHandler:storiesConfig:mediaBytes:mediaBytesProvider:overlayData:ephemeralMedia:crossPostStoryClientId:]
// Type encoding: v192@0:8@16@24q32@40@48@56@64@72@80@88@96@104@112@120@128@?136@144@152@?160@168@176@184
// Implementation: 0x102fca450

// -[SpotlightAutoShareServiceImpl buildCrossPostToStoryInfoWithStoriesConfig:additionalText:isAutoShare:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x102fcb750

// -[SpotlightAutoShareServiceImpl releaseReservedStoryMediaWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x102fcb8d8

// -[SpotlightAutoShareServiceImpl spotlightCrossPostingEligibilityWithStoriesConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x102fcb960

// -[SpotlightAutoShareServiceImpl containsOnlyEligibleDestinationsForCrossPostingWithStoriesConfig:]
// Type encoding: B24@0:8@16
// Implementation: 0x102fcba24

// -[SpotlightAutoShareServiceImpl autoShareSpotlightPostWithEphemeralMedia:storiesConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x102fcf2b8

// -[SpotlightAutoShareServiceImpl isCrossPostingSpotlightToStoriesEnabled:]
// Type encoding: B20@0:8B16
// Implementation: 0x102fcf340

// -[SpotlightAutoShareServiceImpl isCrossPostingToPublicStoriesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102fcf3c8

// -[SpotlightAutoShareServiceImpl isQuickPostTrayCrossPostingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102fcf43c

// -[SpotlightAutoShareServiceImpl isAutoSelectStoryOnSpotlightEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102fcf4b0

// -[SpotlightAutoShareServiceImpl init]
// Type encoding: @16@0:8
// Implementation: 0x102fd1f88

// -[SpotlightAutoShareServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102fd1fe8

@end
