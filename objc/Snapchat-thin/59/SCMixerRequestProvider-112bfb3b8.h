// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerRequestProvider
// Superclass: NSObject
// Address: 0x112bfb3b8

@interface SCMixerRequestProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerRequestProvider initWithUserAdIdProvider:cachedDataProvider:bandwidthEstimator:networkConnectivityMonitor:interactionHistoryProvider:locationRequestProvider:userCountryCodeProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10aea5820

// -[SCMixerRequestProvider requestForNamespaces:requestFeatureInfoProviders:params:requestUUID:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10aea599c

// -[SCMixerRequestProvider _countryCode]
// Type encoding: @16@0:8
// Implementation: 0x10aea75b4

// -[SCMixerRequestProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aea7680

// +[SCMixerRequestProvider _rankingContextualInfoWithContextualInfo:predictedContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea600c

// +[SCMixerRequestProvider _rankingCameraTypeFromCameraType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x10aea6130

// +[SCMixerRequestProvider _rankingSnapTypeFromSnapType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x10aea6140

// +[SCMixerRequestProvider _rankingSnapSourceFromSnapSource:]
// Type encoding: i24@0:8Q16
// Implementation: 0x10aea6158

// +[SCMixerRequestProvider _namespaceRequestsForNamespaces:params:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea6168

// +[SCMixerRequestProvider _namespacePaginationDataFromParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea6310

// +[SCMixerRequestProvider _cachedItemsFromCachedMixerData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea6514

// +[SCMixerRequestProvider _adsRequestWithRequestFeatureInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea698c

// +[SCMixerRequestProvider _mixerUserInfoWithRequestFeatureInfo:locationInfo:userAdIdProvider:countryCode:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10aea6bb8

// +[SCMixerRequestProvider _geoLocationWithLocationInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea6ee0

// +[SCMixerRequestProvider _cachedItemsFromCachedDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea6fb4

// +[SCMixerRequestProvider _networkProfileWithConnectivityMonitor:bandwidthEstimator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea6fc8

// +[SCMixerRequestProvider _reachabilityFromConnectivityStatus:]
// Type encoding: i24@0:8q16
// Implementation: 0x10aea70e0

// +[SCMixerRequestProvider _connectionClassFromNetworkBandwidth:]
// Type encoding: i24@0:8q16
// Implementation: 0x10aea7104

// +[SCMixerRequestProvider _coreUUIDFromUUIDString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea7114

// +[SCMixerRequestProvider _predictedContextFromFeatureInfo:contextualInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea7180

// +[SCMixerRequestProvider _visualTagsFromClassifications:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea7384

// +[SCMixerRequestProvider _requestContextFromGroupId:]
// Type encoding: i24@0:8q16
// Implementation: 0x10aea765c

@end
