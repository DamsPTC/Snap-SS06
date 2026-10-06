// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlayerView
// Superclass: UIView
// Address: 0x112bc1258

@interface SCPlayerView

// Property: playerLayer; attributes: T@"AVPlayerLayer",R,N
// Property: player; attributes: T@"AVPlayer",&,N
// Property: videoGravity; attributes: T@"NSString",C,V_videoGravity
// Property: playerModelCanChange; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlayerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d39ce4

// -[SCPlayerView playerLayer]
// Type encoding: @16@0:8
// Implementation: 0x108d39d4c

// -[SCPlayerView player]
// Type encoding: @16@0:8
// Implementation: 0x108d39d50

// -[SCPlayerView setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d39d94

// -[SCPlayerView imageOverlayLayer]
// Type encoding: @16@0:8
// Implementation: 0x108d39de4

// -[SCPlayerView setImageOnOverlayLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d39e14

// -[SCPlayerView _updateImageOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d39ef4

// -[SCPlayerView setPlaceholderImageLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d3a06c

// -[SCPlayerView hasPlaceholderImageLayer]
// Type encoding: B16@0:8
// Implementation: 0x108d3a174

// -[SCPlayerView setPlayerPixelBufferToPlaceholder]
// Type encoding: B16@0:8
// Implementation: 0x108d3a1a4

// -[SCPlayerView setPlaceholderPixelBufferTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x108d3a318

// -[SCPlayerView setOuterBackgroundColor:forMediaAspectRatio:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108d3a338

// -[SCPlayerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108d3a46c

// -[SCPlayerView playerModelCanChange]
// Type encoding: B16@0:8
// Implementation: 0x108d3a73c

// -[SCPlayerView setVideoGravity:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d3a744

// -[SCPlayerView videoGravity]
// Type encoding: @16@0:8
// Implementation: 0x108d3a794

// -[SCPlayerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d3a7a4

// +[SCPlayerView layerClass]
// Type encoding: #16@0:8
// Implementation: 0x108d39d40

@end
