// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectContext
// Superclass: NSObject
// Address: 0x112cf55c0

@interface SCDocObjectContext


// -[SCDocObjectContext fetchObservableForClass:observationQueue:]
// Type encoding: {ObservableBuilder=#@@}32@0:8#16@24
// Implementation: 0x108c7ee14

// -[SCDocObjectContext initWithPath:options:monitor:]
// Type encoding: @40@0:8@16{?=Q}24@32
// Implementation: 0x10b9af620

// -[SCDocObjectContext performChanges:completionQueue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10b9af6b0

// -[SCDocObjectContext observe:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b9af6b4

// -[SCDocObjectContext observeFetchedResult:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b9af720

// -[SCDocObjectContext shutdownAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b9af78c

// -[SCDocObjectContext dataConnection]
// Type encoding: ^v16@0:8
// Implementation: 0x10b9af790

// -[SCDocObjectContext objectForClass:byRowid:buffer:bufferSize:]
// Type encoding: @48@0:8#16q24r^v32Q40
// Implementation: 0x10b9af7fc

// -[SCDocObjectContext setUpdatedObject:forClass:byRowid:]
// Type encoding: v40@0:8@16#24q32
// Implementation: 0x10b9af804

// -[SCDocObjectContext unsafeObserveWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b9af808

// -[SCDocObjectContext unsafeObserveFetchedResultWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b9af810

// +[SCDocObjectContext docObjectCurrentContext]
// Type encoding: @16@0:8
// Implementation: 0x1000e42a0

// +[SCDocObjectContext setDocObjectCurrentContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001c70e4

@end
