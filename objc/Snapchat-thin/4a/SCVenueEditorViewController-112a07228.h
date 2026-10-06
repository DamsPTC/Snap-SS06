// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVenueEditorViewController
// Superclass: UIViewController
// Address: 0x112a07228

@interface SCVenueEditorViewController

// Property: cardTransition; attributes: T@"<SIGCardTransition>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVenueEditorViewController initWithNetworkingClient:navigator:blizzardLogger:callback:detachUI:removeScope:runtime:moderationSource:placeId:currentUserId:mapSessionId:placeSessionId:useStagingPlacesService:placeSuggestEditRevGeoFetcher:photoPickerRouter:venueEditorAsyncRequestCallback:composerStaticMapURLGenerator:nativeMapSDK:configProvider:]
// Type encoding: @164@0:8@16@24@32@40@?48@?56@64@72@80@88@96@104B112@116@124@132@140@148@156
// Implementation: 0x104ef44f8

// -[SCVenueEditorViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104ef4998

// -[SCVenueEditorViewController cardTransition]
// Type encoding: @16@0:8
// Implementation: 0x104ef4e48

// -[SCVenueEditorViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104ef4e78

// -[SCVenueEditorViewController _constructMapView]
// Type encoding: @16@0:8
// Implementation: 0x104ef4ecc

// -[SCVenueEditorViewController _handleFetchAddressForLat:lng:completion:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x104ef5008

// -[SCVenueEditorViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x104ef5120

// -[SCVenueEditorViewController cardTransitionWillBeginWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef5198

// -[SCVenueEditorViewController cardTransitionDidUpdateProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x104ef51ac

// -[SCVenueEditorViewController cardTransitionEndedWithView:transitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104ef51b0

// -[SCVenueEditorViewController cardToExpandTransition]
// Type encoding: @16@0:8
// Implementation: 0x104ef51d0

// -[SCVenueEditorViewController exit:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104ef51d4

// -[SCVenueEditorViewController backgroundExitBehavior]
// Type encoding: @16@0:8
// Implementation: 0x104ef5224

// -[SCVenueEditorViewController openPhotoPicker]
// Type encoding: v16@0:8
// Implementation: 0x104ef5238

// -[SCVenueEditorViewController provideOnPhotoSelectedWithOnPhotoSelected:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104ef5248

// -[SCVenueEditorViewController showErrorDialogWithErrorText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef5280

// -[SCVenueEditorViewController photoPickerFinishedSelectingWithURLs:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef5290

// -[SCVenueEditorViewController shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x104ef53ec

// -[SCVenueEditorViewController pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104ef53f4

// -[SCVenueEditorViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ef5400

@end
