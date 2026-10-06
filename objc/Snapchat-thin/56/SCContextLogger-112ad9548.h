// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextLogger
// Superclass: NSObject
// Address: 0x112ad9548

@interface SCContextLogger

// Property: sourceTypeForContextActions; attributes: Tq,N,V_sourceTypeForContextActions
// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId
// Property: delegate; attributes: T@"<SCContextLoggerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextLogger initWithSessionId:launchSource:sessionParams:userTrackedLogger:grapheneRegistry:musicContentRestrictionServices:lensPromptDataProvider:nglStudySettings:]
// Type encoding: @80@0:8@16q24@32@40@48@56@64@72
// Implementation: 0x1062d0a24

// -[SCContextLogger updateWithContextPostSnapParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d14b8

// -[SCContextLogger _populateBaseProperties:actionWithTypeString:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062d171c

// -[SCContextLogger availableContextTypesUpdated:availableContextCards:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062d1868

// -[SCContextLogger updateAvailableContextWithSessionParams:metrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062d18d0

// -[SCContextLogger updateAvailableContextWithCardsContentIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d1b00

// -[SCContextLogger setGroupInviteId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d1f7c

// -[SCContextLogger logContextMenuPresentWithActionType:menuType:contextMenuSource:contextMenuSourceSpecific:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1062d1fac

// -[SCContextLogger logActionWithTypeString:cardType:cardId:contextActionSource:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062d2214

// -[SCContextLogger logContextMenuDismissedWithExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062d24f4

// -[SCContextLogger logCardsReappeared]
// Type encoding: v16@0:8
// Implementation: 0x1062d26b0

// -[SCContextLogger logCardsDisappeared]
// Type encoding: v16@0:8
// Implementation: 0x1062d26b8

// -[SCContextLogger logSnapViewedWithContextClientInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d26c0

// -[SCContextLogger ctaDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1062d271c

// -[SCContextLogger _logCTAVisibleLatencyToGraphene]
// Type encoding: v16@0:8
// Implementation: 0x1062d2770

// -[SCContextLogger logMenuWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2844

// -[SCContextLogger logCardsLoaded:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062d2874

// -[SCContextLogger snapViewMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1062d289c

// -[SCContextLogger contextSendMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1062d29ec

// -[SCContextLogger trackSnapSent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2a1c

// -[SCContextLogger trackChatSent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2a60

// -[SCContextLogger trackStickerSent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2aa4

// -[SCContextLogger trackAudioNoteSent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2ae8

// -[SCContextLogger trackVideoCallCreated]
// Type encoding: v16@0:8
// Implementation: 0x1062d2b2c

// -[SCContextLogger trackAudioCallCreated]
// Type encoding: v16@0:8
// Implementation: 0x1062d2b48

// -[SCContextLogger trackSavedMediaSent]
// Type encoding: v16@0:8
// Implementation: 0x1062d2b64

// -[SCContextLogger _appWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d2ba8

// -[SCContextLogger _appWillTerminate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d2bb0

// -[SCContextLogger _sceneDidDisconnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d2bb8

// -[SCContextLogger _appWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d2bc0

// -[SCContextLogger logSubtitlesVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062d2bc8

// -[SCContextLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1062d2bd0

// -[SCContextLogger sessionId]
// Type encoding: @16@0:8
// Implementation: 0x1062d2c04

// -[SCContextLogger delegate]
// Type encoding: @16@0:8
// Implementation: 0x1062d2c0c

// -[SCContextLogger setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062d2c24

// -[SCContextLogger sourceTypeForContextActions]
// Type encoding: q16@0:8
// Implementation: 0x1062d2c30

// -[SCContextLogger setSourceTypeForContextActions:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062d2c38

// -[SCContextLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062d2c40

@end
