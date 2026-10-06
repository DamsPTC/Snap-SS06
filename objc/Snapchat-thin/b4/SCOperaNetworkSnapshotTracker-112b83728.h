// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaNetworkSnapshotTracker
// Superclass: NSObject
// Address: 0x112b83728

@interface SCOperaNetworkSnapshotTracker

// Property: networkSnapshotThresholdMs; attributes: TQ,R,N,V_networkSnapshotThresholdMs
// Property: snapshotCounter; attributes: TQ,R,N,V_snapshotCounter
// Property: lastNetworkSnapshot; attributes: T@"SCNNetworkTypesNetworkQueueState",R,N,V_lastNetworkSnapshot
// Property: requestedTimestampMs; attributes: T@"NSNumber",R,&,N,V_requestedTimestampMs
// Property: capturedDurationMs; attributes: T@"NSNumber",R,&,N,V_capturedDurationMs

// -[SCOperaNetworkSnapshotTracker initWithBandwidthEstimator:threshold:videoIdentifier:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x107de667c

// -[SCOperaNetworkSnapshotTracker startTracking]
// Type encoding: v16@0:8
// Implementation: 0x107de677c

// -[SCOperaNetworkSnapshotTracker startTrackingForStall:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de6784

// -[SCOperaNetworkSnapshotTracker stopTracking]
// Type encoding: v16@0:8
// Implementation: 0x107de6994

// -[SCOperaNetworkSnapshotTracker stopTrackingForStall:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de699c

// -[SCOperaNetworkSnapshotTracker _captureNetworkSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de6a00

// -[SCOperaNetworkSnapshotTracker networkSnapshotThresholdMs]
// Type encoding: Q16@0:8
// Implementation: 0x107de6ba0

// -[SCOperaNetworkSnapshotTracker snapshotCounter]
// Type encoding: Q16@0:8
// Implementation: 0x107de6ba8

// -[SCOperaNetworkSnapshotTracker lastNetworkSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107de6bb0

// -[SCOperaNetworkSnapshotTracker requestedTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x107de6bb8

// -[SCOperaNetworkSnapshotTracker capturedDurationMs]
// Type encoding: @16@0:8
// Implementation: 0x107de6bc0

// -[SCOperaNetworkSnapshotTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107de6bc8

@end
