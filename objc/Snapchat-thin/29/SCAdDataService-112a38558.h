// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDataService
// Superclass: NSObject
// Address: 0x112a38558

@interface SCAdDataService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdDataService initWithAdSource:persistedDataAdapter:deviceInfoProvider:applicationInfo:userAgent:networkManager:snapTokenManager:adsPreferencesProviderImpl:primayServeResponseDataStore:shadowServeResponseDataStore:pixelTrackingCookieManager:requestInfoProvider:primaryNetworkManager:shadowNetworkManager:appInstalledInfoProvider:adOperationalLoggingServices:adConfigProviderV2:adResponseProvider:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x105417a98

// -[SCAdDataService cleanupAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x105417e80

// -[SCAdDataService makeAdRequest:willMakeRequest:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x105417f50

// -[SCAdDataService updateAdResponseList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105417f58

// -[SCAdDataService serializedRequestWithMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x105417f60

// -[SCAdDataService protoAdRequestWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105417f68

// -[SCAdDataService initializeWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105417f70

// -[SCAdDataService trackSnapAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x105417f78

// -[SCAdDataService tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105417f80

// -[SCAdDataService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105417fa8

@end
