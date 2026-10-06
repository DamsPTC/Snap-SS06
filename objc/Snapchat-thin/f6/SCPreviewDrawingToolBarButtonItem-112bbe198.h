// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewDrawingToolBarButtonItem
// Superclass: SCPreviewToolBarButtonItemImpl
// Address: 0x112bbe198

@interface SCPreviewDrawingToolBarButtonItem

// Property: color; attributes: T@"UIColor",C,N,V_color
// Property: delegate; attributes: T@"<SCPreviewDrawingToolBarButtonItemDelegate>",W,N,V_delegate
// Property: snapImage; attributes: T@"UIImage",&,N,V_snapImage
// Property: selectedMode; attributes: Tq,R,N,V_selectedMode
// Property: drawingView; attributes: T@"UIView<SCDrawingViewCommon>",&,N,V_drawingView
// Property: strawButton; attributes: T@"SCGrowingButton",&,N,V_strawButton
// Property: emoji; attributes: T@"NSString",R,N,V_emoji
// Property: colorPickerDelegate; attributes: T@"<SCPreviewToolbarColorPickerViewDelegate>",W,N,V_colorPickerDelegate
// Property: colorPickerView; attributes: T@"<SCPreviewToolbarColorPickerView>",R,N,V_colorPickerView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewDrawingToolBarButtonItem initWithBarButtonItemType:iconStyle:target:selector:initialColorPickerColor:colorPickerPaletteType:needEmojiBrushOnboardingAnimation:emojiBrushDisplayList:emojiBrushExtendList:interactionStateLogger:]
// Type encoding: @92@0:8q16Q24@32:40@48Q56B64@68@76@84
// Implementation: 0x108ccba24

// -[SCPreviewDrawingToolBarButtonItem setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccbb7c

// -[SCPreviewDrawingToolBarButtonItem setDrawingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccbe94

// -[SCPreviewDrawingToolBarButtonItem setUndoButtonEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccbf04

// -[SCPreviewDrawingToolBarButtonItem _updateUndoButtonStatus]
// Type encoding: v16@0:8
// Implementation: 0x108ccbf14

// -[SCPreviewDrawingToolBarButtonItem selectItemAnimationFinished]
// Type encoding: v16@0:8
// Implementation: 0x108ccc030

// -[SCPreviewDrawingToolBarButtonItem parentToolbarBecameEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ccc0c0

// -[SCPreviewDrawingToolBarButtonItem _undoPressed]
// Type encoding: v16@0:8
// Implementation: 0x108ccc134

// -[SCPreviewDrawingToolBarButtonItem _updateDrawingMode]
// Type encoding: v16@0:8
// Implementation: 0x108ccc1c0

// -[SCPreviewDrawingToolBarButtonItem _quitDrawing]
// Type encoding: v16@0:8
// Implementation: 0x108ccc25c

// -[SCPreviewDrawingToolBarButtonItem _setDrawingToolBarButtonItemSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccc2ac

// -[SCPreviewDrawingToolBarButtonItem _setupPaletteModelAndColorPickerView]
// Type encoding: v16@0:8
// Implementation: 0x108ccc498

// -[SCPreviewDrawingToolBarButtonItem emojiPickerView:didChangeEmoji:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ccc5e0

// -[SCPreviewDrawingToolBarButtonItem emojiPickerViewLayoutChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccc684

// -[SCPreviewDrawingToolBarButtonItem pickerViewDidPressInCompactMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccc744

// -[SCPreviewDrawingToolBarButtonItem pickerView:hideOtherPickers:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108ccc7d8

// -[SCPreviewDrawingToolBarButtonItem drawingViewDidStartDrawing:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccc9ec

// -[SCPreviewDrawingToolBarButtonItem drawingView:didEndDrawingWithStrokeSize:isResized:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x108ccca24

// -[SCPreviewDrawingToolBarButtonItem drawingViewDidStartPinchResize:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cccaa8

// -[SCPreviewDrawingToolBarButtonItem drawingViewDidFinishPinchResize:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cccae0

// -[SCPreviewDrawingToolBarButtonItem drawingView:didMoveToPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x108cccb18

// -[SCPreviewDrawingToolBarButtonItem toolbarColorPickerView:didChangeColor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108cccb68

// -[SCPreviewDrawingToolBarButtonItem toolbarColorPickerView:didTogglePaletteToType:selectedColor:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x108cccc54

// -[SCPreviewDrawingToolBarButtonItem delegate]
// Type encoding: @16@0:8
// Implementation: 0x108ccccb4

// -[SCPreviewDrawingToolBarButtonItem setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccccd4

// -[SCPreviewDrawingToolBarButtonItem snapImage]
// Type encoding: @16@0:8
// Implementation: 0x108cccce8

// -[SCPreviewDrawingToolBarButtonItem setSnapImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccccf8

// -[SCPreviewDrawingToolBarButtonItem selectedMode]
// Type encoding: q16@0:8
// Implementation: 0x108cccd38

// -[SCPreviewDrawingToolBarButtonItem drawingView]
// Type encoding: @16@0:8
// Implementation: 0x108cccd48

// -[SCPreviewDrawingToolBarButtonItem strawButton]
// Type encoding: @16@0:8
// Implementation: 0x108cccd58

// -[SCPreviewDrawingToolBarButtonItem setStrawButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cccd68

// -[SCPreviewDrawingToolBarButtonItem emoji]
// Type encoding: @16@0:8
// Implementation: 0x108cccda8

// -[SCPreviewDrawingToolBarButtonItem colorPickerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108cccdb8

// -[SCPreviewDrawingToolBarButtonItem setColorPickerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cccdd8

// -[SCPreviewDrawingToolBarButtonItem colorPickerView]
// Type encoding: @16@0:8
// Implementation: 0x108cccdec

// -[SCPreviewDrawingToolBarButtonItem color]
// Type encoding: @16@0:8
// Implementation: 0x108cccdfc

// -[SCPreviewDrawingToolBarButtonItem setColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ccce0c

// -[SCPreviewDrawingToolBarButtonItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ccce18

@end
