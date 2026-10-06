// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiSurfacePresenterView
// Superclass: UIView
// Address: 0x112b98178

@interface SCValdiSurfacePresenterView

// Property: delegate; attributes: T@"<SCValdiSurfacePresenterViewDelegate>",W,N,V_delegate
// Property: clipPath; attributes: T^{CGPath=},R,N,V_clipPath
// Property: viewFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_viewFrame
// Property: viewTransform; attributes: T{CATransform3D=dddddddddddddddd},R,N,V_viewTransform
// Property: embeddedView; attributes: T@"UIView",&,N,V_embeddedView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiSurfacePresenterView init]
// Type encoding: @16@0:8
// Implementation: 0x10809dcc8

// -[SCValdiSurfacePresenterView isFlipped]
// Type encoding: B16@0:8
// Implementation: 0x10809dd1c

// -[SCValdiSurfacePresenterView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10809dd24

// -[SCValdiSurfacePresenterView setEmbeddedViewFrame:transform:opacity:clipPath:clipHasChanged:]
// Type encoding: v196@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CATransform3D=dddddddddddddddd}48d176^{CGPath=}184B192
// Implementation: 0x10809dd94

// -[SCValdiSurfacePresenterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10809dff4

// -[SCValdiSurfacePresenterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809e014

// -[SCValdiSurfacePresenterView clipPath]
// Type encoding: ^{CGPath=}16@0:8
// Implementation: 0x10809e028

// -[SCValdiSurfacePresenterView viewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10809e038

// -[SCValdiSurfacePresenterView viewTransform]
// Type encoding: {CATransform3D=dddddddddddddddd}16@0:8
// Implementation: 0x10809e050

// -[SCValdiSurfacePresenterView embeddedView]
// Type encoding: @16@0:8
// Implementation: 0x10809e068

// -[SCValdiSurfacePresenterView setEmbeddedView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809e078

// -[SCValdiSurfacePresenterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10809e0b8

// +[SCValdiSurfacePresenterView presenterViewWithMetalLayer:contentsScale:]
// Type encoding: @32@0:8N^@16d24
// Implementation: 0x10809df2c

// +[SCValdiSurfacePresenterView presenterViewWithEmbeddedView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10809dfa0

@end
