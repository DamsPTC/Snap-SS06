// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageTypeRenderingPluginManager
// Superclass: NSObject
// Address: 0x112ae57f8

@interface SCMessageTypeRenderingPluginManager

// Property: plugins; attributes: T@"NSDictionary",&,V_plugins
// Property: messageViewEventSubjects; attributes: T@"NSDictionary",&,V_messageViewEventSubjects
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessageTypeRenderingPluginManager initWithPlugins:activeConversationIdObservable:polaroidViewTransitionResolver:circumstanceEngine:messagingExperimentService:bitmojiAvatarProvider:userId:adConfigProviderV2:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10656b2c0

// -[SCMessageTypeRenderingPluginManager _processPlugins:activeConversationIdObservable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10656b9a8

// -[SCMessageTypeRenderingPluginManager setUIContainer:multiDirectionUIContainer:presentingViewController:activeConversationInformationObservable:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10656bce0

// -[SCMessageTypeRenderingPluginManager setChatScrollHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656bf98

// -[SCMessageTypeRenderingPluginManager setPlaybackPresenter:operaPresenterDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10656c0a0

// -[SCMessageTypeRenderingPluginManager setInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656c220

// -[SCMessageTypeRenderingPluginManager setActionMenuPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656c328

// -[SCMessageTypeRenderingPluginManager setChatPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656c430

// -[SCMessageTypeRenderingPluginManager pluginForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10656c538

// -[SCMessageTypeRenderingPluginManager pluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10656c5a4

// -[SCMessageTypeRenderingPluginManager pluginForQuotedMessage:isPreview:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10656cecc

// -[SCMessageTypeRenderingPluginManager contextualHeaderProvidingPluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10656d3f4

// -[SCMessageTypeRenderingPluginManager forwardablePluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10656d4c8

// -[SCMessageTypeRenderingPluginManager remixablePluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10656d5e8

// -[SCMessageTypeRenderingPluginManager canMessageBeQuoted:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656d71c

// -[SCMessageTypeRenderingPluginManager shouldWrapWithBubble:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656d79c

// -[SCMessageTypeRenderingPluginManager dataDidUpdateForPlugin:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656d7f4

// -[SCMessageTypeRenderingPluginManager pluginForwardableStatusHasChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656d834

// -[SCMessageTypeRenderingPluginManager dismissPresentedViews]
// Type encoding: v16@0:8
// Implementation: 0x10656d8bc

// -[SCMessageTypeRenderingPluginManager updatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x10656d950

// -[SCMessageTypeRenderingPluginManager _isMessageEligibleForSnapPlugin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656d978

// -[SCMessageTypeRenderingPluginManager _isMediaEligibleForChatMediaPlugin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656da74

// -[SCMessageTypeRenderingPluginManager _isQuotingSupportEnabledForPlugin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656daf0

// -[SCMessageTypeRenderingPluginManager _getIsChatTextPluginEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10656db68

// -[SCMessageTypeRenderingPluginManager _isCurrentUserAddedToGroup:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656dba8

// -[SCMessageTypeRenderingPluginManager _isContextualReplyEnabledForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656dd70

// -[SCMessageTypeRenderingPluginManager _isTextPluginEnabledForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x10656ddf0

// -[SCMessageTypeRenderingPluginManager _getIsSponsoredWelcomeStatusMessagePluginEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10656de48

// -[SCMessageTypeRenderingPluginManager pluginViewDidChangeVisibility:messageId:visible:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10656de90

// -[SCMessageTypeRenderingPluginManager pluginViewDidChangeFocus:messageId:focused:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10656df20

// -[SCMessageTypeRenderingPluginManager setVisibleMessageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656dfb0

// -[SCMessageTypeRenderingPluginManager messageListDidScroll]
// Type encoding: v16@0:8
// Implementation: 0x10656dfb8

// -[SCMessageTypeRenderingPluginManager setMessageVisibilityFractionProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656dfc8

// -[SCMessageTypeRenderingPluginManager _emitViewEventForPlugin:messageId:information:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10656e10c

// -[SCMessageTypeRenderingPluginManager quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10656e210

// -[SCMessageTypeRenderingPluginManager plugins]
// Type encoding: @16@0:8
// Implementation: 0x10656e28c

// -[SCMessageTypeRenderingPluginManager setPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656e298

// -[SCMessageTypeRenderingPluginManager messageViewEventSubjects]
// Type encoding: @16@0:8
// Implementation: 0x10656e2a0

// -[SCMessageTypeRenderingPluginManager setMessageViewEventSubjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656e2ac

// -[SCMessageTypeRenderingPluginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10656e2b4

@end
