// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiIndexPicker
// Superclass: UIPickerView
// Address: 0x112b98a38

@interface SCValdiIndexPicker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiIndexPicker initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080a9a30

// -[SCValdiIndexPicker convertPoint:fromView:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080a9a90

// -[SCValdiIndexPicker convertPoint:toView:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080a9a94

// -[SCValdiIndexPicker hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x1080a9a98

// -[SCValdiIndexPicker willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x1080a9b74

// -[SCValdiIndexPicker numberOfComponentsInPickerView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1080a9b7c

// -[SCValdiIndexPicker pickerView:numberOfRowsInComponent:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1080a9b84

// -[SCValdiIndexPicker pickerView:titleForRow:forComponent:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1080a9b94

// -[SCValdiIndexPicker pickerView:didSelectRow:inComponent:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1080a9c0c

// -[SCValdiIndexPicker valdi_notifySelectRow:]
// Type encoding: v24@0:8q16
// Implementation: 0x1080a9c14

// -[SCValdiIndexPicker valdi_setContent:labels:animator:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1080a9d3c

// -[SCValdiIndexPicker valdi_setOnChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a9ecc

// -[SCValdiIndexPicker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080aa1f0

// +[SCValdiIndexPicker _valdiContentComponents]
// Type encoding: @16@0:8
// Implementation: 0x1080a9f00

// +[SCValdiIndexPicker bindAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a9fc8

@end
