// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesCollectionViewCellV2
// Superclass: UICollectionViewCell
// Address: 0x112ad5bc8

@interface SCSpotlightRepliesCollectionViewCellV2

// Property: commentPosterThumbnailFetcher; attributes: T@"SCSpotlightRepliesCommentPosterThumbnailFetcher",&,N,V_commentPosterThumbnailFetcher
// Property: attachmentFetcher; attributes: T@"SCSpotlightCommentsAttachmentFetcher",&,N,V_attachmentFetcher
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: spotlightRepliesFeatureSettingsManager; attributes: T@"SCLazy",&,N,V_spotlightRepliesFeatureSettingsManager
// Property: repliesLogger; attributes: T@"<SCSpotlightRepliesLogging>",&,N,V_repliesLogger
// Property: favByCreatorIconDelegate; attributes: T@"<SCSpotlightCommentsFavByCreatorIconViewDelegate>",W,N,V_favByCreatorIconDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N

// -[SCSpotlightRepliesCollectionViewCellV2 initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10622c2f0

// -[SCSpotlightRepliesCollectionViewCellV2 _initConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10622c360

// -[SCSpotlightRepliesCollectionViewCellV2 prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x10622c800

// -[SCSpotlightRepliesCollectionViewCellV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10622c884

// -[SCSpotlightRepliesCollectionViewCellV2 _setupGesture]
// Type encoding: v16@0:8
// Implementation: 0x10622c8d4

// -[SCSpotlightRepliesCollectionViewCellV2 _setupPriorities]
// Type encoding: v16@0:8
// Implementation: 0x10622c9d4

// -[SCSpotlightRepliesCollectionViewCellV2 _setupRepliesCellView]
// Type encoding: v16@0:8
// Implementation: 0x10622cae8

// -[SCSpotlightRepliesCollectionViewCellV2 setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622d6e4

// -[SCSpotlightRepliesCollectionViewCellV2 _setupConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10622d71c

// -[SCSpotlightRepliesCollectionViewCellV2 _setupLabelFont]
// Type encoding: v16@0:8
// Implementation: 0x10622f690

// -[SCSpotlightRepliesCollectionViewCellV2 _updateFavoriteViewWithReactionViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622f92c

// -[SCSpotlightRepliesCollectionViewCellV2 _updateLayoutConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10622fa54

// -[SCSpotlightRepliesCollectionViewCellV2 _updateView]
// Type encoding: v16@0:8
// Implementation: 0x10622fab8

// -[SCSpotlightRepliesCollectionViewCellV2 _setupLayoutManagerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106230dec

// -[SCSpotlightRepliesCollectionViewCellV2 _fetchReplyPosterPhotoWithViewModelIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106230f40

// -[SCSpotlightRepliesCollectionViewCellV2 _didCompleteFetchingSelfieWithImage:viewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106231210

// -[SCSpotlightRepliesCollectionViewCellV2 _handleLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062313f4

// -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithAvatarImageWithActionModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106231430

// -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithGesture:withActionModel:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10623156c

// -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithInteractionContext:withActionModel:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106231684

// -[SCSpotlightRepliesCollectionViewCellV2 _handleLongPress]
// Type encoding: v16@0:8
// Implementation: 0x10623179c

// -[SCSpotlightRepliesCollectionViewCellV2 setImageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106231870

// -[SCSpotlightRepliesCollectionViewCellV2 setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x106231a44

// -[SCSpotlightRepliesCollectionViewCellV2 _initReplyLabel]
// Type encoding: v16@0:8
// Implementation: 0x106231a7c

// -[SCSpotlightRepliesCollectionViewCellV2 setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106231b94

// -[SCSpotlightRepliesCollectionViewCellV2 _initAttachmentView]
// Type encoding: v16@0:8
// Implementation: 0x106231e58

// -[SCSpotlightRepliesCollectionViewCellV2 _configureAttachmentViewIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106231ec8

// -[SCSpotlightRepliesCollectionViewCellV2 _setAttachmentView:attachmentImage:viewModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062320c4

// -[SCSpotlightRepliesCollectionViewCellV2 _resetAttachmentView]
// Type encoding: v16@0:8
// Implementation: 0x10623265c

