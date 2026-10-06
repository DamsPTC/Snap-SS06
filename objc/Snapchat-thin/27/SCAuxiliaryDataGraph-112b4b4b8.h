// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuxiliaryDataGraph
// Superclass: NSObject
// Address: 0x112b4b4b8

@interface SCAuxiliaryDataGraph


// -[SCAuxiliaryDataGraph initWithPerformer:graphId:dataTypes:processors:subgraphs:processorQueue:repo:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106f67aa8

// -[SCAuxiliaryDataGraph dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106f67cd0

// -[SCAuxiliaryDataGraph _subgraphForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f67d1c

// -[SCAuxiliaryDataGraph fetchDataWithKey:progressBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106f67e70

// -[SCAuxiliaryDataGraph _fetchDataWithKey:promise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f68118

// -[SCAuxiliaryDataGraph _completePromise:withFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f683f4

// -[SCAuxiliaryDataGraph _futuresAfterStoringToDisk:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f684a0

// -[SCAuxiliaryDataGraph _processorForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f687a0

// -[SCAuxiliaryDataGraph _processDataWithKey:promise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f688f4

// -[SCAuxiliaryDataGraph fetchIncompleteProcessorsForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f68b20

// -[SCAuxiliaryDataGraph _fetchIncompleteProcessorsForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f68c54

// -[SCAuxiliaryDataGraph _monitorProgressOfProcessors:progressBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f690dc

// -[SCAuxiliaryDataGraph hasCachedDataWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f694a0

// -[SCAuxiliaryDataGraph _hasCachedDataWithKey:promise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f695f4

// -[SCAuxiliaryDataGraph prioritizeDataWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6973c

// -[SCAuxiliaryDataGraph _prioritizeProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f69848

// -[SCAuxiliaryDataGraph injectData:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f698dc

// -[SCAuxiliaryDataGraph _injectData:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f69a10

// -[SCAuxiliaryDataGraph .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f69b3c

@end
