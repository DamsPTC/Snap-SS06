// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCheckInNearbyOptionFetcher
// Superclass: NSObject
// Address: 0x112a711c8

@interface SCCheckInNearbyOptionFetcher

// Property: cachedActionmojiStatuses; attributes: T@"NSArray",&,V_cachedActionmojiStatuses
// Property: actionmojiFetchDate; attributes: T@"NSDate",&,V_actionmojiFetchDate
// Property: locationObserverToken; attributes: T@"<SCObserving>",&,V_locationObserverToken
// Property: checkInOptions; attributes: T@"NSArray",C,V_checkInOptions
// Property: suggestedOption; attributes: T@"SCCheckInOption",C,V_suggestedOption
// Property: fetchConstraint; attributes: T@"SCCheckInFetchConstraint",C,V_fetchConstraint
// Property: wrappedResultHandlers; attributes: T@"NSDictionary",C,V_wrappedResultHandlers
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCheckInNearbyOptionFetcher initWithLocationProvider:sharingPreferencesProvider:checkinRequestService:placesRequestService:deviceLocationPermissionsManager:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10583223c

// -[SCCheckInNearbyOptionFetcher _startLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10583251c

// -[SCCheckInNearbyOptionFetcher fetchCheckInOptionsWithContext:location:completionQueue:completion:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x105832520

// -[SCCheckInNearbyOptionFetcher fetchCheckInOptionsWithContext:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1058325b8

// -[SCCheckInNearbyOptionFetcher fetchActionmojiOptionsWithContext:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x105832630

// -[SCCheckInNearbyOptionFetcher _fetchOptionsWithContext:performer:resultHandler:resultHandlerQueue:]
// Type encoding: v48@0:8Q16@24@?32@40
// Implementation: 0x105832cfc

// -[SCCheckInNearbyOptionFetcher _fetchOptionsWithContext:location:performer:resultHandler:resultHandlerQueue:]
// Type encoding: v56@0:8Q16@24@32@?40@48
// Implementation: 0x1058330fc

// -[SCCheckInNearbyOptionFetcher _waitForLocationThenRunWrappedResultHandler:performer:context:]
// Type encoding: v40@0:8@?16@24Q32
// Implementation: 0x1058335b8

// -[SCCheckInNearbyOptionFetcher _addPendingWrappedResultHandler:context:]
// Type encoding: v32@0:8@?16Q24
// Implementation: 0x10583369c

// -[SCCheckInNearbyOptionFetcher _runPendingWrappedResultHandlersWithError:options:suggestedOption:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105833808

// -[SCCheckInNearbyOptionFetcher _doFetchForLocation:context:performer:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105833a3c

// -[SCCheckInNearbyOptionFetcher _handleFailedFetchError:location:context:performer:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x105833b34

// -[SCCheckInNearbyOptionFetcher _doPlacesFetchForLocation:context:performer:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105833d2c

// -[SCCheckInNearbyOptionFetcher _handleSuccessfulPlacesFetchResponse:forLocation:context:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105833ff8

// -[SCCheckInNearbyOptionFetcher _sanitizedLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583459c

// -[SCCheckInNearbyOptionFetcher _shouldFetchPlacesNearLocation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058346b4

// -[SCCheckInNearbyOptionFetcher _getFormattedDistanceStringToLocation:fromLocation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10583474c

// -[SCCheckInNearbyOptionFetcher _requestLocation]
// Type encoding: v16@0:8
// Implementation: 0x10583484c

// -[SCCheckInNearbyOptionFetcher _executeResultHandlers:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105834a90

// -[SCCheckInNearbyOptionFetcher locationProviderDidUpdateLocations]
// Type encoding: v16@0:8
// Implementation: 0x105834cac

// -[SCCheckInNearbyOptionFetcher cachedActionmojiStatuses]
// Type encoding: @16@0:8
// Implementation: 0x105834dd8

// -[SCCheckInNearbyOptionFetcher setCachedActionmojiStatuses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834de4

// -[SCCheckInNearbyOptionFetcher actionmojiFetchDate]
// Type encoding: @16@0:8
// Implementation: 0x105834dec

// -[SCCheckInNearbyOptionFetcher setActionmojiFetchDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834df8

// -[SCCheckInNearbyOptionFetcher locationObserverToken]
// Type encoding: @16@0:8
// Implementation: 0x105834e00

// -[SCCheckInNearbyOptionFetcher setLocationObserverToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834e0c

// -[SCCheckInNearbyOptionFetcher checkInOptions]
// Type encoding: @16@0:8
// Implementation: 0x105834e14

// -[SCCheckInNearbyOptionFetcher setCheckInOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834e20

// -[SCCheckInNearbyOptionFetcher suggestedOption]
// Type encoding: @16@0:8
// Implementation: 0x105834e28

// -[SCCheckInNearbyOptionFetcher setSuggestedOption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834e34

// -[SCCheckInNearbyOptionFetcher fetchConstraint]
// Type encoding: @16@0:8
// Implementation: 0x105834e3c

// -[SCCheckInNearbyOptionFetcher setFetchConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834e48

// -[SCCheckInNearbyOptionFetcher wrappedResultHandlers]
// Type encoding: @16@0:8
// Implementation: 0x105834e50

// -[SCCheckInNearbyOptionFetcher setWrappedResultHandlers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105834e5c

// -[SCCheckInNearbyOptionFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105834e64

@end
