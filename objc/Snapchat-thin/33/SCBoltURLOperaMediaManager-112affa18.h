// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltURLOperaMediaManager
// Superclass: NSObject
// Address: 0x112affa18

@interface SCBoltURLOperaMediaManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltURLOperaMediaManager initWithSimpleContentFetcher:imageFetchingService:circumstanceEngine:temporaryFileWriter:snapSavingService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1067ec280

// -[SCBoltURLOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ec3b8

// -[SCBoltURLOperaMediaManager saveMediaToCameraRollForBoltURL:isImage:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1067ec8ec

// -[SCBoltURLOperaMediaManager _saveImageToCameraRollWithData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067eccec

// -[SCBoltURLOperaMediaManager _saveVideoToCameraRollWithData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ecddc

// -[SCBoltURLOperaMediaManager _writeToTemporaryDirectoryWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067ecfb0

// -[SCBoltURLOperaMediaManager _handleSuccessResponseForImageFetchingService:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ed1c8

// -[SCBoltURLOperaMediaManager _handleFailureResponseForImageFetchingService:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ed2b8

// -[SCBoltURLOperaMediaManager _handleFetchResult:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ed34c

// -[SCBoltURLOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067ed4d0

@end
