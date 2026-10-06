// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewToolBarButtonItemImpl
// Superclass: NSObject
// Address: 0x112bbe1e8

@interface SCPreviewToolBarButtonItemImpl

// Property: previewToolButton; attributes: T@"SCPreviewToolButton",&,N,V_previewToolButton
// Property: toolButtonLoaded; attributes: TB,N,GisToolButtonLoaded,V_toolButtonLoaded
// Property: toolLabel; attributes: T@"SIGLabel",&,N,V_toolLabel
// Property: itemConfig; attributes: T@"SCPreviewToolBarItemConfiguration",R,N,V_itemConfig
// Property: itemType; attributes: Tq,R,N,V_itemType
// Property: iconStyle; attributes: TQ,R,N,V_iconStyle
// Property: selectionStyle; attributes: Tq,N,V_selectionStyle
// Property: presentationStyle; attributes: Tq,N,V_presentationStyle
// Property: selected; attributes: TB,N,GisSelected,V_selected
// Property: itemAction; attributes: T:,N,V_itemAction
// Property: itemTarget; attributes: T@,W,N,V_itemTarget
// Property: accessibilityLabel; attributes: T@"NSString",C,N,V_accessibilityLabel
// Property: allowsLongPress; attributes: TB,N,V_allowsLongPress
// Property: needBottomAccessoryAnimation; attributes: TB,N,V_needBottomAccessoryAnimation
// Property: disabled; attributes: TB,N,V_disabled
// Property: alpha; attributes: Td,N,V_alpha
// Property: selectedVerticalOffset; attributes: Td,N,V_selectedVerticalOffset
// Property: leftAccessoryViews; attributes: T@"NSArray",C,N,V_leftAccessoryViews
// Property: bottomAccessoryViews; attributes: T@"NSArray",C,N,V_bottomAccessoryViews
// Property: topAccessoryViews; attributes: T@"NSArray",C,N,V_topAccessoryViews
// Property: itemDelegate; attributes: T@"<SCPreviewToolBarButtonItemDelegate>",W,N,V_itemDelegate
// Property: shouldStaySelectedOnFilterStacked; attributes: TB,N,V_shouldStaySelectedOnFilterStacked
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewToolBarButtonItemImpl initWithBarButtonItemType:iconStyle:target:selector:]
// Type encoding: @48@0:8q16Q24@32:40
// Implementation: 0x108ccd204

// -[SCPreviewToolBarButtonItemImpl initWithItemConfiguration:iconStyle:target:selector:]
// Type encoding: @48@0:8@16Q24@32:40
// Implementation: 0x108ccd290

// -[SCPreviewToolBarButtonItemImpl itemType]
// Type encoding: q16@0:8
// Implementation: 0x108ccd370

// -[SCPreviewToolBarButtonItemImpl previewToolButton]
// Type encoding: @16@0:8
// Implementation: 0x108ccd3ac

// -[SCPreviewToolBarButtonItemImpl toolButton]
// Type encoding: @16@0:8
// Implementation: 0x108ccd49c

// -[SCPreviewToolBarButtonItemImpl toolLabel]
// Type encoding: @16@0:8
// Implementation: 0x108ccd4a0

// -[SCPreviewToolBarButtonItemImpl resizeButtonAnimationWithScale:isHighlighted:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x108ccd580

// -[SCPreviewToolBarButtonItemImpl setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccd5c0

// -[SCPreviewToolBarButtonItemImpl setAccessibilityLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccd618

// -[SCPreviewToolBarButtonItemImpl setDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccd670

// -[SCPreviewToolBarButtonItemImpl alphaForCurrentState]
// Type encoding: d16@0:8
// Implementation: 0x108ccd6c4

// -[SCPreviewToolBarButtonItemImpl setAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ccd6e8

// -[SCPreviewToolBarButtonItemImpl setSelectionStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ccd74c

// -[SCPreviewToolBarButtonItemImpl hideTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7a4

// -[SCPreviewToolBarButtonItemImpl showTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7ac

// -[SCPreviewToolBarButtonItemImpl growTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7b4

// -[SCPreviewToolBarButtonItemImpl shrinkTrashIcon]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7bc

// -[SCPreviewToolBarButtonItemImpl viewForLayoutConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108ccd7c4

// -[SCPreviewToolBarButtonItemImpl selectItemAnimationFinished]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7c8

// -[SCPreviewToolBarButtonItemImpl setUndoButtonEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccd7cc

// -[SCPreviewToolBarButtonItemImpl parentToolbarBecameEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccd7d0

// -[SCPreviewToolBarButtonItemImpl toolButtonDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x108ccd7d4

// -[SCPreviewToolBarButtonItemImpl toolButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccd8c4

// -[SCPreviewToolBarButtonItemImpl updateImage:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ccd954

// -[SCPreviewToolBarButtonItemImpl updateSelectedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccd9a8

