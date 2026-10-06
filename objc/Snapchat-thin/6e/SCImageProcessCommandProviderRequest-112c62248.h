// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCommandProviderRequest
// Superclass: NSObject
// Address: 0x112c62248

@interface SCImageProcessCommandProviderRequest

// Property: type; attributes: Tq,R,N,V_type
// Property: entries; attributes: T@"NSArray",R,C,N,V_entries
// Property: isSpectacles; attributes: TB,R,N,V_isSpectacles
// Property: lensCommandMetadata; attributes: T@"SCImageProcessLensCommandMetadata",R,C,N,V_lensCommandMetadata
// Property: isExportMode; attributes: TB,R,N,V_isExportMode
// Property: isSnapEditor; attributes: TB,R,N,V_isSnapEditor

// -[SCImageProcessCommandProviderRequest mappedCommandsWithMapper:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085790d0

// -[SCImageProcessCommandProviderRequest initWithType:entries:isSpectacles:lensCommandMetadata:isExportMode:isSnapEditor:]
// Type encoding: @52@0:8q16@24B32@36B44B48
// Implementation: 0x10b059fdc

// -[SCImageProcessCommandProviderRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b05a0b8

// -[SCImageProcessCommandProviderRequest hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b05a0dc

// -[SCImageProcessCommandProviderRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b05a16c

// -[SCImageProcessCommandProviderRequest type]
// Type encoding: q16@0:8
// Implementation: 0x10b05a254

// -[SCImageProcessCommandProviderRequest entries]
// Type encoding: @16@0:8
// Implementation: 0x10b05a25c

// -[SCImageProcessCommandProviderRequest isSpectacles]
// Type encoding: B16@0:8
// Implementation: 0x10b05a264

// -[SCImageProcessCommandProviderRequest lensCommandMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b05a26c

// -[SCImageProcessCommandProviderRequest isExportMode]
// Type encoding: B16@0:8
// Implementation: 0x10b05a274

// -[SCImageProcessCommandProviderRequest isSnapEditor]
// Type encoding: B16@0:8
// Implementation: 0x10b05a27c

// -[SCImageProcessCommandProviderRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b05a284

// +[SCImageProcessCommandProviderRequest videoRequestWithEntries:isSpectacles:isSnapEditor:lensCommandMetadata:isExportMode:]
// Type encoding: @44@0:8@16B24B28@32B40
// Implementation: 0x10857927c

// +[SCImageProcessCommandProviderRequest videoThumbnailRequestWithEntries:isSpectacles:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108579308

// +[SCImageProcessCommandProviderRequest imageRequestWithEntries:]
// Type encoding: @24@0:8@16
// Implementation: 0x108579370

// +[SCImageProcessCommandProviderRequest imageExportRequestWithEntries:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085793cc

// +[SCImageProcessCommandProviderRequest imageRequestWithEntries:isSpectacles:lensCommandMetadata:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x108579428

@end
