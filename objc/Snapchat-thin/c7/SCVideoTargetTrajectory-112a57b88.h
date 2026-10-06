// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTargetTrajectory
// Superclass: NSObject
// Address: 0x112a57b88

@interface SCVideoTargetTrajectory

// Property: repeatTrajectoryForLoopingVideo; attributes: TB,N,V_repeatTrajectoryForLoopingVideo
// Property: maxTrackedFrameTimeInSeconds; attributes: Td,R,N,V_maxTrackedFrameTimeInSeconds
// Property: minTrackedFrameTimeInSeconds; attributes: Td,R,N,V_minTrackedFrameTimeInSeconds
// Property: config; attributes: T@"SCVideoTrackingTargetTrajectoryConfiguration",R,N,V_config
// Property: isTrajectoryComplete; attributes: TB,R,N,GisTrajectoryComplete
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTargetTrajectory initWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c0a28

// -[SCVideoTargetTrajectory initWithVideoTrackedImageTrajectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c0ae0

// -[SCVideoTargetTrajectory newVideoTargetTrajectoryForBounceState:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c0d20

// -[SCVideoTargetTrajectory toTrajectoryState]
// Type encoding: @16@0:8
// Implementation: 0x1056c0f9c

// -[SCVideoTargetTrajectory addTransform:atTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1056c10bc

// -[SCVideoTargetTrajectory transformAtTime:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x1056c131c

// -[SCVideoTargetTrajectory isTrajectoryComplete]
// Type encoding: B16@0:8
// Implementation: 0x1056c1634

// -[SCVideoTargetTrajectory minTrackedFrameTimeInSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1056c167c

// -[SCVideoTargetTrajectory maxTrackedFrameTimeInSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1056c1684

// -[SCVideoTargetTrajectory repeatTrajectoryForLoopingVideo]
// Type encoding: B16@0:8
// Implementation: 0x1056c168c

// -[SCVideoTargetTrajectory setRepeatTrajectoryForLoopingVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056c1694

// -[SCVideoTargetTrajectory config]
// Type encoding: @16@0:8
// Implementation: 0x1056c169c

// -[SCVideoTargetTrajectory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056c16a4

// -[SCVideoTargetTrajectory .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1056c16d0

@end
