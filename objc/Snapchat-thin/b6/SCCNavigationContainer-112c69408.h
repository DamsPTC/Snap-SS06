// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCNavigationContainer
// Superclass: NSObject
// Address: 0x112c69408

@interface SCCNavigationContainer

// Property: deckContainerFactory; attributes: T@"<SCCDeckContainerFactoryInterface>",&,N,V_deckContainerFactory
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCNavigationContainer initWithPlatformDeckContainer:valdiRuntimeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b08db60

// -[SCCNavigationContainer createNavigationItemWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b08dc24

// -[SCCNavigationContainer pushWithNavigationItem:animated:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b08df6c

// -[SCCNavigationContainer popWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b08e154

// -[SCCNavigationContainer popToRootWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b08e294

// -[SCCNavigationContainer _makeContainerViewControllerWithPage:parentComposerContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b08e3d4

// -[SCCNavigationContainer deckContainerFactory]
// Type encoding: @16@0:8
// Implementation: 0x10b08e5b8

// -[SCCNavigationContainer setDeckContainerFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b08e5c0

// -[SCCNavigationContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b08e5f0

@end