// -[SCSpotlightRepliesCollectionViewCellV2 _handleTapOnReplyText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062327a0

// -[SCSpotlightRepliesCollectionViewCellV2 _handleSingleTapToReply]
// Type encoding: v16@0:8
// Implementation: 0x106232c64

// -[SCSpotlightRepliesCollectionViewCellV2 _handleDoubleTapToFavorite]
// Type encoding: v16@0:8
// Implementation: 0x106232d50

// -[SCSpotlightRepliesCollectionViewCellV2 _rejectReply]
// Type encoding: v16@0:8
// Implementation: 0x106232e3c

// -[SCSpotlightRepliesCollectionViewCellV2 _approveReply]
// Type encoding: v16@0:8
// Implementation: 0x106232ee8

// -[SCSpotlightRepliesCollectionViewCellV2 _shareReply]
// Type encoding: v16@0:8
// Implementation: 0x106232f94

// -[SCSpotlightRepliesCollectionViewCellV2 _resubmitReply]
// Type encoding: v16@0:8
// Implementation: 0x106233080

// -[SCSpotlightRepliesCollectionViewCellV2 _openPublicProfile]
// Type encoding: v16@0:8
// Implementation: 0x10623312c

// -[SCSpotlightRepliesCollectionViewCellV2 _openReplyPosterFriendProfile]
// Type encoding: v16@0:8
// Implementation: 0x1062331d8

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnPendingApprovalLabel]
// Type encoding: v16@0:8
// Implementation: 0x106233284

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnFavoriteView]
// Type encoding: v16@0:8
// Implementation: 0x1062332e4

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapHideThreadedReplies]
// Type encoding: v16@0:8
// Implementation: 0x10623346c

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapNumThreadedReplies]
// Type encoding: v16@0:8
// Implementation: 0x106233518

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnReplyToCommentView]
// Type encoding: v16@0:8
// Implementation: 0x1062335c4

// -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnFavByCreatorView]
// Type encoding: v16@0:8
// Implementation: 0x106233698

// -[SCSpotlightRepliesCollectionViewCellV2 _animateUpsellShareComment]
// Type encoding: v16@0:8
// Implementation: 0x10623371c

// -[SCSpotlightRepliesCollectionViewCellV2 _scaleUpShareCommentAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1062337d8

// -[SCSpotlightRepliesCollectionViewCellV2 _resetUpsellShareCommentAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1062339cc

// -[SCSpotlightRepliesCollectionViewCellV2 viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106233a3c

// -[SCSpotlightRepliesCollectionViewCellV2 actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106233a4c

// -[SCSpotlightRepliesCollectionViewCellV2 commentPosterThumbnailFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106233a5c

// -[SCSpotlightRepliesCollectionViewCellV2 setCommentPosterThumbnailFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233a6c

// -[SCSpotlightRepliesCollectionViewCellV2 attachmentFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106233aac

// -[SCSpotlightRepliesCollectionViewCellV2 setAttachmentFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233abc

// -[SCSpotlightRepliesCollectionViewCellV2 circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106233afc

// -[SCSpotlightRepliesCollectionViewCellV2 setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233b0c

// -[SCSpotlightRepliesCollectionViewCellV2 spotlightRepliesFeatureSettingsManager]
// Type encoding: @16@0:8
// Implementation: 0x106233b4c

// -[SCSpotlightRepliesCollectionViewCellV2 setSpotlightRepliesFeatureSettingsManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233b5c

// -[SCSpotlightRepliesCollectionViewCellV2 repliesLogger]
// Type encoding: @16@0:8
// Implementation: 0x106233b9c

// -[SCSpotlightRepliesCollectionViewCellV2 setRepliesLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233bac

// -[SCSpotlightRepliesCollectionViewCellV2 favByCreatorIconDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106233bec

// -[SCSpotlightRepliesCollectionViewCellV2 setFavByCreatorIconDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106233c0c

// -[SCSpotlightRepliesCollectionViewCellV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106233c20

// +[SCSpotlightRepliesCollectionViewCellV2 sizeWithViewModel:constrainedToSize:]
// Type encoding: {CGSize=dd}40@0:8@16{CGSize=dd}24
// Implementation: 0x106231d98

@end
