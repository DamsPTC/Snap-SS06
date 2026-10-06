// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputItem
// Superclass: UIButton
// Address: 0x112ae5a78

@interface SCChatInputItem

// Property: leadingPriority; attributes: TQ,N,V_leadingPriority
// Property: deeplinkIdentifier; attributes: T@"NSString",&,N,V_deeplinkIdentifier
// Property: ignoresVisibleStateChanges; attributes: TB,N,V_ignoresVisibleStateChanges
// Property: visibleStates; attributes: TQ,N,V_visibleStates
// Property: inputModality; attributes: TQ,N,V_inputModality
// Property: collapsed; attributes: TB,N,GisCollapsed,V_collapsed
// Property: size; attributes: T{CGSize=dd},N,V_size
// Property: image; attributes: T@"UIImage",&,N,V_image
// Property: darkContentImage; attributes: T@"UIImage",&,N,V_darkContentImage
// Property: selectedImage; attributes: T@"UIImage",&,N,V_selectedImage
// Property: delegate; attributes: T@"<SCChatInputItemDelegate>",W,N,V_delegate
// Property: key; attributes: T@"NSString",R,N,V_key
// Property: featureTypeIdentifier; attributes: T@"NSString",&,N,V_featureTypeIdentifier
// Property: allowsOutOfBoundsTouches; attributes: TB,N,V_allowsOutOfBoundsTouches
// Property: submenuTitle; attributes: T@"NSString",&,N,V_submenuTitle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: style; attributes: TQ,N,V_style

// -[SCChatInputItem init]
// Type encoding: @16@0:8
// Implementation: 0x10657217c

// -[SCChatInputItem initWithImage:darkContentImage:selectedImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106572304

// -[SCChatInputItem setImage:forState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10657238c

// -[SCChatInputItem setImage:darkContentImage:selectedImage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106572400

// -[SCChatInputItem setImage:tintColor:darkContentTintColor:selectedImage:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1065724e0

// -[SCChatInputItem setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x10657261c

// -[SCChatInputItem setCollapsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065726a8

// -[SCChatInputItem setSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1065726f0

// -[SCChatInputItem intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106572718

// -[SCChatInputItem setImage:animationStyle:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x10657272c

// -[SCChatInputItem setImage:selectedImage:animationStyle:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x1065727cc

// -[SCChatInputItem setCustomView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065728d8

// -[SCChatInputItem setHidden:animationStyle:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x106572b6c

// -[SCChatInputItem resetImageStateWithAnimationStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106572b88

// -[SCChatInputItem setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106572ca0

// -[SCChatInputItem traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106572d90

// -[SCChatInputItem _animateHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x106572de4

// -[SCChatInputItem _setImage:forState:animationStyle:completion:]
// Type encoding: v48@0:8@16Q24Q32@?40
// Implementation: 0x106572f8c

// -[SCChatInputItem _circularMaskImage:forState:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x106573094

// -[SCChatInputItem _fadeImage:forState:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x106573418

// -[SCChatInputItem _popImage:forState:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x10657352c

// -[SCChatInputItem pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x106573680

// -[SCChatInputItem style]
// Type encoding: Q16@0:8
// Implementation: 0x106573880

// -[SCChatInputItem ignoresVisibleStateChanges]
// Type encoding: B16@0:8
// Implementation: 0x106573890

// -[SCChatInputItem setIgnoresVisibleStateChanges:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065738a0

// -[SCChatInputItem visibleStates]
// Type encoding: Q16@0:8
// Implementation: 0x1065738b0

// -[SCChatInputItem setVisibleStates:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065738c0

// -[SCChatInputItem isCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x1065738d0

// -[SCChatInputItem size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1065738e0

// -[SCChatInputItem image]
// Type encoding: @16@0:8
// Implementation: 0x1065738f4

// -[SCChatInputItem setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573904

// -[SCChatInputItem darkContentImage]
// Type encoding: @16@0:8
// Implementation: 0x106573944

// -[SCChatInputItem setDarkContentImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573954

// -[SCChatInputItem selectedImage]
// Type encoding: @16@0:8
// Implementation: 0x106573994

// -[SCChatInputItem setSelectedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065739a4

// -[SCChatInputItem delegate]
// Type encoding: @16@0:8
// Implementation: 0x1065739e4

// -[SCChatInputItem setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573a04

// -[SCChatInputItem key]
// Type encoding: @16@0:8
// Implementation: 0x106573a18

// -[SCChatInputItem deeplinkIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106573a28

// -[SCChatInputItem setDeeplinkIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573a38

// -[SCChatInputItem leadingPriority]
// Type encoding: Q16@0:8
// Implementation: 0x106573a78

// -[SCChatInputItem setLeadingPriority:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106573a88

// -[SCChatInputItem featureTypeIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106573a98

// -[SCChatInputItem setFeatureTypeIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573aa8

// -[SCChatInputItem allowsOutOfBoundsTouches]
// Type encoding: B16@0:8
// Implementation: 0x106573ae8

// -[SCChatInputItem setAllowsOutOfBoundsTouches:]
// Type encoding: v20@0:8B16
// Implementation: 0x106573af8

// -[SCChatInputItem submenuTitle]
// Type encoding: @16@0:8
// Implementation: 0x106573b08

// -[SCChatInputItem setSubmenuTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106573b18

// -[SCChatInputItem inputModality]
// Type encoding: Q16@0:8
// Implementation: 0x106573b58

// -[SCChatInputItem setInputModality:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106573b68

// -[SCChatInputItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106573b78

// +[SCChatInputItem itemWithImage:darkContentImage:selectedImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065720fc

@end
