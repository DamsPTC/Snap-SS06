// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTargetTrajectoryObjectTrackingImageProcessor
// Superclass: NSObject
// Address: 0x112a57a48

@interface SCVideoTargetTrajectoryObjectTrackingImageProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataSource; attributes: T@"<SCVideoTargetTrajectoryImageProcessingDataSource>",W,N,V_dataSource
// Property: delegate; attributes: T@"<SCVideoTrackingTargetTrajectoryImageProcessingDelegate>",W,N,V_delegate

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor initWithVideoTracker:initialTransform:size:frameTime:isTrackingTouchPoint:centerPoint:]
// Type encoding: @92@0:8@16@24{CGSize=dd}32{?=qiIq}48B72{CGPoint=dd}76
// Implementation: 0x1056bfc00

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1056bfd34

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _startTrackingWithTransform:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056bfd8c

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _stopTracking]
// Type encoding: v16@0:8
// Implementation: 0x1056bfe14

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoTracker:didProduceTransform:atTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x1056bfe40

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoTracker:didFailAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1056c000c

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _transformCenterToTrackingPoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c0020

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoPlaybackSession:willRenderFrame:atTime:]
// Type encoding: v56@0:8@16^{__CVBuffer=}24{?=qiIq}32
// Implementation: 0x1056c010c

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1056c0468

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor dataSource]
// Type encoding: @16@0:8
// Implementation: 0x1056c0538

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056c0550

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor delegate]
// Type encoding: @16@0:8
// Implementation: 0x1056c055c

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056c0574

// -[SCVideoTargetTrajectoryObjectTrackingImageProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056c0580

@end
