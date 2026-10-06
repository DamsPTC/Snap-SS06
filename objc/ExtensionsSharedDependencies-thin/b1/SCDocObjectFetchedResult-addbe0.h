// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectFetchedResult
// Superclass: NSObject
// Address: 0xaddbe0

@interface SCDocObjectFetchedResult

// Property: firstObject; attributes: T@,R,N
// Property: lastObject; attributes: T@,R,N
// Property: asArray; attributes: T@"NSArray",R,N

// -[SCDocObjectFetchedResult initWithArray:objectClass:error:changesTimestamp:fetchedResultId:expressionPtr:orderBy:limit:]
// Type encoding: @80@0:8r^v16#24r^v32Q40Q48r^v56r^v64r^{Limit=i}72
// Implementation: 0x60d4e4

// -[SCDocObjectFetchedResult array]
// Type encoding: r^v16@0:8
// Implementation: 0x60d8ac

// -[SCDocObjectFetchedResult objectClass]
// Type encoding: #16@0:8
// Implementation: 0x60d8b4

// -[SCDocObjectFetchedResult changesTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x60d8dc

// -[SCDocObjectFetchedResult fetchedResultId]
// Type encoding: Q16@0:8
// Implementation: 0x60d8e4

// -[SCDocObjectFetchedResult expressionPtr]
// Type encoding: r^v16@0:8
// Implementation: 0x60d8ec

// -[SCDocObjectFetchedResult orderBy]
// Type encoding: r^v16@0:8
// Implementation: 0x60d8f4

// -[SCDocObjectFetchedResult limit]
// Type encoding: r^{Limit=i}16@0:8
// Implementation: 0x60d8fc

// -[SCDocObjectFetchedResult error]
// Type encoding: @16@0:8
// Implementation: 0x60d904

// -[SCDocObjectFetchedResult count]
// Type encoding: Q16@0:8
// Implementation: 0x60d934

// -[SCDocObjectFetchedResult objectAtIndexedSubscript:]
// Type encoding: @24@0:8Q16
// Implementation: 0x60d944

// -[SCDocObjectFetchedResult firstObject]
// Type encoding: @16@0:8
// Implementation: 0x60d970

// -[SCDocObjectFetchedResult lastObject]
// Type encoding: @16@0:8
// Implementation: 0x60d9ac

// -[SCDocObjectFetchedResult asArray]
// Type encoding: @16@0:8
// Implementation: 0x60d9e8

// -[SCDocObjectFetchedResult countByEnumeratingWithState:objects:count:]
// Type encoding: Q40@0:8^{?=Q^@^Q[5Q]}16^@24Q32
// Implementation: 0x60da9c

// -[SCDocObjectFetchedResult hash]
// Type encoding: Q16@0:8
// Implementation: 0x60dacc

// -[SCDocObjectFetchedResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x60db38

// -[SCDocObjectFetchedResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x60dc18

// -[SCDocObjectFetchedResult .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x60dcb4

// +[SCDocObjectFetchedResult fetchedResultWithArray:objectClass:error:changesTimestamp:expressionPtr:orderBy:limit:]
// Type encoding: @72@0:8r^v16#24r^v32Q40r^v48r^v56r^{Limit=i}64
// Implementation: 0x60d458

@end
