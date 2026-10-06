// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLinearFilter
// Superclass: NSObject
// Address: 0x112c72eb8

@interface SCLinearFilter

// Property: filteredValue; attributes: Td,N,V_filteredValue
// Property: sampleCount; attributes: TQ,N,V_sampleCount
// Property: filterCoefficient; attributes: Td,N,V_filterCoefficient
// Property: includeInitialValueInFiltering; attributes: TB,N,V_includeInitialValueInFiltering
// Property: isUnderestimate; attributes: TB,N,V_isUnderestimate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLinearFilter initWithFilterCoefficient:initialValue:includeInitialValueInFiltering:]
// Type encoding: @36@0:8d16d24B32
// Implementation: 0x10b28fde4

// -[SCLinearFilter reset]
// Type encoding: v16@0:8
// Implementation: 0x10b28fe44

// -[SCLinearFilter performFilteringWithNewSample:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28fe4c

// -[SCLinearFilter filteredValue]
// Type encoding: d16@0:8
// Implementation: 0x10b28fef4

// -[SCLinearFilter setFilteredValue:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28fefc

// -[SCLinearFilter sampleCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b28ff04

// -[SCLinearFilter setSampleCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b28ff0c

// -[SCLinearFilter filterCoefficient]
// Type encoding: d16@0:8
// Implementation: 0x10b28ff14

// -[SCLinearFilter setFilterCoefficient:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28ff1c

// -[SCLinearFilter includeInitialValueInFiltering]
// Type encoding: B16@0:8
// Implementation: 0x10b28ff24

// -[SCLinearFilter setIncludeInitialValueInFiltering:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b28ff2c

// -[SCLinearFilter isUnderestimate]
// Type encoding: B16@0:8
// Implementation: 0x10b28ff34

// -[SCLinearFilter setIsUnderestimate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b28ff3c

@end
