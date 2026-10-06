// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputMediaPlugin
// Superclass: NSObject
// Address: 0x112b0b0e8

@interface SCChatInputMediaPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: inputContext; attributes: T@"UIViewController<SCChatInputContext>",W,N,VinputContext
// Property: inputItem; attributes: T@"UIButton<SCChatInputItem>",&,N,V_inputItem
// Property: position; attributes: TQ,R,N
// Property: pluginType; attributes: TQ,R,N

// -[SCChatInputMediaPlugin initWithDrawerMediaSender:groupFetcher:snapchattersDataFetcher:activeConversationInformation:cameraRollAlbumPickerScopeExposer:chatLogger:blizzardLogger:dataObjectContext:cloudFS:encryptedContentManager:circumstanceEngine:contentDelivery:musicSelectionLoader:musicMediaLoader:snapVideoFilterFactory:mediaVideoImporter:mediaImageImporter:previewScopeExposer:previewScopeBuilderServices:previewVideoProviderServices:previewFilterDataProviderFactory:photoPermissionCoordinator:mediaTranscodingLogger:grapheneRegistry:storyReplySender:storyShareSender:replyAllGroupId:snapVideoFilterScopeExposer:memoriesPreviewPresenterBuilder:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:galleryLogger:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:snapDocDownloadingService:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:snapDocEditorServices:snapSender:memoriesSnapDocTranscodingManager:spotlightShareSender:notificationPool:chatMediaPreviewDataManager:messagingExperimentService:textSender:externalMediaPreparer:chatMediaPreviewScopeExposer:chatMediaPreviewScopeServices:legacyStoryMediaCache:memTwoChatMediaDrawerHost:enableMemTwoChatMediaDrawer:stickerInjector:]
// Type encoding: @468@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448B456@460
// Implementation: 0x1069f2114

// -[SCChatInputMediaPlugin _subscribeToMediaSendEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f2c68

// -[SCChatInputMediaPlugin configureInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f3084

// -[SCChatInputMediaPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x1069f323c

// -[SCChatInputMediaPlugin position]
// Type encoding: Q16@0:8
// Implementation: 0x1069f3244

// -[SCChatInputMediaPlugin createDrawer]
// Type encoding: @16@0:8
// Implementation: 0x1069f324c

// -[SCChatInputMediaPlugin createItemController]
// Type encoding: @16@0:8
// Implementation: 0x1069f3404

// -[SCChatInputMediaPlugin mediaAccessoryDidSendMessageFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f355c

// -[SCChatInputMediaPlugin _handleMediaSendEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f35b4

// -[SCChatInputMediaPlugin recipient]
// Type encoding: @16@0:8
// Implementation: 0x1069f47cc

// -[SCChatInputMediaPlugin recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x1069f47f4

// -[SCChatInputMediaPlugin replyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1069f481c

// -[SCChatInputMediaPlugin replyParametersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069f4844

// -[SCChatInputMediaPlugin isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x1069f489c

// -[SCChatInputMediaPlugin _setReplyParmetersForConversationInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f48a4

// -[SCChatInputMediaPlugin _updateReplyParametersForGroupConversationId:partialReplyParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069f4c30

// -[SCChatInputMediaPlugin _updateReplyParametersForSnapchatter:partialReplyParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069f4cd8

// -[SCChatInputMediaPlugin _handleActiveConversationInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f4dd0

// -[SCChatInputMediaPlugin _sinkInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f4ef4

// -[SCChatInputMediaPlugin _memTwoDrawerConversation]
// Type encoding: @16@0:8
// Implementation: 0x1069f5000

// -[SCChatInputMediaPlugin _notifyMemTwoDrawerOfConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x1069f51e0

// -[SCChatInputMediaPlugin _numberOfRecipients]
// Type encoding: Q16@0:8
// Implementation: 0x1069f52d0

// -[SCChatInputMediaPlugin _destinationInfoForConversationInformation:replyAllGroupId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069f5470

// -[SCChatInputMediaPlugin _platformAnalyticsWithDrawerMetricsInfo:memoriesMetricsInfo:conversationInformation:replyAllGroupId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1069f55ac

// -[SCChatInputMediaPlugin _convertToExternalMediasFromDrawerGallerySnaps:drawerTab:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1069f5814

// -[SCChatInputMediaPlugin _processDrawerGallerySnaps:sendEvent:platformAnalytics:drawerTab:completionHandler:]
// Type encoding: @56@0:8@16@24@32q40@?48
// Implementation: 0x1069f5928

// -[SCChatInputMediaPlugin _sendGifFromDrawerMedia:sendEvent:platformAnalytics:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1069f5b54

// -[SCChatInputMediaPlugin _sendGifFromImageData:sendEvent:platformAnalytics:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1069f5d6c

// -[SCChatInputMediaPlugin inputContext]
// Type encoding: @16@0:8
// Implementation: 0x1069f6760

// -[SCChatInputMediaPlugin setInputContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f6778

// -[SCChatInputMediaPlugin inputItem]
// Type encoding: @16@0:8
// Implementation: 0x1069f6784

// -[SCChatInputMediaPlugin setInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069f678c

// -[SCChatInputMediaPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069f67bc

@end
