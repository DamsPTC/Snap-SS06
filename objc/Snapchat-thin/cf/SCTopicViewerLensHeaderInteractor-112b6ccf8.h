// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicViewerLensHeaderInteractor
// Superclass: NSObject
// Address: 0x112b6ccf8

@interface SCTopicViewerLensHeaderInteractor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicViewerLensHeaderInteractor initWithLensInfo:lensIconRepository:lensFavoritesObservable:lensFavoritesUpdater:lensFavoriteNotifications:lensFavoritesButtonLogger:lensExplorerNavigation:lensCreatorProfilePresenter:studySettings:presentingController:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x107a601d8

// -[SCTopicViewerLensHeaderInteractor lensHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107a604b0

// -[SCTopicViewerLensHeaderInteractor handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a60600

// -[SCTopicViewerLensHeaderInteractor _lensIconRepository]
// Type encoding: @16@0:8
// Implementation: 0x107a606ac

// -[SCTopicViewerLensHeaderInteractor _createLensIconObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a606b4

// -[SCTopicViewerLensHeaderInteractor _lensIconObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a607b4

// -[SCTopicViewerLensHeaderInteractor _lensIconScaledToSize:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x107a60a74

// -[SCTopicViewerLensHeaderInteractor _creatorNameInteractable]
// Type encoding: B16@0:8
// Implementation: 0x107a60c6c

// -[SCTopicViewerLensHeaderInteractor _officialBadgeForCreator]
// Type encoding: q16@0:8
// Implementation: 0x107a60d00

// -[SCTopicViewerLensHeaderInteractor toggleLensFavoriteState]
// Type encoding: v16@0:8
// Implementation: 0x107a60d34

// -[SCTopicViewerLensHeaderInteractor setLensFavoritesButtonState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a60e08

// -[SCTopicViewerLensHeaderInteractor _favoriteStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a60e60

// -[SCTopicViewerLensHeaderInteractor _beginObservingFavoriteStatusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107a60fac

// -[SCTopicViewerLensHeaderInteractor _toggleLensFavoriteState]
// Type encoding: v16@0:8
// Implementation: 0x107a61268

// -[SCTopicViewerLensHeaderInteractor _handleFavoritesResult:error:fallbackState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a614e4

// -[SCTopicViewerLensHeaderInteractor _receiveFavoritesDifference:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a61598

// -[SCTopicViewerLensHeaderInteractor _showFavoriteNotificationWithFavoritesResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a617c0

// -[SCTopicViewerLensHeaderInteractor _presentLensExplorer]
// Type encoding: v16@0:8
// Implementation: 0x107a619f8

// -[SCTopicViewerLensHeaderInteractor _logFavoriteAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a61a78

// -[SCTopicViewerLensHeaderInteractor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a61ba4

@end
