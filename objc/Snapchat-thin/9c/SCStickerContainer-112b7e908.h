// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerContainer
// Superclass: NSObject
// Address: 0x112b7e908

@interface SCStickerContainer

// Property: delegate; attributes: T@"<SCStickerContainerDelegate>",W,N,V_delegate
// Property: stickerCount; attributes: Tq,R,N
// Property: stickerEditCount; attributes: Tq,R,N
// Property: stickerViews; attributes: T@"NSArray",R,C,N
// Property: trackingStickersContainerView; attributes: T@"UIView",R,N,V_trackingStickersContainerView
// Property: trackingUpdateVersion; attributes: Tq,N,V_trackingUpdateVersion
// Property: maxUniqueStickerId; attributes: Tq,N,V_maxUniqueStickerId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: staticStickersContainerView; attributes: T@"UIView",R,N,V_staticStickersContainerView

// -[SCStickerContainer initWithFrame:stickerInjector:itemViewService:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x107d6cae0

// -[SCStickerContainer stickerViewsWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107d6cc38

// -[SCStickerContainer hasNonTrackingStaticSticker]
// Type encoding: B16@0:8
// Implementation: 0x107d6ccd8

// -[SCStickerContainer hasNonTrackingAnimatedSticker]
// Type encoding: B16@0:8
// Implementation: 0x107d6ce04

// -[SCStickerContainer animatedStickerCount]
// Type encoding: q16@0:8
// Implementation: 0x107d6cf30

// -[SCStickerContainer drawStaticStickersScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107d6cf7c

// -[SCStickerContainer _exportRenderableSubviews]
// Type encoding: @16@0:8
// Implementation: 0x107d6d180

// -[SCStickerContainer videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x107d6d290

// -[SCStickerContainer videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x107d6d6dc

// -[SCStickerContainer stickerCount]
// Type encoding: q16@0:8
// Implementation: 0x107d6dc48

// -[SCStickerContainer stickerEditCount]
// Type encoding: q16@0:8
// Implementation: 0x107d6dcb8

// -[SCStickerContainer unfinishedTrackingStickerCount]
// Type encoding: q16@0:8
// Implementation: 0x107d6dd18

// -[SCStickerContainer stickerViews]
// Type encoding: @16@0:8
// Implementation: 0x107d6de70

// -[SCStickerContainer _filteredStickerViewsUsingBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x107d6de78

// -[SCStickerContainer stickersStateIncludingStatic:tracking:supportedFlows:]
// Type encoding: @32@0:8B16B20q24
// Implementation: 0x107d6e0d0

// -[SCStickerContainer setStickersHiddenState:includeCustomSticker:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107d6e37c

// -[SCStickerContainer setStickersState:configuration:completionBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107d6e4c8

// -[SCStickerContainer addStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d6f594

// -[SCStickerContainer _addStickerView:isTracking:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107d6f5d8

// -[SCStickerContainer _allStickers]
// Type encoding: @16@0:8
// Implementation: 0x107d6f638

// -[SCStickerContainer _logAndAssertForDuplicateMusicStickerForContainer:caller:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d6f6b0

// -[SCStickerContainer previewStickerViewDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d6f850

// -[SCStickerContainer staticStickersContainerView]
// Type encoding: @16@0:8
// Implementation: 0x107d6f8a4

// -[SCStickerContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d6f8ac

// -[SCStickerContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d6f8c4

// -[SCStickerContainer trackingStickersContainerView]
// Type encoding: @16@0:8
// Implementation: 0x107d6f8d0

// -[SCStickerContainer trackingUpdateVersion]
// Type encoding: q16@0:8
// Implementation: 0x107d6f8d8

// -[SCStickerContainer setTrackingUpdateVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d6f8e0

// -[SCStickerContainer maxUniqueStickerId]
// Type encoding: q16@0:8
// Implementation: 0x107d6f8e8

// -[SCStickerContainer setMaxUniqueStickerId:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d6f8f0

// -[SCStickerContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d6f8f8

// +[SCStickerContainer renderableEmojiWithEmoji:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d6c6f0

@end
