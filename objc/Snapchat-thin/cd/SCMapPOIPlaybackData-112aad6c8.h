// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPOIPlaybackData
// Superclass: NSObject
// Address: 0x112aad6c8

@interface SCMapPOIPlaybackData

// Property: poiID; attributes: T@"NSString",R,C,N,V_poiID
// Property: placeID; attributes: T@"NSString",R,C,N,V_placeID
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_coordinate
// Property: hasLabel; attributes: TB,R,N,V_hasLabel
// Property: previewManifest; attributes: T@"SCStoryManifest",R,C,N,V_previewManifest

// -[SCMapPOIPlaybackData initWithPoiID:placeID:coordinate:hasLabel:previewManifest:]
// Type encoding: @60@0:8@16@24{CLLocationCoordinate2D=dd}32B48@52
// Implementation: 0x105f3f60c

// -[SCMapPOIPlaybackData poiID]
// Type encoding: @16@0:8
// Implementation: 0x105f3f708

// -[SCMapPOIPlaybackData placeID]
// Type encoding: @16@0:8
// Implementation: 0x105f3f710

// -[SCMapPOIPlaybackData coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105f3f718

// -[SCMapPOIPlaybackData hasLabel]
// Type encoding: B16@0:8
// Implementation: 0x105f3f720

// -[SCMapPOIPlaybackData previewManifest]
// Type encoding: @16@0:8
// Implementation: 0x105f3f728

// -[SCMapPOIPlaybackData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f3f730

// +[SCMapPOIPlaybackData playbackDataFromFeatureDescriptor:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3cb4c

// +[SCMapPOIPlaybackData playbackDataFromAppTrigger:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3d0bc

@end
