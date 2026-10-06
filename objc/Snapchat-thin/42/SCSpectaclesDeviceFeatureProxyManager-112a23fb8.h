// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceFeatureProxyManager
// Superclass: NSObject
// Address: 0x112a23fb8

@interface SCSpectaclesDeviceFeatureProxyManager

// Property: enableUIForNextProxyAttempt; attributes: TB,V_enableUIForNextProxyAttempt
// Property: isProxyRequired; attributes: TB,R,N
// Property: port; attributes: TS,R,N
// Property: proxyDelegate; attributes: T@"<SCSpectaclesProxyClientDelegate>",W,N,VproxyDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDeviceFeatureProxyManager initWithConnectionHub:device:dataFlowManager:backgroundTaskWrapper:notificationPresenter:userTrackedLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1052341ec

// -[SCSpectaclesDeviceFeatureProxyManager startManualWifiForProxyRequest]
// Type encoding: v16@0:8
// Implementation: 0x1052343a4

// -[SCSpectaclesDeviceFeatureProxyManager _showManualWifiNotification]
// Type encoding: v16@0:8
// Implementation: 0x1052343ac

// -[SCSpectaclesDeviceFeatureProxyManager _hideManualWifiNotification]
// Type encoding: v16@0:8
// Implementation: 0x1052343f0

// -[SCSpectaclesDeviceFeatureProxyManager _stopProxyAndNotifyHermosa]
// Type encoding: v16@0:8
// Implementation: 0x105234470

// -[SCSpectaclesDeviceFeatureProxyManager startProxyManualControl]
// Type encoding: v16@0:8
// Implementation: 0x1052344c8

// -[SCSpectaclesDeviceFeatureProxyManager stopProxyManualControl]
// Type encoding: v16@0:8
// Implementation: 0x105234518

// -[SCSpectaclesDeviceFeatureProxyManager isProxyConnectionActive]
// Type encoding: B16@0:8
// Implementation: 0x105234540

// -[SCSpectaclesDeviceFeatureProxyManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105234548

// -[SCSpectaclesDeviceFeatureProxyManager _handleManualStartResponse:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105234600

// -[SCSpectaclesDeviceFeatureProxyManager _handleStopProxyMsg]
// Type encoding: v16@0:8
// Implementation: 0x105234614

// -[SCSpectaclesDeviceFeatureProxyManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105234638

// -[SCSpectaclesDeviceFeatureProxyManager _sendProxyWifiFailureRPC]
// Type encoding: v16@0:8
// Implementation: 0x105234640

// -[SCSpectaclesDeviceFeatureProxyManager _connectedClientCountUpdated:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105234694

// -[SCSpectaclesDeviceFeatureProxyManager proxyListeningWithCredentials:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052346c0

// -[SCSpectaclesDeviceFeatureProxyManager proxyConnectionEstablished]
// Type encoding: v16@0:8
// Implementation: 0x1052346cc

// -[SCSpectaclesDeviceFeatureProxyManager proxyConnectionStopped]
// Type encoding: v16@0:8
// Implementation: 0x1052346d0

// -[SCSpectaclesDeviceFeatureProxyManager port]
// Type encoding: S16@0:8
// Implementation: 0x1052346d4

// -[SCSpectaclesDeviceFeatureProxyManager isProxyRequired]
// Type encoding: B16@0:8
// Implementation: 0x1052346dc

// -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequestRequireAutomaticWiFiConnectionTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052346e4

// -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequestStartedExecuting:]
// Type encoding: v24@0:8@16
// Implementation: 0x105234738

// -[SCSpectaclesDeviceFeatureProxyManager dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105234780

// -[SCSpectaclesDeviceFeatureProxyManager tweakStartProxy]
// Type encoding: v16@0:8
// Implementation: 0x1052347b4

// -[SCSpectaclesDeviceFeatureProxyManager tweakStopProxy]
// Type encoding: v16@0:8
// Implementation: 0x1052347ec

// -[SCSpectaclesDeviceFeatureProxyManager tweakStartFullProxy]
// Type encoding: v16@0:8
// Implementation: 0x1052347f0

// -[SCSpectaclesDeviceFeatureProxyManager tweakStopFullProxy]
// Type encoding: v16@0:8
// Implementation: 0x1052347f8

// -[SCSpectaclesDeviceFeatureProxyManager _startProxyFlowWithUserInteractionAllowed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052347fc

// -[SCSpectaclesDeviceFeatureProxyManager _stopProxyFlow]
// Type encoding: v16@0:8
// Implementation: 0x105234960

// -[SCSpectaclesDeviceFeatureProxyManager _sendProxyStartedMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052349d8

// -[SCSpectaclesDeviceFeatureProxyManager proxyDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105234ae8

// -[SCSpectaclesDeviceFeatureProxyManager setProxyDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105234b00

// -[SCSpectaclesDeviceFeatureProxyManager enableUIForNextProxyAttempt]
// Type encoding: B16@0:8
// Implementation: 0x105234b0c

// -[SCSpectaclesDeviceFeatureProxyManager setEnableUIForNextProxyAttempt:]
// Type encoding: v20@0:8B16
// Implementation: 0x105234b18

// -[SCSpectaclesDeviceFeatureProxyManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105234b20

@end
