// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistItemConverter
// Superclass: NSObject
// Address: 0x112adbac8

@interface SCOperaPlaylistItemConverter

// Property: pageFeatureDataProvider; attributes: T@"<SCOperaPageFeatureDataProvider>",&,N,V_pageFeatureDataProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaylistItemConverter initWithMediaTypeConfigurations:builtInMediaResolver:extraPropertiesProviders:configProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10634dabc

// -[SCOperaPlaylistItemConverter prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10634dbb8

// -[SCOperaPlaylistItemConverter removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634dc68

// -[SCOperaPlaylistItemConverter loadMediaForPlaylistItemGroup:isFirstGroup:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10634dcbc

// -[SCOperaPlaylistItemConverter loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634dd58

// -[SCOperaPlaylistItemConverter isMediaLoadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x10634ddc0

// -[SCOperaPlaylistItemConverter retrievePrefetchInfoForItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10634de44

// -[SCOperaPlaylistItemConverter pagePropertiesForItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10634decc

// -[SCOperaPlaylistItemConverter _addDefaultPropertiesForPageProperties:attachmentPageProperties:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634e3bc

// -[SCOperaPlaylistItemConverter _updateBasePageDataWithExtraPropertyProviders:pageProperties:attachmentProperties:item:dataModel:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10634e400

// -[SCOperaPlaylistItemConverter _basePageDataFromDataConverter:dataModel:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10634e8fc

// -[SCOperaPlaylistItemConverter _extraPropertiesFromProvider:dataModel:item:baseOperaPage:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10634e998

// -[SCOperaPlaylistItemConverter resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634ea50

// -[SCOperaPlaylistItemConverter postResolvePlaylistItemGroupWithResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634eafc

// -[SCOperaPlaylistItemConverter dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634ec6c

// -[SCOperaPlaylistItemConverter dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634ed14

// -[SCOperaPlaylistItemConverter playlistItemGroupForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634edc8

// -[SCOperaPlaylistItemConverter _mediaPreparationControllerForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634ef64

// -[SCOperaPlaylistItemConverter _mediaPreparationControllerForItemGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634f018

// -[SCOperaPlaylistItemConverter _builtInMediaResolverEnabledForItemGroup:]
// Type encoding: B24@0:8@16
// Implementation: 0x10634f0cc

// -[SCOperaPlaylistItemConverter builtInMediaResolverEnabledForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x10634f118

// -[SCOperaPlaylistItemConverter _configDefaultPageProperties]
// Type encoding: v16@0:8
// Implementation: 0x10634f120

// -[SCOperaPlaylistItemConverter _createExecutorControllerIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634f1bc

// -[SCOperaPlaylistItemConverter _handleLongAPICalls:timeInterval:thresholdToAssert:timeThresholdToLog:]
// Type encoding: v48@0:8@16d24d32d40
// Implementation: 0x10634f40c

// -[SCOperaPlaylistItemConverter _methodTagForLongAPICall:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634f4f8

// -[SCOperaPlaylistItemConverter pageFeatureDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10634f570

// -[SCOperaPlaylistItemConverter setPageFeatureDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634f578

// -[SCOperaPlaylistItemConverter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10634f5a8

@end
