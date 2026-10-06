// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiViewNode
// Superclass: NSObject
// Address: 0x112b99820

@interface SCValdiViewNode

// Property: view; attributes: T@"UIView",R,W,N
// Property: relativeFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: isLayoutDirectionHorizontal; attributes: TB,R,N
// Property: isRightToLeft; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiViewNode initWithViewNode:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1080d8bf0

// -[SCValdiViewNode view]
// Type encoding: @16@0:8
// Implementation: 0x1080d8c7c

// -[SCValdiViewNode relativeFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1080d8cec

// -[SCValdiViewNode _getViewNode:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d8d58

// -[SCValdiViewNode setValue:forValdiAttribute:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d8e00

// -[SCValdiViewNode removeValueForValdiAttribute:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d8f8c

// -[SCValdiViewNode valueForValdiAttribute:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d8f98

// -[SCValdiViewNode preprocessedValueForValdiAttribute:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d9090

// -[SCValdiViewNode setRetainedObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d9170

// -[SCValdiViewNode setStoredObject:forKey:]
// Type encoding: v32@0:8@16^{SCValdiInternedString=}24
// Implementation: 0x1080d91f0

// -[SCValdiViewNode storedObjectForKey:]
// Type encoding: @24@0:8^{SCValdiInternedString=}16
// Implementation: 0x1080d929c

// -[SCValdiViewNode setDidFinishLayoutBlock:forKey:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1080d937c

// -[SCValdiViewNode hasDidFinishLayoutBlockForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x1080d9444

// -[SCValdiViewNode didApplyLayoutWithAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d947c

// -[SCValdiViewNode markLayoutDirty]
// Type encoding: v16@0:8
// Implementation: 0x1080d95e4

// -[SCValdiViewNode notifyOnScrollWithContentOffset:updatedContentOffset:velocity:]
// Type encoding: v56@0:8{CGPoint=dd}16N^{CGPoint=dd}32{CGPoint=dd}40
// Implementation: 0x1080d95f8

// -[SCValdiViewNode notifyOnScrollEndWithContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x1080d9674

// -[SCValdiViewNode notifyOnDragStartWithContentOffset:velocity:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x1080d96a0

// -[SCValdiViewNode notifyOnDragEndingWithContentOffset:velocity:updatedContentOffset:]
// Type encoding: v56@0:8{CGPoint=dd}16{CGPoint=dd}32N^{CGPoint=dd}48
// Implementation: 0x1080d96dc

// -[SCValdiViewNode canScrollAtPoint:direction:]
// Type encoding: B40@0:8{CGPoint=dd}16Q32
// Implementation: 0x1080d9700

// -[SCValdiViewNode isRightToLeft]
// Type encoding: B16@0:8
// Implementation: 0x1080d9728

// -[SCValdiViewNode isLayoutDirectionHorizontal]
// Type encoding: B16@0:8
// Implementation: 0x1080d9750

// -[SCValdiViewNode relativeDirectionAgnosticPointFromPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x1080d9758

// -[SCValdiViewNode absoluteDirectionAgnosticPointFromPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x1080d9794

// -[SCValdiViewNode resolveDeltaX:directionAgnostic:]
// Type encoding: d28@0:8d16B24
// Implementation: 0x1080d97d0

// -[SCValdiViewNode layoutDebugDescription]
// Type encoding: @16@0:8
// Implementation: 0x1080d97f4

// -[SCValdiViewNode toXML]
// Type encoding: @16@0:8
// Implementation: 0x1080d983c

// -[SCValdiViewNode cppViewNode]
// Type encoding: ^v16@0:8
// Implementation: 0x1080d98a4

// -[SCValdiViewNode isAccessibilityElement]
// Type encoding: B16@0:8
// Implementation: 0x1080d98ac

// -[SCValdiViewNode accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x1080d98b4

// -[SCValdiViewNode accessibilityHint]
// Type encoding: @16@0:8
// Implementation: 0x1080d9914

// -[SCValdiViewNode accessibilityValue]
// Type encoding: @16@0:8
// Implementation: 0x1080d9974

// -[SCValdiViewNode accessibilityIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1080d9a10

// -[SCValdiViewNode accessibilityTraits]
// Type encoding: Q16@0:8
// Implementation: 0x1080d9ae0

// -[SCValdiViewNode walkCustomViewForAccessibility:elements:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d9c4c

// -[SCValdiViewNode accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x1080d9dbc

// -[SCValdiViewNode accessibilityContainerType]
// Type encoding: q16@0:8
// Implementation: 0x1080d9fc0

// -[SCValdiViewNode accessibilityNavigationStyle]
// Type encoding: q16@0:8
// Implementation: 0x1080d9fe4

// -[SCValdiViewNode accessibilityFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1080da010

// -[SCValdiViewNode shouldGroupAccessibilityChildren]
// Type encoding: B16@0:8
// Implementation: 0x1080da0c8

// -[SCValdiViewNode accessibilityElementDidBecomeFocused]
// Type encoding: v16@0:8
// Implementation: 0x1080da0d0

// -[SCValdiViewNode accessibilityElementDidLoseFocus]
// Type encoding: v16@0:8
// Implementation: 0x1080da0e8

// -[SCValdiViewNode accessibilityScroll:]
// Type encoding: B24@0:8q16
// Implementation: 0x1080da0ec

// -[SCValdiViewNode children]
// Type encoding: @16@0:8
// Implementation: 0x1080da250

// -[SCValdiViewNode .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080da328

// -[SCValdiViewNode .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1080da360

@end
