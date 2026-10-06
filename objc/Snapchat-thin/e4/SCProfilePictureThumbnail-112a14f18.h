// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfilePictureThumbnail
// Superclass: UIView
// Address: 0x112a14f18

@interface SCProfilePictureThumbnail

// Property: profileImageView; attributes: T@"UIImageView",&,N,V_profileImageView
// Property: ghostBorderView; attributes: T@"UIImageView",&,N,V_ghostBorderView
// Property: ghostFaceView; attributes: T@"UIImageView",&,N,V_ghostFaceView

// -[SCProfilePictureThumbnail _initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10509fa2c

// -[SCProfilePictureThumbnail updateWithSnapchatter:contexts:renderStyle:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10509fbcc

// -[SCProfilePictureThumbnail _updateBitmojiProfilePictureWithSnapchatter:contexts:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10509ff6c

// -[SCProfilePictureThumbnail ghostFaceView]
// Type encoding: @16@0:8
// Implementation: 0x1050a021c

// -[SCProfilePictureThumbnail ghostBorderView]
// Type encoding: @16@0:8
// Implementation: 0x1050a0624

// -[SCProfilePictureThumbnail profileImageView]
// Type encoding: @16@0:8
// Implementation: 0x1050a0a20

// -[SCProfilePictureThumbnail _showBitmojiProfilePic:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050a0b48

// -[SCProfilePictureThumbnail _showEmptyStateImageForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050a0e28

// -[SCProfilePictureThumbnail _needsUpdateWidth:]
// Type encoding: B24@0:8@16
// Implementation: 0x1050a1028

// -[SCProfilePictureThumbnail _hasThumbnail:]
// Type encoding: B24@0:8@16
// Implementation: 0x1050a10bc

// -[SCProfilePictureThumbnail _getGhostSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1050a10c8

// -[SCProfilePictureThumbnail _getThumbnailWidth]
// Type encoding: d16@0:8
// Implementation: 0x1050a1124

// -[SCProfilePictureThumbnail _setGhostBorderImage]
// Type encoding: v16@0:8
// Implementation: 0x1050a1178

// -[SCProfilePictureThumbnail setProfileImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050a11cc

// -[SCProfilePictureThumbnail setGhostBorderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050a120c

// -[SCProfilePictureThumbnail setGhostFaceView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050a124c

// -[SCProfilePictureThumbnail .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050a128c

// +[SCProfilePictureThumbnail thumbnailWithSnapchatter:contexts:renderStyle:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10509f968

@end
