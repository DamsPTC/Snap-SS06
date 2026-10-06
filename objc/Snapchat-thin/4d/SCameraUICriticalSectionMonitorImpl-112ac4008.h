// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCameraUICriticalSectionMonitorImpl
// Superclass: NSObject
// Address: 0x112ac4008

@interface SCameraUICriticalSectionMonitorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCameraUICriticalSectionMonitorImpl initWithCriticalSectionRegistry:videoDataSourceObservable:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:appLifecycleManager:shouldDisableUserInteractionDuringCameraLaunch:cameraUIScopeViewContainer:]
// Type encoding: @68@0:8@16@24@32@40@48B56@60
// Implementation: 0x1005d6194

// -[SCameraUICriticalSectionMonitorImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10608e220

// -[SCameraUICriticalSectionMonitorImpl startMonitor]
// Type encoding: v16@0:8
// Implementation: 0x10608e268

// -[SCameraUICriticalSectionMonitorImpl _beginCriticalSection]
// Type encoding: v16@0:8
// Implementation: 0x10608e864

// -[SCameraUICriticalSectionMonitorImpl _endCriticalSection]
// Type encoding: v16@0:8
// Implementation: 0x10608e97c

// -[SCameraUICriticalSectionMonitorImpl _handleViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x10608ea40

// -[SCameraUICriticalSectionMonitorImpl _handleViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10608ea4c

// -[SCameraUICriticalSectionMonitorImpl _handleFrameReceived]
// Type encoding: v16@0:8
// Implementation: 0x10608ea54

// -[SCameraUICriticalSectionMonitorImpl _handleNewVideoDatasource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608ea68

// -[SCameraUICriticalSectionMonitorImpl _isHeadlessMode]
// Type encoding: B16@0:8
// Implementation: 0x10608eabc

// -[SCameraUICriticalSectionMonitorImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608eb3c

// -[SCameraUICriticalSectionMonitorImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x10608ec90

// -[SCameraUICriticalSectionMonitorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10608ecbc

@end
