// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKButton
// Superclass: FBSDKImpressionLoggingButton
// Address: 0x1129e5f28

@interface FBSDKButton

// Property: skipIntrinsicContentSizing; attributes: TB,N,V_skipIntrinsicContentSizing
// Property: isExplicitlyDisabled; attributes: TB,N,V_isExplicitlyDisabled
// Property: implicitlyDisabled; attributes: TB,R,N,GisImplicitlyDisabled

// -[FBSDKButton initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10494fce8

// -[FBSDKButton awakeFromNib]
// Type encoding: v16@0:8
// Implementation: 0x10494fd4c

// -[FBSDKButton setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10494fe10

// -[FBSDKButton imageRectForContentRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10494fe24

// -[FBSDKButton intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10494ff18

// -[FBSDKButton sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10494ff74

// -[FBSDKButton sizeToFit]
// Type encoding: v16@0:8
// Implementation: 0x104950048

// -[FBSDKButton titleRectForContentRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1049500a0

// -[FBSDKButton logTapEventWithEventName:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049502cc

// -[FBSDKButton checkImplicitlyDisabled]
// Type encoding: v16@0:8
// Implementation: 0x104950374

// -[FBSDKButton configureButton]
// Type encoding: v16@0:8
// Implementation: 0x104950408

// -[FBSDKButton configureWithIcon:title:backgroundColor:highlightedColor:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104950490

// -[FBSDKButton configureWithIcon:title:backgroundColor:highlightedColor:selectedTitle:selectedIcon:selectedColor:selectedHighlightedColor:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1049504b8

// -[FBSDKButton defaultBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x1049504c4

// -[FBSDKButton defaultDisabledColor]
// Type encoding: @16@0:8
// Implementation: 0x1049504ec

// -[FBSDKButton defaultFont]
// Type encoding: @16@0:8
// Implementation: 0x104950514

// -[FBSDKButton defaultHighlightedColor]
// Type encoding: @16@0:8
// Implementation: 0x104950530

// -[FBSDKButton defaultIcon]
// Type encoding: @16@0:8
// Implementation: 0x104950558

// -[FBSDKButton defaultSelectedColor]
// Type encoding: @16@0:8
// Implementation: 0x104950574

// -[FBSDKButton highlightedContentColor]
// Type encoding: @16@0:8
// Implementation: 0x104950578

// -[FBSDKButton isImplicitlyDisabled]
// Type encoding: B16@0:8
// Implementation: 0x1049505a0

// -[FBSDKButton sizeThatFits:title:]
// Type encoding: {CGSize=dd}40@0:8{CGSize=dd}16@32
// Implementation: 0x1049505a8

// -[FBSDKButton textSizeForText:font:constrainedSize:lineBreakMode:]
// Type encoding: {CGSize=dd}56@0:8@16@24{CGSize=dd}32q48
// Implementation: 0x1049506f4

// -[FBSDKButton _applicationDidBecomeActiveNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x104950878

// -[FBSDKButton _backgroundImageWithColor:cornerRadius:scale:]
// Type encoding: @40@0:8@16d24d32
// Implementation: 0x10495087c

// -[FBSDKButton _configureWithIcon:title:backgroundColor:highlightedColor:selectedTitle:selectedIcon:selectedColor:selectedHighlightedColor:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104950a44

// -[FBSDKButton _fontSizeForHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x104951040

// -[FBSDKButton _heightForContentRect:]
// Type encoding: d48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10495105c

// -[FBSDKButton _heightForFont:]
// Type encoding: d24@0:8@16
// Implementation: 0x1049510bc

// -[FBSDKButton _marginForHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x1049510ec

// -[FBSDKButton _paddingForHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x104951108

// -[FBSDKButton _textPaddingCorrectionForHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x104951140

// -[FBSDKButton skipIntrinsicContentSizing]
// Type encoding: B16@0:8
// Implementation: 0x10495115c

// -[FBSDKButton setSkipIntrinsicContentSizing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10495116c

// -[FBSDKButton isExplicitlyDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10495117c

// -[FBSDKButton setIsExplicitlyDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10495118c

// +[FBSDKButton applicationActivationNotifier]
// Type encoding: @16@0:8
// Implementation: 0x10494fc38

// +[FBSDKButton setApplicationActivationNotifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494fc44

// +[FBSDKButton eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10494fc54

// +[FBSDKButton setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494fc60

// +[FBSDKButton accessTokenProvider]
// Type encoding: #16@0:8
// Implementation: 0x10494fc70

// +[FBSDKButton setAccessTokenProvider:]
// Type encoding: v24@0:8#16
// Implementation: 0x10494fc7c

// +[FBSDKButton configureWithApplicationActivationNotifier:eventLogger:accessTokenProvider:]
// Type encoding: v40@0:8@16@24#32
// Implementation: 0x10494fc88

@end
