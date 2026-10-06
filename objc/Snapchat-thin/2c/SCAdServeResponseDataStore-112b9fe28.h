// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdServeResponseDataStore
// Superclass: NSObject
// Address: 0x112b9fe28

@interface SCAdServeResponseDataStore

// Property: adIdentifierToResponseMap; attributes: T@"NSMutableDictionary",&,N,V_adIdentifierToResponseMap

// -[SCAdServeResponseDataStore init]
// Type encoding: @16@0:8
// Implementation: 0x10848fafc

// -[SCAdServeResponseDataStore initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10848fb90

// -[SCAdServeResponseDataStore addAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848fc20

// -[SCAdServeResponseDataStore removeAdResponseForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848fd2c

// -[SCAdServeResponseDataStore adResponseForIdentifier:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10848fe38

// -[SCAdServeResponseDataStore updateAdResponseList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10848ff6c

// -[SCAdServeResponseDataStore _addAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084900a0

// -[SCAdServeResponseDataStore _removeAdResponseForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x108490150

// -[SCAdServeResponseDataStore _adResponseForIdentifier:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108490158

// -[SCAdServeResponseDataStore _updateAdResponseList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1084901f0

// -[SCAdServeResponseDataStore adIdentifierToResponseMap]
// Type encoding: @16@0:8
// Implementation: 0x10849061c

// -[SCAdServeResponseDataStore setAdIdentifierToResponseMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108490624

// -[SCAdServeResponseDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108490654

@end
