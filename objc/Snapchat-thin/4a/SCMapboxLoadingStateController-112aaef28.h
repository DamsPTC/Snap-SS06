// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapboxLoadingStateController
// Superclass: NSObject
// Address: 0x112aaef28

@interface SCMapboxLoadingStateController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: loadingStateObservable; attributes: T@"SCObservable",R,N
// Property: mapReadyObservable; attributes: T@"SCObservable",R,N
// Property: mapFriendLoadObservable; attributes: T@"SCObservable",R,N
// Property: styleLoadingObservable; attributes: T@"SCObservable",R,N

// -[SCMapboxLoadingStateController initWithMapboxView:mapboxListenerAnnouncer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f57f84

// -[SCMapboxLoadingStateController loadingStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f58080

// -[SCMapboxLoadingStateController mapReadyObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f580a8

// -[SCMapboxLoadingStateController mapFriendLoadObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f580d0

// -[SCMapboxLoadingStateController styleLoadingObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f580f8

// -[SCMapboxLoadingStateController _appendPerformanceTestAccessibilityToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f58120

// -[SCMapboxLoadingStateController mapViewWillStartLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f58124

// -[SCMapboxLoadingStateController mapViewDidFinishLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f58168

// -[SCMapboxLoadingStateController mapViewDidFailLoadingMap:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f581c8

// -[SCMapboxLoadingStateController mapViewDidFinishRenderingFrame:fullyRendered:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f58210

// -[SCMapboxLoadingStateController mapView:didFinishLoadingStyleWithName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f58214

// -[SCMapboxLoadingStateController mapViewDidReportMapReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f58420

// -[SCMapboxLoadingStateController mapView:didReportMapFriendLoadWithVisibleFriends:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f58450

// -[SCMapboxLoadingStateController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f584b4

@end
