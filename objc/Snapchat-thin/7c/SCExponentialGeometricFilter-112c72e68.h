// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExponentialGeometricFilter
// Superclass: NSObject
// Address: 0x112c72e68

@interface SCExponentialGeometricFilter

// Property: filteredValue; attributes: Td,N,V_filteredValue
// Property: sampleCount; attributes: TQ,N,V_sampleCount
// Property: filterCoefficient; attributes: Td,N,V_filterCoefficient
// Property: includeInitialValueInFiltering; attributes: TB,N,V_includeInitialValueInFiltering
// Property: isUnderestimate; attributes: TB,N,V_isUnderestimate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExponentialGeometricFilter initWithFilterCoefficient:initialValue:includeInitialValueInFiltering:]
// Type encoding: @36@0:8d16d24B32
// Implementation: 0x1001141b8

// -[SCExponentialGeometricFilter reset]
// Type encoding: v16@0:8
// Implementation: 0x10b28fc64

// -[SCExponentialGeometricFilter performFilteringWithNewSample:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28fc6c

// -[SCExponentialGeometricFilter filteredValue]
// Type encoding: d16@0:8
// Implementation: 0x10b28fd94

// -[SCExponentialGeometricFilter setFilteredValue:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28fd9c

// -[SCExponentialGeometricFilter sampleCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b28fda4

// -[SCExponentialGeometricFilter setSampleCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b28fdac

// -[SCExponentialGeometricFilter filterCoefficient]
// Type encoding: d16@0:8
// Implementation: 0x10b28fdb4

// -[SCExponentialGeometricFilter setFilterCoefficient:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b28fdbc

// -[SCExponentialGeometricFilter includeInitialValueInFiltering]
// Type encoding: B16@0:8
// Implementation: 0x10b28fdc4

// -[SCExponentialGeometricFilter setIncludeInitialValueInFiltering:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b28fdcc

// -[SCExponentialGeometricFilter isUnderestimate]
// Type encoding: B16@0:8
// Implementation: 0x10b28fdd4

// -[SCExponentialGeometricFilter setIsUnderestimate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b28fddc

@end
