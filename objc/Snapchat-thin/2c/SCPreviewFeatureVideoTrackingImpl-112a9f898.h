// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureVideoTrackingImpl
// Superclass: NSObject
// Address: 0x112a9f898

@interface SCPreviewFeatureVideoTrackingImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureVideoTrackingDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureVideoTrackingImpl initWithVideoTrackingServices:videoPlayback:videoObjectTracker:previewConfiguration:bounceFeature:snapCrop:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105ddf350

// -[SCPreviewFeatureVideoTrackingImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105ddf4c0

// -[SCPreviewFeatureVideoTrackingImpl pinView:originalScale:atPoint:completion:]
// Type encoding: v56@0:8@16d24{CGPoint=dd}32@?48
// Implementation: 0x105ddf4c8

// -[SCPreviewFeatureVideoTrackingImpl applyDurationToView:timeRange:shouldKeepScale:]
// Type encoding: v76@0:8@16{?={?=qiIq}{?=qiIq}}24B72
// Implementation: 0x105ddf898

// -[SCPreviewFeatureVideoTrackingImpl applyDurationToAutoCaptionView:timeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105ddfbac

// -[SCPreviewFeatureVideoTrackingImpl disableVideoTrackingForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddfd8c

// -[SCPreviewFeatureVideoTrackingImpl registerListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ddff88

// -[SCPreviewFeatureVideoTrackingImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de0000

// -[SCPreviewFeatureVideoTrackingImpl _timedTrajectoryManagerWithTotalContentDuraiton:]
// Type encoding: @24@0:8d16
// Implementation: 0x105de007c

// -[SCPreviewFeatureVideoTrackingImpl _croppingStateScale]
// Type encoding: d16@0:8
// Implementation: 0x105de01b4

// -[SCPreviewFeatureVideoTrackingImpl _croppingStateRotation]
// Type encoding: d16@0:8
// Implementation: 0x105de02ec

// -[SCPreviewFeatureVideoTrackingImpl _prepareMovableTrackingViewForTracking:inContainerView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de0424

// -[SCPreviewFeatureVideoTrackingImpl _centerForTrackingView:inContainerView:]
// Type encoding: {CGPoint=dd}32@0:8@16@24
// Implementation: 0x105de04bc

// -[SCPreviewFeatureVideoTrackingImpl _callListenersForWillTrackView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de0598

// -[SCPreviewFeatureVideoTrackingImpl _callListenersForDidTrackView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de06d0

// -[SCPreviewFeatureVideoTrackingImpl _callListenersForDidDisableTrackingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de0808

// -[SCPreviewFeatureVideoTrackingImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105de0940

// -[SCPreviewFeatureVideoTrackingImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de0958

// -[SCPreviewFeatureVideoTrackingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105de0964

@end
