// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerBaseRouter
// Superclass: NSObject
// Address: 0x112af15a8

@interface SCLensExplorerBaseRouter

// Property: currentViewController; attributes: T@"UIViewController<SCLensExplorerResettingViewController>",&,N,V_currentViewController
// Property: navigationController; attributes: T@"UINavigationController",&,N,V_navigationController
// Property: lensExplorerDependencyProvider; attributes: T@"<SCLensExplorerDependencyProviderProtocol>",R,N,V_lensExplorerDependencyProvider
// Property: lensExplorerFactory; attributes: T@"SCLensExplorerFactory",R,N,V_lensExplorerFactory
// Property: lensExplorerLoggingSession; attributes: T@"<SCLensExplorerSessionLogger>",&,N,V_lensExplorerLoggingSession
// Property: userSettings; attributes: T@"<SCLensExplorerUserSettingsProtocol>",R,N,V_userSettings
// Property: loggerFactory; attributes: T@"SCLazy",R,N,V_loggerFactory
// Property: infoCardsPresenter; attributes: T@"<SCLensInfoCardPresentation>",R,N,V_infoCardsPresenter
// Property: infoCardSource; attributes: TQ,R,N,V_infoCardSource
// Property: disposable; attributes: T@"SCDisposableObserverLifecycle",&,N,V_disposable
// Property: configuration; attributes: T@"SCLensExplorerPresentationConfiguration",R,N,V_configuration
// Property: pageUIConfiguration; attributes: T@"SCLensExplorerPageUIConfiguration",R,N,V_pageUIConfiguration
// Property: isDismissProcessStarted; attributes: TB,R,N,V_isDismissProcessStarted
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCLensExplorerRouterDelegate>",W,N,V_delegate
// Property: lifeCycleDelegate; attributes: T@"<SCLensExplorerLifecycleDelegate>",W,N,V_lifeCycleDelegate
// Property: isPresenting; attributes: TB,R,N
// Property: currentlyPresentedLensExplorerViewController; attributes: T@"UIViewController",R,N
// Property: lensExplorerUIContainer; attributes: T@"SCModalUIContainer",R,N
// Property: lensReplyParameters; attributes: T@"SCLensReplyParams",R,N

// -[SCLensExplorerBaseRouter initWithLensExplorerFactory:dependencyProvider:loggerFactory:configuration:pageUIConfiguration:infoCardSource:storyConfiguration:]
// Type encoding: @72@0:8@16@24@32@40@48Q56@64
// Implementation: 0x1066f9628

// -[SCLensExplorerBaseRouter _setupWithLensExplorerDependencyProvider:storyConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066f978c

// -[SCLensExplorerBaseRouter currentlyPresentedLensExplorerViewController]
// Type encoding: @16@0:8
// Implementation: 0x1066f9ae0

// -[SCLensExplorerBaseRouter lensExplorerUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x1066f9b70

// -[SCLensExplorerBaseRouter singleCategoryViewControllerWithModelProvider:isLensCollectionCategory:accessoryView:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1066f9bd0

// -[SCLensExplorerBaseRouter singleCategoryViewControllerWithPresentationType:accessoryView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066f9c98

// -[SCLensExplorerBaseRouter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1066fa054

// -[SCLensExplorerBaseRouter presentFeedFullPageWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fa088

// -[SCLensExplorerBaseRouter presentLensExplorerFrom:accessoryView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066fa0c8

// -[SCLensExplorerBaseRouter presentLensExplorerWith:accessoryView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066fa0cc

// -[SCLensExplorerBaseRouter presentLensExplorerViewController:fromViewController:uiContainer:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1066fa0d0

// -[SCLensExplorerBaseRouter dismissIfNeededWithAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1066fa198

// -[SCLensExplorerBaseRouter removeViewController]
// Type encoding: v16@0:8
// Implementation: 0x1066fa234

// -[SCLensExplorerBaseRouter handleApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1066fa318

