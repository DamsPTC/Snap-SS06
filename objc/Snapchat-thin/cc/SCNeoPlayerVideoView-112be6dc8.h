// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerVideoView
// Superclass: UIView
// Address: 0x112be6dc8

@interface SCNeoPlayerVideoView

// Property: hasRenderReadyLayout; attributes: TB,V_hasRenderReadyLayout
// Property: videoGravity; attributes: TQ,N,V_videoGravity
// Property: videoLayer; attributes: T@"CALayer",&,N,V_videoLayer
// Property: resizeScaleSyncEnabled; attributes: TB,N,V_resizeScaleSyncEnabled
// Property: onRenderReadyLayout; attributes: T@?,C,N,V_onRenderReadyLayout
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerVideoView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1090c0174

// -[SCNeoPlayerVideoView setVideoGravity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090c01fc

// -[SCNeoPlayerVideoView setVideoLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c021c

// -[SCNeoPlayerVideoView clearVideoLayerTracking]
// Type encoding: v16@0:8
// Implementation: 0x1090c0330

// -[SCNeoPlayerVideoView _layout]
// Type encoding: v16@0:8
// Implementation: 0x1090c0360

// -[SCNeoPlayerVideoView _containerBoundsSizeAnimation]
// Type encoding: @16@0:8
// Implementation: 0x1090c079c

// -[SCNeoPlayerVideoView _startVideoScaleSync]
// Type encoding: v16@0:8
// Implementation: 0x1090c084c

// -[SCNeoPlayerVideoView _stopVideoScaleSync]
// Type encoding: v16@0:8
// Implementation: 0x1090c098c

// -[SCNeoPlayerVideoView _syncVideoLayerToContainerPresentation]
// Type encoding: v16@0:8
// Implementation: 0x1090c09c0

// -[SCNeoPlayerVideoView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090c0bbc

// -[SCNeoPlayerVideoView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1090c0c00

// -[SCNeoPlayerVideoView setVideoTransform:videoWidth:videoHeight:]
// Type encoding: v80@0:8{CGAffineTransform=dddddd}16q64q72
// Implementation: 0x1090c0c3c

// -[SCNeoPlayerVideoView actionForLayer:forKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090c0d24

// -[SCNeoPlayerVideoView videoGravity]
// Type encoding: Q16@0:8
// Implementation: 0x1090c0de4

// -[SCNeoPlayerVideoView videoLayer]
// Type encoding: @16@0:8
// Implementation: 0x1090c0df0

// -[SCNeoPlayerVideoView resizeScaleSyncEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090c0dfc

// -[SCNeoPlayerVideoView setResizeScaleSyncEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090c0e0c

// -[SCNeoPlayerVideoView hasRenderReadyLayout]
// Type encoding: B16@0:8
// Implementation: 0x1090c0e1c

// -[SCNeoPlayerVideoView setHasRenderReadyLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090c0e30

// -[SCNeoPlayerVideoView onRenderReadyLayout]
// Type encoding: @?16@0:8
// Implementation: 0x1090c0e40

// -[SCNeoPlayerVideoView setOnRenderReadyLayout:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090c0e4c

// -[SCNeoPlayerVideoView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090c0e58

@end
