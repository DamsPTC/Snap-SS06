// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerPillView
// Superclass: UIView
// Address: 0x112bc5f38

@interface SCStickerPillView

// Property: labelFormatter; attributes: T@"SCStickerPillViewLabelFormatter",&,N,V_labelFormatter
// Property: backgroundView; attributes: T@"UIView",R,N,V_backgroundView
// Property: solidBackgroundView; attributes: T@"UIView",R,N,V_solidBackgroundView
// Property: rainbowBackgroundView; attributes: T@"SCStickerPillRainbowView",R,N,V_rainbowBackgroundView
// Property: iconView; attributes: T@"SCNetworkImageView",R,N,V_iconView
// Property: label; attributes: T@"UILabel",R,N,V_label
// Property: iconLeadingConstraint; attributes: T@"NSLayoutConstraint",R,N,V_iconLeadingConstraint
// Property: labelCenterYConstraint; attributes: T@"NSLayoutConstraint",R,N,V_labelCenterYConstraint
// Property: labelTrailingConstraint; attributes: T@"NSLayoutConstraint",R,N,V_labelTrailingConstraint
// Property: viewModel; attributes: T@"SCStickerPillViewModel",&,N,V_viewModel
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N
// Property: style; attributes: TQ,N,V_style
// Property: displayFont; attributes: T@"UIFont",R,N,V_displayFont
// Property: iconFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N

// -[SCStickerPillView initWithViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e82624

// -[SCStickerPillView _shouldDrawPillAsCircle]
// Type encoding: B16@0:8
// Implementation: 0x108e82780

// -[SCStickerPillView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e827a8

// -[SCStickerPillView _setupSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e82838

// -[SCStickerPillView _addAndSetupBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x108e82890

// -[SCStickerPillView _addAndSetupIconViewWithTintColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e829ec

// -[SCStickerPillView _addAndSetupLabelWithTintColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e82b54

// -[SCStickerPillView _setupConstraints]
// Type encoding: v16@0:8
// Implementation: 0x108e82c08

// -[SCStickerPillView _addBackgroundViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x108e82c34

// -[SCStickerPillView _addIconViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x108e83338

// -[SCStickerPillView _addLabelConstraints]
// Type encoding: v16@0:8
// Implementation: 0x108e836c0

// -[SCStickerPillView _adjustLabelCenterYWithFormat:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e83a64

// -[SCStickerPillView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e83dfc

// -[SCStickerPillView _updateFromViewModel]
// Type encoding: v16@0:8
// Implementation: 0x108e83e3c

// -[SCStickerPillView _updateIconImage]
// Type encoding: v16@0:8
// Implementation: 0x108e83e60

// -[SCStickerPillView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e840a0

// -[SCStickerPillView updateText]
// Type encoding: v16@0:8
// Implementation: 0x108e84170

// -[SCStickerPillView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e843f8

// -[SCStickerPillView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x108e84458

// -[SCStickerPillView setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e8449c

// -[SCStickerPillView _updateStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e844ec

// -[SCStickerPillView _updateBackground]
// Type encoding: v16@0:8
// Implementation: 0x108e84520

// -[SCStickerPillView _updateShadows]
// Type encoding: v16@0:8
// Implementation: 0x108e84628

// -[SCStickerPillView _updateTextColor]
// Type encoding: v16@0:8
// Implementation: 0x108e846c8

// -[SCStickerPillView _updateIconColor]
// Type encoding: v16@0:8
// Implementation: 0x108e8477c

// -[SCStickerPillView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e84840

// -[SCStickerPillView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108e84850

// -[SCStickerPillView formatForText:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e848b4

// -[SCStickerPillView iconFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e848c4

// -[SCStickerPillView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x108e848d4

// -[SCStickerPillView style]
// Type encoding: Q16@0:8
// Implementation: 0x108e848e4

// -[SCStickerPillView displayFont]
// Type encoding: @16@0:8
// Implementation: 0x108e848f4

// -[SCStickerPillView labelFormatter]
// Type encoding: @16@0:8
// Implementation: 0x108e84904

// -[SCStickerPillView setLabelFormatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e84914

// -[SCStickerPillView backgroundView]
// Type encoding: @16@0:8
// Implementation: 0x108e84954

// -[SCStickerPillView solidBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x108e84964

// -[SCStickerPillView rainbowBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x108e84974

// -[SCStickerPillView iconView]
// Type encoding: @16@0:8
// Implementation: 0x108e84984

// -[SCStickerPillView label]
// Type encoding: @16@0:8
// Implementation: 0x108e84994

// -[SCStickerPillView iconLeadingConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e849a4

// -[SCStickerPillView labelCenterYConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e849b4

// -[SCStickerPillView labelTrailingConstraint]
// Type encoding: @16@0:8
// Implementation: 0x108e849c4

// -[SCStickerPillView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e849d4

@end
