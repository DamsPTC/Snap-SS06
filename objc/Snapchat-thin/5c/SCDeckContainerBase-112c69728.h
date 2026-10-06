// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeckContainerBase
// Superclass: NSObject
// Address: 0x112c69728

@interface SCDeckContainerBase

// Property: visibleViewController; attributes: T@"UIViewController",&,N,V_visibleViewController
// Property: childContainer; attributes: T@"SCDeckContainerBase",&,N,V_childContainer
// Property: appearanceStyle; attributes: T@"<SCPresentationStyle>",R,N,V_appearanceStyle
// Property: disappearanceStyle; attributes: T@"<SCPresentationStyle>",R,N,V_disappearanceStyle
// Property: presenter; attributes: T@"<SCPresenter>",R,N,V_presenter
// Property: parentContainer; attributes: T@"SCDeckContainerBase",R,W,N,V_parentContainer
// Property: active; attributes: TB,R,N,GisActive,V_active
// Property: inActiveBranch; attributes: TB,R,N,GisInActiveBranch,V_inActiveBranch
// Property: page; attributes: Ti,R,N,V_page
// Property: pageInstanceId; attributes: T@"NSNumber",R,N,V_pageInstanceId
// Property: deckContainersSharedService; attributes: T@"SCDeckContainersSharedService",&,N,V_deckContainersSharedService
// Property: developerName; attributes: T@"NSString",C,N,VdeveloperName
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N,VgestureDelegate
// Property: useUIKitForChildPresentation; attributes: TB,N,VuseUIKitForChildPresentation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeckContainerBase initWithPresenter:parentContainer:appearanceStyle:disappearanceStyle:page:pageInstanceId:deckContainersSharedService:]
// Type encoding: @68@0:8@16@24@32@40i48@52@60
// Implementation: 0x1005939d4

// -[SCDeckContainerBase initWithPresenter:parentContainer:appearanceStyle:disappearanceStyle:page:deckContainersSharedService:]
// Type encoding: @60@0:8@16@24@32@40i48@52
// Implementation: 0x10b0902d8

// -[SCDeckContainerBase subtreeDebugDescription:last:startingFrom:]
// Type encoding: @36@0:8Q16B24@28
// Implementation: 0x10b0902fc

// -[SCDeckContainerBase registerChildForDebuggingPurposes:]
// Type encoding: v24@0:8@16
// Implementation: 0x100594744

// -[SCDeckContainerBase dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10059801c

// -[SCDeckContainerBase leaf]
// Type encoding: @16@0:8
// Implementation: 0x100875ffc

// -[SCDeckContainerBase subtreeRoot]
// Type encoding: @16@0:8
// Implementation: 0x100875f48

// -[SCDeckContainerBase hierarchyRoot]
// Type encoding: @16@0:8
// Implementation: 0x10b090554

// -[SCDeckContainerBase branch]
// Type encoding: @16@0:8
// Implementation: 0x10b0905e0

// -[SCDeckContainerBase activateWithAnimation:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b090658

// -[SCDeckContainerBase activateInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b0906ec

// -[SCDeckContainerBase activateInteractivelyWithCompletion:customDismissalStyle:]
// Type encoding: @32@0:8@?16@24
// Implementation: 0x10b090788

// -[SCDeckContainerBase activateWithViewController:animation:completion:otherwise:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x10b090840

// -[SCDeckContainerBase activateInteractivelyWithViewController:completion:otherwise:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x10b090928

// -[SCDeckContainerBase canLoadVisibleViewController]
// Type encoding: B16@0:8
// Implementation: 0x10b090a44

// -[SCDeckContainerBase createComposerDeckContainerWithRuntimeProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b090a4c

// -[SCDeckContainerBase activateChild:withCompletion:style:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x100875424

// -[SCDeckContainerBase activateChildInteractively:withCompletion:style:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x10b090aa8

// -[SCDeckContainerBase dismissalTarget]
// Type encoding: @16@0:8
// Implementation: 0x10b090b54

// -[SCDeckContainerBase didEnterHierarchyWithAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008768a0

// -[SCDeckContainerBase willAppearWithAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x100876c24

// -[SCDeckContainerBase didAppearWithAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008ed0fc

// -[SCDeckContainerBase willDisappearWithAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x100876d2c

// -[SCDeckContainerBase didDisappearWithAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008ece2c

// -[SCDeckContainerBase didLeaveHierarchyUntil:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b090b58

// -[SCDeckContainerBase leafAskedToActivateButAlreadyActive:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b090c6c

// -[SCDeckContainerBase willPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x10b090d74

// -[SCDeckContainerBase prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b090e08

