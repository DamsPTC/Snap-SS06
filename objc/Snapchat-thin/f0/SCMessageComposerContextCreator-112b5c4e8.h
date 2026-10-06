// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageComposerContextCreator
// Superclass: NSObject
// Address: 0x112b5c4e8

@interface SCMessageComposerContextCreator


// -[SCMessageComposerContextCreator initWithRuntime:conversationEventObservable:conversationUpdatesPublisher:graphene:messagingExperimentService:nativeSessionManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107061b54

// -[SCMessageComposerContextCreator getOrCreateRenderableForMessageWithId:pluginIdentifier:contentType:contextParams:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x10706213c

// -[SCMessageComposerContextCreator getOrCreateRenderableWithCacheKey:pluginIdentifier:contentType:contextParams:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107062150

// -[SCMessageComposerContextCreator _getOrCreateRenderableForMessageWithId:cacheKey:pluginIdentifier:contentType:contextParams:]
// Type encoding: @56@0:8@16@24@32q40@48
// Implementation: 0x107062168

// -[SCMessageComposerContextCreator createRenderableForMessageWithId:contentType:contextParamsObservable:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10706225c

// -[SCMessageComposerContextCreator createRenderableForMessageWithId:contentType:contextParamsObservables:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1070622d4

// -[SCMessageComposerContextCreator renderableForCacheKey:contentType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107062484

// -[SCMessageComposerContextCreator _wrapperClass]
// Type encoding: #16@0:8
// Implementation: 0x10706254c

// -[SCMessageComposerContextCreator _renderableFromParamsObservable:messageId:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1070625b0

// -[SCMessageComposerContextCreator _renderableFromCacheWithCacheKey:pluginIdentifier:contentType:contextParams:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107062c40

// -[SCMessageComposerContextCreator _createRenderableForMessageWithId:cacheKey:pluginIdentifier:contentType:contextParams:]
// Type encoding: @56@0:8@16@24@32q40@48
// Implementation: 0x1070632a8

// -[SCMessageComposerContextCreator _createPluginComposerContextForMessageId:contextParams:pluginIdentifier:existingContext:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10706337c

// -[SCMessageComposerContextCreator _setChatViewVisible:eventConversationId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1070636e0

// -[SCMessageComposerContextCreator _setActiveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107063968

// -[SCMessageComposerContextCreator _cacheRenderable:cacheKey:contentType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107064228

// -[SCMessageComposerContextCreator _clearCachedRenderablesForMessageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070643c8

// -[SCMessageComposerContextCreator _clearAllCachedRenderables]
// Type encoding: v16@0:8
// Implementation: 0x1070645e4

// -[SCMessageComposerContextCreator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070647d4

@end
