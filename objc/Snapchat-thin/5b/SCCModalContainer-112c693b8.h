// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCModalContainer
// Superclass: NSObject
// Address: 0x112c693b8

@interface SCCModalContainer

// Property: viewController; attributes: T@"UIViewController<SCValdiContainerViewController>",W,N,V_viewController
// Property: deckContainerFactory; attributes: T@"<SCCDeckContainerFactoryInterface>",&,N,V_deckContainerFactory
// Property: props; attributes: T@"<SCCDeckPageProps>",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCModalContainer initWithPlatformDeckContainer:valdiRuntimeProvider:pageConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b08d3d0

// -[SCCModalContainer initWithPlatformDeckContainer:valdiRuntimeProvider:circumstance:pageConfig:isTrayPresentation:removePageSheetBackground:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x10b08d3e4

// -[SCCModalContainer presentWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b08d51c

// -[SCCModalContainer dismissWithAnimated:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b08d708

// -[SCCModalContainer platformDeckContainer]
// Type encoding: @16@0:8
// Implementation: 0x10b08d864

// -[SCCModalContainer _makeContainerViewControllerWithPage:parentComposerContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b08d88c

// -[SCCModalContainer deckContainerFactory]
// Type encoding: @16@0:8
// Implementation: 0x10b08daac

// -[SCCModalContainer setDeckContainerFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b08dab4

// -[SCCModalContainer viewController]
// Type encoding: @16@0:8
// Implementation: 0x10b08dae4

// -[SCCModalContainer setViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b08dafc

// -[SCCModalContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b08db08

@end
