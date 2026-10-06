// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapboxInstanceView
// Superclass: SCMapboxView
// Address: 0x112aade48

@interface SCMapboxInstanceView

// Property: mapConfiguration; attributes: T@"<SCMapConfiguration>",&,N,V_mapConfiguration
// Property: mapViewport; attributes: T@"<SCMapViewport>",&,N,V_mapViewport
// Property: mapCustomGLRenderer; attributes: T@"<SCMapCustomGLRenderer>",&,N,V_mapCustomGLRenderer
// Property: mapLoadingState; attributes: T@"<SCMapLoadingState>",&,N,V_mapLoadingState
// Property: mapReadyState; attributes: T@"<SCMapMapReadyState>",&,N,V_mapReadyState
// Property: mapFriendLoadState; attributes: T@"<SCMapFriendLoadState>",&,N,V_mapFriendLoadState
// Property: mapStyleLoadingState; attributes: T@"<SCMapStyleLoadingState>",&,N,V_mapStyleLoadingState
// Property: mapGestures; attributes: T@"<SCMapGestures>",&,N,V_mapGestures
// Property: mapLoadTracker; attributes: T@"<SCMapLoadTracking>",&,N,V_mapLoadTracker
// Property: browsingContextManager; attributes: T@"<SCMapBrowsingContextManaging>",&,N,V_browsingContextManager
// Property: appTriggerManager; attributes: T@"<SCMapAppTriggerManaging>",&,N,V_appTriggerManager
// Property: mapLayerManager; attributes: T@"<SCMapLayerManaging>",&,N,V_mapLayerManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sdkSession; attributes: T@"SCNSnapMapsSdkMapSdkSession",R,N
// Property: cameraManager; attributes: T@"SCNSnapMapsSdkCameraManager",R,N
// Property: traitCollectionObservable; attributes: T@"SCObservable",R,N

// -[SCMapboxInstanceView initWithFrame:maxMapZoomLevel:nativeMapSDK:configProvider:viewportMetadataProvider:mapUserPreferences:tabPosition:]
// Type encoding: @96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48@56@64@72@80q88
// Implementation: 0x105f4b908

// -[SCMapboxInstanceView sdkSession]
// Type encoding: @16@0:8
// Implementation: 0x105f4bd14

// -[SCMapboxInstanceView cameraManager]
// Type encoding: @16@0:8
// Implementation: 0x105f4bd18

// -[SCMapboxInstanceView setTargetFrameRate:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f4bd5c

// -[SCMapboxInstanceView initializeSessionWithObserver:viewportInfoObserver:isEmbedded:backgroundLoadingColor:initialLocation:]
// Type encoding: v52@0:8@16@24B32@36@44
// Implementation: 0x105f4bd70

// -[SCMapboxInstanceView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f4c064

// -[SCMapboxInstanceView mapView:regionWillChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f4c130

// -[SCMapboxInstanceView mapViewRegionIsChanging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4c140

// -[SCMapboxInstanceView mapView:regionDidChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f4c150

// -[SCMapboxInstanceView mapView:shouldChangeFromCamera:toCamera:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105f4c160

// -[SCMapboxInstanceView mapViewWillStartLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4c2ac

// -[SCMapboxInstanceView mapViewDidFinishLoadingMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4c320

// -[SCMapboxInstanceView mapViewDidFailLoadingMap:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f4c394

// -[SCMapboxInstanceView mapViewDidFinishRenderingFrame:fullyRendered:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f4c420

// -[SCMapboxInstanceView mapView:didFinishLoadingStyleWithName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f4c430

// -[SCMapboxInstanceView mapView:didChangeUserTrackingMode:animated:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105f4c4bc

// -[SCMapboxInstanceView _refreshViewportFeaturesAccessibilityElements]
// Type encoding: v16@0:8
// Implementation: 0x105f4c4cc

// -[SCMapboxInstanceView _applyViewportFeatures:forRequestID:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f4c6fc

// -[SCMapboxInstanceView _viewportFeatureAccessibilityElementWithIdentifier:frame:]
// Type encoding: @56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x105f4cab4

// -[SCMapboxInstanceView _accessibilityIdentifiersForFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f4cb54

// -[SCMapboxInstanceView onMapReady]
// Type encoding: v16@0:8
// Implementation: 0x105f4ce88

// -[SCMapboxInstanceView onInitialMapFriendsLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4ce9c

// -[SCMapboxInstanceView mapConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105f4ced8

// -[SCMapboxInstanceView setMapConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4cee8

// -[SCMapboxInstanceView mapViewport]
// Type encoding: @16@0:8
// Implementation: 0x105f4cf28

// -[SCMapboxInstanceView setMapViewport:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4cf38

// -[SCMapboxInstanceView mapCustomGLRenderer]
// Type encoding: @16@0:8
// Implementation: 0x105f4cf78

// -[SCMapboxInstanceView setMapCustomGLRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4cf88

// -[SCMapboxInstanceView mapLoadingState]
// Type encoding: @16@0:8
// Implementation: 0x105f4cfc8

// -[SCMapboxInstanceView setMapLoadingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4cfd8

// -[SCMapboxInstanceView mapReadyState]
// Type encoding: @16@0:8
// Implementation: 0x105f4d018

// -[SCMapboxInstanceView setMapReadyState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d028

// -[SCMapboxInstanceView mapFriendLoadState]
// Type encoding: @16@0:8
// Implementation: 0x105f4d068

// -[SCMapboxInstanceView setMapFriendLoadState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d078

// -[SCMapboxInstanceView mapStyleLoadingState]
// Type encoding: @16@0:8
// Implementation: 0x105f4d0b8

// -[SCMapboxInstanceView setMapStyleLoadingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d0c8

// -[SCMapboxInstanceView mapGestures]
// Type encoding: @16@0:8
// Implementation: 0x105f4d108

// -[SCMapboxInstanceView setMapGestures:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d118

// -[SCMapboxInstanceView mapLoadTracker]
// Type encoding: @16@0:8
// Implementation: 0x105f4d158

// -[SCMapboxInstanceView setMapLoadTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d168

// -[SCMapboxInstanceView browsingContextManager]
// Type encoding: @16@0:8
// Implementation: 0x105f4d1a8

// -[SCMapboxInstanceView setBrowsingContextManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d1b8

// -[SCMapboxInstanceView appTriggerManager]
// Type encoding: @16@0:8
// Implementation: 0x105f4d1f8

// -[SCMapboxInstanceView setAppTriggerManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d208

// -[SCMapboxInstanceView mapLayerManager]
// Type encoding: @16@0:8
// Implementation: 0x105f4d248

// -[SCMapboxInstanceView setMapLayerManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4d258

// -[SCMapboxInstanceView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f4d298

@end
