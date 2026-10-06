// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDataSource
// Superclass: NSObject
// Address: 0x112addff8

@interface SCAdDataSource

// Property: pendingInsertAdPod; attributes: T@"SCAdPod",&,N,V_pendingInsertAdPod
// Property: itemIdsPresentedWithSSP; attributes: T@"NSMutableSet",R,N,V_itemIdsPresentedWithSSP
// Property: cachedInsertionConfig; attributes: T@"SCAdInsertionConfig",&,N,V_cachedInsertionConfig
// Property: adRequestClientIdToAdResponseMap; attributes: T@"NSMutableDictionary",&,N,V_adRequestClientIdToAdResponseMap
// Property: adResponseIdToAdPod; attributes: T@"NSMutableDictionary",&,N,V_adResponseIdToAdPod
// Property: groupIdToInsertedAdItemIdsByOrder; attributes: T@"NSMutableDictionary",&,N,V_groupIdToInsertedAdItemIdsByOrder
// Property: insertedAdGroupIdsByOrder; attributes: T@"NSMutableArray",&,N,V_insertedAdGroupIdsByOrder
// Property: skippedAdAfterGroupIdToAdGroupIdsMap; attributes: T@"NSMutableDictionary",R,N,V_skippedAdAfterGroupIdToAdGroupIdsMap
// Property: trackedAdRequestClientIds; attributes: T@"NSMutableSet",R,N,V_trackedAdRequestClientIds
// Property: insertedAdGroupIdToDataModelMap; attributes: T@"NSMutableDictionary",&,N,V_insertedAdGroupIdToDataModelMap
// Property: insertedAfterGroupIdToAdGroupIdsMap; attributes: T@"NSMutableDictionary",R,N,V_insertedAfterGroupIdToAdGroupIdsMap
// Property: insertedAditemIdToDataModelMap; attributes: T@"NSMutableDictionary",&,N,V_insertedAditemIdToDataModelMap
// Property: skippedAdAfterItemIdToAdItemIdsMap; attributes: T@"NSMutableDictionary",&,N,V_skippedAdAfterItemIdToAdItemIdsMap
// Property: currentAdPlacement; attributes: T@"SCAdPlacement",&,N,V_currentAdPlacement
// Property: pixelServeItemSyncManager; attributes: T@"SCAdPixelServeItemSyncManager",R,N,V_pixelServeItemSyncManager
// Property: delayedAdOpportunities; attributes: T@"NSMutableArray",&,N,V_delayedAdOpportunities
// Property: adRequestClientIdToInsertPositionMap; attributes: T@"NSMutableDictionary",&,N,V_adRequestClientIdToInsertPositionMap
// Property: adRequestClientIdToDecidingAdjacentOrganicGarmSafety; attributes: T@"NSMutableDictionary",&,N,V_adRequestClientIdToDecidingAdjacentOrganicGarmSafety
// Property: adMediaManager; attributes: T@"SCLazy",&,N,V_adMediaManager
// Property: adOpportunity; attributes: T@"SCAdOpportunity",&,N,V_adOpportunity
// Property: playlistItemViewObservable; attributes: T@"SCBehaviorSubject",&,N,V_playlistItemViewObservable
// Property: playlistGroupChangeObservable; attributes: T@"SCBehaviorSubject",&,N,V_playlistGroupChangeObservable
// Property: pendingAdSlotObservable; attributes: T@"SCBehaviorSubject",&,N,V_pendingAdSlotObservable
// Property: dependencies; attributes: T@"SCAdDataSourceDependencies",R,N,V_dependencies
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: adPreparationManager; attributes: T@"SCAdPreparationManager",R,N,V_adPreparationManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdDataSource initWithDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063feb10

// -[SCAdDataSource initWithDependencies:pendingDisplayAdData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063feb18

// -[SCAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063ff0ec

// -[SCAdDataSource updateCachedInsertionConfigIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063ff5e8

// -[SCAdDataSource teardown]
// Type encoding: v16@0:8
// Implementation: 0x1063ff5ec

// -[SCAdDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063ff9b4

// -[SCAdDataSource insertEndCardForPrimaryGroupId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ffa40

// -[SCAdDataSource _insertEndCardForPrimaryGroupId:adData:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1063ffb28

// -[SCAdDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063ffe34

// -[SCAdDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ffec0

// -[SCAdDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063fff88

// -[SCAdDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x106400064

// -[SCAdDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640006c

// -[SCAdDataSource postResolvePlaylistItemGroupWithResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x106400450

// -[SCAdDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x106400454

// -[SCAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106400458

