// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoAssetUtils
// Superclass: NSObject
// Address: 0x112be7ca0

@interface SCVideoAssetUtils


// +[SCVideoAssetUtils videoDurationForURL:]
// Type encoding: d24@0:8@16
// Implementation: 0x109126018

// +[SCVideoAssetUtils videoSizeForAsset:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x109126078

// +[SCVideoAssetUtils videoSizeForURL:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x109126080

// +[SCVideoAssetUtils videoSizeForAsset:waitWhileLoadingTracksIfNeeded:]
// Type encoding: {CGSize=dd}28@0:8@16B24
// Implementation: 0x109126088

// +[SCVideoAssetUtils videoSizeForURL:waitWhileLoadingTracksIfNeeded:]
// Type encoding: {CGSize=dd}28@0:8@16B24
// Implementation: 0x1091261a0

// +[SCVideoAssetUtils videoDurationForAsset:waitWhileLoadingTracksIfNeeded:error:]
// Type encoding: d36@0:8@16B24^@28
// Implementation: 0x109126210

// +[SCVideoAssetUtils synchronouslyLoadAttributes:forAssetTrack:timeout:error:]
// Type encoding: B48@0:8@16@24d32^@40
// Implementation: 0x109126300

// +[SCVideoAssetUtils synchronouslyLoadAttributes:forVideo:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109126828

@end
