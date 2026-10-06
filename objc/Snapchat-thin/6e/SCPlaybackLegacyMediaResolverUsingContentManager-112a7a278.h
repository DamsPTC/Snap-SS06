// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackLegacyMediaResolverUsingContentManager
// Superclass: NSObject
// Address: 0x112a7a278

@interface SCPlaybackLegacyMediaResolverUsingContentManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackLegacyMediaResolverUsingContentManager initWithLegacyMediaResourceLoader:abrMediaResolver:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058f68ac

// -[SCPlaybackLegacyMediaResolverUsingContentManager shouldResolveWithRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f697c

// -[SCPlaybackLegacyMediaResolverUsingContentManager resolveRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f69dc

// -[SCPlaybackLegacyMediaResolverUsingContentManager retrieveCacheStatusForRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058f6d40

// -[SCPlaybackLegacyMediaResolverUsingContentManager _processResult:request:fetchStatus:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1058f6d48

// -[SCPlaybackLegacyMediaResolverUsingContentManager _transformRequest:withResolvedResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058f716c

// -[SCPlaybackLegacyMediaResolverUsingContentManager _createZipErrorResultFromError:forRequest:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058f726c

// -[SCPlaybackLegacyMediaResolverUsingContentManager _createZipErrorResultWithType:message:forRequest:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x1058f734c

// -[SCPlaybackLegacyMediaResolverUsingContentManager _mapZipEntryName:toMediaType:layerType:]
// Type encoding: B40@0:8@16^q24^q32
// Implementation: 0x1058f73cc

// -[SCPlaybackLegacyMediaResolverUsingContentManager _extractPlaybackEntriesFromZip:request:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1058f7464

// -[SCPlaybackLegacyMediaResolverUsingContentManager _processZipContentResult:request:fetchStatus:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1058f774c

// -[SCPlaybackLegacyMediaResolverUsingContentManager resolveZipMediaRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f7974

// -[SCPlaybackLegacyMediaResolverUsingContentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058f7d18

@end
