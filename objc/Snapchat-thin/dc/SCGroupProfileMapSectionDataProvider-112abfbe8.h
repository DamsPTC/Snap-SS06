// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupProfileMapSectionDataProvider
// Superclass: NSObject
// Address: 0x112abfbe8

@interface SCGroupProfileMapSectionDataProvider

// Property: locationSharingController; attributes: T@"SCGroupLocationSharingController",&,N,V_locationSharingController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCGroupProfileMapSectionDataProvider initWithGroupId:groupServices:resourceDownloader:locationSharingController:groupMapViewCreator:isSecondaryLocationDevice:]
// Type encoding: @60@0:8@16@24@32@40@?48B56
// Implementation: 0x10603578c

// -[SCGroupProfileMapSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035918

// -[SCGroupProfileMapSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035920

// -[SCGroupProfileMapSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035928

// -[SCGroupProfileMapSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x10603595c

// -[SCGroupProfileMapSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106035a50

// -[SCGroupProfileMapSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106035ae8

// -[SCGroupProfileMapSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106035af0

// -[SCGroupProfileMapSectionDataProvider _configureMapCardCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035d98

// -[SCGroupProfileMapSectionDataProvider _configureShareLocationCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035e14

// -[SCGroupProfileMapSectionDataProvider didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035e84

// -[SCGroupProfileMapSectionDataProvider _getContentViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x106035eb8

// -[SCGroupProfileMapSectionDataProvider chatLocationSharingController:didUpdateCellTypes:shouldAnimate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106035f3c

// -[SCGroupProfileMapSectionDataProvider didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106035f70

// -[SCGroupProfileMapSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106035fb4

// -[SCGroupProfileMapSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035fcc

// -[SCGroupProfileMapSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106035fd8

// -[SCGroupProfileMapSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106035fe0

// -[SCGroupProfileMapSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x106036010

// -[SCGroupProfileMapSectionDataProvider locationSharingController]
// Type encoding: @16@0:8
// Implementation: 0x106036018

// -[SCGroupProfileMapSectionDataProvider setLocationSharingController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106036020

// -[SCGroupProfileMapSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106036050

// +[SCGroupProfileMapSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10603590c

@end
