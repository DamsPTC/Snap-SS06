// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSPlaylistManager
// Superclass: NSObject
// Address: 0x112be6828

@interface SCNeoPlayerHLSPlaylistManager

// Property: delegate; attributes: T@"<SCNeoPlayerHLSPlaylistManagerDelegate>",W,N,V_delegate
// Property: topLevelEntries; attributes: T@"NSArray",R,N,V_topLevelEntries

// -[SCNeoPlayerHLSPlaylistManager initWithDelegateQueue:dataProviderFactory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090b27d0

// -[SCNeoPlayerHLSPlaylistManager cancelLoad]
// Type encoding: v16@0:8
// Implementation: 0x1090b28b8

// -[SCNeoPlayerHLSPlaylistManager _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b2994

// -[SCNeoPlayerHLSPlaylistManager _getOrCreateEntryForURL:rendition:parameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1090b29d8

// -[SCNeoPlayerHLSPlaylistManager entryForId:]
// Type encoding: @24@0:8q16
// Implementation: 0x1090b2bd4

// -[SCNeoPlayerHLSPlaylistManager _alternativeEntriesWithGroupId:inPlaylist:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090b2bdc

// -[SCNeoPlayerHLSPlaylistManager _didParseTopLevelPlaylist:url:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b2d24

// -[SCNeoPlayerHLSPlaylistManager setTopLevelPlaylistData:url:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b30c4

// -[SCNeoPlayerHLSPlaylistManager _didLoadSegments:forURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b32b4

// -[SCNeoPlayerHLSPlaylistManager _didLoadPlaylist:forURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b34ec

// -[SCNeoPlayerHLSPlaylistManager loadSegmentsAtURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3544

// -[SCNeoPlayerHLSPlaylistManager loadSegmentsOfEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3840

// -[SCNeoPlayerHLSPlaylistManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090b387c

// -[SCNeoPlayerHLSPlaylistManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b3894

// -[SCNeoPlayerHLSPlaylistManager topLevelEntries]
// Type encoding: @16@0:8
// Implementation: 0x1090b38a0

// -[SCNeoPlayerHLSPlaylistManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b38a8

@end
