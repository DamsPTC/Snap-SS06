// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesStreamingInfo
// Superclass: NSObject
// Address: 0x112c79ad8

@interface SCStoriesStreamingInfo

// Property: mediaURL; attributes: T@"NSURL",R,C,N,V_mediaURL
// Property: zipURL; attributes: T@"NSURL",R,C,N,V_zipURL
// Property: encryptionInfo; attributes: T@"SCMediaEncryptionInfo",R,C,N,V_encryptionInfo
// Property: metadata; attributes: T@"SCStoriesStreamingMediaMetadata",R,C,N,V_metadata

// -[SCStoriesStreamingInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6085e0

// -[SCStoriesStreamingInfo initWithMediaURL:zipURL:encryptionInfo:metadata:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b6086e0

// -[SCStoriesStreamingInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6087ec

// -[SCStoriesStreamingInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b608810

// -[SCStoriesStreamingInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b608898

// -[SCStoriesStreamingInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b608924

// -[SCStoriesStreamingInfo mediaURL]
// Type encoding: @16@0:8
// Implementation: 0x10b6089fc

// -[SCStoriesStreamingInfo zipURL]
// Type encoding: @16@0:8
// Implementation: 0x10b608a04

// -[SCStoriesStreamingInfo encryptionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b608a0c

// -[SCStoriesStreamingInfo metadata]
// Type encoding: @16@0:8
// Implementation: 0x10b608a14

// -[SCStoriesStreamingInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b608a1c

@end
