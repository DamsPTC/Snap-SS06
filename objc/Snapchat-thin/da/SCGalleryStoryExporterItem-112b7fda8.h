// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStoryExporterItem
// Superclass: NSObject
// Address: 0x112b7fda8

@interface SCGalleryStoryExporterItem

// Property: snap; attributes: T@"SCGallerySnap",R,N,V_snap
// Property: cloudFile; attributes: T@"<SCMemoriesCloudFSFile>",R,N,V_cloudFile
// Property: userSession; attributes: T@"SCUserSession",R,N,V_userSession
// Property: spectaclesAuxiliaryContentServices; attributes: T@"SCSpectaclesAuxiliaryContentServices",R,N,V_spectaclesAuxiliaryContentServices
// Property: imageToVideoWriterScopeExposer; attributes: T@"SCMultiScopeExposer",R,N,V_imageToVideoWriterScopeExposer
// Property: imageToVideoWriterScopeServices; attributes: T@"_TtC25SCImageToVideoWriterScope33SCImageToVideoWriterScopeServices",R,N,V_imageToVideoWriterScopeServices
// Property: targetTrajectoryFactory; attributes: T@"SCLazy",R,N,V_targetTrajectoryFactory
// Property: cachingMediaManager; attributes: T@"SCLazy",R,N,V_cachingMediaManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryStoryExporterItem initWithSnap:cloudFile:userSession:spectaclesAuxiliaryContentServices:videoFilterFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x107d9916c

// -[SCGalleryStoryExporterItem createTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x107d99484

// -[SCGalleryStoryExporterItem isLagunaMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d9948c

// -[SCGalleryStoryExporterItem isSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d99494

// -[SCGalleryStoryExporterItem isCircularMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d994b8

// -[SCGalleryStoryExporterItem isSpectaclesImage]
// Type encoding: B16@0:8
// Implementation: 0x107d994c0

// -[SCGalleryStoryExporterItem isSpectacles60fps]
// Type encoding: B16@0:8
// Implementation: 0x107d994c8

// -[SCGalleryStoryExporterItem isGenAISnap]
// Type encoding: B16@0:8
// Implementation: 0x107d994d0

// -[SCGalleryStoryExporterItem spectaclesExportSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107d99524

// -[SCGalleryStoryExporterItem time]
// Type encoding: d16@0:8
// Implementation: 0x107d995b8

// -[SCGalleryStoryExporterItem exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:]
// Type encoding: v56@0:8@?16@?24@32@40@48
// Implementation: 0x107d9960c

// -[SCGalleryStoryExporterItem _exportImageToVideoURLCompletion:progressBlock:spectaclesExportSettings:]
// Type encoding: v40@0:8@?16@?24@32
// Implementation: 0x107d996d4

// -[SCGalleryStoryExporterItem _exportAnimatedImageToVideoWithSnapDetail:completion:progressBlock:spectaclesExportSettings:]
// Type encoding: v48@0:8@16@?24@?32@40
// Implementation: 0x107d99b84

// -[SCGalleryStoryExporterItem _exportVideoWithVideoURLCompletion:progressBlock:spectaclesExportSettings:]
// Type encoding: v40@0:8@?16@?24@32
// Implementation: 0x107d99e98

// -[SCGalleryStoryExporterItem _downloadCloudFileIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d9a314

// -[SCGalleryStoryExporterItem _getVideoTargetSize:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x107d9a498

// -[SCGalleryStoryExporterItem _setVideoFilterPropertiesForSpectacles:spectaclesExportSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d9a538

// -[SCGalleryStoryExporterItem _prepareImage:spectaclesExportSettings:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d9a660

// -[SCGalleryStoryExporterItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107d9a814

// -[SCGalleryStoryExporterItem snap]
// Type encoding: @16@0:8
// Implementation: 0x107d9a838

// -[SCGalleryStoryExporterItem cloudFile]
// Type encoding: @16@0:8
// Implementation: 0x107d9a840

// -[SCGalleryStoryExporterItem userSession]
// Type encoding: @16@0:8
// Implementation: 0x107d9a848

// -[SCGalleryStoryExporterItem spectaclesAuxiliaryContentServices]
// Type encoding: @16@0:8
// Implementation: 0x107d9a850

// -[SCGalleryStoryExporterItem imageToVideoWriterScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x107d9a858

// -[SCGalleryStoryExporterItem imageToVideoWriterScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x107d9a860

// -[SCGalleryStoryExporterItem targetTrajectoryFactory]
// Type encoding: @16@0:8
// Implementation: 0x107d9a868

// -[SCGalleryStoryExporterItem cachingMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x107d9a870

// -[SCGalleryStoryExporterItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d9a878

@end
