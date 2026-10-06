// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsMessagePlugin
// Superclass: NSObject
// Address: 0x112ab3ed8

@interface SCMapDropsMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapDropsMessagePlugin initWithGRPCServiceFactory:performerProvider:pageLauncher:persistenceProvider:userInfoServices:circumstanceEngine:composerStaticMapURLGenerator:chatLogger:notificationPool:messagingMessageProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105f9e128

// -[SCMapDropsMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f9e380

// -[SCMapDropsMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f9e5a4

// -[SCMapDropsMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f9e5d4

// -[SCMapDropsMessagePlugin _viewModelForDropContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f9e5dc

// -[SCMapDropsMessagePlugin _contextForDrop:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f9e6d4

// -[SCMapDropsMessagePlugin _launchMapScopeWithDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9e944

// -[SCMapDropsMessagePlugin _saveDropToMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9eaf8

// -[SCMapDropsMessagePlugin _presentNotificationWithResultType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f9ec44

// -[SCMapDropsMessagePlugin _currentOrInitialDrop:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f9edf4

// -[SCMapDropsMessagePlugin _maybePersistDrop:metaData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f9eeac

// -[SCMapDropsMessagePlugin _registerForDeletedDropUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105f9eee4

// -[SCMapDropsMessagePlugin _updateDisplayInfoForDeletedDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9f034

// -[SCMapDropsMessagePlugin _registerForPersistedDropsUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105f9f148

// -[SCMapDropsMessagePlugin _updateDisplayInfoForPersistedDrops:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f9f2bc

// -[SCMapDropsMessagePlugin _dropWithUpdatedDrop:isSaved:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105f9f4b8

// -[SCMapDropsMessagePlugin _dropFromMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f9f4c4

// -[SCMapDropsMessagePlugin _displayInfoFromDrop:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f9fd4c

// -[SCMapDropsMessagePlugin _pinDisplayInfoObservableForDrop:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f9fed4

// -[SCMapDropsMessagePlugin _peliasGrpcService]
// Type encoding: @16@0:8
// Implementation: 0x105fa0034

// -[SCMapDropsMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa0140

// -[SCMapDropsMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa0148

// -[SCMapDropsMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa0178

// -[SCMapDropsMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa0180

// -[SCMapDropsMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105fa01b0

// -[SCMapDropsMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa01c8

// -[SCMapDropsMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fa01d4

@end
