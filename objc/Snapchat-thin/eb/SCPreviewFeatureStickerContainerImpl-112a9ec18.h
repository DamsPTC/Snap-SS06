// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureStickerContainerImpl
// Superclass: NSObject
// Address: 0x112a9ec18

@interface SCPreviewFeatureStickerContainerImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N,V_imageDownloader
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFeatureStickerContainerDelegate><SCStickerMenuActionHandling>",W,N,V_delegate
// Property: trackingUpdateVersion; attributes: Tq,D,N
// Property: trackingStickersContainerView; attributes: T@"UIView",R,N
// Property: stickerContainerLogger; attributes: T@"<SCStickerContainerLogging>",R,W,N,V_stickerContainerLogger
// Property: previewStickerObservable; attributes: T@"SCObservable",R,N
// Property: previewStickerTappedObservable; attributes: T@"SCObservable",R,N
// Property: staticStickersContainerView; attributes: T@"UIView",R,N
// Property: maxUniqueStickerId; attributes: Tq,N,V_maxUniqueStickerId
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureStickerContainerImpl initWithPreviewConfiguration:previewScopeServices:userSession:filterUIContainer:videoPlayback:videoObjectTracker:stickerPreferenceAdaptor:stickerContainerLogger:commonLoggingParamsBuilder:imageDownloader:creativeExpressionsManager:circumstanceEngine:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:previewABProvider:ctpItemViewService:videoTracking:bitmojiAppPasteboardObserver:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x105db2280

// -[SCPreviewFeatureStickerContainerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105db2838

// -[SCPreviewFeatureStickerContainerImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db28b0

// -[SCPreviewFeatureStickerContainerImpl snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105db2af8

// -[SCPreviewFeatureStickerContainerImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db2c90

// -[SCPreviewFeatureStickerContainerImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105db2f64

// -[SCPreviewFeatureStickerContainerImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105db2f6c

// -[SCPreviewFeatureStickerContainerImpl hasOnlyPrePreviewEdits]
// Type encoding: B16@0:8
// Implementation: 0x105db31dc

// -[SCPreviewFeatureStickerContainerImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105db3238

// -[SCPreviewFeatureStickerContainerImpl _isHandledBySnapStateHandler]
// Type encoding: B16@0:8
// Implementation: 0x105db3240

// -[SCPreviewFeatureStickerContainerImpl _createViewWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105db3340

// -[SCPreviewFeatureStickerContainerImpl animatedQuickStickerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105db3434

// -[SCPreviewFeatureStickerContainerImpl updateWithSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db35bc

// -[SCPreviewFeatureStickerContainerImpl populateSendParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db37cc

// -[SCPreviewFeatureStickerContainerImpl setAnimatedStickersAnimate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105db3900

// -[SCPreviewFeatureStickerContainerImpl _updateAnimatedStickersAnimate]
// Type encoding: v16@0:8
// Implementation: 0x105db390c

// -[SCPreviewFeatureStickerContainerImpl _updateAllMentionStickersToNotRemovable]
// Type encoding: v16@0:8
// Implementation: 0x105db3a18

// -[SCPreviewFeatureStickerContainerImpl setStickersState:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105db3bac

// -[SCPreviewFeatureStickerContainerImpl stickersState]
// Type encoding: @16@0:8
// Implementation: 0x105db4084

// -[SCPreviewFeatureStickerContainerImpl stickersStateForFlows:]
// Type encoding: @24@0:8q16
// Implementation: 0x105db4098

// -[SCPreviewFeatureStickerContainerImpl contextUnlockCTItemInsancesForFlows:]
// Type encoding: @24@0:8q16
// Implementation: 0x105db40ac

// -[SCPreviewFeatureStickerContainerImpl freezeStickersState]
// Type encoding: v16@0:8
// Implementation: 0x105db425c

// -[SCPreviewFeatureStickerContainerImpl frozenStickersState]
// Type encoding: @16@0:8
// Implementation: 0x105db42a0

// -[SCPreviewFeatureStickerContainerImpl previewStickerObservable]
// Type encoding: @16@0:8
// Implementation: 0x105db42c8

// -[SCPreviewFeatureStickerContainerImpl previewStickerTappedObservable]
// Type encoding: @16@0:8
// Implementation: 0x105db42f0

// -[SCPreviewFeatureStickerContainerImpl insertSticker:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db4318

// -[SCPreviewFeatureStickerContainerImpl insertStickerView:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db4ab0

// -[SCPreviewFeatureStickerContainerImpl removeStickersWhere:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105db52fc

// -[SCPreviewFeatureStickerContainerImpl removeAllInfoStickersOfType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105db54dc

// -[SCPreviewFeatureStickerContainerImpl removeAllTrackingStickers]
// Type encoding: v16@0:8
// Implementation: 0x105db5594

// -[SCPreviewFeatureStickerContainerImpl didDeleteStickerViewWithTouch:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db5708

// -[SCPreviewFeatureStickerContainerImpl stickerContainingGesture:]
// Type encoding: @24@0:8@16
// Implementation: 0x105db5798

// -[SCPreviewFeatureStickerContainerImpl addStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db5960

// -[SCPreviewFeatureStickerContainerImpl stickerViewsWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105db5968

// -[SCPreviewFeatureStickerContainerImpl animatedStickerCount]
// Type encoding: q16@0:8
// Implementation: 0x105db5970

// -[SCPreviewFeatureStickerContainerImpl stickerCount]
// Type encoding: q16@0:8
// Implementation: 0x105db5978

// -[SCPreviewFeatureStickerContainerImpl stickerViews]
// Type encoding: @16@0:8
// Implementation: 0x105db5980

