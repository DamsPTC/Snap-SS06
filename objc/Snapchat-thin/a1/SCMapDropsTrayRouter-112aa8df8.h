// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsTrayRouter
// Superclass: NSObject
// Address: 0x112aa8df8

@interface SCMapDropsTrayRouter

// Property: delegate; attributes: T@"<SCMapDropsTrayRouterDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapDropsTrayRouter initWithMultiTrayManager:mapView:valdiRuntimeProvider:composerPlaceStoryPlayerVendor:trayServiceFactory:notificationPool:mainQueue:directionsSheetScopeServices:directionsSheetScopeExposer:placeShareScopeExposer:venueEditorScopeExposer:circumstanceEngine:actionSheetPresenterFactory:alertPresenterFactory:deckHierarchyFactory:mapPlaceProfileFactoryServices:dropsShareFactoryServices:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x105ed13e8

// -[SCMapDropsTrayRouter presentTrayWithDropScope:userLocation:trayActionHandler:nearbyPlacesDataObservable:nearbyPlaceActionHandlerHandler:iconUpdateObservable:isPinSavedObservable:]
// Type encoding: v80@0:8@16{CLLocationCoordinate2D=dd}24@40@48@56@64@72
// Implementation: 0x105ed179c

// -[SCMapDropsTrayRouter updateTrayWithDropCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105ed1c5c

// -[SCMapDropsTrayRouter removeTray]
// Type encoding: v16@0:8
// Implementation: 0x105ed1ca8

// -[SCMapDropsTrayRouter setTrayPositionForFocusedTextField:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ed1d00

// -[SCMapDropsTrayRouter presentDirectionsSheetForCoordinate:address:travelMode:]
// Type encoding: v48@0:8{CLLocationCoordinate2D=dd}16@32q40
// Implementation: 0x105ed1e24

// -[SCMapDropsTrayRouter sendDropToChat:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed1ed8

// -[SCMapDropsTrayRouter presentActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed2064

// -[SCMapDropsTrayRouter presentNotificationBannerWithType:closeTray:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105ed2070

// -[SCMapDropsTrayRouter sendPlaceToChatWithPlaceId:url:webUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ed22fc

// -[SCMapDropsTrayRouter presentSuggestAPlaceWithCoordinate:mapSessionId:]
// Type encoding: v40@0:8{CLLocationCoordinate2D=dd}16Q32
// Implementation: 0x105ed23f4

// -[SCMapDropsTrayRouter presentPlaceProfileWithPlaceId:placeCoordinate:pinId:]
// Type encoding: v48@0:8@16{CLLocationCoordinate2D=dd}24@40
// Implementation: 0x105ed24bc

// -[SCMapDropsTrayRouter _makeTrayViewModelWithDropScope:userLocation:]
// Type encoding: @40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105ed25b0

// -[SCMapDropsTrayRouter _handleTrayEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed285c

// -[SCMapDropsTrayRouter _blizzardStringFromDropsSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105ed29c0

// -[SCMapDropsTrayRouter _cameraForTrayCreationOrRestoration]
// Type encoding: @16@0:8
// Implementation: 0x105ed29f0

// -[SCMapDropsTrayRouter mapPlaceProfilePresenter]
// Type encoding: @16@0:8
// Implementation: 0x105ed2b08

// -[SCMapDropsTrayRouter onPlaceProfileHidden]
// Type encoding: v16@0:8
// Implementation: 0x105ed2bdc

// -[SCMapDropsTrayRouter onPlaceProfileRemoved]
// Type encoding: v16@0:8
// Implementation: 0x105ed2be0

// -[SCMapDropsTrayRouter didCloseDirectionsSheetWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ed2bf0

// -[SCMapDropsTrayRouter didEndSendToWorkflowForDropIdentifier:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ed2c38

// -[SCMapDropsTrayRouter mapPlaceShareEnded]
// Type encoding: v16@0:8
// Implementation: 0x105ed2c78

// -[SCMapDropsTrayRouter venueEditorScreenDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ed2cc0

// -[SCMapDropsTrayRouter delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ed2d08

// -[SCMapDropsTrayRouter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed2d20

// -[SCMapDropsTrayRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ed2d2c

@end
