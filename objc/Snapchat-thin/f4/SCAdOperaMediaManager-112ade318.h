// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOperaMediaManager
// Superclass: NSObject
// Address: 0x112ade318

@interface SCAdOperaMediaManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdOperaMediaManager initWithPlaybackAssetRepository:adContentDelivery:promotedStoryStateProvider:adConfigProvider:adConfigProviderV2:adCrashLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106413148

// -[SCAdOperaMediaManager prepareProfileIcon:mediaId:contexts:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106413468

// -[SCAdOperaMediaManager removeProfileIconForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106413744

// -[SCAdOperaMediaManager prepareToViewAdMedia:profileInfo:mediaId:contexts:forceFullDownload:completion:]
// Type encoding: v60@0:8@16@24@32@40B48@?52
// Implementation: 0x106413748

// -[SCAdOperaMediaManager preparedAdMediaForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064139dc

// -[SCAdOperaMediaManager _addCacheItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064139e4

// -[SCAdOperaMediaManager _removeCacheItemForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106413b64

// -[SCAdOperaMediaManager removePreparedAdMediaForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106413c38

// -[SCAdOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106414104

// -[SCAdOperaMediaManager imageForKeySync:]
// Type encoding: @24@0:8@16
// Implementation: 0x106414174

// -[SCAdOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106414224

// -[SCAdOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106414274

// -[SCAdOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106414478

// -[SCAdOperaMediaManager mediaExistInMap:mediaId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10641450c

// -[SCAdOperaMediaManager tearDown]
// Type encoding: v16@0:8
// Implementation: 0x106414590

// -[SCAdOperaMediaManager _prepareOperaMediaForAdMedia:profileInfo:mediaId:forceFullDownload:contexts:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x1064145c4

// -[SCAdOperaMediaManager _prepareProfileIconForProfileInfo:mediaId:contexts:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106414890

// -[SCAdOperaMediaManager _profileIconDataForProfileInfo:contexts:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106414b2c

// -[SCAdOperaMediaManager _mediaContentForAdMedia:profileInfo:mediaId:contexts:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106414d4c

// -[SCAdOperaMediaManager _retrieveContentForAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:]
// Type encoding: @56@0:8@16q24@32@40@48
// Implementation: 0x106414fa4

// -[SCAdOperaMediaManager _prefetchAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:completion:]
// Type encoding: v64@0:8@16q24@32@40@48@?56
// Implementation: 0x106415220

// -[SCAdOperaMediaManager _updateCacheWithProfileIcon:profileInfo:mediaId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1064152f0

// -[SCAdOperaMediaManager _updateCacheWithMediaContent:mediaId:forceFullDownload:profileInfo:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x1064155b4

// -[SCAdOperaMediaManager didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x10641679c

// -[SCAdOperaMediaManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x1064167a8

// -[SCAdOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064167fc

@end