// -[SCAdDataSource _pageDataPreservingSingleSnapPlayerIfNeeded:forItemId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1064008a0

// -[SCAdDataSource _isSingleSnapPlayerPreservationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106400a2c

// -[SCAdDataSource _operaPageDataForAdSnap:adResponse:adPod:dataModel:webViewAdPrefetchHints:contextSessionId:indexCookieName:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106400b00

// -[SCAdDataSource profileInfoForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106401064

// -[SCAdDataSource prepareProfileIconForItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1064011a8

// -[SCAdDataSource removeProfileIconForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106401430

// -[SCAdDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10640161c

// -[SCAdDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106401954

// -[SCAdDataSource preparedMediaForAdSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106401bd4

// -[SCAdDataSource extraPagePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106401d2c

// -[SCAdDataSource extraTopPageBasePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106401d38

// -[SCAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x106401e80

// -[SCAdDataSource didCompleteFetchingAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106401f88

// -[SCAdDataSource _prefetchOrganicEngagementForAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106401ff8

// -[SCAdDataSource didCompleteFetchingAdPod:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064020f0

// -[SCAdDataSource adOrganicSignals]
// Type encoding: @16@0:8
// Implementation: 0x106402154

// -[SCAdDataSource brandSafetyInventoryType]
// Type encoding: q16@0:8
// Implementation: 0x10640215c

// -[SCAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x106402164

// -[SCAdDataSource adRequestId]
// Type encoding: @16@0:8
// Implementation: 0x10640216c

// -[SCAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x106402170

// -[SCAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x106402178

// -[SCAdDataSource isLongformShowAd]
// Type encoding: B16@0:8
// Implementation: 0x106402180

// -[SCAdDataSource shouldCachePendingAdAfterTearDown]
// Type encoding: B16@0:8
// Implementation: 0x106402188

// -[SCAdDataSource adsPreferences]
// Type encoding: @16@0:8
// Implementation: 0x106402190

// -[SCAdDataSource adServeLoggingContext]
// Type encoding: @16@0:8
// Implementation: 0x10640220c

// -[SCAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1064022d8

// -[SCAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1064022e4

// -[SCAdDataSource _requiredSnapCountForAdResponse:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1064022ec

// -[SCAdDataSource userDidTapLoadingErrorCta:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064022f0

// -[SCAdDataSource isInsertedAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106402460

// -[SCAdDataSource isInsertedAdGroup:]
// Type encoding: B24@0:8@16
// Implementation: 0x1064024dc

// -[SCAdDataSource isSkippedAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106402558

// -[SCAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x10640263c

// -[SCAdDataSource resetInsertionState]
// Type encoding: v16@0:8
// Implementation: 0x106402754

// -[SCAdDataSource resetPendingAd]
// Type encoding: v16@0:8
// Implementation: 0x106402758

// -[SCAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x106402788

// -[SCAdDataSource isRetryInsertionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106402790

// -[SCAdDataSource hasEndCardForAdIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106402798

// -[SCAdDataSource insertPendingAdAfterItem:insertSource:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x106402848

// -[SCAdDataSource insertAdPod:adPlacement:afterItem:insertSource:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x1064029dc

// -[SCAdDataSource _insertPlaylistItems:adPlacement:afterItem:insertSource:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x106402c8c

// -[SCAdDataSource _insertPlaylistItemGroupV2:adPlacement:afterGroup:insertSource:indexOfAdResponse:]
// Type encoding: @56@0:8@16@24@32q40Q48
// Implementation: 0x106403028

// -[SCAdDataSource _insertPlaylistItemGroups:adPlacement:afterGroup:insertSource:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x106403568

// -[SCAdDataSource _logAdMediaLoadStatus:adPlacement:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10640393c

// -[SCAdDataSource _logAdGroupInserted:success:playlistGroup:insertSource:error:]
// Type encoding: v52@0:8@16B24@28q36@44
// Implementation: 0x106403c30

// -[SCAdDataSource logAdInserted:insertSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106403e60

// -[SCAdDataSource logAdInsertionFailure:playlistError:isMediaReady:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1064041e4

// -[SCAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1064042dc

// -[SCAdDataSource playlistItemsInsertCount:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1064042e4

// -[SCAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x106404358

// -[SCAdDataSource didFinishViewingAdItemId:isViewingLongform:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x106404360

// -[SCAdDataSource isDismissingSessionWithItemId:isViewingLongform:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1064044a8

// -[SCAdDataSource initialAdSnapToDisplayForAdDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064045b0

// -[SCAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1064045b8

// -[SCAdDataSource adPositionForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x10640465c

