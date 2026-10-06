// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiRootView
// Superclass: SCValdiView
// Address: 0x112cf4288

@interface SCValdiRootView

// Property: owner; attributes: T@"<SCValdiViewOwner>",W,N,V_owner
// Property: bundleName; attributes: T@"NSString",R,N
// Property: viewName; attributes: T@"NSString",R,N
// Property: componentPath; attributes: T@"NSString",R,N
// Property: enableViewInflationWhenInvisible; attributes: TB,N,V_enableViewInflationWhenInvisible
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: retainsLayoutSpecsOnInvalidateLayout; attributes: TB,N

// -[SCValdiRootView initWithViewModelUntyped:componentContextUntyped:runtime:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b9689b0

// -[SCValdiRootView initWithOwner:viewModel:componentContext:runtime:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b9689c4

// -[SCValdiRootView initWithOwner:cppMarshaller:runtime:]
// Type encoding: @40@0:8@16^v24@32
// Implementation: 0x10b968aac

// -[SCValdiRootView initWithoutValdiContext]
// Type encoding: @16@0:8
// Implementation: 0x10b968b6c

// -[SCValdiRootView accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x10b968b90

// -[SCValdiRootView willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x10b968c7c

// -[SCValdiRootView requiresLayoutWhenAnimatingBounds]
// Type encoding: B16@0:8
// Implementation: 0x10b968c84

// -[SCValdiRootView bundleName]
// Type encoding: @16@0:8
// Implementation: 0x10b968c8c

// -[SCValdiRootView viewName]
// Type encoding: @16@0:8
// Implementation: 0x10b968d30

// -[SCValdiRootView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b968d8c

// -[SCValdiRootView safeAreaInsetsDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10b968e08

// -[SCValdiRootView _valdiLayoutDirection]
// Type encoding: Q16@0:8
// Implementation: 0x10b968e64

// -[SCValdiRootView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b968e80

// -[SCValdiRootView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b968f48

// -[SCValdiRootView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b968f58

// -[SCValdiRootView updateTraitCollection]
// Type encoding: v16@0:8
// Implementation: 0x10b96900c

// -[SCValdiRootView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x10b969058

// -[SCValdiRootView _updateViewInflationState]
// Type encoding: v16@0:8
// Implementation: 0x10b969178

// -[SCValdiRootView didMoveToValdiContext:viewNode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b969208

// -[SCValdiRootView waitUntilInitialRenderWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b96930c

// -[SCValdiRootView onLayoutDirty:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b9693c4

// -[SCValdiRootView setVisibleViewportWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b969408

// -[SCValdiRootView unsetVisibleViewport]
// Type encoding: v16@0:8
// Implementation: 0x10b969468

// -[SCValdiRootView setRetainsLayoutSpecsOnInvalidateLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b969494

// -[SCValdiRootView retainsLayoutSpecsOnInvalidateLayout]
// Type encoding: B16@0:8
// Implementation: 0x10b9694c8

// -[SCValdiRootView setEnableViewInflationWhenInvisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b969500

// -[SCValdiRootView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b969520

// -[SCValdiRootView componentPath]
// Type encoding: @16@0:8
// Implementation: 0x10b969598

// -[SCValdiRootView canScrollAtPoint:direction:]
// Type encoding: B40@0:8{CGPoint=dd}16Q32
// Implementation: 0x10b969604

// -[SCValdiRootView owner]
// Type encoding: @16@0:8
// Implementation: 0x10b96965c

// -[SCValdiRootView setOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96967c

// -[SCValdiRootView enableViewInflationWhenInvisible]
// Type encoding: B16@0:8
// Implementation: 0x10b969690

// -[SCValdiRootView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b9696a0

// +[SCValdiRootView componentPath]
// Type encoding: @16@0:8
// Implementation: 0x10b9695ac

@end
