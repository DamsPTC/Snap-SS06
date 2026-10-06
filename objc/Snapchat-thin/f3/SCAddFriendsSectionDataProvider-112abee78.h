// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendsSectionDataProvider
// Superclass: NSObject
// Address: 0x112abee78

@interface SCAddFriendsSectionDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: containerCellViewModelsSubject; attributes: T@"SCBehaviorSubject",R,V_containerCellViewModelsSubject
// Property: pageEventObservable; attributes: T@"SCObservable",&,N,V_pageEventDataSubject

// -[SCAddFriendsSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10602210c

// -[SCAddFriendsSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106022114

// -[SCAddFriendsSectionDataProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:recentlyActiveRecordRepository:imageDownloader:displayTimestamp:viewModelGenerator:displayFilter:snapchatterRanker:placement:circumstanceEngine:avatarFactory:]
// Type encoding: @104@0:8@16@24@32@40d48@?56@?64@72q80@88@96
// Implementation: 0x10602211c

// -[SCAddFriendsSectionDataProvider reloadSections]
// Type encoding: v16@0:8
// Implementation: 0x1060223b0

// -[SCAddFriendsSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060223b4

// -[SCAddFriendsSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1060223e4

// -[SCAddFriendsSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060223ec

// -[SCAddFriendsSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x106022bf0

// -[SCAddFriendsSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106022d90

// -[SCAddFriendsSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106022ddc

// -[SCAddFriendsSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106022de4

// -[SCAddFriendsSectionDataProvider didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106022f58

// -[SCAddFriendsSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106022fb8

// -[SCAddFriendsSectionDataProvider didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10602315c

// -[SCAddFriendsSectionDataProvider didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1060231d0

// -[SCAddFriendsSectionDataProvider didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106023308

// -[SCAddFriendsSectionDataProvider decorationDidBecomeAvailable]
// Type encoding: v16@0:8
// Implementation: 0x106023450

// -[SCAddFriendsSectionDataProvider _containerCellViewModelForSnapchatter:index:snapchattersCount:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x106023454

// -[SCAddFriendsSectionDataProvider _updateSectionDataModelWithPerformer]
// Type encoding: v16@0:8
// Implementation: 0x10602367c

// -[SCAddFriendsSectionDataProvider _updateSectionDataModel]
// Type encoding: v16@0:8
// Implementation: 0x106023750

// -[SCAddFriendsSectionDataProvider _configureRecipientCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106023788

// -[SCAddFriendsSectionDataProvider _rankAndSetSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106023820

// -[SCAddFriendsSectionDataProvider _promoteUnviewedAndSetSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106023950

// -[SCAddFriendsSectionDataProvider _setContactSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106023a68

// -[SCAddFriendsSectionDataProvider _setSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106023a78

// -[SCAddFriendsSectionDataProvider _reorderSnapchattersIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x106023d74

// -[SCAddFriendsSectionDataProvider _subscribeToRecentlyActiveRecords]
// Type encoding: v16@0:8
// Implementation: 0x10602408c

// -[SCAddFriendsSectionDataProvider _updateRecentlyActiveRecords:]
// Type encoding: v24@0:8@16
// Implementation: 0x106024220

// -[SCAddFriendsSectionDataProvider _convertRecentlyActiveRecordsToUserIdToStatusDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060243ec

// -[SCAddFriendsSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10602444c

// -[SCAddFriendsSectionDataProvider pageEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x106024570

// -[SCAddFriendsSectionDataProvider setPageEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106024578

// -[SCAddFriendsSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1060245a8

// -[SCAddFriendsSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060245c0

// -[SCAddFriendsSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1060245cc

// -[SCAddFriendsSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1060245d4

// -[SCAddFriendsSectionDataProvider containerCellViewModelsSubject]
// Type encoding: @16@0:8
// Implementation: 0x1060245dc

// -[SCAddFriendsSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060245e8

// +[SCAddFriendsSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106022100

@end
