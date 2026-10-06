// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewStickerView
// Superclass: SCTouchControlUIView
// Address: 0x112bc9048

@interface SCPreviewStickerView

// Property: stickerImageView; attributes: T@"UIImageView",&,N,V_stickerImageView
// Property: sticker; attributes: T@"<SCStickerLegacyProtocol>",R,C,N,V_sticker
// Property: contentView; attributes: T@"SCPreviewStickerViewContentView",R,N,V_contentView
// Property: delegate; attributes: T@"<SCPreviewStickerViewDelegate>",W,N,V_delegate
// Property: isStickerFromRecents; attributes: TB,N,V_isStickerFromRecents
// Property: isCreatedCustomSticker; attributes: TB,N,V_isCreatedCustomSticker
// Property: isFromCutout; attributes: TB,N,V_isFromCutout
// Property: uniqueId; attributes: Tq,N,V_uniqueId
// Property: isFlipped; attributes: TB,N,V_isFlipped
// Property: isRemovable; attributes: TB,N,V_isRemovable
// Property: isMovable; attributes: TB,N,V_isMovable
// Property: isGlobalLevelTracking; attributes: TB,N,V_isGlobalLevelTracking
// Property: relativeSize; attributes: T{CGSize=dd},R,N
// Property: relativeCenter; attributes: T{CGPoint=dd},R,N
// Property: isAnimated; attributes: TB,N,V_isAnimated
// Property: isExcludedFromEditCount; attributes: TB,N,V_isExcludedFromEditCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: tracking; attributes: TB,R,N,GisTracking
// Property: trajectoryManager; attributes: T@"<SCVideoTrackingTargetTrajectoryManager>",R,N

// -[SCPreviewStickerView initWithCTItemInstance:presentationModelProviderType:sticker:ctpItemViewService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108ec4148

// -[SCPreviewStickerView initWithCTPItem:ctpItemViewService:presentationModel:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108ec45ec

// -[SCPreviewStickerView initWithSticker:itemView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ec4a98

// -[SCPreviewStickerView initWithSticker:itemView:creativeToolsABProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108ec4aa0

// -[SCPreviewStickerView initWithSticker:image:isAnimated:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108ec4d58

// -[SCPreviewStickerView initWithSticker:center:fontSize:thumbnail:shouldLimitSize:userSession:isAnimated:]
// Type encoding: @72@0:8@16{CGPoint=dd}24d40@48B56@60B68
// Implementation: 0x108ec5098

// -[SCPreviewStickerView initWithSticker:contentView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ec51e8

// -[SCPreviewStickerView initWithSticker:contentView:center:]
// Type encoding: @48@0:8@16@24{CGPoint=dd}32
// Implementation: 0x108ec52b0

// -[SCPreviewStickerView _setContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec559c

// -[SCPreviewStickerView _handleCTPItemContainerResult:imagePromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ec5794

// -[SCPreviewStickerView _errorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ec5a20

// -[SCPreviewStickerView _handleItemView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec5b20

// -[SCPreviewStickerView maxScale]
// Type encoding: d16@0:8
// Implementation: 0x108ec6420

// -[SCPreviewStickerView minScale]
// Type encoding: d16@0:8
// Implementation: 0x108ec645c

// -[SCPreviewStickerView recomputeTransform]
// Type encoding: v16@0:8
// Implementation: 0x108ec6498

// -[SCPreviewStickerView _recomputeTransform]
// Type encoding: v16@0:8
// Implementation: 0x108ec649c

// -[SCPreviewStickerView renderState]
// Type encoding: @16@0:8
// Implementation: 0x108ec65e0

// -[SCPreviewStickerView _initWithTextSticker:center:fontSize:]
// Type encoding: @48@0:8@16{CGPoint=dd}24d40
// Implementation: 0x108ec65f0

// -[SCPreviewStickerView _initWithImageSticker:center:thumbnail:shouldLimitSize:userSession:isAnimated:]
// Type encoding: @64@0:8@16{CGPoint=dd}24@40B48@52B60
// Implementation: 0x108ec6b68

// -[SCPreviewStickerView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108ec7498

// -[SCPreviewStickerView relativeSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ec74c0

// -[SCPreviewStickerView relativeCenter]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108ec7558

// -[SCPreviewStickerView canPersistStickerState]
// Type encoding: B16@0:8
// Implementation: 0x108ec75fc

// -[SCPreviewStickerView stickerStateWithStaticBounds:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108ec7658

// -[SCPreviewStickerView updateWithItemView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec7a24

// -[SCPreviewStickerView stickerImage]
// Type encoding: @16@0:8
// Implementation: 0x108ec7aec

// -[SCPreviewStickerView stickerImageFuture]
// Type encoding: @16@0:8
// Implementation: 0x108ec7c4c

// -[SCPreviewStickerView textFrameContainsGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ec7e20

// -[SCPreviewStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ec81e0

// -[SCPreviewStickerView shouldRespondToLongPress:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ec8254

// -[SCPreviewStickerView tap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108ec82c0

// -[SCPreviewStickerView pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec84f0

// -[SCPreviewStickerView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x108ec8570

// -[SCPreviewStickerView isTracking]
// Type encoding: B16@0:8
// Implementation: 0x108ec85c4

