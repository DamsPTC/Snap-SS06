// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiGrapheneMetricReporter
// Superclass: NSObject
// Address: 0x112a4e038

@interface SCLensRemoteApiGrapheneMetricReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiGrapheneMetricReporter initWithRemoteApiGraphene:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055dd874

// -[SCLensRemoteApiGrapheneMetricReporter reportResponseSucceededWithEndpointId:lensId:specId:latencyInMs:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1055dd8e8

// -[SCLensRemoteApiGrapheneMetricReporter reportResponseFailedWithEndpointId:lensId:specId:latencyInMs:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1055dd984

// -[SCLensRemoteApiGrapheneMetricReporter reportRequestSentWithEndpointId:lensId:specId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055dda20

// -[SCLensRemoteApiGrapheneMetricReporter reportLocalOnlySpecDroppedWithEndpointId:lensId:specId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055dda38

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthFailedWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055dda50

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthSucceededWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055dda64

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthStartedWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055dda78

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenErrorWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055dda8c

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenFoundWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055ddaa0

// -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenNotAvailableWithLensId:specId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055ddab4

// -[SCLensRemoteApiGrapheneMetricReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055ddac8

@end
