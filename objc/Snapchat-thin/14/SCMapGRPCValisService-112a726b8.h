// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapGRPCValisService
// Superclass: NSObject
// Address: 0x112a726b8

@interface SCMapGRPCValisService

// Property: isSecondaryDevice; attributes: TB,V_isSecondaryDevice
// Property: friendLocationClustersObservable; attributes: T@"SCObservable",R,N
// Property: streamActive; attributes: TB,R,N
// Property: errorObservable; attributes: T@"SCObservable",R,N
// Property: streamRejectedObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapGRPCValisService initWithCurrentUserId:circumstanceEngine:appStartExperimentReader:unifiedGRPCClientFactory:networkConnectivityMonitor:deviceLocationPrimacyProvider:isLoginOrRegistrationSession:]
// Type encoding: @68@0:8@16@24@32@40@48@56B64
// Implementation: 0x10058bb0c

// -[SCMapGRPCValisService dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10584cc44

// -[SCMapGRPCValisService valisUnaryService]
// Type encoding: @16@0:8
// Implementation: 0x10584cc98

// -[SCMapGRPCValisService valisBidiStreamingService]
// Type encoding: @16@0:8
// Implementation: 0x10584cd34

// -[SCMapGRPCValisService valisPrefsService]
// Type encoding: @16@0:8
// Implementation: 0x10584cdd0

// -[SCMapGRPCValisService errorObservable]
// Type encoding: @16@0:8
// Implementation: 0x10584ce6c

// -[SCMapGRPCValisService _publishError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10584ce94

// -[SCMapGRPCValisService streamRejectedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10584cea4

// -[SCMapGRPCValisService updateWithClientUpdate:preferenceData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10584cecc

// -[SCMapGRPCValisService setStreamingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10584d15c

// -[SCMapGRPCValisService _logUnaryPublish:]
// Type encoding: v24@0:8@16
// Implementation: 0x10584d1b8

// -[SCMapGRPCValisService sendClientUpdatesUsingUnaryConnection:preferenceData:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10584d6d0

// -[SCMapGRPCValisService getFriendLocationClustersUsingUnaryConnection:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10584dcd8

// -[SCMapGRPCValisService getLocationSharingPreferencesWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10584e0f8

// -[SCMapGRPCValisService setLocationSharingPreferences:basedOnLastKnownPreferencesVersion:source:completionQueue:completion:]
// Type encoding: v56@0:8@16q24q32@40@?48
// Implementation: 0x10584e618

// -[SCMapGRPCValisService muteFriendLocationWithId:version:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10584e6b8

// -[SCMapGRPCValisService unmuteFriendLocationWithId:version:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10584ea18

// -[SCMapGRPCValisService getMutedFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10584ed78

// -[SCMapGRPCValisService setMutedLocationsSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x10584efac

// -[SCMapGRPCValisService _handleResponseWithFriendIDs:version:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10584efdc

// -[SCMapGRPCValisService sendFeedbackForLocationRequestFromRequesterId:acceptedLive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10584f124

// -[SCMapGRPCValisService canRequestLocationForFriendId:isLiveLocationRequest:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10584f344

// -[SCMapGRPCValisService getLocationRequestStatusForRequesterId:receiverId:isLiveLocationRequest:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x10584f56c

// -[SCMapGRPCValisService cancelLocationRequestForFriendId:isLiveLocationRequest:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10584f848

// -[SCMapGRPCValisService friendLocationClustersObservable]
// Type encoding: @16@0:8
// Implementation: 0x10584facc

// -[SCMapGRPCValisService streamActiveObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058d47c

// -[SCMapGRPCValisService streamActive]
// Type encoding: B16@0:8
// Implementation: 0x100c799cc

// -[SCMapGRPCValisService _setupStreamingConnectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10584faf4

// -[SCMapGRPCValisService _setupStreamingConnectionIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10584fafc

// -[SCMapGRPCValisService _setupStreamingConnection]
// Type encoding: v16@0:8
// Implementation: 0x10584fc18

// -[SCMapGRPCValisService _teardownStreamingConnection]
// Type encoding: v16@0:8
// Implementation: 0x10584ff30

// -[SCMapGRPCValisService _handleStreamEventWithIsDone:response:error:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x105850010

// -[SCMapGRPCValisService _retryStreamingConnectionSetupAfterDelay]
// Type encoding: v16@0:8
// Implementation: 0x105850084

// -[SCMapGRPCValisService _retryStreamingConnection]
// Type encoding: v16@0:8
// Implementation: 0x105850124

// -[SCMapGRPCValisService _finishStreamingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105850150

// -[SCMapGRPCValisService _processServerUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058502e0

// -[SCMapGRPCValisService _updateWithClientUpdateUsingStreamingGRPCConnection:preferenceData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105850648

// -[SCMapGRPCValisService _setLocationSharingPreferences:basedOnLastKnownPreferencesVersion:source:completionQueue:completion:]
// Type encoding: v56@0:8@16q24q32@40@?48
// Implementation: 0x1058509e0

// -[SCMapGRPCValisService _networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x10058c360

// -[SCMapGRPCValisService _unaryCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x105850ecc

// -[SCMapGRPCValisService _bidiStreamingCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x105850f38

// -[SCMapGRPCValisService _additionalHeader]
// Type encoding: @16@0:8
// Implementation: 0x105850fa8

// -[SCMapGRPCValisService _onPrimacyChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10058d1b8

// -[SCMapGRPCValisService _logStreamedFriendCluster:]
// Type encoding: v24@0:8@16
// Implementation: 0x105850ff8

// -[SCMapGRPCValisService _logStreamedClusterMember:]
// Type encoding: v24@0:8@16
// Implementation: 0x105851198

// -[SCMapGRPCValisService _annotationLogDescriptions:]
// Type encoding: @24@0:8@16
// Implementation: 0x105851264

// -[SCMapGRPCValisService isSecondaryDevice]
// Type encoding: B16@0:8
// Implementation: 0x1058512b0

// -[SCMapGRPCValisService setIsSecondaryDevice:]
// Type encoding: v20@0:8B16
// Implementation: 0x10058d474

// -[SCMapGRPCValisService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058512bc

@end
