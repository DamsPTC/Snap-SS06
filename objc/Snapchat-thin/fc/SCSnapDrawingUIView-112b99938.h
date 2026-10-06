// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDrawingUIView
// Superclass: UIView
// Address: 0x112b99938

@interface SCSnapDrawingUIView

// Property: layerRoot; attributes: T{Ref<snap::drawing::LayerRoot>=^{LayerRoot}},R,N,V_layerRoot
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDrawingUIView initWithRuntime:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080db9cc

// -[SCSnapDrawingUIView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080dbc00

// -[SCSnapDrawingUIView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1080dbc84

// -[SCSnapDrawingUIView visibleContentRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1080dbd54

// -[SCSnapDrawingUIView refreshRenderViewport]
// Type encoding: v16@0:8
// Implementation: 0x1080dbf10

// -[SCSnapDrawingUIView applyVisibleContentRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080dbf5c

// -[SCSnapDrawingUIView updateViewportTracking:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080dc14c

// -[SCSnapDrawingUIView stopViewportTracking]
// Type encoding: v16@0:8
// Implementation: 0x1080dc2b0

// -[SCSnapDrawingUIView onViewportDisplayLinkTick]
// Type encoding: v16@0:8
// Implementation: 0x1080dc2e4

// -[SCSnapDrawingUIView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x1080dc358

// -[SCSnapDrawingUIView cppRuntime]
// Type encoding: ^v16@0:8
// Implementation: 0x1080dc3b4

// -[SCSnapDrawingUIView createEmbeddedPresenterForView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080dc3c4

// -[SCSnapDrawingUIView createMetalPresenter:]
// Type encoding: @24@0:8N^@16
// Implementation: 0x1080dc3e8

// -[SCSnapDrawingUIView removePresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080dc44c

// -[SCSnapDrawingUIView setFrame:transform:opacity:clipPath:clipHasChanged:forEmbeddedPresenter:]
// Type encoding: v204@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CATransform3D=dddddddddddddddd}48d176^{CGPath=}184B192@196
// Implementation: 0x1080dc454

// -[SCSnapDrawingUIView setZIndex:forPresenter:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1080dc4ec

// -[SCSnapDrawingUIView surfacePresenterView:willResizeDrawableWithBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1080dc558

// -[SCSnapDrawingUIView layerRoot]
// Type encoding: {Ref<snap::drawing::LayerRoot>=^{LayerRoot}}16@0:8
// Implementation: 0x1080dc5d0

// -[SCSnapDrawingUIView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080dc604

// -[SCSnapDrawingUIView .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1080dc650

@end
