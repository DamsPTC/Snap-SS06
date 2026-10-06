// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTracker
// Superclass: NSObject
// Address: 0x112a57c28

@interface SCVideoTracker

// Property: delegate; attributes: T@"<SCVideoTrackerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTracker initWithVideoSize:orientation:isLagunaMedia:isMultiSnap:]
// Type encoding: @48@0:8{CGSize=dd}16q32B40B44
// Implementation: 0x1056c1828

// -[SCVideoTracker setVideoSize:orientation:]
// Type encoding: v40@0:8{CGSize=dd}16q32
// Implementation: 0x1056c1a2c

// -[SCVideoTracker addTargetAtPoint:size:listener:firstTimeTracking:notificationQueue:]
// Type encoding: q68@0:8{CGPoint=dd}16{CGSize=dd}32@48B56@60
// Implementation: 0x1056c1b90

// -[SCVideoTracker removeTarget:]
// Type encoding: v24@0:8q16
// Implementation: 0x1056c1dec

// -[SCVideoTracker processFrame:atTime:]
// Type encoding: v48@0:8^{__CVBuffer=}16{?=qiIq}24
// Implementation: 0x1056c1ec4

// -[SCVideoTracker _setVideoSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1056c2698

// -[SCVideoTracker _shouldStopTrackingAtTime:trackingStatus:]
// Type encoding: B44@0:8{?=qiIq}16i40
// Implementation: 0x1056c26a0

// -[SCVideoTracker _convertToOpenCVPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x1056c2730

// -[SCVideoTracker _convertOpenCVPointToUIPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x1056c2754

// -[SCVideoTracker delegate]
// Type encoding: @16@0:8
// Implementation: 0x1056c277c

// -[SCVideoTracker setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056c2794

// -[SCVideoTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056c27a0

// -[SCVideoTracker .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1056c2828

@end
