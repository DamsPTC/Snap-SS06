// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSynchronousSecurity
// Superclass: NSObject
// Address: 0x112cb3788

@interface SCLensSynchronousSecurity

// Property: validationFailures; attributes: T@"NSDictionary",&,N
// Property: areFailuresStored; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensSynchronousSecurity initWithUserPreferences:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100ba226c

// -[SCLensSynchronousSecurity init]
// Type encoding: @16@0:8
// Implementation: 0x10b72e970

// -[SCLensSynchronousSecurity areFailuresStored]
// Type encoding: B16@0:8
// Implementation: 0x10b72e9bc

// -[SCLensSynchronousSecurity verifyResource:withContentPath:checksum:error:]
// Type encoding: B48@0:8@16@24^@32^@40
// Implementation: 0x10b72e9cc

// -[SCLensSynchronousSecurity verifyContentAtPathValid:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10b72eb74

// -[SCLensSynchronousSecurity verifyData:fromURL:checksum:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x10b72ecf4

// -[SCLensSynchronousSecurity isAllowedToRequestContentWithUrlString:checksum:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b72edc8

// -[SCLensSynchronousSecurity setValidationFailures:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b72ef60

// -[SCLensSynchronousSecurity validationFailures]
// Type encoding: @16@0:8
// Implementation: 0x10b72f044

// -[SCLensSynchronousSecurity _verifyBase64Signature:contentId:contentHash:contentUrlString:targetHash:error:]
// Type encoding: B64@0:8@16@24@32@40@48^@56
// Implementation: 0x10b72f1a0

// -[SCLensSynchronousSecurity _updateValidationFailuresForKey:isValid:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b72f37c

// -[SCLensSynchronousSecurity _setContentValid:atPath:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10b72f544

// -[SCLensSynchronousSecurity _appVersion]
// Type encoding: @16@0:8
// Implementation: 0x10b72f720

// -[SCLensSynchronousSecurity _publicKey]
// Type encoding: @16@0:8
// Implementation: 0x10b72f7b4

// -[SCLensSynchronousSecurity _validationFailureKeyWithUrlString:checksum:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b72f7c0

// -[SCLensSynchronousSecurity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b72f7cc

@end
