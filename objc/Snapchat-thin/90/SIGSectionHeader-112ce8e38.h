// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGSectionHeader
// Superclass: UIView
// Address: 0x112ce8e38

@interface SIGSectionHeader

// Property: trailingAccessoryView; attributes: T@"UIView",&,N,V_trailingAccessoryView
// Property: title; attributes: T@"NSString",C,N
// Property: subtitle; attributes: T@"NSString",C,N
// Property: trailingAccessoryViewHasButton; attributes: TB,N,V_trailingAccessoryViewHasButton
// Property: titleTextColor; attributes: Tq,N,V_titleTextColor
// Property: subtitleTextColor; attributes: Tq,N,V_subtitleTextColor
// Property: contentInsets; attributes: T{UIEdgeInsets=dddd},N,V_contentInsets
// Property: badgeView; attributes: T@"SIGBadgeView",&,N,V_badgeView
// Property: specOverride; attributes: T@"SIGSpecOverride",&,N,V_specOverride

// -[SIGSectionHeader initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b86f7b4

// -[SIGSectionHeader intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b86f8ec

// -[SIGSectionHeader title]
// Type encoding: @16@0:8
// Implementation: 0x10b86f94c

// -[SIGSectionHeader setTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b86f95c

// -[SIGSectionHeader setTitleTextColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b86fa3c

// -[SIGSectionHeader subtitle]
// Type encoding: @16@0:8
// Implementation: 0x10b86faa4

// -[SIGSectionHeader setBadgeView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b86fab4

// -[SIGSectionHeader setSpecOverride:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b86fb28

// -[SIGSectionHeader setSubtitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b86fb88

// -[SIGSectionHeader setSubtitleTextColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b86fd58

// -[SIGSectionHeader setTrailingAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b86fdd0

// -[SIGSectionHeader setContentInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b86fea8

// -[SIGSectionHeader setActionAccessoryWithText:target:selector:]
// Type encoding: v40@0:8@16@24:32
// Implementation: 0x10b86ff78

// -[SIGSectionHeader setButtonAccessoryWithText:icon:accessibilityId:target:selector:]
// Type encoding: v56@0:8@16@24@32@40:48
// Implementation: 0x10b870050

// -[SIGSectionHeader setButtonAccessoryWithText:icon:target:selector:]
// Type encoding: v48@0:8@16@24@32:40
// Implementation: 0x10b870198

// -[SIGSectionHeader setButtonAccessoryWithText:icon:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b8701a8

// -[SIGSectionHeader setButtonAccessoryWithText:icon:accessibilityId:block:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b870230

// -[SIGSectionHeader _runActionBlock]
// Type encoding: v16@0:8
// Implementation: 0x10b8702d8

// -[SIGSectionHeader _deactivateExistingConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b8702f4

// -[SIGSectionHeader _activateNewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b870368

// -[SIGSectionHeader _rebuildLabelConstraintsForDynamicType]
// Type encoding: @16@0:8
// Implementation: 0x10b870420

// -[SIGSectionHeader _rebuildPrimaryRowConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10b8707c0

// -[SIGSectionHeader _rebuildLabelConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10b870c34

// -[SIGSectionHeader _rebuildTrailingAccessoryViewConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10b871244

// -[SIGSectionHeader trailingAccessoryViewHasButton]
// Type encoding: B16@0:8
// Implementation: 0x10b87145c

// -[SIGSectionHeader setTrailingAccessoryViewHasButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b87146c

// -[SIGSectionHeader titleTextColor]
// Type encoding: q16@0:8
// Implementation: 0x10b87147c

// -[SIGSectionHeader subtitleTextColor]
// Type encoding: q16@0:8
// Implementation: 0x10b87148c

// -[SIGSectionHeader contentInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b87149c

// -[SIGSectionHeader badgeView]
// Type encoding: @16@0:8
// Implementation: 0x10b8714b4

// -[SIGSectionHeader specOverride]
// Type encoding: @16@0:8
// Implementation: 0x10b8714c4

// -[SIGSectionHeader trailingAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10b8714d4

// -[SIGSectionHeader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b8714e4

// +[SIGSectionHeader heightWithSubtitle:]
// Type encoding: d20@0:8B16
// Implementation: 0x10b86f63c

// +[SIGSectionHeader heightWithSubtitle:hasButton:]
// Type encoding: d24@0:8B16B20
// Implementation: 0x10b86f654

// +[SIGSectionHeader isMultilineSubtitleWithSubtitle:constrainedToWidth:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x10b86f690

// +[SIGSectionHeader heightWithSubtitle:constrainedToWidth:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x10b86f738

// +[SIGSectionHeader heightWithSubtitle:hasButton:constrainedToWidth:]
// Type encoding: d36@0:8@16B24d28
// Implementation: 0x10b86f778

@end
