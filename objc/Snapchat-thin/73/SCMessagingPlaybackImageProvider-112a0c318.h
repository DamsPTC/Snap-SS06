// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingPlaybackImageProvider
// Superclass: NSObject
// Address: 0x112a0c318

@interface SCMessagingPlaybackImageProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingPlaybackImageProvider initWithContentDelivery:playbackGrapheneLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104f80844

// -[SCMessagingPlaybackImageProvider gifDataForKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f808e8

// -[SCMessagingPlaybackImageProvider _didRetrieveGifContent:key:startTime:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x104f80c1c

// -[SCMessagingPlaybackImageProvider imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f80dbc

// -[SCMessagingPlaybackImageProvider _didRetrieveContent:key:startTime:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x104f80ffc

// -[SCMessagingPlaybackImageProvider _logSnapFetchLatencyForStartTime:imageCreationLatencyMS:mainThreadHopLatencyMS:]
// Type encoding: v40@0:8d16d24d32
// Implementation: 0x104f81328

// -[SCMessagingPlaybackImageProvider _logSnapFetchLatencyForStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x104f8139c

// -[SCMessagingPlaybackImageProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f813f8

@end
