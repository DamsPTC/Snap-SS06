// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTabBarContainer
// Superclass: SCDeckContainerBase
// Address: 0x112c69b88

@interface SCTabBarContainer

// Property: tabContainers; attributes: T@"NSArray",C,N,V_tabContainers
// Property: dataSource; attributes: T@"<SCTabBarContainerDataSource>",&,N,V_dataSource
// Property: navigationBar; attributes: T@"SIGFooterItem",&,N,V_navigationBar
// Property: selectedIndex; attributes: TQ,N
// Property: defaultPanTransitionOptions; attributes: TQ,N,V_defaultPanTransitionOptions
// Property: developerName; attributes: T@"NSString",C,N
// Property: gestureDelegate; attributes: T@"<SCDeckContainerGestureDelegate>",W,N
// Property: useUIKitForChildPresentation; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTabBarContainer initWithPresenter:parentContainer:dataSource:gestureManagementEnabled:page:pageInstanceId:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32B40i44@48@56
// Implementation: 0x1005945a4

// -[SCTabBarContainer dismissalTarget]
// Type encoding: @16@0:8
// Implementation: 0x10b097874

// -[SCTabBarContainer selectedIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b0978cc

// -[SCTabBarContainer _completePresentationOf:atIndex:completed:completion:]
// Type encoding: v44@0:8@16Q24B32@?36
// Implementation: 0x10b0978dc

// -[SCTabBarContainer setSelectedIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b09793c

// -[SCTabBarContainer _setSelectedIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100876b8c

// -[SCTabBarContainer presentViewControllerAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b09795c

// -[SCTabBarContainer presentViewControllerAtIndex:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10b097964

// -[SCTabBarContainer presentationStyleForTransitionFromIndex:toIndex:animated:interactive:]
// Type encoding: @40@0:8Q16Q24B32B36
// Implementation: 0x100875284

// -[SCTabBarContainer presentViewControllerAtIndex:animated:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x100874f34

// -[SCTabBarContainer presentViewControllerAtIndexInteractively:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b097a5c

// -[SCTabBarContainer presentViewControllerAtIndexInteractively:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x10b097a64

// -[SCTabBarContainer maybeAttachGesturesToView:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1008ed2d4

// -[SCTabBarContainer onUIDidAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b097dc0

// -[SCTabBarContainer panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x10b097e40

// -[SCTabBarContainer selectedTabBarItemContainer]
// Type encoding: @16@0:8
// Implementation: 0x10b097e5c

// -[SCTabBarContainer defaultPanTransitionOptions]
// Type encoding: Q16@0:8
// Implementation: 0x10b097e7c

// -[SCTabBarContainer setDefaultPanTransitionOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1005979dc

// -[SCTabBarContainer dataSource]
// Type encoding: @16@0:8
// Implementation: 0x10b097e8c

// -[SCTabBarContainer setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x100597a6c

// -[SCTabBarContainer navigationBar]
// Type encoding: @16@0:8
// Implementation: 0x10b097e9c

// -[SCTabBarContainer setNavigationBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b097eac

// -[SCTabBarContainer tabContainers]
// Type encoding: @16@0:8
// Implementation: 0x10b097eec

// -[SCTabBarContainer setTabContainers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005979ec

// -[SCTabBarContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1005980bc

@end