// -[SCPreviewToolBarButtonItemImpl setLoadingIndicatorVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccd9ec

// -[SCPreviewToolBarButtonItemImpl itemConfig]
// Type encoding: @16@0:8
// Implementation: 0x108ccdad4

// -[SCPreviewToolBarButtonItemImpl itemDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108ccdadc

// -[SCPreviewToolBarButtonItemImpl setItemDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdaf4

// -[SCPreviewToolBarButtonItemImpl itemAction]
// Type encoding: :16@0:8
// Implementation: 0x108ccdb00

// -[SCPreviewToolBarButtonItemImpl setItemAction:]
// Type encoding: v24@0:8:16
// Implementation: 0x108ccdb08

// -[SCPreviewToolBarButtonItemImpl itemTarget]
// Type encoding: @16@0:8
// Implementation: 0x108ccdb10

// -[SCPreviewToolBarButtonItemImpl setItemTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdb28

// -[SCPreviewToolBarButtonItemImpl isToolButtonLoaded]
// Type encoding: B16@0:8
// Implementation: 0x108ccdb34

// -[SCPreviewToolBarButtonItemImpl setToolButtonLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccdb3c

// -[SCPreviewToolBarButtonItemImpl selectionStyle]
// Type encoding: q16@0:8
// Implementation: 0x108ccdb44

// -[SCPreviewToolBarButtonItemImpl presentationStyle]
// Type encoding: q16@0:8
// Implementation: 0x108ccdb4c

// -[SCPreviewToolBarButtonItemImpl setPresentationStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ccdb54

// -[SCPreviewToolBarButtonItemImpl isSelected]
// Type encoding: B16@0:8
// Implementation: 0x108ccdb5c

// -[SCPreviewToolBarButtonItemImpl accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x108ccdb64

// -[SCPreviewToolBarButtonItemImpl allowsLongPress]
// Type encoding: B16@0:8
// Implementation: 0x108ccdb6c

// -[SCPreviewToolBarButtonItemImpl setAllowsLongPress:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccdb74

// -[SCPreviewToolBarButtonItemImpl needBottomAccessoryAnimation]
// Type encoding: B16@0:8
// Implementation: 0x108ccdb7c

// -[SCPreviewToolBarButtonItemImpl setNeedBottomAccessoryAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccdb84

// -[SCPreviewToolBarButtonItemImpl disabled]
// Type encoding: B16@0:8
// Implementation: 0x108ccdb8c

// -[SCPreviewToolBarButtonItemImpl alpha]
// Type encoding: d16@0:8
// Implementation: 0x108ccdb94

// -[SCPreviewToolBarButtonItemImpl selectedVerticalOffset]
// Type encoding: d16@0:8
// Implementation: 0x108ccdb9c

// -[SCPreviewToolBarButtonItemImpl setSelectedVerticalOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ccdba4

// -[SCPreviewToolBarButtonItemImpl leftAccessoryViews]
// Type encoding: @16@0:8
// Implementation: 0x108ccdbac

// -[SCPreviewToolBarButtonItemImpl setLeftAccessoryViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdbb4

// -[SCPreviewToolBarButtonItemImpl bottomAccessoryViews]
// Type encoding: @16@0:8
// Implementation: 0x108ccdbbc

// -[SCPreviewToolBarButtonItemImpl setBottomAccessoryViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdbc4

// -[SCPreviewToolBarButtonItemImpl topAccessoryViews]
// Type encoding: @16@0:8
// Implementation: 0x108ccdbcc

// -[SCPreviewToolBarButtonItemImpl setTopAccessoryViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdbd4

// -[SCPreviewToolBarButtonItemImpl shouldStaySelectedOnFilterStacked]
// Type encoding: B16@0:8
// Implementation: 0x108ccdbdc

// -[SCPreviewToolBarButtonItemImpl setShouldStaySelectedOnFilterStacked:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccdbe4

// -[SCPreviewToolBarButtonItemImpl iconStyle]
// Type encoding: Q16@0:8
// Implementation: 0x108ccdbec

// -[SCPreviewToolBarButtonItemImpl setPreviewToolButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdbf4

// -[SCPreviewToolBarButtonItemImpl setToolLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccdc24

// -[SCPreviewToolBarButtonItemImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ccdc54

// +[SCPreviewToolBarButtonItemImpl barButtonWithItemType:target:selector:]
// Type encoding: @40@0:8q16@24:32
// Implementation: 0x108cccefc

// +[SCPreviewToolBarButtonItemImpl barButtonWithItemType:iconStyle:target:selector:]
// Type encoding: @48@0:8q16Q24@32:40
// Implementation: 0x108cccf60

// +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cccfd0

// +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:buttonSize:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108cccfdc

// +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:text:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ccd060

// +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:titleText:loadingText:state:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x108ccd138

// +[SCPreviewToolBarButtonItemImpl _configureGrowingButton:withSize:imageName:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x108ccda28

@end