// -[SCPreviewFeatureStickerContainerImpl staticStickerViews]
// Type encoding: @16@0:8
// Implementation: 0x105db5988

// -[SCPreviewFeatureStickerContainerImpl trackingStickerViews]
// Type encoding: @16@0:8
// Implementation: 0x105db5b18

// -[SCPreviewFeatureStickerContainerImpl stickerCaptionTexts]
// Type encoding: @16@0:8
// Implementation: 0x105db5b60

// -[SCPreviewFeatureStickerContainerImpl videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x105db5d4c

// -[SCPreviewFeatureStickerContainerImpl videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x105db5d54

// -[SCPreviewFeatureStickerContainerImpl trackingUpdateVersion]
// Type encoding: q16@0:8
// Implementation: 0x105db5d5c

// -[SCPreviewFeatureStickerContainerImpl setTrackingUpdateVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x105db5d64

// -[SCPreviewFeatureStickerContainerImpl setMaxUniqueStickerId:]
// Type encoding: v24@0:8q16
// Implementation: 0x105db5d6c

// -[SCPreviewFeatureStickerContainerImpl setTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105db5d74

// -[SCPreviewFeatureStickerContainerImpl stickerViewDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db5dc8

// -[SCPreviewFeatureStickerContainerImpl activatedStickersFuture]
// Type encoding: @16@0:8
// Implementation: 0x105db5e5c

// -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:willTrackView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db5e64

// -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:didTrackView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db5e68

// -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:didDisableTrackingForView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db60c4

// -[SCPreviewFeatureStickerContainerImpl staticStickersContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105db6160

// -[SCPreviewFeatureStickerContainerImpl trackingStickersContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105db6168

// -[SCPreviewFeatureStickerContainerImpl hasNonTrackingStaticSticker]
// Type encoding: B16@0:8
// Implementation: 0x105db6170

// -[SCPreviewFeatureStickerContainerImpl hasNonTrackingAnimatedSticker]
// Type encoding: B16@0:8
// Implementation: 0x105db6178

// -[SCPreviewFeatureStickerContainerImpl setStickersHiddenState:includeCustomSticker:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105db6180

// -[SCPreviewFeatureStickerContainerImpl drawStaticStickersScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105db6188

// -[SCPreviewFeatureStickerContainerImpl stickerContainer:stickerViewDidUpdate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105db6190

// -[SCPreviewFeatureStickerContainerImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105db626c

// -[SCPreviewFeatureStickerContainerImpl didBeginLongPressInPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105db656c

// -[SCPreviewFeatureStickerContainerImpl shouldBlockGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x105db67c4

// -[SCPreviewFeatureStickerContainerImpl rectForCreativeToolsMenuSourceView:inView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16@24
// Implementation: 0x105db6810

// -[SCPreviewFeatureStickerContainerImpl rotationForCreativeToolsMenuSourceView:]
// Type encoding: d24@0:8@16
// Implementation: 0x105db6924

// -[SCPreviewFeatureStickerContainerImpl creativeToolsMenuMetricsInfo]
// Type encoding: @16@0:8
// Implementation: 0x105db697c

// -[SCPreviewFeatureStickerContainerImpl _bitmojiKeyboardDidPasteBitmojiSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db6a34

// -[SCPreviewFeatureStickerContainerImpl _staticStickerPositions]
// Type encoding: @16@0:8
// Implementation: 0x105db6f18

// -[SCPreviewFeatureStickerContainerImpl _maxStickerScale]
// Type encoding: d16@0:8
// Implementation: 0x105db70ec

// -[SCPreviewFeatureStickerContainerImpl _updateStickerAfterInsertAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db720c

// -[SCPreviewFeatureStickerContainerImpl _presentPinningTooltipIfNeededFromSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db72bc

// -[SCPreviewFeatureStickerContainerImpl _shouldPresentPinningTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105db7340

// -[SCPreviewFeatureStickerContainerImpl _isMenuSupportedForSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x105db7390

// -[SCPreviewFeatureStickerContainerImpl _shouldPresentMenuHintForSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x105db74a4

// -[SCPreviewFeatureStickerContainerImpl _presentMenuHintIfNeededFromSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db75a8

// -[SCPreviewFeatureStickerContainerImpl _creativeToolsMenuActionsForSticker:]
// Type encoding: @24@0:8@16
// Implementation: 0x105db7730

// -[SCPreviewFeatureStickerContainerImpl _timedStickerCount]
// Type encoding: q16@0:8
// Implementation: 0x105db79a8

// -[SCPreviewFeatureStickerContainerImpl _pinnedStickerCount]
// Type encoding: q16@0:8
// Implementation: 0x105db7a98

// -[SCPreviewFeatureStickerContainerImpl updateToolbarButtonImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db7b94

// -[SCPreviewFeatureStickerContainerImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db7bcc

// -[SCPreviewFeatureStickerContainerImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105db7c6c

// -[SCPreviewFeatureStickerContainerImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105db7d98

// -[SCPreviewFeatureStickerContainerImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105db7dc0

// -[SCPreviewFeatureStickerContainerImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db7dd8

// -[SCPreviewFeatureStickerContainerImpl maxUniqueStickerId]
// Type encoding: q16@0:8
// Implementation: 0x105db7de4

// -[SCPreviewFeatureStickerContainerImpl stickerContainerLogger]
// Type encoding: @16@0:8
// Implementation: 0x105db7dec

// -[SCPreviewFeatureStickerContainerImpl imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105db7e04

// -[SCPreviewFeatureStickerContainerImpl setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105db7e0c

// -[SCPreviewFeatureStickerContainerImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105db7e3c

// -[SCPreviewFeatureStickerContainerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105db7e44

@end
