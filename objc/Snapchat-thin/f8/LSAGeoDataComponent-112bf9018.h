// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAGeoDataComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9018

@interface LSAGeoDataComponent

// Property: prefetchedGeoData; attributes: T@"LSAGeoData",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAGeoDataComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10ad9805c

// -[LSAGeoDataComponent setGeoData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad9827c

// -[LSAGeoDataComponent setDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad985a0

// -[LSAGeoDataComponent removeDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad985b4

// -[LSAGeoDataComponent requestGeoDataAsyncWithGeoDataComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad98628

// -[LSAGeoDataComponent prefetchedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10ad98754

// -[LSAGeoDataComponent didRequestGeoData]
// Type encoding: {Task<LS::World::GeoData>={Pointer<snap::async::detail::SharedTaskState, 0, (unsigned char)'\x02', (unsigned char)'\x1f'>=^{SharedTaskState}}}16@0:8
// Implementation: 0x10ad987b0

// -[LSAGeoDataComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad989d8

// -[LSAGeoDataComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad98a68

@end
