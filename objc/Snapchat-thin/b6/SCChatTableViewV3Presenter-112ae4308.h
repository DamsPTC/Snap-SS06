// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatTableViewV3Presenter
// Superclass: NSObject
// Address: 0x112ae4308

@interface SCChatTableViewV3Presenter

// Property: tableView; attributes: T@"SCChatBaseTableView",&,N,V_tableView
// Property: tableContainerView; attributes: T@"UIView",&,N,V_tableContainerView
// Property: modalShown; attributes: TB,N,V_modalShown
// Property: highWatermarkObservable; attributes: T@"SCObservable",R,N
// Property: unreadChatViewedCount; attributes: Tq,R,N
// Property: unreadSnapViewedCount; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatTableViewV3Presenter initWithCurrentUserId:chatDisplayReadyLogger:messagingExperimentService:chatLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106512e44

// -[SCChatTableViewV3Presenter highWatermarkObservable]
// Type encoding: @16@0:8
// Implementation: 0x106513040

// -[SCChatTableViewV3Presenter unreadChatViewedCount]
// Type encoding: q16@0:8
// Implementation: 0x106513068

// -[SCChatTableViewV3Presenter unreadSnapViewedCount]
// Type encoding: q16@0:8
// Implementation: 0x106513070

// -[SCChatTableViewV3Presenter resetUnreadViewedSessionCounts]
// Type encoding: v16@0:8
// Implementation: 0x106513078

// -[SCChatTableViewV3Presenter scrollViewDidScroll]
// Type encoding: v16@0:8
// Implementation: 0x106513080

// -[SCChatTableViewV3Presenter affordanceScrollDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106513088

// -[SCChatTableViewV3Presenter _visibleCellsDidChangeWithConversationViewModelChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065130c8

// -[SCChatTableViewV3Presenter _updateAndNotifyVisibleCellsForNewStart:end:conversationViewModelChanged:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106513180

// -[SCChatTableViewV3Presenter _notifyVisibleCellsOnViewDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106513aac

// -[SCChatTableViewV3Presenter tableHeight]
// Type encoding: d16@0:8
// Implementation: 0x106513ba4

// -[SCChatTableViewV3Presenter firstViewableChatOffset]
// Type encoding: d16@0:8
// Implementation: 0x106513bac

// -[SCChatTableViewV3Presenter isChatVisible]
// Type encoding: B16@0:8
// Implementation: 0x106513bb4

// -[SCChatTableViewV3Presenter _shouldScrollToFoldEdgeWasAtFoldEdgeBeforeUpdate:useBotScrollBehavior:isFirstConversationLoad:isNewConversation:]
// Type encoding: B32@0:8B16B20B24B28
// Implementation: 0x106513c10

// -[SCChatTableViewV3Presenter _isFoldFeatureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106513d14

// -[SCChatTableViewV3Presenter _shouldScrollToFoldEdgeForInitialOpenIsNewConversation:isFirstConversationLoad:]
// Type encoding: B24@0:8B16B20
// Implementation: 0x106513d30

// -[SCChatTableViewV3Presenter _shouldScrollToBottomIsMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:wasScrollAtBottomBeforeUpdate:messageSenderUserId:]
// Type encoding: B40@0:8B16B20B24B28@32
// Implementation: 0x106513de0

// -[SCChatTableViewV3Presenter viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106513f3c

// -[SCChatTableViewV3Presenter viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106513f4c

// -[SCChatTableViewV3Presenter viewWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106513f8c

// -[SCChatTableViewV3Presenter appearanceDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106513f94

// -[SCChatTableViewV3Presenter didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106514038

// -[SCChatTableViewV3Presenter performAndUpdateScrollPosition:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065144d4

// -[SCChatTableViewV3Presenter _shouldRestoreFoldEdgeWasScrollAtFoldEdgeBeforeUpdate:useBotScrollBehavior:]
// Type encoding: B24@0:8B16B20
// Implementation: 0x1065145f0

// -[SCChatTableViewV3Presenter performTableUpdateForLayoutChange]
// Type encoding: v16@0:8
// Implementation: 0x106514620

// -[SCChatTableViewV3Presenter _completeReloadWithDidConversationViewModelChange:previousDistanceToBottom:isMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:isFirstConversationLoad:wasScrollAtBottomBeforeUpdate:wasScrollAtFoldEdgeBeforeUpdate:messageSenderUserId:useBotScrollBehavior:]
// Type encoding: v64@0:8B16d20B28B32B36B40B44B48@52B60
// Implementation: 0x1065147e4

// -[SCChatTableViewV3Presenter _updateContentOffsetForPreviousDistanceToBottom:isMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:isFirstConversationLoad:wasScrollAtBottomBeforeUpdate:wasScrollAtFoldEdgeBeforeUpdate:messageSenderUserId:useBotScrollBehavior:]
// Type encoding: v60@0:8d16B24B28B32B36B40B44@48B56
// Implementation: 0x1065148c4

// -[SCChatTableViewV3Presenter _updateVerticalLayoutProperties]
// Type encoding: v16@0:8
// Implementation: 0x1065149a4

