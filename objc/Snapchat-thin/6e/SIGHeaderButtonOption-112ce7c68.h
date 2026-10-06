// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGHeaderButtonOption
// Superclass: NSObject
// Address: 0x112ce7c68

@interface SIGHeaderButtonOption

// Property: tooltipOption; attributes: T@"SIGTooltipOption",&,N,V_tooltipOption
// Property: tooltipPresenter; attributes: T@"<SIGTooltipPresenter>",W,N,V_tooltipPresenter
// Property: tooltipDelegate; attributes: T@"<SIGHeaderButtonOptionTooltipDelegate>",W,N,V_tooltipDelegate
// Property: spacer; attributes: TB,R,N,GisSpacer
// Property: text; attributes: T@"NSString",C,N,V_text
// Property: typeStyle; attributes: TQ,N,V_typeStyle
// Property: textPositionLeading; attributes: TB,N,GisTextPositionLeading,V_textPositionLeading
// Property: icon; attributes: T@"UIImage",C,N,V_icon
// Property: accessibilityIdentifier; attributes: T@"NSString",C,N,V_accessibilityIdentifier
// Property: accessibilityLabel; attributes: T@"NSString",C,N,V_accessibilityLabel
// Property: badge; attributes: T@"SIGHeaderButtonBadge",C,N,V_badge
// Property: bottomBadge; attributes: T@"UIImage",C,N,V_bottomBadge
// Property: isLoading; attributes: TB,N,V_isLoading
// Property: usesCustomBackgroundWhenBadged; attributes: TB,N,V_usesCustomBackgroundWhenBadged
// Property: initiallyHidden; attributes: TB,R,N,GisInitiallyHidden,V_initiallyHidden
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGHeaderButtonOption initWithIcon:target:selector:]
// Type encoding: @40@0:8@16@24:32
// Implementation: 0x100810b50

// -[SIGHeaderButtonOption copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b854598

// -[SIGHeaderButtonOption isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b854710

// -[SIGHeaderButtonOption hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b8548b8

// -[SIGHeaderButtonOption isSpacer]
// Type encoding: B16@0:8
// Implementation: 0x10083df60

// -[SIGHeaderButtonOption trigger]
// Type encoding: v16@0:8
// Implementation: 0x10b854a50

// -[SIGHeaderButtonOption _tooltipStyle]
// Type encoding: Q16@0:8
// Implementation: 0x10b854a5c

// -[SIGHeaderButtonOption setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b854a64

// -[SIGHeaderButtonOption setTypeStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b854b48

// -[SIGHeaderButtonOption setTextPositionLeading:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b854bec

// -[SIGHeaderButtonOption setIcon:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6708c

// -[SIGHeaderButtonOption setAccessibilityIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100810e44

// -[SIGHeaderButtonOption setAccessibilityLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x100810f80

// -[SIGHeaderButtonOption setBadge:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083f7b8

// -[SIGHeaderButtonOption setBottomBadge:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c66d58

// -[SIGHeaderButtonOption setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c80e88

// -[SIGHeaderButtonOption setTooltipOption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b854df8

// -[SIGHeaderButtonOption setTooltipPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100820690

// -[SIGHeaderButtonOption presentTooltipWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b854edc

// -[SIGHeaderButtonOption presentTooltipWithText:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10b854ee4

// -[SIGHeaderButtonOption presentTooltipWithText:duration:style:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x10b854eec

// -[SIGHeaderButtonOption presentTooltipWithText:duration:style:trailingAccessoryView:delegate:]
// Type encoding: v56@0:8@16d24Q32@40@48
// Implementation: 0x10b854ef8

// -[SIGHeaderButtonOption _presentTooltipWithText:duration:style:trailingAccessoryView:delegate:]
// Type encoding: v56@0:8@16d24Q32@40@48
// Implementation: 0x10b854efc

// -[SIGHeaderButtonOption dismissTooltipIfPresented]
// Type encoding: v16@0:8
// Implementation: 0x10b854fb0

// -[SIGHeaderButtonOption addObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083ddcc

// -[SIGHeaderButtonOption removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083dd08

// -[SIGHeaderButtonOption forEachObserver:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100810ed8

// -[SIGHeaderButtonOption text]
// Type encoding: @16@0:8
// Implementation: 0x1008247bc

// -[SIGHeaderButtonOption typeStyle]
// Type encoding: Q16@0:8
// Implementation: 0x10083cb4c

// -[SIGHeaderButtonOption isTextPositionLeading]
// Type encoding: B16@0:8
// Implementation: 0x10083cc58

// -[SIGHeaderButtonOption icon]
// Type encoding: @16@0:8
// Implementation: 0x10083cc60

// -[SIGHeaderButtonOption accessibilityIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10083df08

// -[SIGHeaderButtonOption accessibilityLabel]
// Type encoding: @16@0:8
// Implementation: 0x10083df58

// -[SIGHeaderButtonOption badge]
// Type encoding: @16@0:8
// Implementation: 0x100838944

// -[SIGHeaderButtonOption bottomBadge]
// Type encoding: @16@0:8
// Implementation: 0x10083d01c

// -[SIGHeaderButtonOption isLoading]
// Type encoding: B16@0:8
// Implementation: 0x10083d34c

// -[SIGHeaderButtonOption usesCustomBackgroundWhenBadged]
// Type encoding: B16@0:8
// Implementation: 0x10083cc50

// -[SIGHeaderButtonOption setUsesCustomBackgroundWhenBadged:]
// Type encoding: v20@0:8B16
// Implementation: 0x10083f580

// -[SIGHeaderButtonOption isInitiallyHidden]
// Type encoding: B16@0:8
// Implementation: 0x1008212c8

// -[SIGHeaderButtonOption tooltipOption]
// Type encoding: @16@0:8
// Implementation: 0x10b854fc4

// -[SIGHeaderButtonOption tooltipPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1008bde34

// -[SIGHeaderButtonOption tooltipDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b854fcc

// -[SIGHeaderButtonOption setTooltipDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083dcb8

// -[SIGHeaderButtonOption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b854fe4

@end
