// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScreenshopNetworkServiceImpl
// Superclass: NSObject
// Address: 0x112a689d8

@interface SCScreenshopNetworkServiceImpl

// Property: commerceConfigProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_commerceConfigProvider
// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: countryCodeProvider; attributes: T@"<SCUserIPInferredCountryCodeProvider>",&,N,V_countryCodeProvider
// Property: perceptionScreenshopService; attributes: T@"UNISCPSSScreenshopService",&,N,V_perceptionScreenshopService
// Property: categorizationMaxHeight; attributes: Tf,R,N,V_categorizationMaxHeight
// Property: screenshopComposerGrpcService; attributes: T@"<SCComposerNetworkingGrpcServiceProtocol>",R,N,V_screenshopComposerGrpcService
// Property: shoppabilityVersion; attributes: T@"NSNumber",&,N,V_shoppabilityVersion

// -[SCScreenshopNetworkServiceImpl initWithGrapheneRegistry:grpcClientFactory:commerceConfigProvider:countryCodeProvider:grpcComposerFactory:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1057a6290

// -[SCScreenshopNetworkServiceImpl categorizeImages:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1057a63b4

// -[SCScreenshopNetworkServiceImpl _createGRPCServiceWithFactory:grpcComposerFactory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057a652c

// -[SCScreenshopNetworkServiceImpl _getGRPCCallOptionsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1057a67c8

// -[SCScreenshopNetworkServiceImpl _fetchShoppabilityVersion]
// Type encoding: v16@0:8
// Implementation: 0x1057a68a4

// -[SCScreenshopNetworkServiceImpl _processShoppabilityVersionResponse:request:startTimestamp:error:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1057a6a60

// -[SCScreenshopNetworkServiceImpl _categorizeImages:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1057a6b00

// -[SCScreenshopNetworkServiceImpl _executeCategoryCompletion:completionQueue:request:response:startTimestamp:expectedResponseCount:error:]
// Type encoding: v72@0:8@?16@24@32@40d48Q56@64
// Implementation: 0x1057a6e80

// -[SCScreenshopNetworkServiceImpl _metricErrorFromResponse:responseLength:grpcError:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1057a70c4

// -[SCScreenshopNetworkServiceImpl _logVersionMetricWithRequest:response:startTimestamp:grpcError:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1057a710c

// -[SCScreenshopNetworkServiceImpl _logContextMetricWithRequest:response:startTimestamp:grpcError:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1057a7268

// -[SCScreenshopNetworkServiceImpl _logRequestMetricWithRequest:response:startTimestamp:grpcError:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1057a73c4

// -[SCScreenshopNetworkServiceImpl categorizationMaxHeight]
// Type encoding: f16@0:8
// Implementation: 0x1057a7520

// -[SCScreenshopNetworkServiceImpl screenshopComposerGrpcService]
// Type encoding: @16@0:8
// Implementation: 0x1057a7528

// -[SCScreenshopNetworkServiceImpl shoppabilityVersion]
// Type encoding: @16@0:8
// Implementation: 0x1057a7530

// -[SCScreenshopNetworkServiceImpl setShoppabilityVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a7538

// -[SCScreenshopNetworkServiceImpl commerceConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a7568

// -[SCScreenshopNetworkServiceImpl setCommerceConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a7570

// -[SCScreenshopNetworkServiceImpl grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057a75a0

// -[SCScreenshopNetworkServiceImpl setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a75a8

// -[SCScreenshopNetworkServiceImpl countryCodeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a75d8

// -[SCScreenshopNetworkServiceImpl setCountryCodeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a75e0

// -[SCScreenshopNetworkServiceImpl perceptionScreenshopService]
// Type encoding: @16@0:8
// Implementation: 0x1057a7610

// -[SCScreenshopNetworkServiceImpl setPerceptionScreenshopService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a7618

// -[SCScreenshopNetworkServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057a7648

@end
