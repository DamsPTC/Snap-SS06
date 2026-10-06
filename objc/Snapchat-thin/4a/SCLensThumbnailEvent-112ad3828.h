// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensThumbnailEvent
// Superclass: NSObject
// Address: 0x112ad3828

@interface SCLensThumbnailEvent


// -[SCLensThumbnailEvent initWithLensSessionId:lensCarouselFunnelLogger:logger:performanceAutomationLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10620125c

// -[SCLensThumbnailEvent setActivationFlow:activationDelay:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x106201420

// -[SCLensThumbnailEvent setEntranceType:carouselType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10620142c

// -[SCLensThumbnailEvent setUserInteractableSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10620143c

// -[SCLensThumbnailEvent setExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106201444

// -[SCLensThumbnailEvent setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106201458

// -[SCLensThumbnailEvent startThumbnailLoadingForLensId:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106201460

// -[SCLensThumbnailEvent finishThumbnailLoadingForLensId:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106201548

// -[SCLensThumbnailEvent startDisplayingLensId:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062016c4

// -[SCLensThumbnailEvent finishDisplayingLensId:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10620178c

// -[SCLensThumbnailEvent didDrawIconForLensId:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062018f8

// -[SCLensThumbnailEvent didInteractWithLensCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1062019b4

// -[SCLensThumbnailEvent didVisibleLensIdsChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062019c0

// -[SCLensThumbnailEvent fireWithActiveLensIdsOrder:lensCollectionIds:originalLensIndex:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1062019f0

// -[SCLensThumbnailEvent reset]
// Type encoding: v16@0:8
// Implementation: 0x106201d04

// -[SCLensThumbnailEvent restoreOptions]
// Type encoding: @16@0:8
// Implementation: 0x106201d40

// -[SCLensThumbnailEvent applyRestoreOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106201d74

// -[SCLensThumbnailEvent _fillLensIconsLatencyForSessionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106201dd0

// -[SCLensThumbnailEvent _isFunnelSessionEvent]
// Type encoding: B16@0:8
// Implementation: 0x10620202c

// -[SCLensThumbnailEvent _isInitialSession]
// Type encoding: B16@0:8
// Implementation: 0x106202068

// -[SCLensThumbnailEvent allLensesWithActiveLensIdsOrder:originalLensIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1062020e4

// -[SCLensThumbnailEvent allLensCollectionIds:originalLensIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10620221c

// -[SCLensThumbnailEvent onScreenLensesWithActiveLensIdsOrder:originalLensIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1062023c0

// -[SCLensThumbnailEvent _updatedEntityForLensWithId:atIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106202574

// -[SCLensThumbnailEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106202654

@end
