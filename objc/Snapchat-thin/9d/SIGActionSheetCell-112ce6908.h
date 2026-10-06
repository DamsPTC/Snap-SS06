// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGActionSheetCell
// Superclass: SIGCell
// Address: 0x112ce6908

@interface SIGActionSheetCell

// Property: action; attributes: T@?,C,N,V_action
// Property: actionSheet; attributes: T@"SIGActionSheet",W,N,V_actionSheet
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGActionSheetCell initWithStyle:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b8291dc

// -[SIGActionSheetCell block:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b829348

// -[SIGActionSheetCell target:action:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x10b8293c0

// -[SIGActionSheetCell _markActionSpecifiedOrAssert]
// Type encoding: v16@0:8
// Implementation: 0x10b82942c

// -[SIGActionSheetCell _assertValidActionSheet]
// Type encoding: v16@0:8
// Implementation: 0x10b829440

// -[SIGActionSheetCell _possiblyInvokeActionBlock]
// Type encoding: v16@0:8
// Implementation: 0x10b829444

// -[SIGActionSheetCell _onLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8294a8

// -[SIGActionSheetCell _createLoadingIndicatorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b8294dc

// -[SIGActionSheetCell setSelected:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10b829688

// -[SIGActionSheetCell setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8297f4

// -[SIGActionSheetCell _addTarget:action:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x10b829964

// -[SIGActionSheetCell _sendActions]
// Type encoding: v16@0:8
// Implementation: 0x10b829974

// -[SIGActionSheetCell didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x10b8299b4

// -[SIGActionSheetCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b829a38

// -[SIGActionSheetCell actionSheet]
// Type encoding: @16@0:8
// Implementation: 0x10b829a50

// -[SIGActionSheetCell setActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b829a70

// -[SIGActionSheetCell action]
// Type encoding: @?16@0:8
// Implementation: 0x10b829a84

// -[SIGActionSheetCell setAction:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b829a94

// -[SIGActionSheetCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b829aa0

// +[SIGActionSheetCell descriptionCellWithText:description:accessoryView:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105eb3b00

// +[SIGActionSheetCell optionCellWithText:isCompressed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b8286c8

// +[SIGActionSheetCell optionCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b828780

// +[SIGActionSheetCell optionCellWithText:icon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b828788

// +[SIGActionSheetCell optionCellWithText:trailingIcon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b828820

// +[SIGActionSheetCell optionCellWithText:icon:width:height:isDestructive:]
// Type encoding: @52@0:8@16@24d32d40B48
// Implementation: 0x10b8288b8

// +[SIGActionSheetCell destructiveOptionCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b828970

// +[SIGActionSheetCell destructiveOptionCellWithText:icon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b8289a4

// +[SIGActionSheetCell errorCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b8289d8

// +[SIGActionSheetCell tallCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b828a88

// +[SIGActionSheetCell loadingCell]
// Type encoding: @16@0:8
// Implementation: 0x10b828adc

// +[SIGActionSheetCell loadingCellWithStyle:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b828ae4

// +[SIGActionSheetCell valueCellWithText:value:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b828b20

// +[SIGActionSheetCell descriptionCellWithText:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b828b80

// +[SIGActionSheetCell moreOptionsCellWithText:compressed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b828be0

// +[SIGActionSheetCell moreOptionsCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b828c14

// +[SIGActionSheetCell selectCellWithText:value:compressed:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10b828c1c

// +[SIGActionSheetCell selectCellWithText:value:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b828c64

// +[SIGActionSheetCell switchCellWithText:value:compressed:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10b828c6c

// +[SIGActionSheetCell switchCellWithText:value:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b828e88

// +[SIGActionSheetCell switchCellWithText:value:description:compressed:]
// Type encoding: @40@0:8@16B24@28B36
// Implementation: 0x10b828e90

// +[SIGActionSheetCell switchCellWithText:value:description:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x10b828f08

// +[SIGActionSheetCell sendToCellWithText:isCompressed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b828f10

// +[SIGActionSheetCell sendToCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b829034

// +[SIGActionSheetCell footerCellWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b82903c

// +[SIGActionSheetCell cardWithImage:titleText:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b8290a8

// +[SIGActionSheetCell cardWithTitleText:detailText:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b829160

@end
