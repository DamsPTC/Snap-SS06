// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryLogger
// Superclass: NSObject
// Address: 0x112a27a78

@interface SCBatteryLogger

// Property: currentThermalState; attributes: T@"NSNumber",&,N,V_currentThermalState
// Property: isCameraActive; attributes: TB,N,V_isCameraActive
// Property: queuePerformer; attributes: T@"<SCPerforming>",&,N,V_queuePerformer
// Property: batteryGPUMonitor; attributes: T@"SCBatteryGPUMonitor",&,N,V_batteryGPUMonitor
// Property: batteryCPUMonitor; attributes: T@"SCBatteryCPUMonitor",&,N,V_batteryCPUMonitor
// Property: batteryPageViewLogger; attributes: T@"SCBatteryPageViewLogger",&,N,V_batteryPageViewLogger
// Property: batteryCameraMonitor; attributes: T@"SCBatteryCameraMonitor",&,N,V_batteryCameraMonitor
// Property: batteryGPSMonitor; attributes: T@"SCBatteryGPSMonitor",&,N,V_batteryGPSMonitor
// Property: batteryNetworkMonitor; attributes: T@"SCBatteryNetworkMonitor",&,N,V_batteryNetworkMonitor
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBatteryLogger initWithNetworkMonitor:blizzardLogger:idleMonitor:applicationLifecycleEvents:capturerStateUpdate:managedCapturerStateCoordinator:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100115ef0

// -[SCBatteryLogger _initWithQueuePerformer:blizzardLogger:idleMonitor:networkMonitor:applicationLifecycleEvents:capturerStateUpdate:managedCapturerStateCoordinator:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100116454

// -[SCBatteryLogger _setupCapturerObservable]
// Type encoding: v16@0:8
// Implementation: 0x10011dfac

// -[SCBatteryLogger setupLocationOperationsUpdateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x100127a9c

// -[SCBatteryLogger _sessionDidStartRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052de78c

// -[SCBatteryLogger _sessionDidStopRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052de88c

// -[SCBatteryLogger _didAddCaptureInput:captureState:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100c3bf1c

// -[SCBatteryLogger _didRemoveCaptureInput:captureState:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1052de98c

// -[SCBatteryLogger onAppIdle]
// Type encoding: v16@0:8
// Implementation: 0x1052dea0c

// -[SCBatteryLogger _setUpBatteryObservations]
// Type encoding: v16@0:8
// Implementation: 0x1052dea3c

// -[SCBatteryLogger _tearDownBatteryObservations]
// Type encoding: v16@0:8
// Implementation: 0x1052deac8

// -[SCBatteryLogger _setUpCameraStatusChangeListener]
// Type encoding: v16@0:8
// Implementation: 0x10011ca7c

// -[SCBatteryLogger _setUpCpuUsageListener]
// Type encoding: v16@0:8
// Implementation: 0x100119c9c

// -[SCBatteryLogger _setUpGpuUsageListener]
// Type encoding: v16@0:8
// Implementation: 0x1052dec6c

// -[SCBatteryLogger _setUpBatteryResourceStatusObservationsAndUpdateDebugViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052ded64

// -[SCBatteryLogger _setUpNetworkAndStateObservations]
// Type encoding: v16@0:8
// Implementation: 0x1052ded68

// -[SCBatteryLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052dee54

// -[SCBatteryLogger queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1052deea4

// -[SCBatteryLogger shouldLogThisSession]
// Type encoding: B16@0:8
// Implementation: 0x1052deecc

// -[SCBatteryLogger startLoggingSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052deee0

// -[SCBatteryLogger _createBatteryLevelObservingTimer]
// Type encoding: @16@0:8
// Implementation: 0x1052def18

// -[SCBatteryLogger batteryStateChanged]
// Type encoding: v16@0:8
// Implementation: 0x1052df014

// -[SCBatteryLogger logBatteryLevelAndUpdateAppIsBackgrounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052df098

// -[SCBatteryLogger logBatteryLevelAndState]
// Type encoding: v16@0:8
// Implementation: 0x1052df130

// -[SCBatteryLogger logBatteryLevelAndStateWithHandler:onBatteryStateChange:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1052df13c

// -[SCBatteryLogger _batteryStateString:]
// Type encoding: @24@0:8q16
// Implementation: 0x1052df3a0

// -[SCBatteryLogger batteryLevelChanged]
// Type encoding: v16@0:8
// Implementation: 0x1052df3c8

// -[SCBatteryLogger resume]
// Type encoding: v16@0:8
// Implementation: 0x1052df444

// -[SCBatteryLogger pause]
// Type encoding: v16@0:8
// Implementation: 0x1052df448

// -[SCBatteryLogger didBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052df44c

// -[SCBatteryLogger willResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052df450

// -[SCBatteryLogger willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052df454

// -[SCBatteryLogger didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052df508

// -[SCBatteryLogger thermalStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1052df5ac

