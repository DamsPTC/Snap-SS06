// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSideButtonImpl
// Superclass: SCGrowingButton
// Address: 0x112b59f68

@interface SCMemoriesSideButtonImpl

// Property: maskImageView; attributes: T@"UIImageView",&,N,V_maskImageView
// Property: thumbnailView; attributes: T@"UIImageView",&,N,V_thumbnailView
// Property: shapeMaskView; attributes: T@"SIGShapeView",&,N,V_shapeMaskView
// Property: specStateImageView; attributes: T@"UIImageView",&,N,V_specStateImageView
// Property: enabled; attributes: TB,N,GisEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: state; attributes: T@"SCMemoriesSideButtonSpectaclesState",C,N,V_state

// -[SCMemoriesSideButtonImpl initWithDelegate:alwaysOnCarouselEnabled:circumstanceEngine:alwaysShowEmptyButton:showTextLabel:userContext:]
// Type encoding: @52@0:8@16B24@28B36B40q44
// Implementation: 0x10085a820

// -[SCMemoriesSideButtonImpl setState:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10701ef3c

// -[SCMemoriesSideButtonImpl toggleFeaturedBadge:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701f128

// -[SCMemoriesSideButtonImpl toggleBlueDotStyleBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701f224

// -[SCMemoriesSideButtonImpl toggleImportIcon:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701f288

// -[SCMemoriesSideButtonImpl isDisplayingFeaturedBadge]
// Type encoding: B16@0:8
// Implementation: 0x10701f484

// -[SCMemoriesSideButtonImpl configureWithRecentThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701f494

// -[SCMemoriesSideButtonImpl updateThumbnailView]
// Type encoding: v16@0:8
// Implementation: 0x10701f644

// -[SCMemoriesSideButtonImpl addTooltipWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701faac

// -[SCMemoriesSideButtonImpl updateThumbnailViewWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701fcc8

// -[SCMemoriesSideButtonImpl specStateImageView]
// Type encoding: @16@0:8
// Implementation: 0x10701fce0

// -[SCMemoriesSideButtonImpl maskImageView]
// Type encoding: @16@0:8
// Implementation: 0x10701fd60

// -[SCMemoriesSideButtonImpl thumbnailView]
// Type encoding: @16@0:8
// Implementation: 0x10701fed0

// -[SCMemoriesSideButtonImpl shapeMaskView]
// Type encoding: @16@0:8
// Implementation: 0x10701ffa4

// -[SCMemoriesSideButtonImpl buttonShapeMaskViewPathRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107020070

// -[SCMemoriesSideButtonImpl buttonFeaturedBadgeSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1070200a4

// -[SCMemoriesSideButtonImpl sideButtonThumbnailSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1070200b0

// -[SCMemoriesSideButtonImpl sideButtonNewThumbnailSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1070200d4

// -[SCMemoriesSideButtonImpl _sideButtonThumbnailViewXOffset]
// Type encoding: d16@0:8
// Implementation: 0x1070200f8

// -[SCMemoriesSideButtonImpl _configureViewFromState:toState:animated:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x107020314

// -[SCMemoriesSideButtonImpl _performAnimationsFromState:toState:animated:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x107020494

// -[SCMemoriesSideButtonImpl _removeTooltip]
// Type encoding: v16@0:8
// Implementation: 0x107021d54

// -[SCMemoriesSideButtonImpl _toggleDefaultBadge:]
// Type encoding: v20@0:8B16
// Implementation: 0x107021d98

// -[SCMemoriesSideButtonImpl _galleryIconImageOfIconStyle:]
// Type encoding: @24@0:8q16
// Implementation: 0x107021da8

// -[SCMemoriesSideButtonImpl state]
// Type encoding: @16@0:8
// Implementation: 0x107021ea4

// -[SCMemoriesSideButtonImpl setState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107021eb4

// -[SCMemoriesSideButtonImpl setMaskImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107021ec0

// -[SCMemoriesSideButtonImpl setThumbnailView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107021f00

// -[SCMemoriesSideButtonImpl setShapeMaskView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107021f40

// -[SCMemoriesSideButtonImpl setSpecStateImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107021f80

// -[SCMemoriesSideButtonImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107021fc0

// +[SCMemoriesSideButtonImpl _spectaclesDeviceStateImageForState:]
// Type encoding: @24@0:8@16
// Implementation: 0x107020100

// +[SCMemoriesSideButtonImpl _spectaclesStateRequiresMasking:]
// Type encoding: B24@0:8@16
// Implementation: 0x10702014c

// +[SCMemoriesSideButtonImpl _imageForSpectaclesState:]
// Type encoding: @24@0:8@16
// Implementation: 0x107020170

// +[SCMemoriesSideButtonImpl _shouldAnimateStateEntryFromState:toState:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107020260

// +[SCMemoriesSideButtonImpl _requiresIconUpdateFromState:toState:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1070202b8

@end
