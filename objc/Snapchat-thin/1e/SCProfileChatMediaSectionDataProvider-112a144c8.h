// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMediaSectionDataProvider
// Superclass: NSObject
// Address: 0x112a144c8

@interface SCProfileChatMediaSectionDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCProfileChatMediaSectionDataProvider initWithDataSource:profileType:grapheneServices:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x105085de0

// -[SCProfileChatMediaSectionDataProvider shouldShowSectionWhenNoSavedInChatCards]
// Type encoding: B16@0:8
// Implementation: 0x105085eac

// -[SCProfileChatMediaSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105085ec0

// -[SCProfileChatMediaSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105085ec8

// -[SCProfileChatMediaSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105085ed0

// -[SCProfileChatMediaSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105085edc

// -[SCProfileChatMediaSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1050860f4

// -[SCProfileChatMediaSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x10508614c

// -[SCProfileChatMediaSectionDataProvider _containerCellViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050861ac

// -[SCProfileChatMediaSectionDataProvider _emitCarouselViewGrapheneMetricWithHasMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x1050865bc

// -[SCProfileChatMediaSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105086778

// -[SCProfileChatMediaSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10508683c

// -[SCProfileChatMediaSectionDataProvider didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105086a04

// -[SCProfileChatMediaSectionDataProvider _updateSavedInChatSectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105086a88

// -[SCProfileChatMediaSectionDataProvider _configureChatMediaContainerCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105086aec

// -[SCProfileChatMediaSectionDataProvider _shouldShowMediaContainerCell]
// Type encoding: B16@0:8
// Implementation: 0x105086bdc

// -[SCProfileChatMediaSectionDataProvider _shouldShowViewMoreCell]
// Type encoding: B16@0:8
// Implementation: 0x105086c50

// -[SCProfileChatMediaSectionDataProvider _shouldShowEmptyStateCell]
// Type encoding: B16@0:8
// Implementation: 0x105086c58

// -[SCProfileChatMediaSectionDataProvider _fetchMoreSavedInChatMediaCards]
// Type encoding: v16@0:8
// Implementation: 0x105086c90

// -[SCProfileChatMediaSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105086c98

// -[SCProfileChatMediaSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105086cb0

// -[SCProfileChatMediaSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105086cbc

// -[SCProfileChatMediaSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105086cc4

// -[SCProfileChatMediaSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x105086cf4

// -[SCProfileChatMediaSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105086cfc

// +[SCProfileChatMediaSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105085eb4

@end
