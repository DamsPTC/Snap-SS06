// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProductOptionPickerView
// Superclass: UIView
// Address: 0x112b38818

@interface SCProductOptionPickerView

// Property: pickerViewContainer; attributes: T@"UIScrollView",&,N,V_pickerViewContainer
// Property: delegate; attributes: T@"<SCProductOptionPickerViewDelegate>",W,N,V_delegate
// Property: title; attributes: T@"NSString",&,N,V_title
// Property: optionItems; attributes: T@"NSArray",&,N,V_optionItems
// Property: selectedItem; attributes: T@,W,N,V_selectedItem
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProductOptionPickerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106d74d28

// -[SCProductOptionPickerView _setupConstraints]
// Type encoding: v16@0:8
// Implementation: 0x106d750d4

// -[SCProductOptionPickerView setTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d75824

// -[SCProductOptionPickerView setOptionItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d75894

// -[SCProductOptionPickerView scrollToIndex:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106d758f8

// -[SCProductOptionPickerView numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d75990

// -[SCProductOptionPickerView tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106d75998

// -[SCProductOptionPickerView tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x106d759a8

// -[SCProductOptionPickerView tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d759b4

// -[SCProductOptionPickerView tableView:heightForFooterInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x106d75af0

// -[SCProductOptionPickerView tableView:heightForHeaderInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x106d75afc

// -[SCProductOptionPickerView tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d75b08

// -[SCProductOptionPickerView updateCell:titleAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d75ba8

// -[SCProductOptionPickerView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106d75cb0

// -[SCProductOptionPickerView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d75cd0

// -[SCProductOptionPickerView title]
// Type encoding: @16@0:8
// Implementation: 0x106d75ce4

// -[SCProductOptionPickerView optionItems]
// Type encoding: @16@0:8
// Implementation: 0x106d75cf4

// -[SCProductOptionPickerView selectedItem]
// Type encoding: @16@0:8
// Implementation: 0x106d75d04

// -[SCProductOptionPickerView setSelectedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d75d24

// -[SCProductOptionPickerView pickerViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x106d75d38

// -[SCProductOptionPickerView setPickerViewContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d75d48

// -[SCProductOptionPickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d75d88

@end
