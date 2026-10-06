// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyStoriesOperaMediaManager
// Superclass: NSObject
// Address: 0x112b60868

@interface SCLegacyStoriesOperaMediaManager

// Property: preparedStoryPageProperties; attributes: T@"NSMutableDictionary",R,N,V_preparedStoryPageProperties
// Property: loadingBackgroundImagePreparedStoryPageProperties; attributes: T@"NSMutableDictionary",R,N,V_loadingBackgroundImagePreparedStoryPageProperties
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyStoriesOperaMediaManager initWithUserSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fea38

// -[SCLegacyStoriesOperaMediaManager prepareToViewStory:synchronously:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1071fec4c

// -[SCLegacyStoriesOperaMediaManager _useInMemoryPlayback]
// Type encoding: B16@0:8
// Implementation: 0x1071fedd8

// -[SCLegacyStoriesOperaMediaManager _shouldUseTemporaryFilePathForStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071fede0

// -[SCLegacyStoriesOperaMediaManager _corruptedMediaDetected:mediaFilePath:mediaID:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071fedf8

// -[SCLegacyStoriesOperaMediaManager _loadSpectaclesPagePropertiesIfNeededForStorySnap:loadedAsset:pageProperties:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071fedfc

// -[SCLegacyStoriesOperaMediaManager _prepareVideoMediaForStory:synchronously:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1071ff160

// -[SCLegacyStoriesOperaMediaManager _writeStoryMediaToTemporaryPath:videoURL:videoAssetCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1071ffaa4

// -[SCLegacyStoriesOperaMediaManager _fetchStoryMediaFromCache:videoAssetCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071ffc5c

// -[SCLegacyStoriesOperaMediaManager _prepareImageMediaForStory:synchronously:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1071fff04

// -[SCLegacyStoriesOperaMediaManager updateStoryLoadingLayerImageForStory:loadedImageKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107200644

// -[SCLegacyStoriesOperaMediaManager removeStoryLoadingLayerImageForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072007b4

// -[SCLegacyStoriesOperaMediaManager setErrorType:forStory:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1072008b0

// -[SCLegacyStoriesOperaMediaManager errorTypeForStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107200940

// -[SCLegacyStoriesOperaMediaManager shouldPrepareToViewStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x107200b38

// -[SCLegacyStoriesOperaMediaManager removePreparedStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107200b84

// -[SCLegacyStoriesOperaMediaManager setImage:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107200d84

// -[SCLegacyStoriesOperaMediaManager removeImageForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107200d8c

// -[SCLegacyStoriesOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107200d94

// -[SCLegacyStoriesOperaMediaManager setVideoAsset:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1072011c0

// -[SCLegacyStoriesOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10720123c

// -[SCLegacyStoriesOperaMediaManager removeVideoForKey:story:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720128c

// -[SCLegacyStoriesOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10720138c

// -[SCLegacyStoriesOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107201394

// -[SCLegacyStoriesOperaMediaManager preparedStoryPageProperties]
// Type encoding: @16@0:8
// Implementation: 0x107201398

// -[SCLegacyStoriesOperaMediaManager loadingBackgroundImagePreparedStoryPageProperties]
// Type encoding: @16@0:8
// Implementation: 0x1072013a0

// -[SCLegacyStoriesOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1072013a8

// +[SCLegacyStoriesOperaMediaManager processFirstFrameImage:forAudioStitch:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071fedb0

// +[SCLegacyStoriesOperaMediaManager videoAssetKeyForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072009a8

// +[SCLegacyStoriesOperaMediaManager firstFrameKeyForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072009f8

// +[SCLegacyStoriesOperaMediaManager overlayImageKeyForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107200a48

// +[SCLegacyStoriesOperaMediaManager imageKeyForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107200a98

// +[SCLegacyStoriesOperaMediaManager loadingScreenImageKeyForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107200ae8

@end
