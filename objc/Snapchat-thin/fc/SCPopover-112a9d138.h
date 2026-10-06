// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPopover
// Superclass: NSObject
// Address: 0x112a9d138

@interface SCPopover

// Property: backgroundColor; attributes: T@"UIColor",C,N,V_backgroundColor
// Property: position; attributes: TQ,R,N,V_position
// Property: view; attributes: T@"UIView",R,N,V_view

// -[SCPopover init]
// Type encoding: @16@0:8
// Implementation: 0x105d59108

// -[SCPopover presentInView:fromSourceView:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105d59190

// -[SCPopover presentInView:insetBy:fromSourceView:completion:]
// Type encoding: v72@0:8@16{UIEdgeInsets=dddd}24@56@?64
// Implementation: 0x105d591a4

// -[SCPopover presentInView:insetBy:fromSourceRect:rotatedBy:completion:]
// Type encoding: v104@0:8@16{UIEdgeInsets=dddd}24{CGRect={CGPoint=dd}{CGSize=dd}}56d88@?96
// Implementation: 0x105d59290

// -[SCPopover dismiss:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d59430

// -[SCPopover setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d594f4

// -[SCPopover view]
// Type encoding: @16@0:8
// Implementation: 0x105d5955c

// -[SCPopover backgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x105d59594

// -[SCPopover _presentInView:insetBy:fromSourceRect:rotatedBy:completion:]
// Type encoding: v104@0:8@16{UIEdgeInsets=dddd}24{CGRect={CGPoint=dd}{CGSize=dd}}56d88@?96
// Implementation: 0x105d595bc

// -[SCPopover _animateIn:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d597a8

// -[SCPopover _animateOut:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d59940

// -[SCPopover _makeHostRectFromHostView:insetBy:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8@16{UIEdgeInsets=dddd}24
// Implementation: 0x105d59ad8

// -[SCPopover _makeSourceRectFromRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105d59bb8

// -[SCPopover _createView]
// Type encoding: v16@0:8
// Implementation: 0x105d59bd4

// -[SCPopover _createContainerView]
// Type encoding: v16@0:8
// Implementation: 0x105d59c44

// -[SCPopover _createCaretView]
// Type encoding: v16@0:8
// Implementation: 0x105d59cfc

// -[SCPopover _setupViewCorners]
// Type encoding: v16@0:8
// Implementation: 0x105d59ddc

// -[SCPopover _resetConstraintsWithPresentationPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105d59e6c

// -[SCPopover _createViewToContainerConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105d59ea8

// -[SCPopover _createCaretConstraintsWithPresentationPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105d5a1e8

// -[SCPopover _createViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105d5a4c0

// -[SCPopover _makeContainerViewFrameWithinHost:presentationPoint:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGPoint=dd}48
// Implementation: 0x105d5a5f0

// -[SCPopover _makePresentationPointAnchoredOn:withinHost:]
// Type encoding: {CGPoint=dd}112@0:8{?={CGPoint=dd}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}80
// Implementation: 0x105d5a6f8

// -[SCPopover _containerViewSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105d5a8f8

// -[SCPopover position]
// Type encoding: Q16@0:8
// Implementation: 0x105d5a940

// -[SCPopover .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d5a948

@end
