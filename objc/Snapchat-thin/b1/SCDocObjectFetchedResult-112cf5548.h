// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectFetchedResult
// Superclass: NSObject
// Address: 0x112cf5548

@interface SCDocObjectFetchedResult

// Property: firstObject; attributes: T@,R,N
// Property: lastObject; attributes: T@,R,N
// Property: asArray; attributes: T@"NSArray",R,N

// -[SCDocObjectFetchedResult observableForDocObjectContext:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004e69f4

// -[SCDocObjectFetchedResult initWithArray:objectClass:error:changesTimestamp:fetchedResultId:expressionPtr:orderBy:limit:]
// Type encoding: @80@0:8r^v16#24r^v32Q40Q48r^v56r^v64r^{Limit=i}72
// Implementation: 0x100104b8c

// -[SCDocObjectFetchedResult array]
// Type encoding: r^v16@0:8
// Implementation: 0x1004e8090

// -[SCDocObjectFetchedResult objectClass]
// Type encoding: #16@0:8
// Implementation: 0x1004e6fb4

// -[SCDocObjectFetchedResult changesTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x1004e7c34

// -[SCDocObjectFetchedResult fetchedResultId]
// Type encoding: Q16@0:8
// Implementation: 0x1004e6fdc

// -[SCDocObjectFetchedResult expressionPtr]
// Type encoding: r^v16@0:8
// Implementation: 0x100c548e8

// -[SCDocObjectFetchedResult orderBy]
// Type encoding: r^v16@0:8
// Implementation: 0x100c548f0

// -[SCDocObjectFetchedResult limit]
// Type encoding: r^{Limit=i}16@0:8
// Implementation: 0x10b9af424

// -[SCDocObjectFetchedResult error]
// Type encoding: @16@0:8
// Implementation: 0x10b9af42c

// -[SCDocObjectFetchedResult count]
// Type encoding: Q16@0:8
// Implementation: 0x1001051a8

// -[SCDocObjectFetchedResult objectAtIndexedSubscript:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b9af45c

// -[SCDocObjectFetchedResult firstObject]
// Type encoding: @16@0:8
// Implementation: 0x1001051b8

// -[SCDocObjectFetchedResult lastObject]
// Type encoding: @16@0:8
// Implementation: 0x10b9af488

// -[SCDocObjectFetchedResult asArray]
// Type encoding: @16@0:8
// Implementation: 0x1004e4ed0

// -[SCDocObjectFetchedResult countByEnumeratingWithState:objects:count:]
// Type encoding: Q40@0:8^{?=Q^@^Q[5Q]}16^@24Q32
// Implementation: 0x1005583d8

// -[SCDocObjectFetchedResult hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b9af4c4

// -[SCDocObjectFetchedResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b9af530

// -[SCDocObjectFetchedResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1001051f4

// -[SCDocObjectFetchedResult .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x100104b58

// +[SCDocObjectFetchedResult fetchedResultWithArray:objectClass:error:changesTimestamp:expressionPtr:orderBy:limit:]
// Type encoding: @72@0:8r^v16#24r^v32Q40r^v48r^v56r^{Limit=i}64
// Implementation: 0x100104acc

@end
