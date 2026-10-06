// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocOperaMediaManager
// Superclass: NSObject
// Address: 0x112b73c88

@interface SCSnapDocOperaMediaManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocOperaMediaManager initWithSnapDocMediaResolver:circumstanceEngine:imageDownloader:grapheneRegistry:playbackAssetCompositor:playbackAssetRepository:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107b8e2e8

// -[SCSnapDocOperaMediaManager updateOperaNavigationStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b8e530

// -[SCSnapDocOperaMediaManager prepareForSnapDocKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b8e544

// -[SCSnapDocOperaMediaManager getPagePropertiesForSnapDocKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b8e728

// -[SCSnapDocOperaMediaManager mediaPrefetchRequestForSnapDocKey:snapDoc:trigger:importance:completePrefetch:]
// Type encoding: @52@0:8@16@24q32q40B48
// Implementation: 0x107b8e888

// -[SCSnapDocOperaMediaManager removePreparedPropertiesForSnapDocKey:snapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b8e9b8

// -[SCSnapDocOperaMediaManager increaseCounter]
// Type encoding: v16@0:8
// Implementation: 0x107b8ea74

// -[SCSnapDocOperaMediaManager decreaseCounter]
// Type encoding: v16@0:8
// Implementation: 0x107b8ea84

// -[SCSnapDocOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b8eb68

// -[SCSnapDocOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b8ee18

// -[SCSnapDocOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b8ef1c

// -[SCSnapDocOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8ef6c

// -[SCSnapDocOperaMediaManager _getImagePlaceholder:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b8ef70

// -[SCSnapDocOperaMediaManager _getImageFromDiskForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b8f1d0

// -[SCSnapDocOperaMediaManager _clearLoadedAVAssets]
// Type encoding: v16@0:8
// Implementation: 0x107b8f4e8

// -[SCSnapDocOperaMediaManager _clearCachedImages]
// Type encoding: v16@0:8
// Implementation: 0x107b8f528

// -[SCSnapDocOperaMediaManager _resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8f530

// -[SCSnapDocOperaMediaManager _addNotifications]
// Type encoding: v16@0:8
// Implementation: 0x107b8f58c

// -[SCSnapDocOperaMediaManager didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b8f664

// -[SCSnapDocOperaMediaManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b8f670

// -[SCSnapDocOperaMediaManager _didReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8f6e0

// -[SCSnapDocOperaMediaManager _prepareForSnapDocKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b8f754

// -[SCSnapDocOperaMediaManager _prepareVideoAssetForSnapDocKey:snapDoc:playbackMediaResult:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107b8fe0c

// -[SCSnapDocOperaMediaManager _loadSubtitlesOnDemand]
// Type encoding: B16@0:8
// Implementation: 0x107b90c2c

// -[SCSnapDocOperaMediaManager _updatePagePropertiesForVideoAsset:subtitleAsset:compositeAsset:languageCode:videoContentResult:snapDocKey:snapDoc:baseImage:baseImageContentResult:overlayImage:overlayContentResult:firstFrameImage:firstFrameContentResult:isServerSideFirstFrame:completion:]
// Type encoding: v128@0:8@16@24@32i40@44@52@60@68@76@84@92@100@108B116@?120
// Implementation: 0x107b90c44

// -[SCSnapDocOperaMediaManager composeVideoAssetWithKey:subtitleEnabled:languageId:subtitleAsset:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x107b91034

// -[SCSnapDocOperaMediaManager _composeWithVideoAsset:subtitleAsset:desiredLanguageCode:completion:]
// Type encoding: v44@0:8@16@24i32@?36
// Implementation: 0x107b91430

// -[SCSnapDocOperaMediaManager _getPagePropertiesForSnapDocKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b9155c

// -[SCSnapDocOperaMediaManager _setVideoAsset:contentResult:snapDocKey:pageProperties:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107b916b0

// -[SCSnapDocOperaMediaManager _getVideoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b91798

// -[SCSnapDocOperaMediaManager _removeVideoAssetForSnapDocKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b917f8

// -[SCSnapDocOperaMediaManager _setSubtitleAsset:pageProperties:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b918bc

// -[SCSnapDocOperaMediaManager _setCompositeAsset:snapDocKey:languageCode:pageProperties:]
// Type encoding: v44@0:8@16@24i32@36
// Implementation: 0x107b918d0

// -[SCSnapDocOperaMediaManager _setBaseImage:contentResult:snapDocKey:pageProperties:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107b91a48

// -[SCSnapDocOperaMediaManager _setOverlayImage:contentResult:snapDocKey:pageProperties:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107b91af4

// -[SCSnapDocOperaMediaManager _setFirstFrameImage:contentResult:snapDocKey:pageProperties:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107b91ba0

// -[SCSnapDocOperaMediaManager _setImageHelper:contentResult:pagePropertyKey:pagePropertyValue:pageProperties:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107b91c4c

// -[SCSnapDocOperaMediaManager _setImageHelperForKey:image:contentResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b91d28

// -[SCSnapDocOperaMediaManager _setPlaceHolderImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b91da0

// -[SCSnapDocOperaMediaManager _removeImagesForSnapDocKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b91db0

// -[SCSnapDocOperaMediaManager _preparedPagePropertiesForSnapDocKey:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107b91e68

// -[SCSnapDocOperaMediaManager _setPreparedPageProperties:forSnapDocKey:snapDoc:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b91ecc

// -[SCSnapDocOperaMediaManager _removePagePropertiesForSnapDocKey:snapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b91f3c

// -[SCSnapDocOperaMediaManager _setError:forSnapDocKey:snapDoc:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b91f84

// -[SCSnapDocOperaMediaManager _errorsPagePropertiesForSnapDocKey:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107b92068

// -[SCSnapDocOperaMediaManager _setErrorsPageProperties:forSnapDocKey:snapDoc:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b920cc

// -[SCSnapDocOperaMediaManager _removeErrorsPagePropertiesForSnapDocKey:snapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b9213c

// -[SCSnapDocOperaMediaManager _cleanAllCaches]
// Type encoding: v16@0:8
// Implementation: 0x107b92184

// -[SCSnapDocOperaMediaManager _setContentResultForKey:contentResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b921cc

// -[SCSnapDocOperaMediaManager _contentResultForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b921e8

// -[SCSnapDocOperaMediaManager contentResultForSnapDocKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b92214

// -[SCSnapDocOperaMediaManager _clearAllContentResult]
// Type encoding: v16@0:8
// Implementation: 0x107b92284

// -[SCSnapDocOperaMediaManager _logFirstFrameGenerationIsServerSide:useFirstFrame:mediaContextType:]
// Type encoding: v32@0:8B16B20q24
// Implementation: 0x107b9228c

// -[SCSnapDocOperaMediaManager _stringFromLocalFirstFrameGenerationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107b923cc

// -[SCSnapDocOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b923e8

@end
