// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuxiliaryDataProcessorQueue
// Superclass: NSObject
// Address: 0x112b4b5f8

@interface SCAuxiliaryDataProcessorQueue


// -[SCAuxiliaryDataProcessorQueue initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f6a310

// -[SCAuxiliaryDataProcessorQueue queueJobForProcessor:inputDataFutures:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f6a3a8

// -[SCAuxiliaryDataProcessorQueue _queueJobForProcessor:inputData:outputPromises:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f6a7a4

// -[SCAuxiliaryDataProcessorQueue _processNextJobIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x106f6aae4

// -[SCAuxiliaryDataProcessorQueue _finishCurrentJobWithOutputData:error:suspended:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106f6ae14

// -[SCAuxiliaryDataProcessorQueue prioritizeJobsForProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6b070

// -[SCAuxiliaryDataProcessorQueue _reprioritizeJobsWithProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6b17c

// -[SCAuxiliaryDataProcessorQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f6b2ec

@end
