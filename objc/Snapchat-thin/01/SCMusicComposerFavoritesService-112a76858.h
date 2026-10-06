// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicComposerFavoritesService
// Superclass: NSObject
// Address: 0x112a76858

@interface SCMusicComposerFavoritesService

// Property: observable; attributes: T@"SCBridgeObservable",&,N,V_observable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicComposerFavoritesService _parseTracksFromItemsGroups:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058e0990

// -[SCMusicComposerFavoritesService initWithCtpUserDataFeedService:creativeToolsABProvider:userDataWrapper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058e0c30

// -[SCMusicComposerFavoritesService getFavoritesWithOnComplete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1058e0d2c

// -[SCMusicComposerFavoritesService getPagedFavoritesWithOnComplete:pageToken:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1058e10a4

// -[SCMusicComposerFavoritesService setFavoritedWithTrackId:favorited:onComplete:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1058e1504

// -[SCMusicComposerFavoritesService isFavoritedWithTrackId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058e1854

// -[SCMusicComposerFavoritesService observable]
// Type encoding: @16@0:8
// Implementation: 0x1058e1bc4

// -[SCMusicComposerFavoritesService pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1058e1ed0

// -[SCMusicComposerFavoritesService setObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058e1edc

// -[SCMusicComposerFavoritesService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058e1f0c

@end
