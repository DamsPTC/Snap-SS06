// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextActionParams
// Superclass: NSObject
// Address: 0x112c63738

@interface SCContextActionParams

// Property: logger; attributes: T@"<SCContextLogging>",R,N,V_logger
// Property: snapParams; attributes: T@"SCContextSnapParams",R,C,N,V_snapParams
// Property: isLaunchedBySnapBackAction; attributes: TB,N,V_isLaunchedBySnapBackAction
// Property: snapBackLensId; attributes: T@"NSString",C,N,V_snapBackLensId
// Property: operaPage; attributes: T@"SCOperaPage",R,N,V_operaPage
// Property: operaEventListener; attributes: T@"<SCOperaEventAnnouncing>",R,W,N,V_operaEventListener
// Property: legacyProperties; attributes: T@"NSDictionary",R,C,N,V_legacyProperties
// Property: conversationParams; attributes: T@"SCContextConversationParams",R,N,V_conversationParams
// Property: contextMenuSource; attributes: Tq,R,N,V_contextMenuSource
// Property: contextMenuSourceSpecific; attributes: Tq,R,N,V_contextMenuSourceSpecific
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: spotlightLiveCommentCount; attributes: TQ,R,N,V_spotlightLiveCommentCount
// Property: spotlightPendingReplyCount; attributes: TQ,R,N,V_spotlightPendingReplyCount
// Property: lensMode; attributes: Ti,R,N,V_lensMode
// Property: operaNavigationStyle; attributes: Tq,R,N,V_operaNavigationStyle
// Property: pairedMusicData; attributes: T@"SCCTXSoundProfileAction",&,N,V_pairedMusicData
// Property: rankingResultsId; attributes: T@"NSString",C,N,V_rankingResultsId
// Property: playbackPositionMs; attributes: T@"NSNumber",&,N,V_playbackPositionMs

// -[SCContextActionParams initWithLogger:snapParams:conversationParams:contextMenuSource:contextMenuSourceSpecific:operaNavigationStyle:]
// Type encoding: @64@0:8@16@24@32q40q48q56
// Implementation: 0x10b05dabc

// -[SCContextActionParams initWithLogger:snapParams:operaPage:operaEventListener:legacyProperties:conversationParams:viewLocation:contextMenuSource:contextMenuSourceSpecific:spotlightLiveCommentCount:spotlightPendingReplyCount:lensMode:operaNavigationStyle:pairedMusicData:]
// Type encoding: @124@0:8@16@24@32@40@48@56q64q72q80Q88Q96i104q108@116
// Implementation: 0x10b05dbb0

// -[SCContextActionParams logger]
// Type encoding: @16@0:8
// Implementation: 0x10b05dce4

// -[SCContextActionParams snapParams]
// Type encoding: @16@0:8
// Implementation: 0x10b05dcec

// -[SCContextActionParams isLaunchedBySnapBackAction]
// Type encoding: B16@0:8
// Implementation: 0x10b05dcf4

// -[SCContextActionParams setIsLaunchedBySnapBackAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b05dcfc

// -[SCContextActionParams snapBackLensId]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd04

// -[SCContextActionParams setSnapBackLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b05dd0c

// -[SCContextActionParams operaPage]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd14

// -[SCContextActionParams operaEventListener]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd1c

// -[SCContextActionParams legacyProperties]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd34

// -[SCContextActionParams conversationParams]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd3c

// -[SCContextActionParams contextMenuSource]
// Type encoding: q16@0:8
// Implementation: 0x10b05dd44

// -[SCContextActionParams contextMenuSourceSpecific]
// Type encoding: q16@0:8
// Implementation: 0x10b05dd4c

// -[SCContextActionParams viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x10b05dd54

// -[SCContextActionParams setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b05dd5c

// -[SCContextActionParams spotlightLiveCommentCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b05dd64

// -[SCContextActionParams spotlightPendingReplyCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b05dd6c

// -[SCContextActionParams lensMode]
// Type encoding: i16@0:8
// Implementation: 0x10b05dd74

// -[SCContextActionParams operaNavigationStyle]
// Type encoding: q16@0:8
// Implementation: 0x10b05dd7c

// -[SCContextActionParams pairedMusicData]
// Type encoding: @16@0:8
// Implementation: 0x10b05dd84

// -[SCContextActionParams setPairedMusicData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b05dd8c

// -[SCContextActionParams rankingResultsId]
// Type encoding: @16@0:8
// Implementation: 0x10b05ddbc

// -[SCContextActionParams setRankingResultsId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b05ddc4

// -[SCContextActionParams playbackPositionMs]
// Type encoding: @16@0:8
// Implementation: 0x10b05ddcc

// -[SCContextActionParams setPlaybackPositionMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b05ddd4

// -[SCContextActionParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b05de04

@end
