// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewfinderDataSourceCoordinatorImpl
// Superclass: NSObject
// Address: 0x112ad58a8

@interface SCViewfinderDataSourceCoordinatorImpl

// Property: delegate; attributes: T@"<SCViewfinderDataSourceDelegate>",W,N,Vdelegate
// Property: activeDataSource; attributes: T@"<SCViewfinderDataSource>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewfinderDataSourceCoordinatorImpl initWithDefaultDataSource:cameraViewfinderConfiguration:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1006ba1a4

// -[SCViewfinderDataSourceCoordinatorImpl activeDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10087d5ac

// -[SCViewfinderDataSourceCoordinatorImpl addDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621a6c8

// -[SCViewfinderDataSourceCoordinatorImpl removeDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621a738

// -[SCViewfinderDataSourceCoordinatorImpl dataSourceDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087d524

// -[SCViewfinderDataSourceCoordinatorImpl dataSource:didReceiveSampleBuffer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008833a8

// -[SCViewfinderDataSourceCoordinatorImpl dataSource:didReceiveAudioSampleBuffer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621a79c

// -[SCViewfinderDataSourceCoordinatorImpl dataSourceDidStop:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621a844

// -[SCViewfinderDataSourceCoordinatorImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10087d60c

// -[SCViewfinderDataSourceCoordinatorImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006ba998

// -[SCViewfinderDataSourceCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10621a8cc

@end
