// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoreProductPageController
// Superclass: NSObject
// Address: 0x112b08438

@interface SCStoreProductPageController

// Property: presented; attributes: TB,N,GisPresented,V_presented
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCStoreProductPageControllerDelegate>",W,N,V_delegate
// Property: loadedTimestamp; attributes: T@"NSNumber",R,N,V_loadedTimestamp
// Property: presentedTimestamp; attributes: T@"NSNumber",R,N,V_presentedTimestamp

// -[SCStoreProductPageController initWithTimeProvider:adConfigProvider:adConfigProviderV2:skAdNetworkMetricsManager:adMetadataCache:appImpressionTracker:adCrashLogger:notificationPool:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106985d94

// -[SCStoreProductPageController isPresented]
// Type encoding: B16@0:8
// Implementation: 0x106985f3c

// -[SCStoreProductPageController loadStoreProductWithParameters:appInstallParams:completion:]
// Type encoding: B40@0:8@16@24@?32
// Implementation: 0x106985f8c

// -[SCStoreProductPageController _shouldLoadPageWithParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069862a8

// -[SCStoreProductPageController _onProductLoaded:result:error:startTimestamp:]
// Type encoding: v44@0:8@16B24@28d36
// Implementation: 0x106986304

// -[SCStoreProductPageController presentStoreProductWithParameters:appInstallParams:uiContainer:backgroundExitBehavior:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1069863fc

// -[SCStoreProductPageController _didPresentProductViewController]
// Type encoding: v16@0:8
// Implementation: 0x106986a08

// -[SCStoreProductPageController productViewControllerDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x106986a50

// -[SCStoreProductPageController dismissStoreProductAnimated:completion:]
// Type encoding: B28@0:8B16@?20
// Implementation: 0x106986a5c

// -[SCStoreProductPageController _showNotificationWithTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106986de4

// -[SCStoreProductPageController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106986e44

// -[SCStoreProductPageController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106986e5c

// -[SCStoreProductPageController loadedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106986e68

// -[SCStoreProductPageController presentedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106986e70

// -[SCStoreProductPageController setPresented:]
// Type encoding: v20@0:8B16
// Implementation: 0x106986e78

// -[SCStoreProductPageController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106986e80

@end
