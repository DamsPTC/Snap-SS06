// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselUIController
// Superclass: NSObject
// Address: 0x112bf3348

@interface SCLensCarouselUIController

// Property: hidableViewContainer; attributes: T@"UIView",R,W,N
// Property: legacyUiUpdateAnnouncer; attributes: T@"SCLensUIUpdateListenerAnnouncer",R,N,V_legacyUiUpdateAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lensCarouselCollectionController; attributes: T@"SCLazy",R,N

// -[SCLensCarouselUIController initWithCameraLensesViewControllerManager:cameraViewType:parentViewContainer:lensFeatureContainer:cameraViewDelegate:lsaLensComponent:lensUserProvider:lensInfoButton:lensFavoriteButton:lensFavoritesTabBarButton:lensCollectionsBackButton:lensesTooltip:lensPreferences:lensIconRepository:currentPageTracker:lensTooltipsService:legacyUiUpdateAnnouncer:lensExplorerFromCarouselOverlay:lensCarouselSettings:lensCarouselStudySettings:lensSendToButton:lensSendToTabBarButton:lensEntryPointTracker:lensCarouselApplicator:lensCTAHandler:lensesFeaturesInfoProvider:lensCarouselManager:cameraFeatureCatalog:visibilityController:lensCarouselLensDownloader:lensCarouselCollectionController:]
// Type encoding: @264@0:8@16q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256
// Implementation: 0x1091b6104

// -[SCLensCarouselUIController _subscribeOnCarouselEvents]
// Type encoding: v16@0:8
// Implementation: 0x1091b67a8

// -[SCLensCarouselUIController _handleLensDownloadEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b6cc0

// -[SCLensCarouselUIController _showDownloadHintIfNeedForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b6e70

// -[SCLensCarouselUIController _handleCarouselActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091b6ee0

// -[SCLensCarouselUIController _handleLensActivated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b7110

// -[SCLensCarouselUIController _handleFullScreenModeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091b71c8

// -[SCLensCarouselUIController _alwaysOnCarouselEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091b71fc

// -[SCLensCarouselUIController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091b723c

// -[SCLensCarouselUIController lensCarouselCollectionController]
// Type encoding: @16@0:8
// Implementation: 0x1091b72c8

// -[SCLensCarouselUIController lensesOpenCloseButton]
// Type encoding: @16@0:8
// Implementation: 0x1091b72f0

// -[SCLensCarouselUIController handleCloseLensesAction]
// Type encoding: v16@0:8
// Implementation: 0x1091b72f8

// -[SCLensCarouselUIController updateUIElementsVisibilityForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b7358

// -[SCLensCarouselUIController setCloseButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091b73cc

// -[SCLensCarouselUIController activeLensIcon]
// Type encoding: @16@0:8
// Implementation: 0x1091b73d4

// -[SCLensCarouselUIController pointInsideAnyLensView:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1091b747c

// -[SCLensCarouselUIController showTapToDownloadHint:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1091b7484

// -[SCLensCarouselUIController cleanup]
// Type encoding: v16@0:8
// Implementation: 0x1091b7534

// -[SCLensCarouselUIController _setupCarouselFeaturesOnDidTurnOffLens]
// Type encoding: v16@0:8
// Implementation: 0x1091b7540

// -[SCLensCarouselUIController showCallToActionViewForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b756c

// -[SCLensCarouselUIController closeButtonSetHiddenByLens]
// Type encoding: B16@0:8
// Implementation: 0x1091b75ec

// -[SCLensCarouselUIController appliedLensId]
// Type encoding: @16@0:8
// Implementation: 0x1091b75f4

// -[SCLensCarouselUIController parentView]
// Type encoding: @16@0:8
// Implementation: 0x1091b7638

// -[SCLensCarouselUIController hidableViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x1091b7650

// -[SCLensCarouselUIController lensCarouselContainerView]
// Type encoding: @16@0:8
// Implementation: 0x1091b7678

// -[SCLensCarouselUIController activeLens]
// Type encoding: @16@0:8
// Implementation: 0x1091b76a0

// -[SCLensCarouselUIController setActiveLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b76dc

// -[SCLensCarouselUIController _appliedLens]
// Type encoding: @16@0:8
// Implementation: 0x1091b771c

// -[SCLensCarouselUIController _setupLensProcessingConsumers]
// Type encoding: v16@0:8
// Implementation: 0x1091b777c

// -[SCLensCarouselUIController _resetLensProcessingConsumers]
// Type encoding: v16@0:8
// Implementation: 0x1091b79bc

// -[SCLensCarouselUIController legacyUiUpdateAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x1091b79c4

// -[SCLensCarouselUIController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091b79cc

@end
