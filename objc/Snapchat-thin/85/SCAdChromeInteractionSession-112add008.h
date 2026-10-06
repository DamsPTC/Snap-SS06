// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdChromeInteractionSession
// Superclass: NSObject
// Address: 0x112add008

@interface SCAdChromeInteractionSession

// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isPresentingProfile; attributes: TB,R,N

// -[SCAdChromeInteractionSession initWithAdDataSource:adTrackerHelper:isNavigationStyleVertical:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063933ec

// -[SCAdChromeInteractionSession initWithAdDataSource:adTrackerHelper:isNavigationStyleVertical:businessProfilesScopeLauncher:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x1063934d4

// -[SCAdChromeInteractionSession isPresentingProfile]
// Type encoding: B16@0:8
// Implementation: 0x1063935b0

// -[SCAdChromeInteractionSession shouldTriggerAttachmentOnTapChromeWithPageId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063935b8

// -[SCAdChromeInteractionSession shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063935c0

// -[SCAdChromeInteractionSession adsDrivenSwipeLeftToShowAttachmentWithPageId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063935c8

// -[SCAdChromeInteractionSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063935d0

// -[SCAdChromeInteractionSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063936ac

// -[SCAdChromeInteractionSession _handleChromeTouched:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063937c8

// -[SCAdChromeInteractionSession _handleChromeSubtitleTouched:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639395c

// -[SCAdChromeInteractionSession _handleChromeClosed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106393acc

// -[SCAdChromeInteractionSession _showPublisherProfileWithProfileId:page:adProductType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106393b44

// -[SCAdChromeInteractionSession businessProfilesPresenterScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106393c94

// -[SCAdChromeInteractionSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x106393cbc

// -[SCAdChromeInteractionSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x106393cd4

// -[SCAdChromeInteractionSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x106393ce0

// -[SCAdChromeInteractionSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106393cf8

// -[SCAdChromeInteractionSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106393d04

@end
