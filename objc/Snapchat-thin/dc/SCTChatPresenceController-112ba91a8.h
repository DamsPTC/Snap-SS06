// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTChatPresenceController
// Superclass: SCTPresenceController
// Address: 0x112ba91a8

@interface SCTChatPresenceController

// Property: talkUIController; attributes: T@"<SCTalkUIController>",R,W,N,V_talkUIController
// Property: view; attributes: T@"SCTChatPresenceBar",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTChatPresenceController initWithAvatarServices:chatServices:talkUIController:presenceRenderGrapheneLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1085bc180

// -[SCTChatPresenceController view]
// Type encoding: @16@0:8
// Implementation: 0x1085bc23c

// -[SCTChatPresenceController _initView]
// Type encoding: v16@0:8
// Implementation: 0x1085bc284

// -[SCTChatPresenceController _scheduleUIUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1085bc854

// -[SCTChatPresenceController presenceBar:pointInside:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x1085bc888

// -[SCTChatPresenceController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085bc8e8

// -[SCTChatPresenceController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085bc920

// -[SCTChatPresenceController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085bc958

// -[SCTChatPresenceController presenceBarPane]
// Type encoding: @16@0:8
// Implementation: 0x1085bc998

// -[SCTChatPresenceController animationsForRemoteParticipantStates:]
// Type encoding: @?24@0:8@16
// Implementation: 0x1085bc99c

// -[SCTChatPresenceController presencePill:selectionChanged:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085bca74

// -[SCTChatPresenceController _createPillView]
// Type encoding: @16@0:8
// Implementation: 0x1085bca80

// -[SCTChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085bcad4

// -[SCTChatPresenceController _pillForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085bcb40

// -[SCTChatPresenceController _orderedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1085bcba0

// -[SCTChatPresenceController _animateToHeight:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x1085bcbf4

// -[SCTChatPresenceController _updateToHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085bcd98

// -[SCTChatPresenceController _createParticipantWithState:uniqueLabel:birthdayVariant:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1085bcf2c

// -[SCTChatPresenceController _updateSelection:forParticipant:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1085bd114

// -[SCTChatPresenceController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1085bd328

// -[SCTChatPresenceController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1085bd3a0

// -[SCTChatPresenceController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085bd438

// -[SCTChatPresenceController _panGestureRecognized:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085bd4fc

// -[SCTChatPresenceController _pauseUIUpdatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085bd8f4

// -[SCTChatPresenceController _resumeUIUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1085bda70

// -[SCTChatPresenceController _performPostponedUserSelectionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085bdad4

// -[SCTChatPresenceController _createDragContextWithPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x1085bdb1c

// -[SCTChatPresenceController _processDragMove]
// Type encoding: v16@0:8
// Implementation: 0x1085bdb70

// -[SCTChatPresenceController _processDragEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085bdbc4

// -[SCTChatPresenceController _pillPressedRecognized:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085bdc24

// -[SCTChatPresenceController _scheduleTappedParticipantSelection]
// Type encoding: v16@0:8
// Implementation: 0x1085bde5c

// -[SCTChatPresenceController _cancelTappedParticipantSelection]
// Type encoding: v16@0:8
// Implementation: 0x1085bde74

// -[SCTChatPresenceController _selectTappedParticipant]
// Type encoding: v16@0:8
// Implementation: 0x1085bde90

// -[SCTChatPresenceController _scheduleLongPressProcessing]
// Type encoding: v16@0:8
// Implementation: 0x1085bdea4

// -[SCTChatPresenceController _cancelLongPressProcessing]
// Type encoding: v16@0:8
// Implementation: 0x1085bdeb8

// -[SCTChatPresenceController _processLongPress]
// Type encoding: v16@0:8
// Implementation: 0x1085bded4

// -[SCTChatPresenceController _participantFromPillPressRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1085bdf14

// -[SCTChatPresenceController _selectedParticipant]
// Type encoding: @16@0:8
// Implementation: 0x1085be0a8

// -[SCTChatPresenceController _reportPillTapLongPressed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085be1b4

// -[SCTChatPresenceController _performPostponedPillTapReportIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085be4c8

// -[SCTChatPresenceController talkUIController]
// Type encoding: @16@0:8
// Implementation: 0x1085be510

// -[SCTChatPresenceController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085be530

@end
