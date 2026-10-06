// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTargetTrajectoryManager
// Superclass: NSObject
// Address: 0x112a579a8

@interface SCVideoTargetTrajectoryManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: targetTrajectory; attributes: T@"<SCVideoTrackingMutableTargetTrajectory>",R,N,V_targetTrajectory
// Property: config; attributes: T@"SCVideoTrackingTargetTrajectoryConfiguration",R,N,V_config
// Property: configType; attributes: TQ,R,N
// Property: usingBounceTrajectory; attributes: TB,R,N
// Property: hasNonBounceTrajectory; attributes: TB,R,N
// Property: trackingComplete; attributes: TB,R,N,GisTrackingComplete
// Property: delegate; attributes: T@"<SCVideoTrackingTargetTrajectoryManagerDelegate>",W,N,V_delegate

// -[SCVideoTargetTrajectoryManager initTouchPointTrackingWithConfig:imageProcessor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056bf640

// -[SCVideoTargetTrajectoryManager initWithTrajectory:imageProcessor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056bf758

// -[SCVideoTargetTrajectoryManager switchToAlternateTrajectoryBasedOnBounceState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056bf898

// -[SCVideoTargetTrajectoryManager switchToOriginalTargetTrajectory]
// Type encoding: v16@0:8
// Implementation: 0x1056bf8c8

// -[SCVideoTargetTrajectoryManager isTrackingComplete]
// Type encoding: B16@0:8
// Implementation: 0x1056bf8f8

// -[SCVideoTargetTrajectoryManager configType]
// Type encoding: Q16@0:8
// Implementation: 0x1056bf900

// -[SCVideoTargetTrajectoryManager usingBounceTrajectory]
// Type encoding: B16@0:8
// Implementation: 0x1056bf938

// -[SCVideoTargetTrajectoryManager hasNonBounceTrajectory]
// Type encoding: B16@0:8
// Implementation: 0x1056bf948

// -[SCVideoTargetTrajectoryManager hasTargetTrajectoryForImageProcessor:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056bf958

// -[SCVideoTargetTrajectoryManager isTrajectoryCompleteForImageProcessor:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056bf968

// -[SCVideoTargetTrajectoryManager minTrackedFrameTimeInSecondsForImageProcessor:]
// Type encoding: d24@0:8@16
// Implementation: 0x1056bf970

// -[SCVideoTargetTrajectoryManager maxTrackedFrameTimeInSecondsForImageProcessor:]
// Type encoding: d24@0:8@16
// Implementation: 0x1056bf978

// -[SCVideoTargetTrajectoryManager imageProcessor:addTransform:atTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x1056bf980

// -[SCVideoTargetTrajectoryManager imageProcessor:outputTransform:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056bf9b8

// -[SCVideoTargetTrajectoryManager imageProcessor:outputTransformAtTime:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x1056bfa1c

// -[SCVideoTargetTrajectoryManager targetTrajectory]
// Type encoding: @16@0:8
// Implementation: 0x1056bfaa4

// -[SCVideoTargetTrajectoryManager config]
// Type encoding: @16@0:8
// Implementation: 0x1056bfaac

// -[SCVideoTargetTrajectoryManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1056bfab4

// -[SCVideoTargetTrajectoryManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056bfacc

// -[SCVideoTargetTrajectoryManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056bfad8

@end