// -[SCChatTableViewV3Presenter _belowFoldFillsView]
// Type encoding: B16@0:8
// Implementation: 0x106514a48

// -[SCChatTableViewV3Presenter scrollToFoldEdgeOrBottomForInitialOpen]
// Type encoding: v16@0:8
// Implementation: 0x106514ab4

// -[SCChatTableViewV3Presenter _performFoldEdgeOrBottomForInitialOpen]
// Type encoding: v16@0:8
// Implementation: 0x106514adc

// -[SCChatTableViewV3Presenter scrollToFoldEdge]
// Type encoding: v16@0:8
// Implementation: 0x106514ba8

// -[SCChatTableViewV3Presenter _scrollToBottomAndLog]
// Type encoding: v16@0:8
// Implementation: 0x106514c28

// -[SCChatTableViewV3Presenter _reestablishContentOffsetWithPreviousDistanceToBottom:]
// Type encoding: v24@0:8d16
// Implementation: 0x106514c64

// -[SCChatTableViewV3Presenter _reloadRelevantTableCellsForNewConversationViewModel:withMetricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106514d28

// -[SCChatTableViewV3Presenter _updateViewModel:newViewModel:newIndexPath:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106515408

// -[SCChatTableViewV3Presenter _indexPathsFromIndexSet:]
// Type encoding: @24@0:8@16
// Implementation: 0x106515560

// -[SCChatTableViewV3Presenter _didHeightChange:newViewModel:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106515648

// -[SCChatTableViewV3Presenter _updateTableViewWithAddedPaths:updatedPaths:deletedPaths:heightChanged:metricsTracker:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1065158d0

// -[SCChatTableViewV3Presenter _reloadTableViewWithMetricsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106515adc

// -[SCChatTableViewV3Presenter _canUpdateOldViewModel:newViewModel:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106515c58

// -[SCChatTableViewV3Presenter chatAffordanceTapped]
// Type encoding: v16@0:8
// Implementation: 0x106515d64

// -[SCChatTableViewV3Presenter _validIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x106515e60

// -[SCChatTableViewV3Presenter _visibilityForRow:visibleTableRect:visibleViewHeight:]
// Type encoding: q64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24d56
// Implementation: 0x106515eec

// -[SCChatTableViewV3Presenter _lastVisibleIndexPathAboveInputAreaFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x106516074

// -[SCChatTableViewV3Presenter _updateChatAffordanceWithConversationViewModelChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065161dc

// -[SCChatTableViewV3Presenter _markMessageAsSeenFrom:to:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106516884

// -[SCChatTableViewV3Presenter _getNewMessagesIds]
// Type encoding: @16@0:8
// Implementation: 0x106516cec

// -[SCChatTableViewV3Presenter _getNewReactionIds]
// Type encoding: @16@0:8
// Implementation: 0x106516e34

// -[SCChatTableViewV3Presenter _isNewMessageMaybe:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065170ec

// -[SCChatTableViewV3Presenter setTopInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10651722c

// -[SCChatTableViewV3Presenter subscribeToInsetChanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065172b0

// -[SCChatTableViewV3Presenter _setNewInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065173ec

// -[SCChatTableViewV3Presenter chatViewWillBeginInputTransition]
// Type encoding: v16@0:8
// Implementation: 0x106517414

// -[SCChatTableViewV3Presenter chatViewDidEndInputTransition]
// Type encoding: v16@0:8
// Implementation: 0x106517420

// -[SCChatTableViewV3Presenter chatViewDidFinishInputTransition]
// Type encoding: v16@0:8
// Implementation: 0x106517428

// -[SCChatTableViewV3Presenter recomputeOpenToFirstUnreadReadWatermark]
// Type encoding: v16@0:8
// Implementation: 0x106517480

// -[SCChatTableViewV3Presenter _watermarkForLastVisibleRow:visibleTableRect:visibleViewHeight:]
// Type encoding: @64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24d56
// Implementation: 0x1065174b0

// -[SCChatTableViewV3Presenter _shouldRescrollAfterInputTransition]
// Type encoding: B16@0:8
// Implementation: 0x10651761c

// -[SCChatTableViewV3Presenter _maybeMarkPendingRescroll:]
// Type encoding: v24@0:8q16
// Implementation: 0x10651765c

// -[SCChatTableViewV3Presenter _flushPendingRescrollIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1065176dc

// -[SCChatTableViewV3Presenter _logScrollRelativeToKeyboardAnimationWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106517710

// -[SCChatTableViewV3Presenter tableView]
// Type encoding: @16@0:8
// Implementation: 0x106517714

// -[SCChatTableViewV3Presenter setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10651771c

// -[SCChatTableViewV3Presenter tableContainerView]
// Type encoding: @16@0:8
// Implementation: 0x10651774c

// -[SCChatTableViewV3Presenter setTableContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106517754

// -[SCChatTableViewV3Presenter modalShown]
// Type encoding: B16@0:8
// Implementation: 0x106517784

// -[SCChatTableViewV3Presenter setModalShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x10651778c

// -[SCChatTableViewV3Presenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106517794

// +[SCChatTableViewV3Presenter getIndexPathArrayFrom:to:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106515b84

@end
