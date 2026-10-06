// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMGLMapViewListenerAnnouncer
// Superclass: NSObject
// Address: 0x112aaf090

@interface SCMGLMapViewListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMGLMapViewListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x105f5cd24

// -[SCMGLMapViewListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f5cf00

// -[SCMGLMapViewListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5d334

// -[SCMGLMapViewListenerAnnouncer mapView:regionWillChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5d564

// -[SCMGLMapViewListenerAnnouncer mapViewRegionIsChanging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5d674

// -[SCMGLMapViewListenerAnnouncer mapView:regionDidChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5d77c

// -[SCMGLMapViewListenerAnnouncer mapView:willSettleOnCoordinateFromPanning:]
// Type encoding: v40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105f5d88c

// -[SCMGLMapViewListenerAnnouncer mapViewWillStartLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5d9ac

// -[SCMGLMapViewListenerAnnouncer mapViewDidFinishLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5dab4

// -[SCMGLMapViewListenerAnnouncer mapViewDidFailLoadingMap:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f5dbbc

// -[SCMGLMapViewListenerAnnouncer mapViewDidFinishRenderingFrame:fullyRendered:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5dce4

// -[SCMGLMapViewListenerAnnouncer mapView:didFinishLoadingStyleWithName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f5ddf4

// -[SCMGLMapViewListenerAnnouncer mapViewDidReportMapReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5df1c

// -[SCMGLMapViewListenerAnnouncer mapView:didReportMapFriendLoadWithVisibleFriends:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5e024

// -[SCMGLMapViewListenerAnnouncer mapView:didChangeUserTrackingMode:animated:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105f5e134

// -[SCMGLMapViewListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f5e254

// -[SCMGLMapViewListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x105f5e27c

@end
