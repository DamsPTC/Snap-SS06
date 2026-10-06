// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStackContainer
// Superclass: SCDeckContainerBase
// Address: 0x112c69a98

@interface SCStackContainer

// Property: emitNavigationEdgeTransitions; attributes: TB,N,V_emitNavigationEdgeTransitions
// Property: groupIsInteractivelyDismissable; attributes: TB,N
// Property: developerName; attributes: T@"NSString",C,N
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N
// Property: useUIKitForChildPresentation; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCNavigationContainerDelegate>",W,N,V_delegate

// -[SCStackContainer initWithPresenter:parentContainer:dataSource:defaultPresentationStyle:defaultDismissalStyle:presentationDirection:dismissalDirection:horizontalDismissBehavior:appearanceStyle:disappearanceStyle:canUseGesturesToDismissContainer:page:pageInstanceId:defaultDeveloperName:]
// Type encoding: @120@0:8@16@24@32@40@48q56Q64q72@80@88B96i100@104@112
// Implementation: 0x10b0953e0

// -[SCStackContainer setEmitNavigationEdgeTransitions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b095674

// -[SCStackContainer groupIsInteractivelyDismissable]
// Type encoding: B16@0:8
// Implementation: 0x10b095690

// -[SCStackContainer setGroupIsInteractivelyDismissable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b0956a0

// -[SCStackContainer developerName]
// Type encoding: @16@0:8
// Implementation: 0x10b0956b0

// -[SCStackContainer onUIDidAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b09575c

// -[SCStackContainer canBecomeDismissalTarget]
// Type encoding: B16@0:8
// Implementation: 0x10b095760

// -[SCStackContainer dismissalTarget]
// Type encoding: @16@0:8
// Implementation: 0x10b0957b0

// -[SCStackContainer _setUpDismissGestureIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b095810

// -[SCStackContainer _completePresentationOf:completed:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b0959cc

// -[SCStackContainer _completeDismissalPresentationOf:completed:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b095a78

// -[SCStackContainer panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x10b095b2c

// -[SCStackContainer presentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b095c30

// -[SCStackContainer presentViewController:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b095c38

// -[SCStackContainer presentViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b095c40

// -[SCStackContainer presentViewControllerInteractively:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b095e70

// -[SCStackContainer dismissViewController]
// Type encoding: @16@0:8
// Implementation: 0x10b096064

// -[SCStackContainer dismissViewControllerAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b09606c

// -[SCStackContainer dismissViewControllerAnimated:completion:]
// Type encoding: @28@0:8B16@?20
// Implementation: 0x10b096074

// -[SCStackContainer _dismissToViewController:fromViewController:animated:completion:]
// Type encoding: @44@0:8@16@24B32@?36
// Implementation: 0x10b096120

// -[SCStackContainer dismissToRootViewControllerAnimated:completion:]
// Type encoding: @28@0:8B16@?20
// Implementation: 0x10b0964d4

// -[SCStackContainer dismissMultipleViewControllers:animated:completion:]
// Type encoding: @36@0:8q16B24@?28
// Implementation: 0x10b0965e0

// -[SCStackContainer dismissViewControllerInteractively:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b0966f0

// -[SCStackContainer dismissViewControllerInteractivelyTowardsDirection:withCompletion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x10b0966fc

// -[SCStackContainer navigationItemWithViewController:page:pageInstanceId:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x10b096c30

// -[SCStackContainer navigationItemWithLazyViewController:page:pageInstanceId:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x10b096cb4

// -[SCStackContainer pushNavigationItem:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b096d38

// -[SCStackContainer popNavigationItemAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b096f58

// -[SCStackContainer popToRootNavigationItemAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b0970cc

// -[SCStackContainer topViewController]
// Type encoding: @16@0:8
// Implementation: 0x10b097230

// -[SCStackContainer pushViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b097234

// -[SCStackContainer pushViewController:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b097238

// -[SCStackContainer pushViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b09723c

// -[SCStackContainer pushViewControllerInteractively:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b097240

// -[SCStackContainer popViewController]
// Type encoding: @16@0:8
// Implementation: 0x10b097244

// -[SCStackContainer popViewControllerAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b097248

// -[SCStackContainer popViewControllerAnimated:completion:]
// Type encoding: @28@0:8B16@?20
// Implementation: 0x10b09724c

// -[SCStackContainer popToRootViewControllerAnimated:completion:]
// Type encoding: @28@0:8B16@?20
// Implementation: 0x10b097250

// -[SCStackContainer popMultipleViewControllers:animated:completion:]
// Type encoding: @36@0:8q16B24@?28
// Implementation: 0x10b097254

// -[SCStackContainer popViewControllerInteractively:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b097258

// -[SCStackContainer attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b09725c

// -[SCStackContainer detachUI:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b097268

// -[SCStackContainer page]
// Type encoding: i16@0:8
// Implementation: 0x10b09730c

// -[SCStackContainer pageInstanceId]
// Type encoding: @16@0:8
// Implementation: 0x10b097394

// -[SCStackContainer presentationControllerShouldDismiss:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b09742c

// -[SCStackContainer presentationControllerDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b09743c

// -[SCStackContainer _releaseVisibleViewController]
// Type encoding: v16@0:8
// Implementation: 0x10b097484

// -[SCStackContainer _resetInteractiveNavigationState]
// Type encoding: v16@0:8
// Implementation: 0x10b09748c

// -[SCStackContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b097544

// -[SCStackContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b097564

// -[SCStackContainer emitNavigationEdgeTransitions]
// Type encoding: B16@0:8
// Implementation: 0x10b097578

// -[SCStackContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b097588

// +[SCStackContainer modalContainerWithConfig:presenter:parentContainer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b094e9c

// +[SCStackContainer _dismissalDirectionForHorizontalBehavior:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10b095234

// +[SCStackContainer navigationContainerWithConfig:presenter:parentContainer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b095250

@end
