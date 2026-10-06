// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightUpsellTriggerManager
// Superclass: NSObject
// Address: 0x112ad8198

@interface SCContextSpotlightUpsellTriggerManager

// Property: delegate; attributes: T@"<SCContextSpotlightUpsellTriggerManagerDelegate>",W,N,V_delegate
// Property: isShareUpsold; attributes: TB,N,V_isShareUpsold
// Property: upsellTriggerObservable; attributes: T@"SCObservable",R,N
// Property: resetUpsellObservable; attributes: T@"SCObservable",R,N
// Property: focusOnShareButtonObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextSpotlightUpsellTriggerManager initWithActions:operaEventAnnouncer:spotlightParams:userPreferences:storiesConfigProvider:circumstanceEngine:featureSettingsService:isOneTapToShareEnabled:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x10629d844

// -[SCContextSpotlightUpsellTriggerManager upsellTriggerObservable]
// Type encoding: @16@0:8
// Implementation: 0x10629dca8

// -[SCContextSpotlightUpsellTriggerManager resetUpsellObservable]
// Type encoding: @16@0:8
// Implementation: 0x10629dcd0

// -[SCContextSpotlightUpsellTriggerManager focusOnShareButtonObservable]
// Type encoding: @16@0:8
// Implementation: 0x10629dcf8

// -[SCContextSpotlightUpsellTriggerManager setIsShareUpsold:]
// Type encoding: v20@0:8B16
// Implementation: 0x10629dd20

// -[SCContextSpotlightUpsellTriggerManager setDidUpsellQuickShare:]
// Type encoding: v20@0:8B16
// Implementation: 0x10629dd84

// -[SCContextSpotlightUpsellTriggerManager recordUserShareAttemptOnCurrentStory]
// Type encoding: v16@0:8
// Implementation: 0x10629de40

// -[SCContextSpotlightUpsellTriggerManager recordUserTriggeredQuickShare]
// Type encoding: v16@0:8
// Implementation: 0x10629de84

// -[SCContextSpotlightUpsellTriggerManager _didUserShareOnCurrentStory]
// Type encoding: B16@0:8
// Implementation: 0x10629df14

// -[SCContextSpotlightUpsellTriggerManager _upsellShareStatusFromSpotlightActionParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629df6c

// -[SCContextSpotlightUpsellTriggerManager _updateParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629dff0

// -[SCContextSpotlightUpsellTriggerManager _operaRegisteredEvents]
// Type encoding: @16@0:8
// Implementation: 0x10629e3a4

// -[SCContextSpotlightUpsellTriggerManager _triggerShareButtonPulseUpsell]
// Type encoding: v16@0:8
// Implementation: 0x10629e4c4

// -[SCContextSpotlightUpsellTriggerManager _isShareButtonPulseUpsellInCooldown]
// Type encoding: B16@0:8
// Implementation: 0x10629e504

// -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromBoost]
// Type encoding: v16@0:8
// Implementation: 0x10629e59c

// -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromPause]
// Type encoding: v16@0:8
// Implementation: 0x10629e650

// -[SCContextSpotlightUpsellTriggerManager _recordPauseShareUpsellShown]
// Type encoding: v16@0:8
// Implementation: 0x10629e6dc

// -[SCContextSpotlightUpsellTriggerManager _pauseShareUpsellTreatment]
// Type encoding: q16@0:8
// Implementation: 0x10629e790

// -[SCContextSpotlightUpsellTriggerManager _shouldTriggerPauseShareUpsell]
// Type encoding: B16@0:8
// Implementation: 0x10629e800

// -[SCContextSpotlightUpsellTriggerManager _triggerUpsellWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10629e96c

// -[SCContextSpotlightUpsellTriggerManager incrementShareButtonPulseUpsellCount]
// Type encoding: v16@0:8
// Implementation: 0x10629e9c8

// -[SCContextSpotlightUpsellTriggerManager _shouldTriggerQuickShareUpsell]
// Type encoding: B16@0:8
// Implementation: 0x10629eb5c

// -[SCContextSpotlightUpsellTriggerManager _isQuickShareUpsellCooldownElapsed:]
// Type encoding: B24@0:8d16
// Implementation: 0x10629ebf0

// -[SCContextSpotlightUpsellTriggerManager _shouldTriggerDoubleTapToFavoriteUpsell]
// Type encoding: B16@0:8
// Implementation: 0x10629ed00

// -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromCompleteWatch]
// Type encoding: v16@0:8
// Implementation: 0x10629eda0

// -[SCContextSpotlightUpsellTriggerManager _completeWatchUpsellType]
// Type encoding: q16@0:8
// Implementation: 0x10629ee08

// -[SCContextSpotlightUpsellTriggerManager _isQuickShareUpsellTriggerEnabled:]
// Type encoding: B24@0:8q16
// Implementation: 0x10629ee98

// -[SCContextSpotlightUpsellTriggerManager operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10629ef10

// -[SCContextSpotlightUpsellTriggerManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10629f2fc

// -[SCContextSpotlightUpsellTriggerManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629f314

// -[SCContextSpotlightUpsellTriggerManager isShareUpsold]
// Type encoding: B16@0:8
// Implementation: 0x10629f320

// -[SCContextSpotlightUpsellTriggerManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10629f328

@end
