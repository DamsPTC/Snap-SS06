// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapSaver
// Superclass: NSObject
// Address: 0x112b87a58

@interface SCSnapSaver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapSaver initWithSnapSavingEventScopeExposer:circumstanceEngine:fetchLimit:grapheneRegistry:tmpFileWriter:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107e45a2c

// -[SCSnapSaver saveSnapImageToSnapAlbum:circumstanceEngine:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e45b60

// -[SCSnapSaver saveSnapImageToSnapAlbum:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e45be8

// -[SCSnapSaver saveSnapImageToSnapAlbum:snapId:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e45bf4

// -[SCSnapSaver saveSnapImageToSnapAlbum:location:embeddedMetadata:snapId:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107e45c08

// -[SCSnapSaver saveSnapVideoToSnapAlbumWithCallsite:videoURL:completionBlock:deleteAfterSaving:]
// Type encoding: v44@0:8Q16@24@?32B40
// Implementation: 0x107e46454

// -[SCSnapSaver saveSnapVideoToSnapAlbumWithCallsite:videoURL:snapId:completionBlock:deleteAfterSaving:]
// Type encoding: v52@0:8Q16@24@32@?40B48
// Implementation: 0x107e46464

// -[SCSnapSaver saveSnapVideoToSnapAlbumWithCallsite:videoURL:deleteAfterSaving:completionBlock:]
// Type encoding: v44@0:8Q16@24B32@?36
// Implementation: 0x107e46474

// -[SCSnapSaver saveSnapVideoToSnapAlbumWithCallsite:videoURL:snapId:deleteAfterSaving:completionBlock:]
// Type encoding: v52@0:8Q16@24@32B40@?44
// Implementation: 0x107e46484

// -[SCSnapSaver saveSnapVideoToSnapAlbumWithCallsite:videoURL:location:snapId:deleteAfterSaving:completionBlock:]
// Type encoding: v60@0:8Q16@24@32@40B48@?52
// Implementation: 0x107e46498

// -[SCSnapSaver _saveSnapVideoToSnapAlbumWithCallsite:videoURL:location:snapId:deleteAfterSaving:isReattempt:completionBlock:]
// Type encoding: v64@0:8Q16@24@32@40B48B52@?56
// Implementation: 0x107e464bc

// -[SCSnapSaver _cleanupArtifactsWithOriginalURL:videoURL:shouldDelete:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107e472c4

// -[SCSnapSaver _reEncodeVideo:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e47374

// -[SCSnapSaver _tempMp4FileURL]
// Type encoding: @16@0:8
// Implementation: 0x107e47620

// -[SCSnapSaver finishedSavingToAlbumWithError:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e476e8

// -[SCSnapSaver _emitSaveEventWithPHAssetLocalIdentifier:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e477a8

// -[SCSnapSaver _shouldConvertImageToPNG]
// Type encoding: B16@0:8
// Implementation: 0x107e47824

// -[SCSnapSaver snapSavingEvents]
// Type encoding: @16@0:8
// Implementation: 0x107e4783c

// -[SCSnapSaver _newMp4Url]
// Type encoding: @16@0:8
// Implementation: 0x107e47908

// -[SCSnapSaver _newMovUrl]
// Type encoding: @16@0:8
// Implementation: 0x107e47914

// -[SCSnapSaver _newURLWithExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e47920

// -[SCSnapSaver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e479fc

// +[SCSnapSaver shared]
// Type encoding: @16@0:8
// Implementation: 0x107e458fc

// +[SCSnapSaver _photoPermissionCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x107e47864

@end