// -[SCLensExplorerBaseRouter finishDismissWorkflowAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1066fa38c

// -[SCLensExplorerBaseRouter presentCreatorViewControllerWithCreator:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1066fa514

// -[SCLensExplorerBaseRouter presentStoryWithCreatorStory:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066fa6a0

// -[SCLensExplorerBaseRouter presentStoryWithStoryId:sectionId:baseView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066fa78c

// -[SCLensExplorerBaseRouter presentLiveLensPreviewCameraWithLensItem:fromCategoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066fa898

// -[SCLensExplorerBaseRouter presentOnboardingPresentable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066faa98

// -[SCLensExplorerBaseRouter presentInfoCardWithLensItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066faaa8

// -[SCLensExplorerBaseRouter presentLensTopicWithStoryItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fab4c

// -[SCLensExplorerBaseRouter handlePickedItem:selectionTrigger:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1066faf9c

// -[SCLensExplorerBaseRouter presentActionSheet:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066faff8

// -[SCLensExplorerBaseRouter lensReplyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1066fb068

// -[SCLensExplorerBaseRouter presentSingleCategoryPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb0b0

// -[SCLensExplorerBaseRouter modularCameraSendEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb180

// -[SCLensExplorerBaseRouter requestDismissForController:source:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1066fb22c

// -[SCLensExplorerBaseRouter _storyPresenterEventHander]
// Type encoding: @?16@0:8
// Implementation: 0x1066fb2a0

// -[SCLensExplorerBaseRouter _notifyStoryEvent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1066fb35c

// -[SCLensExplorerBaseRouter delegate]
// Type encoding: @16@0:8
// Implementation: 0x1066fb3d8

// -[SCLensExplorerBaseRouter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb3f0

// -[SCLensExplorerBaseRouter lifeCycleDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1066fb3fc

// -[SCLensExplorerBaseRouter setLifeCycleDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb414

// -[SCLensExplorerBaseRouter currentViewController]
// Type encoding: @16@0:8
// Implementation: 0x1066fb420

// -[SCLensExplorerBaseRouter setCurrentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb428

// -[SCLensExplorerBaseRouter navigationController]
// Type encoding: @16@0:8
// Implementation: 0x1066fb458

// -[SCLensExplorerBaseRouter setNavigationController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb460

// -[SCLensExplorerBaseRouter lensExplorerDependencyProvider]
// Type encoding: @16@0:8
// Implementation: 0x1066fb490

// -[SCLensExplorerBaseRouter lensExplorerFactory]
// Type encoding: @16@0:8
// Implementation: 0x1066fb498

// -[SCLensExplorerBaseRouter lensExplorerLoggingSession]
// Type encoding: @16@0:8
// Implementation: 0x1066fb4a0

// -[SCLensExplorerBaseRouter setLensExplorerLoggingSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb4a8

// -[SCLensExplorerBaseRouter userSettings]
// Type encoding: @16@0:8
// Implementation: 0x1066fb4d8

// -[SCLensExplorerBaseRouter loggerFactory]
// Type encoding: @16@0:8
// Implementation: 0x1066fb4e0

// -[SCLensExplorerBaseRouter infoCardsPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1066fb4e8

// -[SCLensExplorerBaseRouter infoCardSource]
// Type encoding: Q16@0:8
// Implementation: 0x1066fb4f0

// -[SCLensExplorerBaseRouter disposable]
// Type encoding: @16@0:8
// Implementation: 0x1066fb4f8

// -[SCLensExplorerBaseRouter setDisposable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066fb500

// -[SCLensExplorerBaseRouter configuration]
// Type encoding: @16@0:8
// Implementation: 0x1066fb530

// -[SCLensExplorerBaseRouter pageUIConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1066fb538

// -[SCLensExplorerBaseRouter isDismissProcessStarted]
// Type encoding: B16@0:8
// Implementation: 0x1066fb540

// -[SCLensExplorerBaseRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066fb548

@end
