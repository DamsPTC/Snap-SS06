// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationServicesDataStore
// Superclass: NSObject
// Address: 0x112bf74e8

@interface SCLocationServicesDataStore

// Property: requestContext; attributes: Tq,N,V_requestContext
// Property: locationProvider; attributes: T@"SCLazy",&,N,V_locationProvider
// Property: datastore; attributes: T@"NSMutableDictionary",&,N,V_datastore
// Property: fetchingLocationData; attributes: TB,N,V_fetchingLocationData
// Property: location; attributes: T@"CLLocation",&,N,V_location
// Property: dataLocation; attributes: T@"CLLocation",&,N,V_dataLocation
// Property: lastIpRequestTime; attributes: T@"NSDate",&,N,V_lastIpRequestTime
// Property: updateUntil; attributes: T@"NSDate",&,N,V_updateUntil
// Property: updateLocationCallers; attributes: T@"NSMutableSet",&,V_updateLocationCallers
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationServicesDataStore clear]
// Type encoding: v16@0:8
// Implementation: 0x109222180

// -[SCLocationServicesDataStore init]
// Type encoding: @16@0:8
// Implementation: 0x100b778a4

// -[SCLocationServicesDataStore _setUserSessionIfValid:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b77e30

// -[SCLocationServicesDataStore updateLocationDataOnceWithContext:caller:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1092221fc

// -[SCLocationServicesDataStore updateLocationDataOnceWithLocationServices:context:caller:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x10922220c

// -[SCLocationServicesDataStore stopUpdatingLocationData]
// Type encoding: v16@0:8
// Implementation: 0x10922228c

// -[SCLocationServicesDataStore stopUpdatingLocation]
// Type encoding: v16@0:8
// Implementation: 0x109222294

// -[SCLocationServicesDataStore _didStartLocationUpdatingWithCaller:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092222d8

// -[SCLocationServicesDataStore _didStopLocationUpdating]
// Type encoding: v16@0:8
// Implementation: 0x1092223c0

// -[SCLocationServicesDataStore _startUpdatingLocationDataWithAuthorization:context:caller:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x109222538

// -[SCLocationServicesDataStore _startUpdatingLocationDataWithLocationServices:context:caller:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x109222aa0

// -[SCLocationServicesDataStore _prepareLocationDataUpdate]
// Type encoding: v16@0:8
// Implementation: 0x109222c30

// -[SCLocationServicesDataStore _fetchIpBasedLocationDataWithContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x109222c64

// -[SCLocationServicesDataStore objectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x109222cd0

// -[SCLocationServicesDataStore _setObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109222cd8

// -[SCLocationServicesDataStore _legacyShouldUseNewLocation:withOldLocation:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x109222e14

// -[SCLocationServicesDataStore _isRecentValidLocation:]
// Type encoding: B24@0:8@16
// Implementation: 0x109222f14

// -[SCLocationServicesDataStore _stopUpdatingLocationDataIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x109222fa4

// -[SCLocationServicesDataStore _activeLocationUpdatesRequest]
// Type encoding: @16@0:8
// Implementation: 0x109222fe4

// -[SCLocationServicesDataStore onLocationUpdate]
// Type encoding: v16@0:8
// Implementation: 0x109223098

// -[SCLocationServicesDataStore onLocationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092230f8

// -[SCLocationServicesDataStore _onLocationAltitudeChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x1092231b8

// -[SCLocationServicesDataStore onLocationError]
// Type encoding: v16@0:8
// Implementation: 0x109223218

// -[SCLocationServicesDataStore invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10922326c

// -[SCLocationServicesDataStore requestContext]
// Type encoding: q16@0:8
// Implementation: 0x109223270

// -[SCLocationServicesDataStore setRequestContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x109223278

// -[SCLocationServicesDataStore locationProvider]
// Type encoding: @16@0:8
// Implementation: 0x109223280

// -[SCLocationServicesDataStore setLocationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x109223288

// -[SCLocationServicesDataStore datastore]
// Type encoding: @16@0:8
// Implementation: 0x1092232b8

// -[SCLocationServicesDataStore setDatastore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092232c0

// -[SCLocationServicesDataStore fetchingLocationData]
// Type encoding: B16@0:8
// Implementation: 0x1092232f0

// -[SCLocationServicesDataStore setFetchingLocationData:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092232f8

// -[SCLocationServicesDataStore location]
// Type encoding: @16@0:8
// Implementation: 0x109223300

// -[SCLocationServicesDataStore setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x109223308

// -[SCLocationServicesDataStore dataLocation]
// Type encoding: @16@0:8
// Implementation: 0x109223338

// -[SCLocationServicesDataStore setDataLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x109223340

// -[SCLocationServicesDataStore lastIpRequestTime]
// Type encoding: @16@0:8
// Implementation: 0x109223370

// -[SCLocationServicesDataStore setLastIpRequestTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x109223378

// -[SCLocationServicesDataStore updateUntil]
// Type encoding: @16@0:8
// Implementation: 0x1092233a8

// -[SCLocationServicesDataStore setUpdateUntil:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092233b0

// -[SCLocationServicesDataStore updateLocationCallers]
// Type encoding: @16@0:8
// Implementation: 0x1092233e0

// -[SCLocationServicesDataStore setUpdateLocationCallers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092233ec

// -[SCLocationServicesDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1092233f4

@end
