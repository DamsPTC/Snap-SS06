// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCULensesAutoTestParams
// Superclass: NSObject
// Address: 0x112c009a8

@interface SCULensesAutoTestParams

// Property: videoPath; attributes: T@"NSString",C,N,V_videoPath
// Property: trackingDataPath; attributes: T@"NSString",C,N,V_trackingDataPath
// Property: markerTrackingData; attributes: TB,N,GisMarkerTrackingData,V_markerTrackingData
// Property: shouldMockTrackingData; attributes: TB,R,N
// Property: lidarTrackingData; attributes: TB,N,GisLidarTrackingData,V_lidarTrackingData

// -[SCULensesAutoTestParams initWithVideoPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea21c

// -[SCULensesAutoTestParams initWithVideoPath:trackingDataPath:isMarkerTrackingData:isLidarTrackingData:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x10aeea22c

// -[SCULensesAutoTestParams shouldMockTrackingData]
// Type encoding: B16@0:8
// Implementation: 0x10aeea2e8

// -[SCULensesAutoTestParams videoPath]
// Type encoding: @16@0:8
// Implementation: 0x10aeea308

// -[SCULensesAutoTestParams setVideoPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeea310

// -[SCULensesAutoTestParams trackingDataPath]
// Type encoding: @16@0:8
// Implementation: 0x10aeea318

// -[SCULensesAutoTestParams setTrackingDataPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeea320

// -[SCULensesAutoTestParams isMarkerTrackingData]
// Type encoding: B16@0:8
// Implementation: 0x10aeea328

// -[SCULensesAutoTestParams setMarkerTrackingData:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea330

// -[SCULensesAutoTestParams isLidarTrackingData]
// Type encoding: B16@0:8
// Implementation: 0x10aeea338

// -[SCULensesAutoTestParams setLidarTrackingData:]
// Type encoding: v20@0:8B16
// Implementation: 0x10aeea340

// -[SCULensesAutoTestParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeea348

// +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeea378

// +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:trackingDataPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aeea3c4

// +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:markerTrackingDataPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aeea438

// +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:lidarTrackingDataPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aeea4ac

@end
