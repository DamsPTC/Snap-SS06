// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQuickCaptionManagerImpl
// Superclass: NSObject
// Address: 0x112bc3c38

@interface SCQuickCaptionManagerImpl

// Property: caption; attributes: T@"<SCCaption>",&,N,V_caption
// Property: initialState; attributes: T@"<SCCaptionState>",&,N,V_initialState
// Property: temporaryState; attributes: T@"<SCCaptionState>",&,N,V_temporaryState
// Property: originalContentBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_originalContentBounds
// Property: isLagunaMedia; attributes: TB,N,V_isLagunaMedia
// Property: currentTransform; attributes: T{CGAffineTransform=dddddd},N,V_currentTransform

// -[SCQuickCaptionManagerImpl initWithCaptionState:originalContentBounds:creativeToolsABProvider:]
// Type encoding: @64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56
// Implementation: 0x108e316b0

// -[SCQuickCaptionManagerImpl newViewForCurrentCaptionModeWithSuperviewBounds:superviewContentBounds:]
// Type encoding: @80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x108e31784

// -[SCQuickCaptionManagerImpl cleanUpLastMode]
// Type encoding: v16@0:8
// Implementation: 0x108e31b40

// -[SCQuickCaptionManagerImpl state]
// Type encoding: @16@0:8
// Implementation: 0x108e31bf4

// -[SCQuickCaptionManagerImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x108e31c8c

// -[SCQuickCaptionManagerImpl text]
// Type encoding: @16@0:8
// Implementation: 0x108e31d28

// -[SCQuickCaptionManagerImpl captionPresent]
// Type encoding: B16@0:8
// Implementation: 0x108e31dc8

// -[SCQuickCaptionManagerImpl setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e31e58

// -[SCQuickCaptionManagerImpl setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e31efc

// -[SCQuickCaptionManagerImpl caption]
// Type encoding: @16@0:8
// Implementation: 0x108e31f34

// -[SCQuickCaptionManagerImpl setCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e31f3c

// -[SCQuickCaptionManagerImpl initialState]
// Type encoding: @16@0:8
// Implementation: 0x108e31f6c

// -[SCQuickCaptionManagerImpl setInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e31f74

// -[SCQuickCaptionManagerImpl temporaryState]
// Type encoding: @16@0:8
// Implementation: 0x108e31fa4

// -[SCQuickCaptionManagerImpl setTemporaryState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e31fac

// -[SCQuickCaptionManagerImpl originalContentBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e31fdc

// -[SCQuickCaptionManagerImpl setOriginalContentBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e31fe8

// -[SCQuickCaptionManagerImpl isLagunaMedia]
// Type encoding: B16@0:8
// Implementation: 0x108e31ff4

// -[SCQuickCaptionManagerImpl setIsLagunaMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e31ffc

// -[SCQuickCaptionManagerImpl currentTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x108e32004

// -[SCQuickCaptionManagerImpl setCurrentTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x108e3201c

// -[SCQuickCaptionManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e32034

@end
