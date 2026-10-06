// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputSnapAccessory
// Superclass: NSObject
// Address: 0x112b0a7d8

@interface SCChatInputSnapAccessory

// Property: pluginDelegate; attributes: T@"<SCChatInputSnapAccessoryPluginDelegate>",W,N,V_pluginDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: inputItem; attributes: T@"UIButton<SCChatInputItem>",W,N,VinputItem
// Property: inputController; attributes: T@"UIViewController<SCChatInputContext>",W,N,V_inputController

// -[SCChatInputSnapAccessory initWithReplyParameterProvider:circumstanceEngine:chatCameraScopeExposer:previewFilterDataProviderFactory:previewScopeLauncher:previewScopeBuilderServices:currentPageTracker:previewAssetVideoProvider:activeConversationInformation:replyAllGroupId:groupFetcher:inputScopeContext:messagingExperimentService:snapDocEditorServices:chatTooltipsService:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96Q104@112@120@128
// Implementation: 0x1069c5130

// -[SCChatInputSnapAccessory snapAccessoryPresentCameraEvents]
// Type encoding: @16@0:8
// Implementation: 0x1069c5484

// -[SCChatInputSnapAccessory setInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c54ac

// -[SCChatInputSnapAccessory didSelectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c553c

// -[SCChatInputSnapAccessory didDeselectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c5540

// -[SCChatInputSnapAccessory didCollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c5544

// -[SCChatInputSnapAccessory didUncollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c5548

// -[SCChatInputSnapAccessory _subscribeToTextEditingEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c554c

// -[SCChatInputSnapAccessory _textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c572c

// -[SCChatInputSnapAccessory _subscribeToPasteEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c5730

// -[SCChatInputSnapAccessory _setActiveConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c5c64

// -[SCChatInputSnapAccessory _didPasteVideoData:contentType:chatIdentifier:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069c5d68

// -[SCChatInputSnapAccessory _launchPreviewScopeForVideoData:previewConfiguration:snapDocEditor:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069c6024

// -[SCChatInputSnapAccessory didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c6248

// -[SCChatInputSnapAccessory _didSendSnapOrChatMessage]
// Type encoding: v16@0:8
// Implementation: 0x1069c624c

// -[SCChatInputSnapAccessory didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1069c62d4

// -[SCChatInputSnapAccessory didSendChatMessage]
// Type encoding: v16@0:8
// Implementation: 0x1069c62d8

// -[SCChatInputSnapAccessory didSendToGallery]
// Type encoding: v16@0:8
// Implementation: 0x1069c62dc

// -[SCChatInputSnapAccessory didPostStoryWithStoryTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c62e0

// -[SCChatInputSnapAccessory accessoryPressed]
// Type encoding: v16@0:8
// Implementation: 0x1069c62e4

// -[SCChatInputSnapAccessory interceptMessageSendAttemptForPlugin:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069c633c

// -[SCChatInputSnapAccessory _platformAnalyticsForConversationInformation:replyAllGroupId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069c6350

// -[SCChatInputSnapAccessory _getFilterDataProviderWithSnapSource:mediaType:]
// Type encoding: @32@0:8q16Q24
// Implementation: 0x1069c65a0

// -[SCChatInputSnapAccessory _dismissPreviewIfPresented]
// Type encoding: v16@0:8
// Implementation: 0x1069c65a8

// -[SCChatInputSnapAccessory _quickCaptionIsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1069c6694

// -[SCChatInputSnapAccessory _updateInputItemImage]
// Type encoding: v16@0:8
// Implementation: 0x1069c66d4

// -[SCChatInputSnapAccessory captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069c692c

// -[SCChatInputSnapAccessory _inputText]
// Type encoding: @16@0:8
// Implementation: 0x1069c69d8

// -[SCChatInputSnapAccessory _clearText]
// Type encoding: v16@0:8
// Implementation: 0x1069c6a18

// -[SCChatInputSnapAccessory dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c6a48

// -[SCChatInputSnapAccessory inputController]
// Type encoding: @16@0:8
// Implementation: 0x1069c6a90

// -[SCChatInputSnapAccessory inputItem]
// Type encoding: @16@0:8
// Implementation: 0x1069c6aa8

// -[SCChatInputSnapAccessory setInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c6ac0

// -[SCChatInputSnapAccessory pluginDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1069c6acc

// -[SCChatInputSnapAccessory setPluginDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069c6ae4

// -[SCChatInputSnapAccessory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069c6af0

@end
