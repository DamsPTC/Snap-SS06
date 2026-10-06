// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlacesStoryFetcher
// Superclass: NSObject
// Address: 0x112af9118

@interface SCMapPlacesStoryFetcher


// -[SCMapPlacesStoryFetcher initWithMapUserNetworking:profileDataFetcher:blockedSnapchatterFetcher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106773b98

// -[SCMapPlacesStoryFetcher fetchPlaylistForLocalityWithVerrazanoID:localizedLocality:blockedUserIds:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106773c98

// -[SCMapPlacesStoryFetcher fetchPlaylistForPlaceWithVerrazanoID:providerPhotos:useGooglePhotos:useAlternateRanking:requestId:blockedUserIds:source:completion:]
// Type encoding: v72@0:8@16@24B32B36@40@48Q56@?64
// Implementation: 0x106773d58

// -[SCMapPlacesStoryFetcher fetchPreviewThumbnailWithVerrazanoID:useAlternateRanking:source:completion:]
// Type encoding: v44@0:8@16B24Q28@?36
// Implementation: 0x106773fa4

// -[SCMapPlacesStoryFetcher fetchPreviewDataForPlaceIds:useAlternateRanking:source:completion:]
// Type encoding: v44@0:8@16B24Q28@?36
// Implementation: 0x10677448c

// -[SCMapPlacesStoryFetcher createPreviewThumbnailsDataObservableForPlaceIDs:useAlternateRanking:source:]
// Type encoding: @36@0:8@16B24Q28
// Implementation: 0x106774880

// -[SCMapPlacesStoryFetcher fetchPreviewSequenceWithVerrazanoID:useAlternateRanking:combineMultiSnaps:requestId:source:completion:]
// Type encoding: v56@0:8@16B24B28@32Q40@?48
// Implementation: 0x106774d60

// -[SCMapPlacesStoryFetcher fetchNumberOfSnapsForVerrazanoIDs:useAlternateRanking:source:completion:]
// Type encoding: v44@0:8@16B24Q28@?36
// Implementation: 0x106775d6c

// -[SCMapPlacesStoryFetcher _fetchProviderPhotosForVerrazanoID:useGooglePhotos:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10677617c

// -[SCMapPlacesStoryFetcher _executePlaceStoryPlaylistRequestWithVerrazanoID:localizedLocality:providerPhotos:useAlternateRanking:requestId:blockedUserIds:source:completion:]
// Type encoding: v76@0:8@16@24@32B40@44@52Q60@?68
// Implementation: 0x1067762fc

// -[SCMapPlacesStoryFetcher _handlePlaceStoryPlaylistResponse:error:verrazanoID:localizedLocality:providerPhotos:blockedUserIds:completion:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x106776570

// -[SCMapPlacesStoryFetcher _fetchBlockedUserIdsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106776820

// -[SCMapPlacesStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106776954

@end
