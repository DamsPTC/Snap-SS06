// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputAudioNotePlugin
// Superclass: NSObject
// Address: 0x112b0c088

@interface SCChatInputAudioNotePlugin

// Property: inputContext; attributes: T@"UIViewController<SCChatInputContext>",W,N,VinputContext
// Property: inputItem; attributes: T@"UIButton<SCChatInputItem>",&,N,V_inputItem
// Property: position; attributes: TQ,R,N
// Property: pluginType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInputAudioNotePlugin initWithAudioNotePlayer:drawerMediaSender:storyReplySender:storyShareSender:groupFetcher:activeConversationInformation:replyAllGroupId:chatLogger:messagingExperimentService:conversationEventObservable:valdiRuntimeProvider:spotlightShareSender:applicationStateProvider:inputScopeContext:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112Q120
// Implementation: 0x106a228b8

// -[SCChatInputAudioNotePlugin setChatScrollHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a22b78

// -[SCChatInputAudioNotePlugin _subscribeToAudioNoteEvents]
// Type encoding: v16@0:8
// Implementation: 0x106a22b80

// -[SCChatInputAudioNotePlugin _subscribeToRecordStartDestination]
// Type encoding: v16@0:8
// Implementation: 0x106a22f28

// -[SCChatInputAudioNotePlugin _setLatestConversationInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a23168

// -[SCChatInputAudioNotePlugin _captureRecordStartDestinationWithType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a232fc

// -[SCChatInputAudioNotePlugin _redirectSendToRecordedConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a23340

// -[SCChatInputAudioNotePlugin configureInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a234d8

// -[SCChatInputAudioNotePlugin position]
// Type encoding: Q16@0:8
// Implementation: 0x106a235d4

// -[SCChatInputAudioNotePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x106a235dc

// -[SCChatInputAudioNotePlugin createDrawer]
// Type encoding: @16@0:8
// Implementation: 0x106a235e4

// -[SCChatInputAudioNotePlugin createItemController]
// Type encoding: @16@0:8
// Implementation: 0x106a235ec

// -[SCChatInputAudioNotePlugin _handleAudioNoteRecordEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a23614

// -[SCChatInputAudioNotePlugin _createAudioNoteDataModelFromEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a2417c

// -[SCChatInputAudioNotePlugin _platformAnalyticsForConversationInformation:replyAllGroupId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a24318

// -[SCChatInputAudioNotePlugin willPresentContent]
// Type encoding: v16@0:8
// Implementation: 0x106a24570

// -[SCChatInputAudioNotePlugin inputItem]
// Type encoding: @16@0:8
// Implementation: 0x106a245d0

// -[SCChatInputAudioNotePlugin setInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a245d8

// -[SCChatInputAudioNotePlugin inputContext]
// Type encoding: @16@0:8
// Implementation: 0x106a24608

// -[SCChatInputAudioNotePlugin setInputContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a24620

// -[SCChatInputAudioNotePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a2462c

@end
