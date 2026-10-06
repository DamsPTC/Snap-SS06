// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileSectionController
// Superclass: NSObject
// Address: 0x112aead48

@interface SCUnifiedProfileSectionController

// Property: delegate; attributes: T@"<SCUnifiedProfileSectionControllerDelegate>",W,N,V_delegate
// Property: profileTypeForMetrics; attributes: T@"NSString",C,N,V_profileTypeForMetrics
// Property: shouldEmitMetrics; attributes: TB,R,N,V_shouldEmitMetrics
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedProfileSectionController initWithCollectionView:collectionViewDelegate:lifecycleAnnouncer:actionHandler:sections:adjustSectionOrder:sectionBackgroundAttributor:circumstanceEngine:profileViewVisibilityObservable:]
// Type encoding: @88@0:8@16@24@32@40@48@?56@64@72@80
// Implementation: 0x10662ee7c

// -[SCUnifiedProfileSectionController _subscribeTo:withActionHandler:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10662f3b0

// -[SCUnifiedProfileSectionController _onNextSections:from:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10662f69c

// -[SCUnifiedProfileSectionController triggerReloadSections]
// Type encoding: v16@0:8
// Implementation: 0x10662f780

// -[SCUnifiedProfileSectionController _sectionsByOrder:]
// Type encoding: @20@0:8B16
// Implementation: 0x10662f7c0

// -[SCUnifiedProfileSectionController _reloadAllSections:]
// Type encoding: v20@0:8B16
// Implementation: 0x10662fea0

// -[SCUnifiedProfileSectionController _setupFirstViewBindAnnouncer:sectionOrder:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10662ff9c

// -[SCUnifiedProfileSectionController _setSectionWithConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066300d8

// -[SCUnifiedProfileSectionController _setOrUpdateSectionWithConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066301b8

// -[SCUnifiedProfileSectionController _calculateTransparentBackgroundSections:maxCount:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1066302b0

// -[SCUnifiedProfileSectionController sectionInsetsForSectionBasedCollectionViewUpdater:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8@16
// Implementation: 0x1066304b8

// -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066304cc

// -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didSetUpSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066304d0

// -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didTearDownSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106630548

// -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1066305c0

// -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1066305c4

// -[SCUnifiedProfileSectionController _updateSectionsOrderingIfNecesseryWithUpdater:]
// Type encoding: v24@0:8@16
// Implementation: 0x106630934

// -[SCUnifiedProfileSectionController presentingViewControllerForSectionBasedCollectionViewUpdater:]
// Type encoding: @24@0:8@16
// Implementation: 0x106630d40

// -[SCUnifiedProfileSectionController dismissTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x106630d80

// -[SCUnifiedProfileSectionController dismissTransitionWillBegin]
// Type encoding: v16@0:8
// Implementation: 0x106630f18

// -[SCUnifiedProfileSectionController dismissTransitionDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106631054

// -[SCUnifiedProfileSectionController _getSectionTypeWithSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x106631190

// -[SCUnifiedProfileSectionController _processProfileViewVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x106631228

// -[SCUnifiedProfileSectionController _resumePausedUpdateIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10663123c

// -[SCUnifiedProfileSectionController sectionTypeAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x106631304

// -[SCUnifiedProfileSectionController _metricsLogger]
// Type encoding: @16@0:8
// Implementation: 0x1066313c8

// -[SCUnifiedProfileSectionController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10663142c

// -[SCUnifiedProfileSectionController shouldEmitMetrics]
// Type encoding: B16@0:8
// Implementation: 0x106631570

// -[SCUnifiedProfileSectionController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106631578

// -[SCUnifiedProfileSectionController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106631590

// -[SCUnifiedProfileSectionController profileTypeForMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10663159c

// -[SCUnifiedProfileSectionController setProfileTypeForMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066315a4

// -[SCUnifiedProfileSectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066315ac

@end
