// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDataHandlerMetadata
// Superclass: NSObject
// Address: 0x112bd0898

@interface SCDataHandlerMetadata

// Property: lastRefreshDate; attributes: T@"NSDate",&,N,V_lastRefreshDate
// Property: nextPageInfo; attributes: T@"NSDictionary",&,N,V_nextPageInfo
// Property: wasLoadedOnce; attributes: TB,N,V_wasLoadedOnce
// Property: needsUpdate; attributes: TB,N,V_needsUpdate

// -[SCDataHandlerMetadata init]
// Type encoding: @16@0:8
// Implementation: 0x1008196d4

// -[SCDataHandlerMetadata serializeMetadataWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x108f23ee0

// -[SCDataHandlerMetadata updateFromSerializedMetadata:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x100c8112c

// -[SCDataHandlerMetadata lastRefreshDate]
// Type encoding: @16@0:8
// Implementation: 0x10081ba0c

// -[SCDataHandlerMetadata setLastRefreshDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c68b04

// -[SCDataHandlerMetadata nextPageInfo]
// Type encoding: @16@0:8
// Implementation: 0x108f240cc

// -[SCDataHandlerMetadata setNextPageInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c68abc

// -[SCDataHandlerMetadata wasLoadedOnce]
// Type encoding: B16@0:8
// Implementation: 0x100c81694

// -[SCDataHandlerMetadata setWasLoadedOnce:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c68aec

// -[SCDataHandlerMetadata needsUpdate]
// Type encoding: B16@0:8
// Implementation: 0x100c81124

// -[SCDataHandlerMetadata setNeedsUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c68afc

// -[SCDataHandlerMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f240d4

@end
