// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEmbeddedMapManager
// Superclass: NSObject
// Address: 0x112af4e88

@interface SCEmbeddedMapManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCEmbeddedMapManager initWithBitmojiAvatarGenerator:snapTokenProvider:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapStatusFetcher:circumstanceEngine:shouldRenderBitmojiShadows:personLocationProvider:]
// Type encoding: @76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x1067460a4

// -[SCEmbeddedMapManager staticMapViewWithFrame:context:personLocation:personLocationCluster:currentUserId:showLastSeenAndDistance:hideCallout:ghostMode:zoomLevel:bestFriendEmoji:traitCollection:showInferredLocation:completion:]
// Type encoding: v128@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48@56@64@72B80B84B88d92@100@108B116@?120
// Implementation: 0x106746230

// -[SCEmbeddedMapManager _fetchStaticImageWithURL:additionalHeaders:personLocation:personLocationCluster:bestFriendEmoji:context:showLastSeenAndDistance:completion:]
// Type encoding: v76@0:8@16@24@32@40@48Q56B64@?68
// Implementation: 0x1067467c0

// -[SCEmbeddedMapManager _handleLoadCompleteWithData:error:personLocation:personLocationCluster:bestFriendEmoji:context:showLastSeenAndDistance:completion:]
// Type encoding: v76@0:8@16@24@32@40@48Q56B64@?68
// Implementation: 0x106746b18

// -[SCEmbeddedMapManager _adjustedStaticMapCoordinateFromPersonCoordinate:forZoomLevel:context:]
// Type encoding: {CLLocationCoordinate2D=dd}48@0:8{CLLocationCoordinate2D=dd}16d32Q40
// Implementation: 0x106746d84

// -[SCEmbeddedMapManager _addBitmojiAvatarViewToMapView:forPersonLocation:personLocationCluster:bestFriendEmoji:showLastSeenAndDistance:context:completion:]
// Type encoding: v68@0:8@16@24@32@40B48Q52@?60
// Implementation: 0x106746dc0

// -[SCEmbeddedMapManager _fetchPropAndAddAccesoryViewsToMapView:personImageView:labelImageView:personLocationCluster:context:completion:]
// Type encoding: v64@0:8@16@24@32@40Q48@?56
// Implementation: 0x1067472f4

// -[SCEmbeddedMapManager _addAccessoryViewsToMapView:personImageView:labelImageView:propImageView:context:]
// Type encoding: v56@0:8@16@24@32@40Q48
// Implementation: 0x1067476b8

// -[SCEmbeddedMapManager _addPropImageView:toMapView:withPersonImageView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1067477bc

// -[SCEmbeddedMapManager _addBitmojiShadowToMapView:belowPersonImageView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106747894

// -[SCEmbeddedMapManager _personImageViewForNoAvatarForPersonLocation:context:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1067479b0

// -[SCEmbeddedMapManager _updateCalloutViewForPersonLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106747a88

// -[SCEmbeddedMapManager _createBitmojiLabelViewForPersonLocation:bestFriendEmoji:showLastSeenAndDistance:context:]
// Type encoding: @44@0:8@16@24B32Q36
// Implementation: 0x106747c1c

// -[SCEmbeddedMapManager _setBitmojiImageOffsetForContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106747f84

// -[SCEmbeddedMapManager _bitmojiAvatarViewFrameWithAspectRatio:context:hasLabel:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}36@0:8d16Q24B32
// Implementation: 0x106748028

// -[SCEmbeddedMapManager _calloutFrameWithPersonAvatarViewFrame:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10674808c

// -[SCEmbeddedMapManager _addCalloutViewToMapImageView:relativeToPersonImageViewFrame:]
// Type encoding: v56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x106748138

// -[SCEmbeddedMapManager _calloutSubtitleWithTimestamp:locality:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1067481e0

// -[SCEmbeddedMapManager _labelFrameWithImageView:personAvatarViewFrame:context:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24Q56
// Implementation: 0x1067482c0

// -[SCEmbeddedMapManager _addlabelImageView:mapImageView:relativeToPersonImageViewFrame:context:]
// Type encoding: v72@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32Q64
// Implementation: 0x1067483a8

// -[SCEmbeddedMapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106748448

@end
