// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceNotePlaybackController
// Superclass: NSObject
// Address: 0x112ab5a08

@interface SCVoiceNotePlaybackController


// -[SCVoiceNotePlaybackController initWithMessage:conversationId:isGroupConversation:isCurrentUserSender:chatNoteAnimationThumbnailFetcher:audioNotePlayer:userTrackedLogger:startPlaybackObservable:visibilityObservable:messagingMessageProvider:]
// Type encoding: @88@0:8@16@24B32B36@40@48@56@64@72@80
// Implementation: 0x105fbe780

// -[SCVoiceNotePlaybackController playbackFinishedEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fbeac8

// -[SCVoiceNotePlaybackController playbackStatePublisher]
// Type encoding: @16@0:8
// Implementation: 0x105fbeaf0

// -[SCVoiceNotePlaybackController playbackFinishedObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fbeb18

// -[SCVoiceNotePlaybackController handlePlayButtonTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbeb40

// -[SCVoiceNotePlaybackController getSamplesForSampleCount:callback:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x105fbebb0

// -[SCVoiceNotePlaybackController handlePlaybackSpeedChanged:]
// Type encoding: v24@0:8d16
// Implementation: 0x105fbee48

// -[SCVoiceNotePlaybackController handleOnWaveformScrub:]
// Type encoding: v20@0:8B16
// Implementation: 0x105fbef30

// -[SCVoiceNotePlaybackController handleSeek:]
// Type encoding: v24@0:8d16
// Implementation: 0x105fbf100

// -[SCVoiceNotePlaybackController _handleStartPlaybackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbf114

// -[SCVoiceNotePlaybackController _clearPlayerSession]
// Type encoding: v16@0:8
// Implementation: 0x105fbf2e0

// -[SCVoiceNotePlaybackController _handlePlaybackSpeedChangedHelper:]
// Type encoding: v24@0:8d16
// Implementation: 0x105fbf310

// -[SCVoiceNotePlaybackController _handleOnWaveformScrubHelper]
// Type encoding: v16@0:8
// Implementation: 0x105fbf41c

// -[SCVoiceNotePlaybackController _play]
// Type encoding: v16@0:8
// Implementation: 0x105fbf4bc

// -[SCVoiceNotePlaybackController _playHelper]
// Type encoding: v16@0:8
// Implementation: 0x105fbf58c

// -[SCVoiceNotePlaybackController _pause]
// Type encoding: v16@0:8
// Implementation: 0x105fbf644

// -[SCVoiceNotePlaybackController _createPlayerSessionIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fbf6a0

// -[SCVoiceNotePlaybackController _handlePlayerSession:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fbf8bc

// -[SCVoiceNotePlaybackController _handlePlaybackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbfa40

// -[SCVoiceNotePlaybackController _updateSamplesWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fbfcf0

// -[SCVoiceNotePlaybackController _voiceNoteDurationMS]
// Type encoding: @16@0:8
// Implementation: 0x105fbfdd0

// -[SCVoiceNotePlaybackController _subscribeToPlaybackEvents]
// Type encoding: v16@0:8
// Implementation: 0x105fbff9c

// -[SCVoiceNotePlaybackController _unsubscribeFromPlaybackEvents]
// Type encoding: v16@0:8
// Implementation: 0x105fc00ac

// -[SCVoiceNotePlaybackController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fc00bc

@end
