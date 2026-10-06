// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupMapView
// Superclass: UIView
// Address: 0x112abfaf8

@interface SCGroupMapView

// Property: userSession; attributes: T@"SCUserSession",W,N,V_userSession
// Property: carouselView; attributes: T@"SCMapCarouselContainerView",&,N,V_carouselView
// Property: people; attributes: T@"NSArray",C,N,V_people
// Property: carouselItems; attributes: T@"NSArray",C,N,V_carouselItems
// Property: noLocationOverlay; attributes: T@"SCGroupMapNoLocationView",&,N,V_noLocationOverlay
// Property: group; attributes: T@"<SCChatGroup>",&,N,V_group
// Property: delegate; attributes: T@"<SCGroupMapViewDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupMapView initWithUserSession:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapPersonLocationsProvider:imageDownloader:mapBitmojiAvatarGenerator:networkConnectivityMonitor:displayNameProvider:profileSessionID:isSecondaryLocationDevice:embeddedMapFactoryServices:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80B88@92
// Implementation: 0x106032ce8

// -[SCGroupMapView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106033554

// -[SCGroupMapView setGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060336b8

// -[SCGroupMapView _updateCarouselItems]
// Type encoding: v16@0:8
// Implementation: 0x106033720

// -[SCGroupMapView mapCarouselContainer:didScrollToIndex:action:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x106033bf4

// -[SCGroupMapView _updateForSelectedCarouselIndex:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x106033c00

// -[SCGroupMapView noLocationOverlay]
// Type encoding: @16@0:8
// Implementation: 0x106033ccc

// -[SCGroupMapView _tapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x106033d7c

// -[SCGroupMapView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106033ec0

// -[SCGroupMapView _updateMapCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x106033ec8

// -[SCGroupMapView _updateVisibleUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106034588

// -[SCGroupMapView _groupMemberUserIds]
// Type encoding: @16@0:8
// Implementation: 0x106034608

// -[SCGroupMapView group]
// Type encoding: @16@0:8
// Implementation: 0x10603471c

// -[SCGroupMapView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10603472c

// -[SCGroupMapView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10603474c

// -[SCGroupMapView userSession]
// Type encoding: @16@0:8
// Implementation: 0x106034760

// -[SCGroupMapView setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106034780

// -[SCGroupMapView carouselView]
// Type encoding: @16@0:8
// Implementation: 0x106034794

// -[SCGroupMapView setCarouselView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060347a4

// -[SCGroupMapView people]
// Type encoding: @16@0:8
// Implementation: 0x1060347e4

// -[SCGroupMapView setPeople:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060347f4

// -[SCGroupMapView carouselItems]
// Type encoding: @16@0:8
// Implementation: 0x106034800

// -[SCGroupMapView setCarouselItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x106034810

// -[SCGroupMapView setNoLocationOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x10603481c

// -[SCGroupMapView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10603485c

@end
