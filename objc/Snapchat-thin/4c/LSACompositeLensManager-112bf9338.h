// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSACompositeLensManager
// Superclass: NSObject
// Address: 0x112bf9338

@interface LSACompositeLensManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSACompositeLensManager initWithPerformer:lensComponent:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ada03a4

// -[LSACompositeLensManager warmupLensWithLensInfo:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada0454

// -[LSACompositeLensManager addLensWithLensInfo:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada076c

// -[LSACompositeLensManager removeLensWithLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada0a74

// -[LSACompositeLensManager setLensRectangles:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada0d54

// -[LSACompositeLensManager setLensRectangles:rectanglesTransform:completion:]
// Type encoding: v80@0:8@16{CGAffineTransform=dddddd}24@?72
// Implementation: 0x10ada1230

// -[LSACompositeLensManager setDestinationRect:forLensWithId:completion:]
// Type encoding: v64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@?56
// Implementation: 0x10ada1720

// -[LSACompositeLensManager setSourceRect:forLensWithId:completion:]
// Type encoding: v64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@?56
// Implementation: 0x10ada1aa4

// -[LSACompositeLensManager setCoreManager:announcer:]
// Type encoding: v40@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32
// Implementation: 0x10ada1e28

// -[LSACompositeLensManager _performUnsafeBlock:unsafeErrorCode:completion:]
// Type encoding: v40@0:8@?16q24@?32
// Implementation: 0x10ada1e9c

// -[LSACompositeLensManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ada1f6c

// -[LSACompositeLensManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ada1fa8

@end
