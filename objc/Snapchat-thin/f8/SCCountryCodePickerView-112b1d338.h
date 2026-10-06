// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCountryCodePickerView
// Superclass: UIPickerView
// Address: 0x112b1d338

@interface SCCountryCodePickerView

// Property: countryCodes; attributes: T@"NSArray",&,N,V_countryCodes
// Property: countryCodeDelegate; attributes: T@"<SCCountryCodePickerViewDelegate>",W,N,V_countryCodeDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCountryCodePickerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106b96a3c

// -[SCCountryCodePickerView setSelectedCountryCode:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106b96b10

// -[SCCountryCodePickerView didTapRow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b96bac

// -[SCCountryCodePickerView numberOfComponentsInPickerView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106b96cd8

// -[SCCountryCodePickerView pickerView:numberOfRowsInComponent:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106b96ce0

// -[SCCountryCodePickerView pickerView:didSelectRow:inComponent:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106b96d1c

// -[SCCountryCodePickerView pickerView:titleForRow:forComponent:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x106b96da0

// -[SCCountryCodePickerView pickerView:rowHeightForComponent:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x106b96f04

// -[SCCountryCodePickerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106b96f10

// -[SCCountryCodePickerView isSpinning]
// Type encoding: B16@0:8
// Implementation: 0x106b96f18

// -[SCCountryCodePickerView countryCodeDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106b97048

// -[SCCountryCodePickerView setCountryCodeDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b97068

// -[SCCountryCodePickerView countryCodes]
// Type encoding: @16@0:8
// Implementation: 0x106b9707c

// -[SCCountryCodePickerView setCountryCodes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9708c

// -[SCCountryCodePickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b970cc

@end
