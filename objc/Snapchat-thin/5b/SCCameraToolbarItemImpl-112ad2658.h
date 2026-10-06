// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraToolbarItemImpl
// Superclass: NSObject
// Address: 0x112ad2658

@interface SCCameraToolbarItemImpl

// Property: cameraUIItem; attributes: Tq,N,V_cameraUIItem
// Property: itemType; attributes: TQ,N,V_itemType
// Property: isLoading; attributes: TB,N,V_isLoading
// Property: visibilityOptions; attributes: TQ,N,V_visibilityOptions
// Property: isSelected; attributes: TB,N,V_isSelected
// Property: isShowingWidget; attributes: TB,N,V_isShowingWidget
// Property: isChildItem; attributes: TB,R,N
// Property: shouldKeepToolbarExpandedOnTap; attributes: TB,N,V_shouldKeepToolbarExpandedOnTap
// Property: position; attributes: TQ,N,V_position
// Property: shouldShowTitleUponSelection; attributes: TB,N,V_shouldShowTitleUponSelection
// Property: normalTitle; attributes: T@"NSString",C,N,V_normalTitle
// Property: expandedTitle; attributes: T@"NSString",C,N,V_expandedTitle
// Property: selectedTitle; attributes: T@"NSString",C,N,V_selectedTitle
// Property: attributedSelectedTitle; attributes: T@"NSAttributedString",C,N,V_attributedSelectedTitle
// Property: normalImageName; attributes: T@"NSString",C,N,V_normalImageName
// Property: selectedImageName; attributes: T@"NSString",C,N,V_selectedImageName
// Property: maskImageName; attributes: T@"NSString",C,N,V_maskImageName
// Property: normalBackgroundColor; attributes: T@"UIColor",&,N,V_normalBackgroundColor
// Property: selectedBackgroundColor; attributes: T@"UIColor",&,N,V_selectedBackgroundColor
// Property: accessibilityIdentifier; attributes: T@"NSString",C,N,V_accessibilityIdentifier
// Property: accessibilityLabel; attributes: T@"NSString",C,N,V_accessibilityLabel
// Property: accessibilityValueNormal; attributes: T@"NSString",C,N,V_accessibilityValueNormal
// Property: accessibilityValueSelected; attributes: T@"NSString",C,N,V_accessibilityValueSelected
// Property: composerCameraMode; attributes: Ti,N,V_composerCameraMode
// Property: childToolbarItem; attributes: T@"<SCCameraToolbarItem>",R,N,V_childToolbarItem
// Property: parentToolbarItem; attributes: T@"<SCCameraToolbarItem>",R,W,N,V_parentToolbarItem
// Property: canTapEvent; attributes: T@"SCBehaviorSubject",R,N,V_canTapEvent
// Property: willTapEvent; attributes: T@"SCBehaviorSubject",R,N,V_willTapEvent
// Property: didTapEvent; attributes: T@"SCBehaviorSubject",R,N,V_didTapEvent
// Property: didCancelEvent; attributes: T@"SCBehaviorSubject",R,N,V_didCancelEvent
// Property: didChangeSelectedEvent; attributes: T@"SCBehaviorSubject",R,N,V_didChangeSelectedEvent
// Property: didChangeShowingWidgetEvent; attributes: T@"SCBehaviorSubject",R,N,V_didChangeShowingWidgetEvent
// Property: needsDisplayEvent; attributes: T@"SCBehaviorSubject",R,N,V_needsDisplayEvent
// Property: canChangeSelectedEvent; attributes: T@"SCBehaviorSubject",R,N,V_canChangeSelectedEvent
// Property: didChangeToolbarItemEvent; attributes: T@"SCBehaviorSubject",R,N,V_didChangeToolbarItemEvent
// Property: canShowChildItemEvent; attributes: T@"SCBehaviorSubject",R,N,V_canShowChildItemEvent
// Property: needsCheckVisibilityOfChildItemEvent; attributes: T@"SCBehaviorSubject",R,N,V_needsCheckVisibilityOfChildItemEvent
// Property: didChangePositions; attributes: T@"SCBehaviorSubject",R,N,V_didChangePositions
// Property: didChangeLoadingStateEvent; attributes: T@"SCBehaviorSubject",R,N,V_didChangeLoadingStateEvent
// Property: shouldShowNewBadge; attributes: TB,N,V_shouldShowNewBadge
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionType; attributes: Tq,R

// -[SCCameraToolbarItemImpl initWithPosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100891e84

// -[SCCameraToolbarItemImpl copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1008a0148

// -[SCCameraToolbarItemImpl canTapEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a88d4

// -[SCCameraToolbarItemImpl willTapEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008b1078

// -[SCCameraToolbarItemImpl didTapEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008920e0

// -[SCCameraToolbarItemImpl didCancelEvent]
// Type encoding: @16@0:8
// Implementation: 0x1061e4000

// -[SCCameraToolbarItemImpl didChangeSelectedEvent]
// Type encoding: @16@0:8
// Implementation: 0x10089fef0

// -[SCCameraToolbarItemImpl didChangeShowingWidgetEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a05b0

// -[SCCameraToolbarItemImpl needsDisplayEvent]
// Type encoding: @16@0:8
// Implementation: 0x10089ffc0

// -[SCCameraToolbarItemImpl canChangeSelectedEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a72f0

// -[SCCameraToolbarItemImpl didChangeToolbarItemEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a0084

// -[SCCameraToolbarItemImpl canShowChildItemEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008b1ea8

// -[SCCameraToolbarItemImpl needsCheckVisibilityOfChildItemEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a0600

// -[SCCameraToolbarItemImpl didChangeLoadingStateEvent]
// Type encoding: @16@0:8
// Implementation: 0x1008a00d4

