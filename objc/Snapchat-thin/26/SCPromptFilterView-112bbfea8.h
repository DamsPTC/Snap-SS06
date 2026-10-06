// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPromptFilterView
// Superclass: SCOverlayFilterView
// Address: 0x112bbfea8

@interface SCPromptFilterView

// Property: promptOverlayContainerView; attributes: T@"UIView",&,N,V_promptOverlayContainerView
// Property: turnOnFiltersButton; attributes: T@"UIButton",&,N,V_turnOnFiltersButton
// Property: delegate; attributes: T@"<SCPromptFilterViewDelegate>",W,N,V_delegate

// -[SCPromptFilterView initWithFrame:config:userSession:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x108d0a63c

// -[SCPromptFilterView drawScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d0b94c

// -[SCPromptFilterView hasImage]
// Type encoding: B16@0:8
// Implementation: 0x108d0b950

// -[SCPromptFilterView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0b958

// -[SCPromptFilterView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d0b98c

// -[SCPromptFilterView turnOnFiltersButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x108d0ba44

// -[SCPromptFilterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d0ba74

// -[SCPromptFilterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0ba94

// -[SCPromptFilterView promptOverlayContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108d0baa8

// -[SCPromptFilterView setPromptOverlayContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0bab8

// -[SCPromptFilterView turnOnFiltersButton]
// Type encoding: @16@0:8
// Implementation: 0x108d0baf8

// -[SCPromptFilterView setTurnOnFiltersButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0bb08

// -[SCPromptFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d0bb48

@end
