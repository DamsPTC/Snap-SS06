// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCObjcMusicSelectionLoader
// Superclass: NSObject
// Address: 0x112a76b78

@interface SCObjcMusicSelectionLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCObjcMusicSelectionLoader initWithMediaLoader:musicGrpcService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058e6ec4

// -[SCObjcMusicSelectionLoader loadSelectionForTrackId:includeMusicStats:includeArtistLink:completionQueue:completion:]
// Type encoding: @48@0:8Q16B24B28@32@?40
// Implementation: 0x1058e6f68

// -[SCObjcMusicSelectionLoader fetchAvailabilityForTrackId:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1058e7dc4

// -[SCObjcMusicSelectionLoader fetchContentRestrictionsForTrackId:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1058e818c

// -[SCObjcMusicSelectionLoader fetchTrackWithIsrc:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1058e8400

// -[SCObjcMusicSelectionLoader _getMusicTrackWithId:includeMusicStats:includeArtistLink:completion:]
// Type encoding: v40@0:8Q16B24B28@?32
// Implementation: 0x1058e8824

// -[SCObjcMusicSelectionLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058e8bb4

@end
