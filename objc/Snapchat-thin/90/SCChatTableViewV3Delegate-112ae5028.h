// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatTableViewV3Delegate
// Superclass: NSObject
// Address: 0x112ae5028

@interface SCChatTableViewV3Delegate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatTableViewV3Delegate initWithScrollDelegate:withParentVC:savableCellDelegate:reactableCellDelegate:replayCellDelegate:chatInputContext:chatActionHandler:circumstanceEngine:userSession:pluginManager:polaroidTooltipManager:valdiRuntimeProvider:composerAnimatedImageViewFactory:grapheneRegistry:quotedMessageSubject:snapCountDownManager:legacyChatTooltipsService:chatLogger:loadMessageLogger:internalActionHandler:conversationDataFetcher:chatMediaFetchingServices:messagingExperimentService:chatAttachmentHandlerScopeExposer:postSnapProvider:onDemandResourceDownloader:mapExternalUrlServices:]
// Type encoding: @232@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224
// Implementation: 0x10655218c

// -[SCChatTableViewV3Delegate tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1065529e4

// -[SCChatTableViewV3Delegate tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106552a24

// -[SCChatTableViewV3Delegate _listenForLayoutChangesIfNecessary:tableView:atIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106553220

// -[SCChatTableViewV3Delegate _updateTableForLayoutChange:tableView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106553414

// -[SCChatTableViewV3Delegate _subscribeToTableUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x10655356c

// -[SCChatTableViewV3Delegate _performTableUpdateForLayoutChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106553758

// -[SCChatTableViewV3Delegate _accessibilityIdentifierForIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1065538fc

// -[SCChatTableViewV3Delegate tableView:didEndDisplayingCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106553934

// -[SCChatTableViewV3Delegate didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106553a3c

// -[SCChatTableViewV3Delegate tableView:willDisplayCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106553b3c

// -[SCChatTableViewV3Delegate _fetchMetadataForMessageViewModel:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106554264

// -[SCChatTableViewV3Delegate tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106554418

// -[SCChatTableViewV3Delegate tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10655441c

// -[SCChatTableViewV3Delegate scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x106554468

// -[SCChatTableViewV3Delegate scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106554530

// -[SCChatTableViewV3Delegate scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065545f8

// -[SCChatTableViewV3Delegate scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x106554640

// -[SCChatTableViewV3Delegate scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x106554704

// -[SCChatTableViewV3Delegate _setIsScrollViewScrolling:forMessagingCells:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1065547ac

// -[SCChatTableViewV3Delegate _setIsScrollViewScrolling:forMessagingCells:delay:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x106554934

// -[SCChatTableViewV3Delegate _notifyPluginManagerOfVisibleCells:inTableView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106554a48

// -[SCChatTableViewV3Delegate visibleHeightFractionForMessageId:]
// Type encoding: d24@0:8@16
// Implementation: 0x106554bdc

// -[SCChatTableViewV3Delegate tableViewIsScrolling:]
// Type encoding: B24@0:8@16
// Implementation: 0x106554fc8

// -[SCChatTableViewV3Delegate _loadHistoryForLoadingCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106555018

// -[SCChatTableViewV3Delegate _loadHistoryForLoadingViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106555058

// -[SCChatTableViewV3Delegate loadHistoryWithActionModel:paginationToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065550e8

// -[SCChatTableViewV3Delegate cellHandleTapToLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x10655515c

// -[SCChatTableViewV3Delegate _loadVideoForVisibleCells:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065551dc

// -[SCChatTableViewV3Delegate displayMediaForVisibleCells:]
// Type encoding: v24@0:8@16
// Implementation: 0x106555338

// -[SCChatTableViewV3Delegate prepareMediaForVisibleCells:]
// Type encoding: v24@0:8@16
// Implementation: 0x106555398

// -[SCChatTableViewV3Delegate highlightCellAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065554f4

// -[SCChatTableViewV3Delegate clearMediaForCells:]
// Type encoding: v24@0:8@16
// Implementation: 0x106555524

// -[SCChatTableViewV3Delegate viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x106555690

// -[SCChatTableViewV3Delegate _fetchMedia:messageId:conversationId:isGroupConversation:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10655573c

// -[SCChatTableViewV3Delegate _fetchMediaForMediaViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10655585c

// -[SCChatTableViewV3Delegate _cellToMediaCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x10655592c

// -[SCChatTableViewV3Delegate _uiTestMessageIndexForMessageAtRow:viewModels:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x106555988

// -[SCChatTableViewV3Delegate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065559fc

@end
