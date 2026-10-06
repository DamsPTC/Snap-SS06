// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightScrubberControllerViewController
// Superclass: UIViewController
// Address: 0x112ad7dd8

@interface SCContextSpotlightScrubberControllerViewController

// Property: panGesture; attributes: T@"UIPanGestureRecognizer",&,N,V_panGesture
// Property: expandedPanGesture; attributes: T@"UIPanGestureRecognizer",&,N,V_expandedPanGesture
// Property: propertyModerator; attributes: T@"<SCOperaPropertyUpdateModerator>",&,N,V_propertyModerator
// Property: operaEventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_operaEventAnnouncing
// Property: operaPage; attributes: T@"SCOperaPage",&,N,V_operaPage
// Property: contextParams; attributes: T@"SCContextSpotlightParams",&,N,V_contextParams
// Property: storiesConfigProvider; attributes: T@"SCLazy",&,N,V_storiesConfigProvider
// Property: wasPanGestureRegisteredForExtendedTouch; attributes: TB,N,V_wasPanGestureRegisteredForExtendedTouch
// Property: extendedPanGestureBottomInset; attributes: Tq,N,V_extendedPanGestureBottomInset
// Property: scrubberShouldIgnoreVerticalSwipes; attributes: TB,N,V_scrubberShouldIgnoreVerticalSwipes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextSpotlightScrubberControllerViewController initWithOperaPropertyModerator:operaEventAnnouncing:storiesConfigProvider:contextParams:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10628b1a8

// -[SCContextSpotlightScrubberControllerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10628b4dc

// -[SCContextSpotlightScrubberControllerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10628b648

// -[SCContextSpotlightScrubberControllerViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628b808

// -[SCContextSpotlightScrubberControllerViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628b8c8

// -[SCContextSpotlightScrubberControllerViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10628b990

// -[SCContextSpotlightScrubberControllerViewController _subscribeToOperaEvents]
// Type encoding: v16@0:8
// Implementation: 0x10628bc14

// -[SCContextSpotlightScrubberControllerViewController _handlePanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628bd1c

// -[SCContextSpotlightScrubberControllerViewController _announceEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628c094

// -[SCContextSpotlightScrubberControllerViewController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10628c12c

// -[SCContextSpotlightScrubberControllerViewController _registerPanGestureForExtendedTouchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10628c2d4

// -[SCContextSpotlightScrubberControllerViewController _unregisterPanGestureForExtendedTouchIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10628c520

// -[SCContextSpotlightScrubberControllerViewController _scrubberTouchAreaHeight]
// Type encoding: d16@0:8
// Implementation: 0x10628c698

// -[SCContextSpotlightScrubberControllerViewController _configuredScrubberTouchAreaHeight]
// Type encoding: q16@0:8
// Implementation: 0x10628c6c8

// -[SCContextSpotlightScrubberControllerViewController _isScrubberTouchAreaAboveEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10628c74c

// -[SCContextSpotlightScrubberControllerViewController _getTimeOffsetInMsWithScrubOffset:]
// Type encoding: d24@0:8d16
// Implementation: 0x10628c768

// -[SCContextSpotlightScrubberControllerViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10628c8f8

// -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10628cad8

// -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10628cae0

// -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10628cc70

// -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10628ccac

// -[SCContextSpotlightScrubberControllerViewController panGesture]
// Type encoding: @16@0:8
// Implementation: 0x10628ccb4

// -[SCContextSpotlightScrubberControllerViewController setPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628ccc4

// -[SCContextSpotlightScrubberControllerViewController expandedPanGesture]
// Type encoding: @16@0:8
// Implementation: 0x10628cd04

// -[SCContextSpotlightScrubberControllerViewController setExpandedPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628cd14

// -[SCContextSpotlightScrubberControllerViewController propertyModerator]
// Type encoding: @16@0:8
// Implementation: 0x10628cd54

// -[SCContextSpotlightScrubberControllerViewController setPropertyModerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628cd64

// -[SCContextSpotlightScrubberControllerViewController operaEventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x10628cda4

// -[SCContextSpotlightScrubberControllerViewController setOperaEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628cdb4

// -[SCContextSpotlightScrubberControllerViewController operaPage]
// Type encoding: @16@0:8
// Implementation: 0x10628cdf4

// -[SCContextSpotlightScrubberControllerViewController setOperaPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628ce04

// -[SCContextSpotlightScrubberControllerViewController contextParams]
// Type encoding: @16@0:8
// Implementation: 0x10628ce44

// -[SCContextSpotlightScrubberControllerViewController setContextParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628ce54

// -[SCContextSpotlightScrubberControllerViewController storiesConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x10628ce94

// -[SCContextSpotlightScrubberControllerViewController setStoriesConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10628cea4

// -[SCContextSpotlightScrubberControllerViewController wasPanGestureRegisteredForExtendedTouch]
// Type encoding: B16@0:8
// Implementation: 0x10628cee4

// -[SCContextSpotlightScrubberControllerViewController setWasPanGestureRegisteredForExtendedTouch:]
// Type encoding: v20@0:8B16
// Implementation: 0x10628cef4

// -[SCContextSpotlightScrubberControllerViewController extendedPanGestureBottomInset]
// Type encoding: q16@0:8
// Implementation: 0x10628cf04

// -[SCContextSpotlightScrubberControllerViewController setExtendedPanGestureBottomInset:]
// Type encoding: v24@0:8q16
// Implementation: 0x10628cf14

// -[SCContextSpotlightScrubberControllerViewController scrubberShouldIgnoreVerticalSwipes]
// Type encoding: B16@0:8
// Implementation: 0x10628cf24

// -[SCContextSpotlightScrubberControllerViewController setScrubberShouldIgnoreVerticalSwipes:]
// Type encoding: v20@0:8B16
// Implementation: 0x10628cf34

// -[SCContextSpotlightScrubberControllerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10628cf44

// +[SCContextSpotlightScrubberControllerViewController isEnabledForContextParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x10628b39c

// +[SCContextSpotlightScrubberControllerViewController _videoDurationFromParams:]
// Type encoding: d24@0:8@16
// Implementation: 0x10628c7d0

@end
