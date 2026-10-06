// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureARSessionBlurLoadingViewImpl
// Superclass: SCFeature
// Address: 0x112acd5b8

@interface SCFeatureARSessionBlurLoadingViewImpl

// Property: isFirstARSampleBuffer; attributes: TB,V_isFirstARSampleBuffer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureARSessionBlurLoadingViewImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraHardwareResource:lensLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106141b44

// -[SCFeatureARSessionBlurLoadingViewImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106141d70

// -[SCFeatureARSessionBlurLoadingViewImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x106141da8

// -[SCFeatureARSessionBlurLoadingViewImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061420b4

// -[SCFeatureARSessionBlurLoadingViewImpl _createBlurLoadingView]
// Type encoding: v16@0:8
// Implementation: 0x10614214c

// -[SCFeatureARSessionBlurLoadingViewImpl _hideBlurLoadingView]
// Type encoding: v16@0:8
// Implementation: 0x106142410

// -[SCFeatureARSessionBlurLoadingViewImpl _showBlurLoadingView]
// Type encoding: v16@0:8
// Implementation: 0x1061425bc

// -[SCFeatureARSessionBlurLoadingViewImpl _didChangeARSessionActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106142790

// -[SCFeatureARSessionBlurLoadingViewImpl _didReceiveManagedVideoDataSouceEvent:sampleTimestamp:devicePosition:]
// Type encoding: v56@0:8^{opaqueCMSampleBuffer=}16{?=qiIq}24q48
// Implementation: 0x1061428b0

// -[SCFeatureARSessionBlurLoadingViewImpl _handleApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106142918

// -[SCFeatureARSessionBlurLoadingViewImpl _handleViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10614291c

// -[SCFeatureARSessionBlurLoadingViewImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106142920

// -[SCFeatureARSessionBlurLoadingViewImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106142ba8

// -[SCFeatureARSessionBlurLoadingViewImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106142bdc

// -[SCFeatureARSessionBlurLoadingViewImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x106142e04

// -[SCFeatureARSessionBlurLoadingViewImpl isFirstARSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x106142e38

// -[SCFeatureARSessionBlurLoadingViewImpl setIsFirstARSampleBuffer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106142e4c

// -[SCFeatureARSessionBlurLoadingViewImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106142e5c

@end
