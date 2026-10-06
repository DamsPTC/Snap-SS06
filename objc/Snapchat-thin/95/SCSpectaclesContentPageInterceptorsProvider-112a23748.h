// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesContentPageInterceptorsProvider
// Superclass: NSObject
// Address: 0x112a23748

@interface SCSpectaclesContentPageInterceptorsProvider


// -[SCSpectaclesContentPageInterceptorsProvider initWithDevice:flightManager:deviceConnectionStateReporter:spectaclesManager:preferences:autoSaveManager:valdiRuntimeProvider:localDiskSpaceProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x1052242d4

// -[SCSpectaclesContentPageInterceptorsProvider deviceConnectionInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x105224480

// -[SCSpectaclesContentPageInterceptorsProvider wifiOnboardingInterceptorWithDeviceName:]
// Type encoding: @24@0:8@16
// Implementation: 0x105224530

// -[SCSpectaclesContentPageInterceptorsProvider reconnectWiFiInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x105224900

// -[SCSpectaclesContentPageInterceptorsProvider batteryLevelInterceptorWithIsExport:]
// Type encoding: @20@0:8B16
// Implementation: 0x105224b6c

// -[SCSpectaclesContentPageInterceptorsProvider diskSpaceInterceptorWithExtraSizeNeededForContent:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105224f60

// -[SCSpectaclesContentPageInterceptorsProvider ongoingTransferInterceptorWithOngoingTransferResultBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105225268

// -[SCSpectaclesContentPageInterceptorsProvider saveToDestinationInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x105225500

// -[SCSpectaclesContentPageInterceptorsProvider transferCapabilityInterceptorWithTransferCapabilityResultBlock:isExport:]
// Type encoding: @28@0:8@?16B24
// Implementation: 0x105225978

// -[SCSpectaclesContentPageInterceptorsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105225d0c

@end
