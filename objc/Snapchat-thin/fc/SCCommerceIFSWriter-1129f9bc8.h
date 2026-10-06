// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceIFSWriter
// Superclass: NSObject
// Address: 0x1129f9bc8

@interface SCCommerceIFSWriter

// Property: ifsService; attributes: T@"UNIItemFavoritingService",&,N,V_ifsService
// Property: commerceConfigProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_commerceConfigProvider
// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: countryCodeProvider; attributes: T@"<SCUserIPInferredCountryCodeProvider>",&,N,V_countryCodeProvider

// -[SCCommerceIFSWriter initWithGrapheneRegistry:grpcClientFactory:commerceConfigProvider:countryCodeProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104d951cc

// -[SCCommerceIFSWriter storeFavoriteItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d952ec

// -[SCCommerceIFSWriter removeFavoriteItemWithId:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d95544

// -[SCCommerceIFSWriter _vendDeviceContext]
// Type encoding: @16@0:8
// Implementation: 0x104d957a8

// -[SCCommerceIFSWriter _vendGRPCCallBuilder]
// Type encoding: @16@0:8
// Implementation: 0x104d95808

// -[SCCommerceIFSWriter _grpcServiceWithFactory:commerceConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d9590c

// -[SCCommerceIFSWriter _logRequestMetricForService:additionalContext:request:response:startTimestamp:grpcError:]
// Type encoding: v64@0:8Q16@24@32@40d48@56
// Implementation: 0x104d95a58

// -[SCCommerceIFSWriter ifsService]
// Type encoding: @16@0:8
// Implementation: 0x104d95bbc

// -[SCCommerceIFSWriter setIfsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d95bc4

// -[SCCommerceIFSWriter commerceConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d95bf4

// -[SCCommerceIFSWriter setCommerceConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d95bfc

// -[SCCommerceIFSWriter grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x104d95c2c

// -[SCCommerceIFSWriter setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d95c34

// -[SCCommerceIFSWriter countryCodeProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d95c64

// -[SCCommerceIFSWriter setCountryCodeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d95c6c

// -[SCCommerceIFSWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d95c9c

@end