// -[SCBatteryLogger checkCurrentThermalState]
// Type encoding: v16@0:8
// Implementation: 0x1052df5b0

// -[SCBatteryLogger _updateThermalHistoryWithThermalState:thermalStateStartTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052df678

// -[SCBatteryLogger resetThermalStateWhenAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x10011cbdc

// -[SCBatteryLogger _resetThermalStateWhenAppOpenWithThermalState:appOpenTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10011cf9c

// -[SCBatteryLogger _resetAppSessionId]
// Type encoding: v16@0:8
// Implementation: 0x1052df974

// -[SCBatteryLogger _resetCpuUsageRecord]
// Type encoding: v16@0:8
// Implementation: 0x10011df54

// -[SCBatteryLogger _resetAppOpenBatteryLevel]
// Type encoding: v16@0:8
// Implementation: 0x1052dfa04

// -[SCBatteryLogger reportAppSessionBatteryMetricsAtTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052dfb0c

// -[SCBatteryLogger _reportAppSessionBatteryMetricsAtTimestamp:onAppBackground:withTrigger:]
// Type encoding: v36@0:8@16B24^{__CFString=}28
// Implementation: 0x1052dfb18

// -[SCBatteryLogger didPullCpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e1c64

// -[SCBatteryLogger didPullCpuTime:atTimestamp:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1052e1cb0

// -[SCBatteryLogger didPullGpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e1cf8

// -[SCBatteryLogger _didPullCpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e1d38

// -[SCBatteryLogger pageViewDidStartWithPageName:pageViewStartTime:previousPageName:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x100a0087c

// -[SCBatteryLogger pageViewDidEndWithPageName:pageViewEndTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1052e1f7c

// -[SCBatteryLogger didCameraStartBeingVisibleAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x100a10d08

// -[SCBatteryLogger didCameraStopBeingVisibleAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e2070

// -[SCBatteryLogger wasGrantedAuthorization:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052e20b0

// -[SCBatteryLogger didStartUpdatingLocation:startTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052e2178

// -[SCBatteryLogger didStopUpdatingLocation:stopTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052e21e8

// -[SCBatteryLogger didRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052e2258

// -[SCBatteryLogger didRequestStopUpdatingLocationWithAttributedFeature:stopTime:userDidGrantAuthorization:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1052e22d0

// -[SCBatteryLogger didStartNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10068d53c

// -[SCBatteryLogger didStopNetworkActivity:stopTime:activityAttributionKey:activityAttributionInfo:succeeded:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10089fc9c

// -[SCBatteryLogger didStartMonitoringHighCpuIssuesWithHighCpuCriteria:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2348

// -[SCBatteryLogger didHighCpuIssueHappen]
// Type encoding: v16@0:8
// Implementation: 0x1052e2410

// -[SCBatteryLogger backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x1052e247c

// -[SCBatteryLogger backgroundGpsUsageWithStartTime:endTime:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1052e2518

// -[SCBatteryLogger isCameraOn]
// Type encoding: B16@0:8
// Implementation: 0x1052e259c

// -[SCBatteryLogger isGPSOn]
// Type encoding: B16@0:8
// Implementation: 0x1052e25d8

// -[SCBatteryLogger cpuUsage]
// Type encoding: d16@0:8
// Implementation: 0x1052e2614

// -[SCBatteryLogger gpuUsage]
// Type encoding: d16@0:8
// Implementation: 0x1052e2658

// -[SCBatteryLogger thermalState]
// Type encoding: q16@0:8
// Implementation: 0x1052e269c

// -[SCBatteryLogger currentThermalState]
// Type encoding: @16@0:8
// Implementation: 0x1052e26d8

// -[SCBatteryLogger setCurrentThermalState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e26e0

// -[SCBatteryLogger isCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x100c3bf9c

// -[SCBatteryLogger setIsCameraActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052e2710

// -[SCBatteryLogger setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2718

// -[SCBatteryLogger batteryGPUMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1052e2748

// -[SCBatteryLogger setBatteryGPUMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2750

// -[SCBatteryLogger batteryCPUMonitor]
// Type encoding: @16@0:8
// Implementation: 0x10011a15c

// -[SCBatteryLogger setBatteryCPUMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2780

// -[SCBatteryLogger batteryPageViewLogger]
// Type encoding: @16@0:8
// Implementation: 0x100a14828

// -[SCBatteryLogger setBatteryPageViewLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e27b0

// -[SCBatteryLogger batteryCameraMonitor]
// Type encoding: @16@0:8
// Implementation: 0x10011cb44

// -[SCBatteryLogger setBatteryCameraMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e27e0

// -[SCBatteryLogger batteryGPSMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1052e2810

// -[SCBatteryLogger setBatteryGPSMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2818

// -[SCBatteryLogger batteryNetworkMonitor]
// Type encoding: @16@0:8
// Implementation: 0x10068d5e4

// -[SCBatteryLogger setBatteryNetworkMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2848

// -[SCBatteryLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052e2878

@end
