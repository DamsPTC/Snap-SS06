// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigRepositoryNetworkDefaultImpl
// Superclass: NSObject
// Address: 0x112a332d8

@interface SCConfigRepositoryNetworkDefaultImpl

// Property: configPerformer; attributes: T@"<SCPerforming>",R,N

// -[SCConfigRepositoryNetworkDefaultImpl initWithPerformer:readinessMetricEmitter:configMetric:noDepSpectrum:heuristicRecoveryManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000b5ad0

// -[SCConfigRepositoryNetworkDefaultImpl configPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1000b5c4c

// -[SCConfigRepositoryNetworkDefaultImpl refreshConfig:authentication:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1053e2c48

// -[SCConfigRepositoryNetworkDefaultImpl getConfigAuthentication]
// Type encoding: @16@0:8
// Implementation: 0x1000f9bd4

// -[SCConfigRepositoryNetworkDefaultImpl _makeAuthedRequest:targetingRequest:requestStartTime:requestManager:isFullSync:completion:]
// Type encoding: v60@0:8@16@24d32@40B48@?52
// Implementation: 0x1053e3034

// -[SCConfigRepositoryNetworkDefaultImpl _makeUnAuthedRequest:isFullSync:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1053e334c

// -[SCConfigRepositoryNetworkDefaultImpl _isInternalServerError:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053e36e8

// -[SCConfigRepositoryNetworkDefaultImpl _handleSuccessfulHttpRequest:response:data:isPrelogin:requestStartTime:isFullSync:previousEtag:cofAppState:completion:]
// Type encoding: v76@0:8@16@24@32B40d44B52@56i64@?68
// Implementation: 0x1053e3718

// -[SCConfigRepositoryNetworkDefaultImpl _handleFailedHttpRequestWithClientError:isPrelogin:isFullSync:requestStartTime:etag:appState:]
// Type encoding: v52@0:8@16B24B28d32@40i48
// Implementation: 0x1053e3a58

// -[SCConfigRepositoryNetworkDefaultImpl _emitSyncRequestSuccess:isPrelogin:isFullSync:requestDurationSec:serverErrorCode:]
// Type encoding: v44@0:8B16B20B24d28@36
// Implementation: 0x1053e3b8c

// -[SCConfigRepositoryNetworkDefaultImpl _logSyncEventErrorWithEventStatus:appState:isPreLogin:previousEtag:errorCode:]
// Type encoding: v40@0:8i16i20B24@28i36
// Implementation: 0x1053e3c44

// -[SCConfigRepositoryNetworkDefaultImpl _logSyncEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e3cfc

// -[SCConfigRepositoryNetworkDefaultImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e3dd8

@end