// -[SCCameraToolbarItemImpl didChangePositions]
// Type encoding: @16@0:8
// Implementation: 0x1061e4050

// -[SCCameraToolbarItemImpl setCameraUIItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008920b4

// -[SCCameraToolbarItemImpl setNormalTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891f08

// -[SCCameraToolbarItemImpl setVisibilityOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100891fc8

// -[SCCameraToolbarItemImpl setChildToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b1e44

// -[SCCameraToolbarItemImpl isChildItem]
// Type encoding: B16@0:8
// Implementation: 0x100894120

// -[SCCameraToolbarItemImpl setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e40a0

// -[SCCameraToolbarItemImpl setIsSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c40aa4

// -[SCCameraToolbarItemImpl setIsShowingWidget:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e4104

// -[SCCameraToolbarItemImpl toggleSelection]
// Type encoding: v16@0:8
// Implementation: 0x1061e4168

// -[SCCameraToolbarItemImpl setNeedsDisplay:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e419c

// -[SCCameraToolbarItemImpl setNeedsCheckVisibilityOfChildItem]
// Type encoding: v16@0:8
// Implementation: 0x1061e41f4

// -[SCCameraToolbarItemImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x1061e4238

// -[SCCameraToolbarItemImpl isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1061e4240

// -[SCCameraToolbarItemImpl accessibilityIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10089fed0

// -[SCCameraToolbarItemImpl setAccessibilityIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891ee0

// -[SCCameraToolbarItemImpl accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x10089fec8

// -[SCCameraToolbarItemImpl setAccessibilityLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891f00

// -[SCCameraToolbarItemImpl accessibilityValueNormal]
// Type encoding: @16@0:8
// Implementation: 0x10089fed8

// -[SCCameraToolbarItemImpl setAccessibilityValueNormal:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891fb8

// -[SCCameraToolbarItemImpl accessibilityValueSelected]
// Type encoding: @16@0:8
// Implementation: 0x1061e4248

// -[SCCameraToolbarItemImpl setAccessibilityValueSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891fc0

// -[SCCameraToolbarItemImpl attributedSelectedTitle]
// Type encoding: @16@0:8
// Implementation: 0x1008a0f74

// -[SCCameraToolbarItemImpl setAttributedSelectedTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e4250

// -[SCCameraToolbarItemImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x1008922d4

// -[SCCameraToolbarItemImpl expandedTitle]
// Type encoding: @16@0:8
// Implementation: 0x100891f80

// -[SCCameraToolbarItemImpl setExpandedTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891f88

// -[SCCameraToolbarItemImpl isSelected]
// Type encoding: B16@0:8
// Implementation: 0x1008922dc

// -[SCCameraToolbarItemImpl isShowingWidget]
// Type encoding: B16@0:8
// Implementation: 0x1008a6588

// -[SCCameraToolbarItemImpl shouldKeepToolbarExpandedOnTap]
// Type encoding: B16@0:8
// Implementation: 0x1061e4258

// -[SCCameraToolbarItemImpl setShouldKeepToolbarExpandedOnTap:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e4260

// -[SCCameraToolbarItemImpl maskImageName]
// Type encoding: @16@0:8
// Implementation: 0x1061e4268

// -[SCCameraToolbarItemImpl setMaskImageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e4270

// -[SCCameraToolbarItemImpl normalImageName]
// Type encoding: @16@0:8
// Implementation: 0x10089f0d8

// -[SCCameraToolbarItemImpl setNormalImageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891ed8

// -[SCCameraToolbarItemImpl normalTitle]
// Type encoding: @16@0:8
// Implementation: 0x100891fa8

// -[SCCameraToolbarItemImpl normalBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x10089fc94

// -[SCCameraToolbarItemImpl setNormalBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b1de4

// -[SCCameraToolbarItemImpl selectedBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x1061e4278

// -[SCCameraToolbarItemImpl setSelectedBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b1e14

// -[SCCameraToolbarItemImpl position]
// Type encoding: Q16@0:8
// Implementation: 0x1008924c0

// -[SCCameraToolbarItemImpl setPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061e4280

// -[SCCameraToolbarItemImpl shouldShowTitleUponSelection]
// Type encoding: B16@0:8
// Implementation: 0x1061e4288

// -[SCCameraToolbarItemImpl setShouldShowTitleUponSelection:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008ad674

// -[SCCameraToolbarItemImpl selectedImageName]
// Type encoding: @16@0:8
// Implementation: 0x1061e4290

// -[SCCameraToolbarItemImpl setSelectedImageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a72d0

// -[SCCameraToolbarItemImpl selectedTitle]
// Type encoding: @16@0:8
// Implementation: 0x1008a0f6c

// -[SCCameraToolbarItemImpl setSelectedTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891fb0

// -[SCCameraToolbarItemImpl composerCameraMode]
// Type encoding: i16@0:8
// Implementation: 0x1061e4298

// -[SCCameraToolbarItemImpl setComposerCameraMode:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061e42a0

// -[SCCameraToolbarItemImpl childToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008ad64c

// -[SCCameraToolbarItemImpl parentToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008924d8

// -[SCCameraToolbarItemImpl shouldShowNewBadge]
// Type encoding: B16@0:8
// Implementation: 0x1061e42a8

// -[SCCameraToolbarItemImpl setShouldShowNewBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b0f90

// -[SCCameraToolbarItemImpl visibilityOptions]
// Type encoding: Q16@0:8
// Implementation: 0x1008924d0

// -[SCCameraToolbarItemImpl itemType]
// Type encoding: Q16@0:8
// Implementation: 0x1008924c8

// -[SCCameraToolbarItemImpl setItemType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061e42b0

// -[SCCameraToolbarItemImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061e42b8

@end
