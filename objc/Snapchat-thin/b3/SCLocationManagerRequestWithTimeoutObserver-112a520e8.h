// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationManagerRequestWithTimeoutObserver
// Superclass: NSObject
// Address: 0x112a520e8

@interface SCLocationManagerRequestWithTimeoutObserver

// Property: locationObserverDispatchQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_locationObserverDispatchQueue
// Property: callbackBlock; attributes: T@?,R,C,N,V_callbackBlock
// Property: attributedFeature; attributes: T@"SCAttributedFeature",R,C,N,V_attributedFeature
// Property: locationObserverDesiredAccuracy; attributes: Td,R,N,V_locationObserverDesiredAccuracy
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationManagerRequestWithTimeoutObserver initWithLocationManager:desiredAccuracy:callbackQueue:callback:observerAttributedFeature:]
// Type encoding: @56@0:8@16d24@32@?40@48
// Implementation: 0x1055fe8f0

// -[SCLocationManagerRequestWithTimeoutObserver startWithTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x1055fea1c

// -[SCLocationManagerRequestWithTimeoutObserver _deliverFinalCallbackAndStopObserving]
// Type encoding: v16@0:8
// Implementation: 0x1055febd0

// -[SCLocationManagerRequestWithTimeoutObserver locationObserverWantsActiveLocationMonitoring]
// Type encoding: B16@0:8
// Implementation: 0x1055feca4

// -[SCLocationManagerRequestWithTimeoutObserver onLocationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fecac

// -[SCLocationManagerRequestWithTimeoutObserver locationObserverAttributedFeature]
// Type encoding: @16@0:8
// Implementation: 0x1055feda4

// -[SCLocationManagerRequestWithTimeoutObserver _locationListenerHelperWithLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fedcc

// -[SCLocationManagerRequestWithTimeoutObserver _dispatchStopObserving]
// Type encoding: v16@0:8
// Implementation: 0x1055fee24

// -[SCLocationManagerRequestWithTimeoutObserver _stopObserving]
// Type encoding: v16@0:8
// Implementation: 0x1055feedc

// -[SCLocationManagerRequestWithTimeoutObserver locationObserverDispatchQueue]
// Type encoding: @16@0:8
// Implementation: 0x1055fef34

// -[SCLocationManagerRequestWithTimeoutObserver locationObserverDesiredAccuracy]
// Type encoding: d16@0:8
// Implementation: 0x1055fef3c

// -[SCLocationManagerRequestWithTimeoutObserver callbackBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1055fef44

// -[SCLocationManagerRequestWithTimeoutObserver attributedFeature]
// Type encoding: @16@0:8
// Implementation: 0x1055fef4c

// -[SCLocationManagerRequestWithTimeoutObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055fef54

@end
