// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceoverPlaybackControls
// Superclass: UIView
// Address: 0x112a00658

@interface SCVoiceoverPlaybackControls

// Property: playbackButtonEventObservable; attributes: T@"SCObservable",R,N
// Property: playbackButtonState; attributes: TQ,N
// Property: delegate; attributes: T@"<SCSnapSegmentExpandedCellDelegate>",W,N,V_delegate

// -[SCVoiceoverPlaybackControls initWithContentTimeRange:]
// Type encoding: @64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x104e1cfc8

// -[SCVoiceoverPlaybackControls playbackButtonEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x104e1d290

// -[SCVoiceoverPlaybackControls playbackButtonState]
// Type encoding: Q16@0:8
// Implementation: 0x104e1d2c0

// -[SCVoiceoverPlaybackControls setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e1d2d0

// -[SCVoiceoverPlaybackControls setThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e1d32c

// -[SCVoiceoverPlaybackControls updatePlayheadWithTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x104e1d344

// -[SCVoiceoverPlaybackControls updateProgressOverlayWithTime:withAnimation:]
// Type encoding: v44@0:8{?=qiIq}16B40
// Implementation: 0x104e1d380

// -[SCVoiceoverPlaybackControls addSegmentSeparatorAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x104e1d580

// -[SCVoiceoverPlaybackControls removeLastSegmentSeparator]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x104e1d768

// -[SCVoiceoverPlaybackControls setPlaybackButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e1d830

// -[SCVoiceoverPlaybackControls setPlaybackButtonState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104e1da4c

// -[SCVoiceoverPlaybackControls setPlayheadInteractionsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e1da5c

// -[SCVoiceoverPlaybackControls _handlePlaybackButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104e1dab4

// -[SCVoiceoverPlaybackControls _constrainProgressOverlay]
// Type encoding: v16@0:8
// Implementation: 0x104e1db68

// -[SCVoiceoverPlaybackControls _constrainPlaybackButton]
// Type encoding: v16@0:8
// Implementation: 0x104e1de18

// -[SCVoiceoverPlaybackControls delegate]
// Type encoding: @16@0:8
// Implementation: 0x104e1e010

// -[SCVoiceoverPlaybackControls .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e1e030

@end
