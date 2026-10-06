// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToScheduleActionSheetController
// Superclass: NSObject
// Address: 0x112a1ae68

@interface SCSendToScheduleActionSheetController

// Property: actionSheetType; attributes: T@"NSString",R,N
// Property: delegate; attributes: T@"<SCSendToActionSheetProviderDelegate>",W,N,Vdelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToScheduleActionSheetController initWithStoryRepository:sendToTracker:circumstanceEngine:snapProUserProfileIdProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10512e9c8

// -[SCSendToScheduleActionSheetController actionSheetType]
// Type encoding: @16@0:8
// Implementation: 0x10512ed88

// -[SCSendToScheduleActionSheetController getNavigationOption]
// Type encoding: @16@0:8
// Implementation: 0x10512edb8

// -[SCSendToScheduleActionSheetController getActionSheet]
// Type encoding: @16@0:8
// Implementation: 0x10512ef24

// -[SCSendToScheduleActionSheetController actionSheetAvailabilityObservable]
// Type encoding: @16@0:8
// Implementation: 0x10512f008

// -[SCSendToScheduleActionSheetController isActionSheetAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10512f030

// -[SCSendToScheduleActionSheetController _updateAvailability]
// Type encoding: v16@0:8
// Implementation: 0x10512f038

// -[SCSendToScheduleActionSheetController _updateAvailabilityWithHasEligibleItems:hasIneligibleStoryItems:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10512f30c

// -[SCSendToScheduleActionSheetController _updateUserEligibilityWithSelectionStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512f3b8

// -[SCSendToScheduleActionSheetController _getCellsWithDatePickerEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x10512f5b0

// -[SCSendToScheduleActionSheetController _getDatePickerCell]
// Type encoding: @16@0:8
// Implementation: 0x10512f8e8

// -[SCSendToScheduleActionSheetController _getFooterCell]
// Type encoding: @16@0:8
// Implementation: 0x10512fbcc

// -[SCSendToScheduleActionSheetController _updateCellsWithIsSetToSchedule:sender:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10512fd20

// -[SCSendToScheduleActionSheetController _emitSetScheduleEvent]
// Type encoding: v16@0:8
// Implementation: 0x10512fdc8

// -[SCSendToScheduleActionSheetController _dismissActionSheetWithSender:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512fe4c

// -[SCSendToScheduleActionSheetController _didTapDoneWithSender:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512fecc

// -[SCSendToScheduleActionSheetController _presentIneligibleStoryAlertDialogWithOnAccept:onCancel:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10512ff0c

// -[SCSendToScheduleActionSheetController _unselectSelectionItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10513000c

// -[SCSendToScheduleActionSheetController _isSelectionItemEligible:]
// Type encoding: B24@0:8@16
// Implementation: 0x105130068

// -[SCSendToScheduleActionSheetController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105130230

// -[SCSendToScheduleActionSheetController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105130248

// -[SCSendToScheduleActionSheetController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105130254

@end
