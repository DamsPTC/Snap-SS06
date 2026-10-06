// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNavigationItemsTracker
// Superclass: NSObject
// Address: 0x112c69908

@interface SCNavigationItemsTracker

// Property: emitEdgeTransitions; attributes: TB,N,V_emitEdgeTransitions
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNavigationItemsTracker initWithNavigationContainer:deckTransitionEventAnnouncer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b092bf4

// -[SCNavigationItemsTracker setEmitEdgeTransitions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b092cc8

// -[SCNavigationItemsTracker items]
// Type encoding: @16@0:8
// Implementation: 0x10b092cd0

// -[SCNavigationItemsTracker onPushStartedWithItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b092cf8

// -[SCNavigationItemsTracker onPushCompletedWithItem:animated:completed:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10b092ef4

// -[SCNavigationItemsTracker onPopStartedWithNumberOfItem:animated:interactionType:]
// Type encoding: v36@0:8Q16B24q28
// Implementation: 0x10b093174

// -[SCNavigationItemsTracker onPopCompletedWithNumberOfItem:animated:interactionType:completed:]
// Type encoding: v40@0:8Q16B24q28B36
// Implementation: 0x10b0933b0

// -[SCNavigationItemsTracker onPopToRootStartedWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b093750

// -[SCNavigationItemsTracker onPopToRootCompletedWithAnimated:completed:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10b093788

// -[SCNavigationItemsTracker _willTransitionFromItem:toItem:animated:eventType:interactionType:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x10b0937d0

// -[SCNavigationItemsTracker _didTransitionFromItem:toItem:animated:eventType:interactionType:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x10b093978

// -[SCNavigationItemsTracker onUIDidEnterHierarchy:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093c30

// -[SCNavigationItemsTracker onUIWillAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093d5c

// -[SCNavigationItemsTracker onUIDidAppear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093dd8

// -[SCNavigationItemsTracker onUIWillDisappear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093e54

// -[SCNavigationItemsTracker onUIDidDisappear:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093ed0

// -[SCNavigationItemsTracker onUIDidExitHierarchy:appearance:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b093f4c

// -[SCNavigationItemsTracker emitEdgeTransitions]
// Type encoding: B16@0:8
// Implementation: 0x10b0940a8

// -[SCNavigationItemsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0940b0

@end