// -[SCPreviewStickerView targetTrajectory]
// Type encoding: @16@0:8
// Implementation: 0x108ec85dc

// -[SCPreviewStickerView enableTrackingWithManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec85ec

// -[SCPreviewStickerView trajectoryManager]
// Type encoding: @16@0:8
// Implementation: 0x108ec8660

// -[SCPreviewStickerView disableTracking]
// Type encoding: v16@0:8
// Implementation: 0x108ec8690

// -[SCPreviewStickerView onStickerViewScaled:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ec86c8

// -[SCPreviewStickerView trajectoryManager:didOutputTransform:shouldAnimate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108ec86d8

// -[SCPreviewStickerView stopAnimatedStickerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108ec8cdc

// -[SCPreviewStickerView resumeAnimatedStickerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108ec8dec

// -[SCPreviewStickerView alignableTouchControlView]
// Type encoding: @16@0:8
// Implementation: 0x108ec8ef8

// -[SCPreviewStickerView alignableContentRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108ec8efc

// -[SCPreviewStickerView shouldProcessGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ec8f00

// -[SCPreviewStickerView updateAnchorState:withGestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ec8f08

// -[SCPreviewStickerView deletableView]
// Type encoding: @16@0:8
// Implementation: 0x108ec8f0c

// -[SCPreviewStickerView previewStickerViewContentViewDidChangeSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec8f40

// -[SCPreviewStickerView _refreshContentLayoutWithContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec8f44

// -[SCPreviewStickerView previewStickerViewContentView:didChangeMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ec9114

// -[SCPreviewStickerView previewStickerViewContentViewDidChangeSize:andMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ec91b8

// -[SCPreviewStickerView trackableView]
// Type encoding: @16@0:8
// Implementation: 0x108ec9250

// -[SCPreviewStickerView isTimed]
// Type encoding: B16@0:8
// Implementation: 0x108ec9254

// -[SCPreviewStickerView trackingTrajectoryState]
// Type encoding: @16@0:8
// Implementation: 0x108ec927c

// -[SCPreviewStickerView durationEnabledState]
// Type encoding: @16@0:8
// Implementation: 0x108ec92d4

// -[SCPreviewStickerView durationEnabledToolType]
// Type encoding: Q16@0:8
// Implementation: 0x108ec93a4

// -[SCPreviewStickerView isSelfResizing]
// Type encoding: B16@0:8
// Implementation: 0x108ec93ac

// -[SCPreviewStickerView sticker]
// Type encoding: @16@0:8
// Implementation: 0x108ec93b4

// -[SCPreviewStickerView contentView]
// Type encoding: @16@0:8
// Implementation: 0x108ec93c4

// -[SCPreviewStickerView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108ec93d4

// -[SCPreviewStickerView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec93f4

// -[SCPreviewStickerView isStickerFromRecents]
// Type encoding: B16@0:8
// Implementation: 0x108ec9408

// -[SCPreviewStickerView setIsStickerFromRecents:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9418

// -[SCPreviewStickerView isCreatedCustomSticker]
// Type encoding: B16@0:8
// Implementation: 0x108ec9428

// -[SCPreviewStickerView setIsCreatedCustomSticker:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9438

// -[SCPreviewStickerView isFromCutout]
// Type encoding: B16@0:8
// Implementation: 0x108ec9448

// -[SCPreviewStickerView setIsFromCutout:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9458

// -[SCPreviewStickerView uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108ec9468

// -[SCPreviewStickerView setUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ec9478

// -[SCPreviewStickerView isFlipped]
// Type encoding: B16@0:8
// Implementation: 0x108ec9488

// -[SCPreviewStickerView setIsFlipped:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9498

// -[SCPreviewStickerView isRemovable]
// Type encoding: B16@0:8
// Implementation: 0x108ec94a8

// -[SCPreviewStickerView setIsRemovable:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec94b8

// -[SCPreviewStickerView isMovable]
// Type encoding: B16@0:8
// Implementation: 0x108ec94c8

// -[SCPreviewStickerView setIsMovable:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec94d8

// -[SCPreviewStickerView isGlobalLevelTracking]
// Type encoding: B16@0:8
// Implementation: 0x108ec94e8

// -[SCPreviewStickerView setIsGlobalLevelTracking:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec94f8

// -[SCPreviewStickerView isAnimated]
// Type encoding: B16@0:8
// Implementation: 0x108ec9508

// -[SCPreviewStickerView setIsAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9518

// -[SCPreviewStickerView isExcludedFromEditCount]
// Type encoding: B16@0:8
// Implementation: 0x108ec9528

// -[SCPreviewStickerView setIsExcludedFromEditCount:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ec9538

// -[SCPreviewStickerView stickerImageView]
// Type encoding: @16@0:8
// Implementation: 0x108ec9548

// -[SCPreviewStickerView setStickerImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ec9558

// -[SCPreviewStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ec9598

// +[SCPreviewStickerView fontSizeForLineHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x108ec88b4

// +[SCPreviewStickerView stickerSizeForSticker:image:]
// Type encoding: {CGSize=dd}32@0:8@16@24
// Implementation: 0x108ec893c

@end
