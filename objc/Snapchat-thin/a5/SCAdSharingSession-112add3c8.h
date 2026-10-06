// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSharingSession
// Superclass: NSObject
// Address: 0x112add3c8

@interface SCAdSharingSession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",W,N,V_eventAnnouncing
// Property: isPresentingSendToView; attributes: TB,R,N,V_isPresentingSendToView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdSharingSession initWithAdDataSource:viewLocation:adBlizzardLogger:adTrackerHelper:sharingPresenterProvider:]
// Type encoding: @56@0:8@16q24@32@40@48
// Implementation: 0x1063a35e8

// -[SCAdSharingSession extraPropertiesForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063a36ec

// -[SCAdSharingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063a3844

// -[SCAdSharingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063a3970

// -[SCAdSharingSession _setEntryEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a4070

// -[SCAdSharingSession _logAdShareCreate]
// Type encoding: v16@0:8
// Implementation: 0x1063a4150

// -[SCAdSharingSession _logAdShareSentWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a4230

// -[SCAdSharingSession _logParamBuilderForCurrentSharedItem]
// Type encoding: @16@0:8
// Implementation: 0x1063a43a0

// -[SCAdSharingSession _prepareSharingControllerWithZoomInOpera:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1063a4498

// -[SCAdSharingSession _sharedItemMediaType]
// Type encoding: q16@0:8
// Implementation: 0x1063a473c

// -[SCAdSharingSession updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063a4858

// -[SCAdSharingSession adSharingPresenterDidChangeState]
// Type encoding: v16@0:8
// Implementation: 0x1063a486c

// -[SCAdSharingSession adSharingPresenterDidCompleteSharing:withParameters:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1063a495c

// -[SCAdSharingSession adSharingPresenterDidBeginSharing]
// Type encoding: v16@0:8
// Implementation: 0x1063a4a88

// -[SCAdSharingSession adSharingPresenterDidExitPreview]
// Type encoding: v16@0:8
// Implementation: 0x1063a4aec

// -[SCAdSharingSession adSharingPresenterDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1063a4af4

// -[SCAdSharingSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063a4b50

// -[SCAdSharingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a4b68

// -[SCAdSharingSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063a4b74

// -[SCAdSharingSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a4b8c

// -[SCAdSharingSession isPresentingSendToView]
// Type encoding: B16@0:8
// Implementation: 0x1063a4b98

// -[SCAdSharingSession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1063a4ba0

// -[SCAdSharingSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a4bb8

// -[SCAdSharingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063a4bc4

@end
