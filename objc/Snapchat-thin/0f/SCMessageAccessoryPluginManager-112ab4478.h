// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageAccessoryPluginManager
// Superclass: NSObject
// Address: 0x112ab4478

@interface SCMessageAccessoryPluginManager

// Property: ctaPlugins; attributes: T@"NSDictionary",&,V_ctaPlugins
// Property: belowMessagePlugins; attributes: T@"NSDictionary",&,V_belowMessagePlugins
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessageAccessoryPluginManager initWithPlugins:prioritizedCtaPluginIdentifiers:orderedBelowMessagePluginIdentifiers:conversationParticipantProvider:conversationUpdatesPublisher:queue:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105fa28b8

// -[SCMessageAccessoryPluginManager setMessageRenderingPluginManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa2b44

// -[SCMessageAccessoryPluginManager setChatScrollHandler:uiContainer:presentingViewController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fa2b7c

// -[SCMessageAccessoryPluginManager ctaAccessoryForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa2c10

// -[SCMessageAccessoryPluginManager belowMessageAccessoriesForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa2df0

// -[SCMessageAccessoryPluginManager updatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa31c0

// -[SCMessageAccessoryPluginManager setConversationDisplayInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa31e8

// -[SCMessageAccessoryPluginManager setActionMenuPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa3218

// -[SCMessageAccessoryPluginManager dismissPresentedViews]
// Type encoding: v16@0:8
// Implementation: 0x105fa33f4

// -[SCMessageAccessoryPluginManager _messageObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa3490

// -[SCMessageAccessoryPluginManager _conversationInformationObservableForConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa36b8

// -[SCMessageAccessoryPluginManager _ctaAccessoryForMessage:messageObservable:conversationInformationObservable:prioritizedPluginIdentifiers:currentPriorityIndex:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x105fa39a0

// -[SCMessageAccessoryPluginManager _registerPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa3d68

// -[SCMessageAccessoryPluginManager _setDependenciesForPlugins]
// Type encoding: v16@0:8
// Implementation: 0x105fa3f38

// -[SCMessageAccessoryPluginManager _setDependenciesForPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa405c

// -[SCMessageAccessoryPluginManager _dismissPresentedViewsForPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa4264

// -[SCMessageAccessoryPluginManager ctaPlugins]
// Type encoding: @16@0:8
// Implementation: 0x105fa43a0

// -[SCMessageAccessoryPluginManager setCtaPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa43ac

// -[SCMessageAccessoryPluginManager belowMessagePlugins]
// Type encoding: @16@0:8
// Implementation: 0x105fa43b4

// -[SCMessageAccessoryPluginManager setBelowMessagePlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa43c0

// -[SCMessageAccessoryPluginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fa43c8

@end
