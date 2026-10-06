// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBoomboxMediaCell
// Superclass: UICollectionViewCell
// Address: 0x112b20e48

@interface SCSpectaclesBoomboxMediaCell

// Property: sessionId; attributes: T@"NSString",C,N,V_sessionId
// Property: leftImageOverlayImageView; attributes: T@"UIImageView",&,N,V_leftImageOverlayImageView
// Property: rightImageOverlayImageView; attributes: T@"UIImageView",&,N,V_rightImageOverlayImageView
// Property: leftGLView; attributes: T@"SCCAEAGLView",R,N,V_leftGLView
// Property: rightGLView; attributes: T@"SCCAEAGLView",R,N,V_rightGLView
// Property: userSession; attributes: T@"SCUserSession",R,N,V_userSession
// Property: mergedDataSource; attributes: T@"SCLazy",R,N,V_mergedDataSource
// Property: encryptedContentManager; attributes: T@"SCLazy",R,N,V_encryptedContentManager
// Property: cloudFS; attributes: T@"SCLazy",R,N,V_cloudFS
// Property: snap; attributes: T@"<SCGallerySnap>",R,N,V_snap
// Property: delegate; attributes: T@"<SCSpectaclesBoomboxMediaCellDelegate>",R,W,N,V_delegate
// Property: auxiliaryContentServices; attributes: T@"SCSpectaclesAuxiliaryContentServices",R,N,V_auxiliaryContentServices
// Property: memoriesTrackingImageProcessCommandScopeExposer; attributes: T@"SCMultiScopeExposer",R,W,N,V_memoriesTrackingImageProcessCommandScopeExposer
// Property: shouldLoopPlayback; attributes: TB,R,N,V_shouldLoopPlayback
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesBoomboxMediaCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106be1f28

// -[SCSpectaclesBoomboxMediaCell layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106be2874

// -[SCSpectaclesBoomboxMediaCell dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106be2d90

// -[SCSpectaclesBoomboxMediaCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106be2e48

// -[SCSpectaclesBoomboxMediaCell cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106be2eb0

// -[SCSpectaclesBoomboxMediaCell setupCellWithSnap:userSession:mergedDataSource:encryptedContentManager:cloudFS:shouldLoopPlayback:delegate:auxiliaryContentServices:memoriesCachingMediaHelper:memoriesTrackingImageProcessCommandScopeExposer:]
// Type encoding: v92@0:8@16@24@32@40@48B56@60@68@76@84
// Implementation: 0x106be2f70

// -[SCSpectaclesBoomboxMediaCell playWithPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106be3170

// -[SCSpectaclesBoomboxMediaCell reset]
// Type encoding: v16@0:8
// Implementation: 0x106be38c4

// -[SCSpectaclesBoomboxMediaCell fastReverse]
// Type encoding: v16@0:8
// Implementation: 0x106be3910

// -[SCSpectaclesBoomboxMediaCell showProgressIndicator]
// Type encoding: v16@0:8
// Implementation: 0x106be397c

// -[SCSpectaclesBoomboxMediaCell hideProgressIndicator]
// Type encoding: v16@0:8
// Implementation: 0x106be39fc

// -[SCSpectaclesBoomboxMediaCell loadOverlayImagesWithId:cloudFile:snapDetail:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106be3ae4

// -[SCSpectaclesBoomboxMediaCell playbackSession:didPlayToEnd:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106be3f4c

// -[SCSpectaclesBoomboxMediaCell playbackSessionDidLoadFirstFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x106be3fa0

// -[SCSpectaclesBoomboxMediaCell playbackSession:didReceiveError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106be3fe0

// -[SCSpectaclesBoomboxMediaCell disparityOffset]
// Type encoding: d16@0:8
// Implementation: 0x106be405c

// -[SCSpectaclesBoomboxMediaCell loadPlaybackSessionWithId:player:cloudFile:snapDetail:memoriesCachingMediaHelper:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x106be40b0

// -[SCSpectaclesBoomboxMediaCell leftGLView]
// Type encoding: @16@0:8
// Implementation: 0x106be4154

// -[SCSpectaclesBoomboxMediaCell rightGLView]
// Type encoding: @16@0:8
// Implementation: 0x106be4164

// -[SCSpectaclesBoomboxMediaCell userSession]
// Type encoding: @16@0:8
// Implementation: 0x106be4174

// -[SCSpectaclesBoomboxMediaCell mergedDataSource]
// Type encoding: @16@0:8
// Implementation: 0x106be4184

// -[SCSpectaclesBoomboxMediaCell encryptedContentManager]
// Type encoding: @16@0:8
// Implementation: 0x106be4194

// -[SCSpectaclesBoomboxMediaCell cloudFS]
// Type encoding: @16@0:8
// Implementation: 0x106be41a4

// -[SCSpectaclesBoomboxMediaCell snap]
// Type encoding: @16@0:8
// Implementation: 0x106be41b4

// -[SCSpectaclesBoomboxMediaCell delegate]
// Type encoding: @16@0:8
// Implementation: 0x106be41c4

// -[SCSpectaclesBoomboxMediaCell auxiliaryContentServices]
// Type encoding: @16@0:8
// Implementation: 0x106be41e4

// -[SCSpectaclesBoomboxMediaCell memoriesTrackingImageProcessCommandScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x106be41f4

// -[SCSpectaclesBoomboxMediaCell shouldLoopPlayback]
// Type encoding: B16@0:8
// Implementation: 0x106be4214

// -[SCSpectaclesBoomboxMediaCell sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106be4224

// -[SCSpectaclesBoomboxMediaCell setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106be4234

// -[SCSpectaclesBoomboxMediaCell leftImageOverlayImageView]
// Type encoding: @16@0:8
// Implementation: 0x106be4240

// -[SCSpectaclesBoomboxMediaCell setLeftImageOverlayImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106be4250

// -[SCSpectaclesBoomboxMediaCell rightImageOverlayImageView]
// Type encoding: @16@0:8
// Implementation: 0x106be4290

// -[SCSpectaclesBoomboxMediaCell setRightImageOverlayImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106be42a0

// -[SCSpectaclesBoomboxMediaCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106be42e0

@end
