// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBaseCarouselCollectionController
// Superclass: NSObject
// Address: 0x112bf2ee8

@interface SCLensBaseCarouselCollectionController

// Property: defaultSelectedLensProvider; attributes: T@"<SCLensDefaultSelectionProviding>",W,N,V_defaultSelectedLensProvider
// Property: delegate; attributes: T@"<SCLensCarouselCollectionControllerDelegate>",W,N,V_delegate
// Property: activeLens; attributes: T@"SCLens",R,N
// Property: lensCarouselDidScrollObservable; attributes: T@"SCObservable",R,N

// -[SCLensBaseCarouselCollectionController initWithLensIconRepository:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:layoutProvider:lensStatusProvider:carouselPresenterFactory:externalScrollSource:hapticsManager:uiUpdateAnnouncer:cellOverlayProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1091aed6c

// -[SCLensBaseCarouselCollectionController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091af06c

// -[SCLensBaseCarouselCollectionController setDefaultSelectedLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091af0b0

// -[SCLensBaseCarouselCollectionController attachCarouselView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091af100

// -[SCLensBaseCarouselCollectionController carouselTapHandlerPolicy]
// Type encoding: q16@0:8
// Implementation: 0x1091af160

// -[SCLensBaseCarouselCollectionController initializeLensCarouselPresenter]
// Type encoding: v16@0:8
// Implementation: 0x1091af168

// -[SCLensBaseCarouselCollectionController activeLens]
// Type encoding: @16@0:8
// Implementation: 0x1091af368

// -[SCLensBaseCarouselCollectionController lensCarouselDidScrollObservable]
// Type encoding: @16@0:8
// Implementation: 0x1091af3bc

// -[SCLensBaseCarouselCollectionController reloadCellWithLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091af3c4

// -[SCLensBaseCarouselCollectionController selectLensWithId:animated:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1091af3cc

// -[SCLensBaseCarouselCollectionController selectNextLensIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1091af3d4

// -[SCLensBaseCarouselCollectionController selectLensWithStrategy:skipDefaultLensSelection:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091af3e4

// -[SCLensBaseCarouselCollectionController updateItemWithItemId:contentUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091af3ec

// -[SCLensBaseCarouselCollectionController updateAllLenses:selectedLensId:requiresAnimation:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1091af444

// -[SCLensBaseCarouselCollectionController lensFromCarouselWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091af4cc

// -[SCLensBaseCarouselCollectionController setLensesCollectionViewScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091af4d4

// -[SCLensBaseCarouselCollectionController pointInsideLensView:cellFramesOnly:]
// Type encoding: B36@0:8{CGPoint=dd}16B32
// Implementation: 0x1091af4dc

// -[SCLensBaseCarouselCollectionController showLensesUI:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091af4e4

// -[SCLensBaseCarouselCollectionController hideLensesUIWithKeepCarouselVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091af558

// -[SCLensBaseCarouselCollectionController setCollectionInterfaceElementsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091af5a0

// -[SCLensBaseCarouselCollectionController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091af5ec

// -[SCLensBaseCarouselCollectionController defaultSelectedLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091af604

// -[SCLensBaseCarouselCollectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091af61c

@end
