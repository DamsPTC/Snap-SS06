// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdApplePrivacySession
// Superclass: NSObject
// Address: 0x112add198

@interface SCAdApplePrivacySession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",W,N,V_eventAnnouncing
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdApplePrivacySession initWithAdDataSource:adConfigProvider:adConfigProviderV2:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10639f568

// -[SCAdApplePrivacySession _registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10639f704

// -[SCAdApplePrivacySession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639f998

// -[SCAdApplePrivacySession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10639fa44

// -[SCAdApplePrivacySession _pushApplePromptVCWithAdProductType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10639fdfc

// -[SCAdApplePrivacySession adApplePromptWillDimiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063a00d4

// -[SCAdApplePrivacySession adApplePromptDidDimiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063a0158

// -[SCAdApplePrivacySession _resumeOpera]
// Type encoding: v16@0:8
// Implementation: 0x1063a0164

// -[SCAdApplePrivacySession _pauseOpera]
// Type encoding: v16@0:8
// Implementation: 0x1063a01a8

// -[SCAdApplePrivacySession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063a0224

// -[SCAdApplePrivacySession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a023c

// -[SCAdApplePrivacySession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063a0248

// -[SCAdApplePrivacySession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a0260

// -[SCAdApplePrivacySession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1063a026c

// -[SCAdApplePrivacySession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063a0284

@end