// -[SCAdDataSource adInsertPositionForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1064047b4

// -[SCAdDataSource snapIndexPosForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x106404880

// -[SCAdDataSource adRequestClientIdForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064048e0

// -[SCAdDataSource adResponseForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106404a00

// -[SCAdDataSource adResponseForAdRequestClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106404a8c

// -[SCAdDataSource adResponseForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106404b0c

// -[SCAdDataSource adPodForAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x106404bdc

// -[SCAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x106404c68

// -[SCAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106404c70

// -[SCAdDataSource skippedAdItemIdsAroundItem:pageLeft:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106405564

// -[SCAdDataSource adViewContextForSkippedItemId:aroundItem:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106405738

// -[SCAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106405a40

// -[SCAdDataSource isNofillAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106405fa0

// -[SCAdDataSource isNofillUnskippableAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106406030

// -[SCAdDataSource _commonAdSnapViewLogParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106406038

// -[SCAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1064062e0

// -[SCAdDataSource logAdSkipWithAdItemId:aroundItem:pageLeft:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10640666c

// -[SCAdDataSource skippedAdGroupIdsAroundGroup:pagedLeft:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106406964

// -[SCAdDataSource adRequestClientIdForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106406aac

// -[SCAdDataSource adResponseForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106406b3c

// -[SCAdDataSource adViewContextForSkippedGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106406bbc

// -[SCAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106406bc0

// -[SCAdDataSource logAdSkipWithAdGroupId:aroundGroup:pagedLeft:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106406c6c

// -[SCAdDataSource isNofillAdGroupId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106406fa0

// -[SCAdDataSource totalTopSnapsMediaDurationInSecForAdGroup:]
// Type encoding: d24@0:8@16
// Implementation: 0x106407030

// -[SCAdDataSource adSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1064070f8

// -[SCAdDataSource totalAdCountForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x106407100

// -[SCAdDataSource adProductTypeForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106407230

// -[SCAdDataSource setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640729c

// -[SCAdDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064072a8

// -[SCAdDataSource operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1064072b4

// -[SCAdDataSource hideAdWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106407330

// -[SCAdDataSource peekPendingInsertAds]
// Type encoding: @16@0:8
// Implementation: 0x106407474

// -[SCAdDataSource peekPendingInsertAdsForAdPod:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064074e4

// -[SCAdDataSource insertPendingAds]
// Type encoding: @16@0:8
// Implementation: 0x106407718

// -[SCAdDataSource broadcastPlaylistItemView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106407938

// -[SCAdDataSource broadcastPlaylistGroupChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106407988

// -[SCAdDataSource broadcastPendingAdSlotChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064079d8

// -[SCAdDataSource pendingAdReadyToInsert]
// Type encoding: B16@0:8
// Implementation: 0x106407a28

// -[SCAdDataSource shouldDelayFiringAdOpportunity]
// Type encoding: B16@0:8
// Implementation: 0x106407bf4

// -[SCAdDataSource logAdOpportunityIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106407bfc

// -[SCAdDataSource logAdOpportunity:]
// Type encoding: v24@0:8@16
// Implementation: 0x106407e30

// -[SCAdDataSource adPodSessionIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10640875c

// -[SCAdDataSource updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064088e0

// -[SCAdDataSource hasInsertedAdsAfterGroups]
// Type encoding: B16@0:8
// Implementation: 0x10640896c

// -[SCAdDataSource insertedAdGroupIdsAfterGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064089ac

// -[SCAdDataSource addInsertedAdGroupId:afterGroupId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106408a24

// -[SCAdDataSource removeInsertedAdGroupIdsAfterGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408b14

// -[SCAdDataSource removeAllInsertedAdGroupIds]
// Type encoding: v16@0:8
// Implementation: 0x106408b70

// -[SCAdDataSource isSkippedAdGroupId:afterGroupId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106408ba0

// -[SCAdDataSource skippedAdGroupIdsAfterGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106408c48

// -[SCAdDataSource addSkippedAdGroupId:afterGroupId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106408cc0

// -[SCAdDataSource removeAllSkippedAdGroupIds]
// Type encoding: v16@0:8
// Implementation: 0x106408db0

// -[SCAdDataSource adMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x106408de0

// -[SCAdDataSource setAdMediaManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408de8

// -[SCAdDataSource adOpportunity]
// Type encoding: @16@0:8
// Implementation: 0x106408e18

// -[SCAdDataSource setAdOpportunity:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408e20

// -[SCAdDataSource playlistItemViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x106408e50

// -[SCAdDataSource setPlaylistItemViewObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408e58

