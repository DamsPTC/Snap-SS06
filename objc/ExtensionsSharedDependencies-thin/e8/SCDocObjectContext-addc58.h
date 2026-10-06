// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectContext
// Superclass: NSObject
// Address: 0xaddc58

@interface SCDocObjectContext


// -[SCDocObjectContext initWithPath:options:monitor:]
// Type encoding: @40@0:8@16{?=Q}24@32
// Implementation: 0x60dea0

// -[SCDocObjectContext performChanges:completionQueue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x60df30

// -[SCDocObjectContext observe:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x60df34

// -[SCDocObjectContext observeFetchedResult:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x60dfa0

// -[SCDocObjectContext shutdownAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x60e00c

// -[SCDocObjectContext dataConnection]
// Type encoding: ^v16@0:8
// Implementation: 0x60e010

// -[SCDocObjectContext objectForClass:byRowid:buffer:bufferSize:]
// Type encoding: @48@0:8#16q24r^v32Q40
// Implementation: 0x60e07c

// -[SCDocObjectContext setUpdatedObject:forClass:byRowid:]
// Type encoding: v40@0:8@16#24q32
// Implementation: 0x60e084

// -[SCDocObjectContext unsafeObserveWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x60e1d0

// -[SCDocObjectContext unsafeObserveFetchedResultWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x60e1d8

// +[SCDocObjectContext docObjectCurrentContext]
// Type encoding: @16@0:8
// Implementation: 0x60e088

// +[SCDocObjectContext setDocObjectCurrentContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x60e120

@end
