// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicViewerViewSnapsCollectionDataProvider
// Superclass: NSObject
// Address: 0x112b6ce38

@interface SCTopicViewerViewSnapsCollectionDataProvider

// Property: isFetching; attributes: TB,N,V_isFetching
// Property: topic; attributes: T@"NSString",&,N,V_topic
// Property: lastStreamToken; attributes: T@"NSData",&,N,V_lastStreamToken
// Property: hasMoreData; attributes: TB,N,V_hasMoreData
// Property: topicStories; attributes: T@"NSArray",&,N,V_topicStories
// Property: requester; attributes: T@"<SCTopicPageNetworkRequesting>",&,N,V_requester
// Property: isPrimaryTopic; attributes: TB,R,N,V_isPrimaryTopic
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicViewerViewSnapsCollectionDataProvider topicStories]
// Type encoding: @16@0:8
// Implementation: 0x107a62af0

// -[SCTopicViewerViewSnapsCollectionDataProvider _shouldShowColdShimmerLocked]
// Type encoding: B16@0:8
// Implementation: 0x107a62b2c

// -[SCTopicViewerViewSnapsCollectionDataProvider announceColdStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107a62b8c

// -[SCTopicViewerViewSnapsCollectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a62c0c

// -[SCTopicViewerViewSnapsCollectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a62c14

// -[SCTopicViewerViewSnapsCollectionDataProvider initWithTopic:displayName:topicStoryType:thumbnailCoordinator:sectionIndex:requester:isPrimaryTopic:storiesExperimentServices:topicPageNewSnapGridEnabled:]
// Type encoding: @80@0:8@16@24q32@40q48@56B64@68B76
// Implementation: 0x107a62c1c

// -[SCTopicViewerViewSnapsCollectionDataProvider updateWithTopicStories:hasMoreData:isTopicNotAvailable:lastStreamToken:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x107a62e00

// -[SCTopicViewerViewSnapsCollectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a6300c

// -[SCTopicViewerViewSnapsCollectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a63698

// -[SCTopicViewerViewSnapsCollectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a63750

// -[SCTopicViewerViewSnapsCollectionDataProvider _configureCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a638b4

// -[SCTopicViewerViewSnapsCollectionDataProvider numberOfSections]
// Type encoding: Q16@0:8
// Implementation: 0x107a63920

// -[SCTopicViewerViewSnapsCollectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x107a63928

// -[SCTopicViewerViewSnapsCollectionDataProvider topic]
// Type encoding: @16@0:8
// Implementation: 0x107a639d0

// -[SCTopicViewerViewSnapsCollectionDataProvider setTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a639d8

// -[SCTopicViewerViewSnapsCollectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107a63a08

// -[SCTopicViewerViewSnapsCollectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63a10

// -[SCTopicViewerViewSnapsCollectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107a63a18

// -[SCTopicViewerViewSnapsCollectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63a30

// -[SCTopicViewerViewSnapsCollectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x107a63a3c

// -[SCTopicViewerViewSnapsCollectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63a44

// -[SCTopicViewerViewSnapsCollectionDataProvider setTopicStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63a74

// -[SCTopicViewerViewSnapsCollectionDataProvider isPrimaryTopic]
// Type encoding: B16@0:8
// Implementation: 0x107a63aa4

// -[SCTopicViewerViewSnapsCollectionDataProvider isFetching]
// Type encoding: B16@0:8
// Implementation: 0x107a63aac

// -[SCTopicViewerViewSnapsCollectionDataProvider setIsFetching:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a63ab4

// -[SCTopicViewerViewSnapsCollectionDataProvider lastStreamToken]
// Type encoding: @16@0:8
// Implementation: 0x107a63abc

// -[SCTopicViewerViewSnapsCollectionDataProvider setLastStreamToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63ac4

// -[SCTopicViewerViewSnapsCollectionDataProvider hasMoreData]
// Type encoding: B16@0:8
// Implementation: 0x107a63af4

// -[SCTopicViewerViewSnapsCollectionDataProvider setHasMoreData:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a63afc

// -[SCTopicViewerViewSnapsCollectionDataProvider requester]
// Type encoding: @16@0:8
// Implementation: 0x107a63b04

// -[SCTopicViewerViewSnapsCollectionDataProvider setRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a63b0c

// -[SCTopicViewerViewSnapsCollectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a63b3c

// +[SCTopicViewerViewSnapsCollectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a62c00

@end