// -[SCAdDataSource playlistGroupChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x106408e88

// -[SCAdDataSource setPlaylistGroupChangeObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408e90

// -[SCAdDataSource pendingAdSlotObservable]
// Type encoding: @16@0:8
// Implementation: 0x106408ec0

// -[SCAdDataSource setPendingAdSlotObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408ec8

// -[SCAdDataSource dependencies]
// Type encoding: @16@0:8
// Implementation: 0x106408ef8

// -[SCAdDataSource operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x106408f00

// -[SCAdDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x106408f18

// -[SCAdDataSource setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408f30

// -[SCAdDataSource adPreparationManager]
// Type encoding: @16@0:8
// Implementation: 0x106408f3c

// -[SCAdDataSource pendingInsertAdPod]
// Type encoding: @16@0:8
// Implementation: 0x106408f44

// -[SCAdDataSource setPendingInsertAdPod:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408f4c

// -[SCAdDataSource itemIdsPresentedWithSSP]
// Type encoding: @16@0:8
// Implementation: 0x106408f7c

// -[SCAdDataSource cachedInsertionConfig]
// Type encoding: @16@0:8
// Implementation: 0x106408f84

// -[SCAdDataSource setCachedInsertionConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408f8c

// -[SCAdDataSource adRequestClientIdToAdResponseMap]
// Type encoding: @16@0:8
// Implementation: 0x106408fbc

// -[SCAdDataSource setAdRequestClientIdToAdResponseMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408fc4

// -[SCAdDataSource adResponseIdToAdPod]
// Type encoding: @16@0:8
// Implementation: 0x106408ff4

// -[SCAdDataSource setAdResponseIdToAdPod:]
// Type encoding: v24@0:8@16
// Implementation: 0x106408ffc

// -[SCAdDataSource groupIdToInsertedAdItemIdsByOrder]
// Type encoding: @16@0:8
// Implementation: 0x10640902c

// -[SCAdDataSource setGroupIdToInsertedAdItemIdsByOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106409034

// -[SCAdDataSource insertedAdGroupIdsByOrder]
// Type encoding: @16@0:8
// Implementation: 0x106409064

// -[SCAdDataSource setInsertedAdGroupIdsByOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640906c

// -[SCAdDataSource skippedAdAfterGroupIdToAdGroupIdsMap]
// Type encoding: @16@0:8
// Implementation: 0x10640909c

// -[SCAdDataSource trackedAdRequestClientIds]
// Type encoding: @16@0:8
// Implementation: 0x1064090a4

// -[SCAdDataSource insertedAdGroupIdToDataModelMap]
// Type encoding: @16@0:8
// Implementation: 0x1064090ac

// -[SCAdDataSource setInsertedAdGroupIdToDataModelMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064090b4

// -[SCAdDataSource insertedAfterGroupIdToAdGroupIdsMap]
// Type encoding: @16@0:8
// Implementation: 0x1064090e4

// -[SCAdDataSource insertedAditemIdToDataModelMap]
// Type encoding: @16@0:8
// Implementation: 0x1064090ec

// -[SCAdDataSource setInsertedAditemIdToDataModelMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064090f4

// -[SCAdDataSource skippedAdAfterItemIdToAdItemIdsMap]
// Type encoding: @16@0:8
// Implementation: 0x106409124

// -[SCAdDataSource setSkippedAdAfterItemIdToAdItemIdsMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640912c

// -[SCAdDataSource currentAdPlacement]
// Type encoding: @16@0:8
// Implementation: 0x10640915c

// -[SCAdDataSource setCurrentAdPlacement:]
// Type encoding: v24@0:8@16
// Implementation: 0x106409164

// -[SCAdDataSource pixelServeItemSyncManager]
// Type encoding: @16@0:8
// Implementation: 0x106409194

// -[SCAdDataSource delayedAdOpportunities]
// Type encoding: @16@0:8
// Implementation: 0x10640919c

// -[SCAdDataSource setDelayedAdOpportunities:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064091a4

// -[SCAdDataSource adRequestClientIdToInsertPositionMap]
// Type encoding: @16@0:8
// Implementation: 0x1064091d4

// -[SCAdDataSource setAdRequestClientIdToInsertPositionMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064091dc

// -[SCAdDataSource adRequestClientIdToDecidingAdjacentOrganicGarmSafety]
// Type encoding: @16@0:8
// Implementation: 0x10640920c

// -[SCAdDataSource setAdRequestClientIdToDecidingAdjacentOrganicGarmSafety:]
// Type encoding: v24@0:8@16
// Implementation: 0x106409214

// -[SCAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106409244

@end