// -[SCDeckContainerBase didPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:completed:]
// Type encoding: v44@0:8@16@24B32B36B40
// Implementation: 0x10b090eb4

// -[SCDeckContainerBase onUIDidEnterHierarchy:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100876b3c

// -[SCDeckContainerBase onUIWillAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100876d0c

// -[SCDeckContainerBase onUIDidAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b090f58

// -[SCDeckContainerBase onUIWillDisappear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100876e14

// -[SCDeckContainerBase onUIDidDisappear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008ed0f8

// -[SCDeckContainerBase onUIDidExitHierarchy:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b090f5c

// -[SCDeckContainerBase registerLifecycleObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x100594ca4

// -[SCDeckContainerBase onDidEnterHierarchy:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10059b358

// -[SCDeckContainerBase onWillAppear:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b090f60

// -[SCDeckContainerBase onDidAppear:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b090f68

// -[SCDeckContainerBase onWillDisappear:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b090f70

// -[SCDeckContainerBase onDidDisappear:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b090f78

// -[SCDeckContainerBase onDidExitHierarchy:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10059b3d8

// -[SCDeckContainerBase onViewWillAppearWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b090f80

// -[SCDeckContainerBase onViewDidAppearWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b0910b4

// -[SCDeckContainerBase onViewWillDisappearWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b0911e8

// -[SCDeckContainerBase onViewDidDisappearWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b091324

// -[SCDeckContainerBase _isDeckTransitionInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10b091460

// -[SCDeckContainerBase _deckBaseViewControllerFromPresentedVC:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b091558

// -[SCDeckContainerBase isUsingBaseVCUIKitLifecycle]
// Type encoding: B16@0:8
// Implementation: 0x10b0916c0

// -[SCDeckContainerBase modalContainerWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b091718

// -[SCDeckContainerBase operaDeckContainerWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b09188c

// -[SCDeckContainerBase navigationContainerWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b091934

// -[SCDeckContainerBase tabBarContainerBuilderWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x100594148

// -[SCDeckContainerBase modalUIContainerWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b091a70

// -[SCDeckContainerBase _modalUIContainerWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b091c74

// -[SCDeckContainerBase multiDirectionalUIContainerWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b091ce0

// -[SCDeckContainerBase _multiDirectionalUIContainerWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b091ecc

// -[SCDeckContainerBase _presentingVCForUIKitModalPresentationForPage:]
// Type encoding: @20@0:8i16
// Implementation: 0x10b091f38

// -[SCDeckContainerBase developerName]
// Type encoding: @16@0:8
// Implementation: 0x10b092080

// -[SCDeckContainerBase setDeveloperName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b092088

// -[SCDeckContainerBase gestureDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b092090

// -[SCDeckContainerBase setGestureDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0920a8

// -[SCDeckContainerBase useUIKitForChildPresentation]
// Type encoding: B16@0:8
// Implementation: 0x10059473c

// -[SCDeckContainerBase setUseUIKitForChildPresentation:]
// Type encoding: v20@0:8B16
// Implementation: 0x100593c64

// -[SCDeckContainerBase presenter]
// Type encoding: @16@0:8
// Implementation: 0x10b0920b4

// -[SCDeckContainerBase parentContainer]
// Type encoding: @16@0:8
// Implementation: 0x100875b38

// -[SCDeckContainerBase isActive]
// Type encoding: B16@0:8
// Implementation: 0x100875f40

// -[SCDeckContainerBase isInActiveBranch]
// Type encoding: B16@0:8
// Implementation: 0x100875b50

// -[SCDeckContainerBase page]
// Type encoding: i16@0:8
// Implementation: 0x100876e30

// -[SCDeckContainerBase pageInstanceId]
// Type encoding: @16@0:8
// Implementation: 0x100876e38

// -[SCDeckContainerBase deckContainersSharedService]
// Type encoding: @16@0:8
// Implementation: 0x100594734

// -[SCDeckContainerBase setDeckContainersSharedService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0920bc

// -[SCDeckContainerBase visibleViewController]
// Type encoding: @16@0:8
// Implementation: 0x1008751b0

// -[SCDeckContainerBase setVisibleViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100593c94

// -[SCDeckContainerBase childContainer]
// Type encoding: @16@0:8
// Implementation: 0x1008760b0

// -[SCDeckContainerBase setChildContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100875b58

// -[SCDeckContainerBase appearanceStyle]
// Type encoding: @16@0:8
// Implementation: 0x1008760b8

// -[SCDeckContainerBase disappearanceStyle]
// Type encoding: @16@0:8
// Implementation: 0x10b0920ec

// -[SCDeckContainerBase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10059812c

@end
